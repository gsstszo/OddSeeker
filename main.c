#include <stdio.h>
#include <usuarios.c>
void menu_principal() {
  int opcao;
  do {
    printf("-- OddSeeker\n");
    printf("1. Login\n");
    printf("2. Criar Conta\n");
    printf("0. Sair\n");
    scanf("%d", &opcao);
    switch (opcao) {
      case 1:
        painel_login_conta();
        break;
      case 2:
        painel_criar_conta();
        break;
      default:
      case 0:
        printf("Saindo...\n");
        break;
        printf("Opcao Invalida! Digite novamente\n");
        break;
    }
  } while (opcao != 0);
}

int main() {
  menu_principal();
  return 0;
}