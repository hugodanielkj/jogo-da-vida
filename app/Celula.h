// Classe abstrata - nunca vai ser instanciado um objeto de Celula na main

#ifndef CELULA_H
#define CELULA_H

#include <vector>

class Celula{
  protected:
    // Atributos static
    static int _geracao;
    static int _numeroDeCelulasNoTabuleiro;
    static int _numeroDeCelulasExistentes;
    std::vector<Celula*> _celulas;    //deveria ser static

    int _id;  // Comeca em 1
    bool _estaViva;
    bool _condicaoDaProximaGeracao;    // Salva o resultado de interagir()

  public:
    Celula();
    //virtual void interagir();

    // Funcoes do vetor de celulas
    void criarCelulas();
    void destruirCelulas();
    std::vector<Celula*> getCelulas();

};

#endif