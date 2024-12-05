#include "Simulacao.h"
#include <iostream>

void Simulacao::abrirMenu(){
  std::cout << "MENU DO JOGO:" << std::endl;
  std::cout << "1 - Executar a partir de um estado inicial aleatorio." << std::endl;
  std::cout << "1 - Executar a partir do estado inicial BLOCO." << std::endl;
  std::cout << "1 - Executar a partir do estado inicial BOTE." << std::endl;
  std::cout << "1 - Executar a partir do estado inicial PISCADOR." << std::endl;
  std::cout << "1 - Executar a partir do estado inicial SAPO." << std::endl;
  std::cout << "1 - Executar a partir do estado inicial PLANADOR." << std::endl;
  std::cout << "1 - Executar a partir do estado inicial ESPACONAVE PESO-LEVE." << std::endl;
  std::cout << "8 - Sair." << std::endl;
}