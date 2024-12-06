#include "Celula.h"

int Celula::_numeroDeCelulasExistentes = 0;
int Celula::_numeroDeCelulasNoTabuleiro = 100;

Celula::Celula(){
  _numeroDeCelulasExistentes++;
  _id = _numeroDeCelulasExistentes;
}

void Celula::criarCelulas(){
  for(int i=_numeroDeCelulasExistentes-1;i<_numeroDeCelulasNoTabuleiro;i++)
    _celulas.push_back(new Celula());    
}

void Celula::destruirCelulas(){
  for(int i=_numeroDeCelulasExistentes-1;i<_numeroDeCelulasNoTabuleiro;i++)
    delete _celulas[i];
}

std::vector<Celula*> Celula::getCelulas(){
  return _celulas;
}