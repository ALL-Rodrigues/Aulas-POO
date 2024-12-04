#ifndef ITEM_HPP
#define ITEM_HPP

#include <raylib.h>

class Item {
public:
    // Construtor
    Item();

    // Destrutor
    ~Item();

    // Método para desenhar o item
    void Draw() const;

    // Método para atualizar o movimento do item
    void Update(float deltaTime);

    // Método para verificar colisão com o player
    bool CheckCollision(const Vector2& playerPosition, float playerRadius) const;

    // Método para verificar se o item foi coletado
    bool isCollected() const;

    // Método para marcar o item como coletado
    void collect();

private:
    Texture2D texture;  // Textura do item
    Vector2 position;    // Posição do item
    float speed;         // Velocidade do item
    bool collected;      // Se o item foi coletado
};

#endif
