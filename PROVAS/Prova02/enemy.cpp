#include "enemy.hpp"

// Diretório da aplicação
extern char *appDir;

unsigned int Enemy::enemyCount = 0;

// Construtor do inimigo
Enemy::Enemy() {
    ++enemyCount;
    texture = LoadTexture(TextFormat("%s/assets/images/enemy.png", appDir));

    // Posição inicial do inimigo
    position.x = GetRandomValue(0, GetScreenWidth() - texture.width);
    position.y = GetRandomValue(-texture.height, -texture.height - 200);

    // Velocidade aleatória
    speed = GetRandomValue(20, 140) * 1.0f;

    radius = 50.0f;
    movingDown = true;
}

// Destrutor do inimigo
Enemy::~Enemy() {
    --enemyCount;
    UnloadTexture(texture);
}

// Desenhar inimigo
void Enemy::Draw() const {
    DrawTexture(texture, position.x, position.y, RAYWHITE);
}

// Atualizar posição e movimento do inimigo
void Enemy::Update(float deltaTime) {
    if (movingDown) {
        position.y += speed * deltaTime;
    } else {
        position.y -= speed * deltaTime;
    }

    // Verifica se o inimigo atingiu o limite inferior da tela e faz ele reaparecer no topo
    if (position.y > GetScreenHeight() + texture.height) {
        position.y = -texture.height;  // Reseta a posição para o topo da tela
        position.x = GetRandomValue(0, GetScreenWidth() - texture.width); // Posição horizontal aleatória
        speed = GetRandomValue(5, 250) * 1.0f;  // Nova velocidade aleatória
    }
    // Verifica se o inimigo atingiu o limite superior da tela
    else if (position.y < -texture.height) {
        position.y = GetScreenHeight() + texture.height; // Se estiver acima, desce para baixo
        position.x = GetRandomValue(0, GetScreenWidth() - texture.width); // Posição horizontal aleatória
        speed = GetRandomValue(5, 250) * 1.0f;  // Nova velocidade aleatória
    }
}

// Verificar colisão com o player
bool Enemy::checkCollision(const Player& player) const {
    return CheckCollisionCircles(position, radius, player.getPosition(), player.getRadius());
}

// Obter a quantidade total de inimigos
unsigned int Enemy::getEnemyCount() {
    return enemyCount;
}
