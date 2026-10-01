#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void exibir_menu_inicial() {
  int opcao;
  do {
    printf("---  OddSeeker ---\n");
    printf("1. Entrar \n");
    printf("2. Criar conta\n");
    printf("0. Sair\n");
    printf("Digite aqui: ");
    scanf("%i", &opcao);
  } while (opcao != 3);
}
int main() {
  exibir_menu_inicial();
  return 0;
}