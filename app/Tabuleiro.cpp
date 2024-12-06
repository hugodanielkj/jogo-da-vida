#include "Tabuleiro.h"

Tabuleiro::Tabuleiro(int size){
  _tabuleiro = new Celula**[size];
  for(int i=0;i<size;i++)
    _tabuleiro[i] = new Celula*[size];
}