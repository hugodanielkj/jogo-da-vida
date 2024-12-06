#include "Tabuleiro.h"

Tabuleiro::Tabuleiro(int size){
  _SIZE = size;
  _tabuleiro = new Celula**[_SIZE];
  for(int i=0;i<_SIZE;i++)
    _tabuleiro[i] = new Celula*[_SIZE];
}

Tabuleiro::~Tabuleiro(){
  for(int i=0;i<_SIZE;i++)
    delete[] _tabuleiro[i];
  delete[] _tabuleiro;
}

void Tabuleiro::guardarCelulasNoTabuleiro(const std::vector<Celula*>& celulas){
  for(int i=0;i<_SIZE;i++)
    for(int j=0;j<_SIZE;i++)
      _tabuleiro[i][j] = celulas[i];
}