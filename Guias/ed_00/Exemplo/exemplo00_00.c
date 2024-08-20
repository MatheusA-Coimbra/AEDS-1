/*
    Exemplo00 - v0.0 __________
    Author:____________________

    Para compilar em terminal (janela de comandos):
    Linux  : gcc -o exemplo00_00 exemplo00_00.c
    Windows: gcc -o exemplo00_00 exemplo00_00.c

    Para executar em terminal (janela de comandos):
    Linux  : ./exemplo00_00
    Windows:   exemplo00_00
*/
// dependencias
#include <stdio.h>  // para entradas e saidas

/*
    Funcao principal
    @return codigo de encerramento
    @param argc - quantidade de parametros na linha de comandos
    @param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main( int argc, char* argv[]) {
    // definir dados/resultados

    // identificar
    printf("%s\n", "Exemplo00 - Programa = v0.0");
    printf("%s\n", "Autor:____________________");
    printf("\n");   // mudar de linha

    // acoes

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
    0.0         00.(OK)         identificacao de programa
                                leitura e exibicao de inteiro

>
*/