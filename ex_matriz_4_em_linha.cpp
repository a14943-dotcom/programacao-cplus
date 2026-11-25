#include <iostream>
#include <stdio.h>

using namespace std;

// JOGO 4 EM LINHA\

int col = 1;

const int LINHAS = 6;
const int COLUNAS = 9;

void preencheTabuleiro(string arr[LINHAS][COLUNAS]);
void mostraTabuleiro(string arr[LINHAS][COLUNAS]);
int pedePecaJogador();
bool colocaPecaTabuleiro(string peca, int coluna, string arr[LINHAS][COLUNAS]);
bool tabuleiroCheio(string arr[LINHAS][COLUNAS]);
bool ganhouJogo(int &quemGanhou, string arr[LINHAS][COLUNAS]);

int main() {

    string tabuleiro[LINHAS][COLUNAS];
    int quemJoga = 1; // 1 - X - 1º jogar // 2 - O - 2º jogar!
    int quemGanhou = 0;
    int colunaJogar = 0;
    bool jogou = false;

    preencheTabuleiro(tabuleiro);

    do {
        // mostrar o tabuleiro atual
        // pedir a posicao onde quer jogar e especificar quem é o jogador
        // verificar se pode jogar ou nao onde se pretende
       // verificar se depois de aceitar a jogada, se ganhou ou nao

        mostraTabuleiro(tabuleiro);
        colunaJogar = pedePecaJogador();
        jogou = colocaPecaTabuleiro("X", colunaJogar, tabuleiro);

    } while (!ganhouJogo(quemGanhou, tabuleiro) && !tabuleiroCheio(tabuleiro));

    /*tabuleiro[0][1] = "s";
    mostraTabuleiro(tabuleiro);
    mostraTabuleiro(tabuleiro);*/

    return 0;
}

void preencheTabuleiro(string arr[LINHAS][COLUNAS]) {
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            arr[i][j] = " ";
        }
    }
}

void mostraTabuleiro(string arr[LINHAS][COLUNAS]) {

    cout << "\n=====|4 EM LINHA|=====\n";
    for(int i = LINHAS-1; i >= 0; i--) {
        cout << "|";
       for(int j = 0; j < COLUNAS; j++) {
            cout << arr[i][j] << "|";
       }
        cout << "\n";
    }

    cout << "|";
    for(int j = 0; j < COLUNAS; j++) {
        cout << "-" << "|";
    }

    cout << "\n" << "|";
    for(int j = 0; j < COLUNAS; j++) {
        cout << j + 1 << "|";
    }

    /*cout << "\nLinhas 1: Colunas 2: -" << arr[0][1] << "-";
    arr[0][1] = "a";*/
}

int pedePecaJogador() {
    //int col;

    cout << "\nSo preciso que digas um numero de 1 a 9";
    cout << "\nEm que coluna quer jogar: ";
    cin >> col;

     col = col - 1;

    if(col <= 0 && col >9) {
        cout << "És um burro";
        cout << "So pode ser de 1 a 9!";
    }

    return 0;
}

bool colocaPecaTabuleiro(string peca, int coluna, string arr[LINHAS][COLUNAS]) {

    for(int i = LINHAS - 1; i >= 1; i--){
        if (arr[i][col] == " ") {
            arr[i][col] = peca;
            return true;
        }
    }
    return false;
}

bool tabuleiroCheio(string arr[LINHAS][COLUNAS]) {
    return false;
}

bool ganhouJogo(int &quemGanhou, string arr[LINHAS][COLUNAS]) {
    return false;
}
