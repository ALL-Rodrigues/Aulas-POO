#include<iostream>
#include<vector>

using namespace std;

// definição de estrutura para Pokémon
struct Pokemon {
    // atributos
    string nome;
    string tipo;
    int nivel;
    int hp;

    // método para aumentar os pontos de vida do Pokémon
    void aumentarHP(int pontos){
        hp += pontos;
    }
};

// definição de estrutura para Treinador
struct Treinador {
    // atributos
    string nome;
    string cidade;

    // vetor para armazenar os Pokémons
    vector<Pokemon> pokemons;
};

int main(){
    cout << "\n";
    cout << "* Exemplo de aninhamento de estruturas\n\n";

    // cria treinador
    Treinador treinador;
    treinador.nome = "Ash Ketchum";
    treinador.cidade = "Pallet Town";

    // cria Pikachu
    Pokemon pikachu;
    pikachu.nome = "Pikachu";
    pikachu.tipo = "Eletrico";
    pikachu.nivel = 40;
    pikachu.hp = 85;

    // cria Greninja
    Pokemon greninja;
    greninja.nome = "Greninja";
    greninja.tipo = "Agua / Sombrio";
    greninja.nivel = 35;
    greninja.hp = 60;

    // cria Hawlucha
    Pokemon hawlucha;
    hawlucha.nome = "Hawlucha";
    hawlucha.tipo = "Lutador / Voador";
    hawlucha.nivel = 32;
    hawlucha.hp = 55;

    // adiciona os Pokémons ao treinador
    treinador.pokemons.push_back(pikachu);
    treinador.pokemons.push_back(greninja);
    treinador.pokemons.push_back(hawlucha);

    // exibindo os dados do treinador e de seus Pokémons
    cout << ">> Dados do treinador\n" << endl;
    cout << "Nome...: " << treinador.nome << endl;
    cout << "Cidade.: " << treinador.cidade << "\n\n";

    cout << ">> Pokemons do treinador\n" << endl;

    // loop para exibir os dados dos Pokémons
    for (int i = 0; i < treinador.pokemons.size(); i++){
        cout << "Nome..: " << treinador.pokemons[i].nome << endl;
        cout << "Tipo..: " << treinador.pokemons[i].tipo << endl;
        cout << "Nivel.: " << treinador.pokemons[i].nivel << endl;
        cout << "HP....: " << treinador.pokemons[i].hp << endl;
        cout << endl;
    }

    // fim do programa
    return 0;
}
