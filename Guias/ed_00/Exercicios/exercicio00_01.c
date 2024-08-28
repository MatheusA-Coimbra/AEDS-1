/**
    Exercicio00 - v0.0 ___________
    Author:Matheus Arantes Coimbra

    Objetivos:
    1. Montar um programa com opções para testar métodos -------------------------------------- (__)
    2. Colocar em métodos todos os 50 primeiros exemplos de programas no Anexo C 02 ----------- (__)
    3. Para cada método acrescentar uma opção correspondente para teste no programa principal - (__)
    4. Testar todos os métodos e anotar suas saídas ao final (como comentários) --------------- (__)
 */
// dependencias
#include <stdio.h>  // para entradas e saidas
#include <stdlib.h> // para outras funcoes de uso geral

int main() {
    // definir dados
    int opcao = 0;
    int metodos = 50;

    // identificar
    printf("%s\n", "Exercicio 01 - Programa = v0.1");
    printf("%s\n", "Autor:Matheus Arantes Coimbra");
    printf("\n");
    // lbm();  // mudanca de linha

    // acoes
    // estrutura de repeticao
    do {
        // mostrar acoes
        printf("\n%s\n", "Opcoes:");
        for(int i = 0; i < metodos+1; i++) {
            if (i == 0) {
                printf("%s\n", "0-Terminar");
            }
            else {
                if (i > 0 && i < 10) {
                printf("%d%s%d\n", i, "-Metodo 0", i);
                }
                else {
                    printf("%d%s%d\n", i, "-Metodo ", i);
                }    
            }
        }

        // ler opcao do teclado
        printf("\n%s", "Opcao = ");
        scanf("%d", &opcao);
        getchar();     // para limpar entada de dados

        // escolher acao dependendo da opcao
        switch(opcao) {
            case 0:     // finalizar programa
                break;
            default:    // comportamento padrao
                printf("\nERRO: Opcao invalida\n");
                break;
        }
    } while(opcao != 0);

    // encerar
    printf("\n\nAperte ENTER para terminar");
    getchar();  // aguardar por ENTER

    return 0;
}   // end main()

/*
------------------------------- documentação complementar
------------------------------- notas / observacoes / comentarios
------------------------------- previsao de testes

------------------------------- historico
    Versao      Data            Modificacao
    0.0         23/08           esboco

------------------------------- testes
    Versao      Teste
    0.0         00.(OK)         identificacao de programa
    0.1         03.(OK)         leitura e exibicao mediante a escola
*/