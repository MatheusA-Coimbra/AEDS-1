/*
    Exemplo00 - v0.4 __________
    Author:____________________

    Para compilar em terminal (janela de comandos):
    Linux  : gcc -o exemplo00_04 exemplo00_04.c
    Windows: gcc -o exemplo00_04 exemplo00_04.c

    Para executar em terminal (janela de comandos):
    Linux  : ./exemplo00_04
    Windows:   exemplo00_04
*/
// dependencias
#include <stdio.h>  // para entradas e saidas
#include <stdlib.h> // para outras funcoes de uso geral

/**
 * Metodo 01
 */
void method_01(void) {
    // identificar
    printf("%s\n","Metodo 01");

    // encerrar
    printf("\nApertar ENTER para continuar.\n");
    getchar( );
}   // end method_01 ()

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
    printf("%s\n", "Exemplo00 - Programa = v0.4");
    printf("%s\n", "Autor:____________________");
    printf("\n");   // mudar de linha

    // acoes

    // para mostrar acoes
    printf("\n%s\n","Opcoes:");
    printf("\n%s","0-Terminar");
    printf("\n%s","1-Metodo 01");
    printf("\n");

    // ler opcao do teclado
    printf("\n%s","Opcao = ");
    scanf("%d", &opcao);
    getchar( ); // para limpar entrada de dados

    // para mostrar a opcao lida
    printf("\n%s%d","Opcao = ", opcao);

    // escolher acao dependente da opcao
    switch(opcao) {
        case 0: // nao ao faser nada
            break;
        case 1: // executar metodo 01
            method_01();
            break;
        default:    // comportamento padrao
            printf("\nERRO: Opcao invalida.\n");
            break;
    }   // end switch

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
    0.3         01.(OK)         identificacao de programa | leitura e exibicao mediante a escolha
    0.4         01.(OK)         identificacao de programa | leitura e exibicao mediante a escolha
*/