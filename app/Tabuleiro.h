#ifndef TABULEIRO_H
#define TABULEIRO_H

#include "Celula.h"

class Tabuleiro{
  private:
    static const int SIZE;
    Celula*** _tabuleiro; // Matriz que guarda enderecos de celulas

  public:
    Tabuleiro(int size);


};

#endif