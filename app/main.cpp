#include <iostream>
#include "CelulaImortal.h"
#include "CelulaMutante.h"
#include "CelulaPadrao.h"
#include "Simulacao.h"
#include "Tabuleiro.h"

//g++ main.cpp Celula.cpp CelulaImortal.cpp CelulaMutante.cpp CelulaPadrao.cpp Simulacao.cpp Tabuleiro.cpp

int main(){
  std::vector<Celula*> teste;

  int DIMENSAO_DO_TABULEIRO = 10;
  Tabuleiro tabuleiro(DIMENSAO_DO_TABULEIRO);   // Cria o tabuleiro
  Celula celula;  // Inicializa uma celula para testar funcoes
  celula.criarCelulas();  // Cria as celulas no vetor de celulas
  tabuleiro.guardarCelulasNoTabuleiro(celula.getCelulas()); // Armazena os enderecos das celulas no tabuleiro

  celula.destruirCelulas();
  //tabuleiro.~Tabuleiro();
}