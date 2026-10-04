#define CAPACIDADE_MAXIMA_USUARIOS 10

typedef struct Usuarios{
    char nome[30];
    int idade;
    int id;
    char senha_usuario;
};
 
 Usuarios usuario [CAPACIDADE_MAXIMA_USUARIOS];

 void painel_criar_conta();
 int painel_login_conta();
