#include <raylib.h>
#include "player.hpp"
#include "item.hpp"
#include "enemy.hpp"
#include <vector>
#include <memory>
#include <algorithm>

// VARIÁVEIS GLOBAIS
const char *appDir = GetApplicationDirectory();

// Função principal
int main() {
    // Define a janela da aplicação
    InitWindow(800, 600, "Programa 07");

    // Inicializa o dispositivo de áudio
    InitAudioDevice();

    // Delta Time
    float deltaTime;

    // Framerate
    SetTargetFPS(60);

    // Instanciamento do player
    Player player;

    // Vetor para armazenar os itens como ponteiros exclusivos
    std::vector<std::unique_ptr<Item>> items;

    // Criar até 3 itens no início
    for (int i = 0; i < 3; i++) {
        items.emplace_back(std::make_unique<Item>());
    }

    // Vetor para armazenar os inimigos
    std::vector<std::unique_ptr<Enemy>> enemies;

    // Criar inimigos
    for (int i = 0; i < 5; i++) {  // Adicionando 5 inimigos para começar
        enemies.emplace_back(std::make_unique<Enemy>());
    }

    // Carrega a música de fundo
    Music music = LoadMusicStream(TextFormat("%s/assets/music/music.mp3", appDir));

    // Toca a música em loop
    PlayMusicStream(music);

    int score = 0;  // Inicializa a pontuação do jogo
    int enemyCollisions = 0;  // Contador de colisões com inimigos

    // Game loop
    while (!WindowShouldClose()) {
        // Atualiza o stream da música
        UpdateMusicStream(music);

        // Retorna o tempo em segundos que o último frame levou para ser processado
        deltaTime = GetFrameTime();

        // Atualiza o player
        player.Update(deltaTime);

        // Atualização da posição de todos os itens
        for (auto& item : items) {
            item->Update(deltaTime);

            // Verifica se o player colidiu com o item
            if (item->CheckCollision(player.getPosition(), player.getRadius())) {
                item->collect();  // Marca o item como coletado
                score++;  // Aumenta o score
                // Gera um novo item caso o número de itens seja menor que 3
                if (items.size() < 3) {
                    items.emplace_back(std::make_unique<Item>());
                }
            }
        }

        // Remove os itens coletados
        items.erase(std::remove_if(items.begin(), items.end(),
                                   [](const std::unique_ptr<Item>& item) {
                                       return item->isCollected(); // Remove os itens coletados
                                   }),
                    items.end());

        // Atualiza a posição de todos os inimigos e verifica colisão
        for (auto it = enemies.begin(); it != enemies.end();) {
            (*it)->Update(deltaTime);

            // Verifica colisão com o player
            if ((*it)->checkCollision(player)) {
                player.takeDamage(10);  // Dano do inimigo
                enemyCollisions++;  // Aumenta o contador de colisões com inimigos

                // Remove o inimigo da lista
                it = enemies.erase(it);  // Remove o inimigo e retorna o novo iterador

                // Cria um novo inimigo para manter o número de inimigos
                enemies.push_back(std::make_unique<Enemy>());
            } else {
                ++it;  // Move para o próximo inimigo
            }
        }

        // Início da renderização dos objetos do jogo
        BeginDrawing();

        // Define a cor de fundo
        ClearBackground(BLACK);

        // Renderiza o player
        player.Draw();

        // Renderiza todos os itens
        for (const auto& item : items) {
            item->Draw();
        }

        // Renderiza todos os inimigos restantes
        for (const auto& enemy : enemies) {
            enemy->Draw();
        }

        // Renderiza o texto com o total de itens coletados (score) no lado direito da tela
        DrawText(TextFormat("Score: %d", score), GetScreenWidth() - 150.0f, 10.0f, 20, WHITE);

        // Renderiza o texto com a saúde do player
        DrawText(TextFormat("Grogu: %d %%", 100 * player.getHealth() / 100), GetScreenWidth() - 150.0f, 50.0f, 22, WHITE);

        // Renderiza o texto com o número de inimigos tocados
        DrawText(TextFormat("Enemies Touched: %d", enemyCollisions), GetScreenWidth() - 150.0f, 90.0f, 20, WHITE);

        // Fim da renderização dos objetos do jogo
        EndDrawing();
    }

    // Libera a memória utilizada pela música de fundo
    UnloadMusicStream(music);

    // Fecha o dispositivo de áudio
    CloseAudioDevice();

    // Fecha a janela e limpa recursos do Raylib
    CloseWindow();

    return 0;
}
