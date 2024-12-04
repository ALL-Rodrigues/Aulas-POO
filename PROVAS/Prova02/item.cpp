#include "item.hpp"
#include <raylib.h>

// Diretório da aplicação
extern char *appDir;

// Construtor do item
Item::Item() {
    // Carrega a textura do item (a imagem skull.png)
    texture = LoadTexture(TextFormat("%s/assets/images/skull.png", appDir));

    // Posição inicial aleatória
    position.x = GetRandomValue(0, GetScreenWidth() - texture.width);
    position.y = GetRandomValue(-texture.height, -texture.height - 200); // Inicia fora da tela (acima)

    // Velocidade do item
    speed = GetRandomValue(50, 100) * 1.0f;
    collected = false;
}

// Destrutor do item
Item::~Item() {
    // Libera a memória utilizada pela textura do item
    UnloadTexture(texture);
}

// Método para desenhar o item na tela
void Item::Draw() const {
    if (!collected) {  // Desenha o item apenas se ele não tiver sido coletado
        DrawTexture(texture, position.x, position.y, RAYWHITE);
    }
}

// Método para atualizar o movimento do item
void Item::Update(float deltaTime) {
    if (collected) return; // Não atualiza o movimento do item se ele foi coletado

    // Move o item para baixo
    position.y += speed * deltaTime;

    // Quando o item sair da tela pela parte inferior, reposiciona-o no topo
    if (position.y > GetScreenHeight()) {
        position.y = -texture.height;  // Começa novamente no topo
        position.x = GetRandomValue(0, GetScreenWidth() - texture.width); // Posiciona aleatoriamente
    }
}

// Verifica colisão do item com o player
bool Item::CheckCollision(const Vector2& playerPosition, float playerRadius) const {
    return CheckCollisionCircles(position, texture.width / 2.0f, playerPosition, playerRadius);
}

// Retorna se o item foi coletado
bool Item::isCollected() const {
    return collected;
}

// Marca o item como coletado
void Item::collect() {
    collected = true;
}
