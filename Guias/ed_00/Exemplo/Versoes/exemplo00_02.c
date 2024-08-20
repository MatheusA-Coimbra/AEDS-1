/*
    Exemplo00 - v0.2 __________
    Author:____________________

    Para compilar em terminal (janela de comandos):
    Linux  : gcc -o exemplo00_02 exemplo00_02.c
    Windows: gcc -o exemplo00_02 exemplo00_02.c

    Para executar em terminal (janela de comandos):
    Linux  : ./exemplo00_02
    Windows:   exemplo00_02
*/
// dependencias
#include <stdio.h>  // para entradas e saidas
#include <stdlib.h> // para outras funcoes de uso geral

/*
    Funcao principal
    @return codigo de encerramento
    @param argc - quantidade de parametros na linha de comandos
    @param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main( int argc, char* argv[]) {
    // definir dados/resultados
    int opcao = 0;

    // identificar
    printf("%s\n", "Exemplo00 - Programa = v0.2");
    printf("%s\n", "Autor:____________________");
    printf("\n");   // mudar de linha

    // acoes
    // ler opcao do teclado
    printf("\n%s","Opcao = ");
    scanf("%d", &opcao);
    getchar( ); // para limpar entrada de dados

    // para mostrar a opcao lida
    printf("\n%s%d","Opcao = ", opcao);

    // encerrar
    printf("\n\nAperte ENTER para terminar");
    getchar();  // aguardar por ENTER
    return (0); // voltar ao SO (sem erros)
} // end main()

/*
------------------------------- documentação complementar
------------------------------- notas / observacoes / comentarios
------------------------------- previsao de testes

a.)  5
b.) -5
c.) 123456789

------------------------------- historico
    Versao      Data            Modificacao
    0.0         __/__           esboco

------------------------------- testes
    Versao      Teste
    Versao      Teste
    0.0         00.(OK)         identificacao de programa | leitura e exibicao de inteiro
    0.1         01.(OK)         identificacao de programa
    0.2         01.(OK)         identificacao de programa
*/