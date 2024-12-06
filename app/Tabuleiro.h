#ifndef TABULEIRO_H
#define TABULEIRO_H

#include "Celula.h"

class Tabuleiro{
  private:
    int _SIZE;
    Celula*** _tabuleiro; // Matriz que guarda enderecos de celulas

  public:
    Tabuleiro(int size);
    ~Tabuleiro();
    void guardarCelulasNoTabuleiro(const std::vector<Celula*>& celulas);  // Necessario usar const pois ao chamar a funcao getCelulas da classe Celula como parametro dessa funcao, ocorre erro, pois o return de getCelulas e temporario, uma copia de _celulas (atributo de Celula)


};

#endif