#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

void MenuPrincipal() {
  int op;
  do {
    printf("Bem vindo(a) a OddSeeker\n");
    printf("1. Login\n");
    printf("2. Criar Conta\n");
    printf("3. Sair\n");
    printf("Digite Aqui: \n");
    scanf("%d", &op);
  } while (op != 3);
}
int main() {
  MenuPrincipal();
  return 0;
}