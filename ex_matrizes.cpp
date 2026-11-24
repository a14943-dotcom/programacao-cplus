#include <iostream>
#include <stdio.h>

using namespace std;

// JOGO 4 EM LINHA\

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

    //preencheTabuleiro(tabuleiro);

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
        for(int j = 0; i < COLUNAS; i++) {
            arr[i][j] = " ";
        }
    }
}

void mostraTabuleiro(string arr[LINHAS][COLUNAS]) {

    for(int i = 1; i <= LINHAS; i++) {
       for(int j = 1; j <= COLUNAS; j++) {
        int num = 7;
        num = num - j;

        cout << j;
        cout << "|" << arr[i][num] << "|";
       }
    }


    /*cout << "\nLinhas 1: Colunas 2: -" << arr[0][1] << "-";
    arr[0][1] = "a";*/
}

int pedePecaJogador() {
    int col;

    cout << "\nEm que coluna quer jogar: ";
    cin >> col;

    return 0;
}

bool colocaPecaTabuleiro(string peca, int coluna, string arr[LINHAS][COLUNAS]) {
}

bool tabuleiroCheio(string arr[LINHAS][COLUNAS]) {
    return false;
}

bool ganhouJogo(int &quemGanhou, string arr[LINHAS][COLUNAS]) {
    return true;
}
