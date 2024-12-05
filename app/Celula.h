// Classe abstrata - nunca vai ser instanciado um objeto de Celula na main

#ifndef CELULA_H
#define CELULA_H

class Celula{
  protected:
    static int _geracao;
    int _id;
    bool _estaViva;
    bool _condicaoDaProximaGeracao;    // salva o resultado de interagir()

  public:
    virtual void interagir() = 0;

};

#endif