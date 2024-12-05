#ifndef TABULEIRO_H
#define TABULEIRO_H

#include "Celula.h"

class Tabuleiro : public Celula{
  private:
    static const int SIZE;
    Celula** tabuleiro; // Ponteiro para desalocar tabuleiro antigo caso precise aumentar de tamanho

  public:
    Tabuleiro(int size);


};

#endif