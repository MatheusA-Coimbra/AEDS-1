/**
    Exercicio00 - v0.0 ___________
    Author:Matheus Arantes Coimbra

    Objetivos:
    1. Montar um programa com opções para testar métodos -------------------------------------- (OK)
    2. Colocar em métodos todos os 50 primeiros exemplos de programas no Anexo C 02 ----------- (__)
    3. Para cada método acrescentar uma opção correspondente para teste no programa principal - (__)
    4. Testar todos os métodos e anotar suas saídas ao final (como comentários) --------------- (__)
 */
// dependencias
#include <stdio.h>  // para entradas e saidas
#include <stdlib.h> // para outras funcoes de uso geral

/*
    Metodos de funcoes:
    lbm() = line break method (metodo de quebra de linha) : substitui o printf("\n");
    opcoes() : mostra as opcoes a serem escolidas
*/
void lbm(void) {
    // mudanca de linha
    printf("\n");
    return;
}
void mostra_opcao(int metodos) {
    // para mostra opcoes
    printf("\n%s\n", "Opcoes:");
    // estrutura de repeticao com condicionamento
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
}

/*
    Metodos dos primeiros 50 exemplos (101 a )
    Anotacao das saidas na documentacao complementar
*/
// metodo 01
void method_01() {
    printf("EXEMPLO101 - PRIMEIRO EXEMPLO EM C");
    printf("\nPRESSIONAR <ENTER> PARA TERMINAR");
    getchar();  // para esperar
}   // end method_01()

// metodo 02 (retire "//" de acordo com sistema operacional utilizado)
void method_02() {
    // system("cls");      // (WINDOWS) para limpar tela
    // system("clear")  // (LINUX) para limpar tela

    printf("EXEMPLO102 - PRIMEIRO EXEMPLO EM C\n");
    // system("pause"); // (WINDOWS) para esperar
    // getchar();   // para esperar

}   // end method_02()

// metodo 03 (retire e adicione "//" de acordo com sistema operacional utilizado)
 void clrscr(void)   { system("cls"); }      // para Windows
// void clrscr(void)   { system("clear"); }    // para Linux

void method_03(void) {
    clrscr();    // funcao para limpar tela
    printf("EXEMPLO103 - PRIMEIRO EXEMPLO EM C");
    printf("\n");   // para mudar de linha
    printf("MATRICULA: ______ ALUNO : __________________");
    printf("\nPRESSIONAR <ENTER> PARA TERMINAR");
    getchar();  // para esperar
}   // end method_03()

// metodo 04
void method_04(void) {
    printf("EXEMPLO104 - PRIMEIRO EXEMPLO EM C");
    printf("\n");   // para mudar de linha (="\n")
    printf("MATRICULA: ______ ALUNO : __________________");
    printf("\n");   // para mudar de linha
    printf("\nPRESSIONAR <ENTER> PARA TERMINAR");
    getchar();  // para esperar
}   // end method_04()

// metodo 05
void method_05(void) {
    printf("EXEMPLO105 - PRIMEIRO EXEMPLO EM C");
    printf("\nMATRICULA: ______ ALUNO : __________________");
    printf("\nEXEMPLOS DE VALORES:");
    printf("\nCARACTERE: %c", 'A'); // letra ou simbolo
    printf("\nINTEIRO: %d", 10);    // valor sem parte fracionaria
    printf("\nREAL: %f", 3.1415);   // valor com parte fracionaria
    printf("\nPRESSIONAR <ENTER> PARA TERMINAR");
    getchar();  // para esperar
}   // end method_04()

int main() {
    // definir dados
    int opcao = 0;
    int metodos = 50;

    // identificar
    printf("%s\n", "Exercicio 01 - Programa = v0.1");
    printf("%s\n", "Autor:Matheus Arantes Coimbra");
    lbm();  // mudanca de linha

    // acoes
    // estrutura de repeticao
    do {
        // mostrar acoes
        mostra_opcao(metodos);

        // ler opcao do teclado
        printf("\n%s", "Opcao = ");
        scanf("%d", &opcao);
        getchar();     // para limpar entada de dados

        // escolher acao dependendo da opcao
        switch(opcao) {
            case 0:     // finalizar programa
                break;
            case 1:     // metodo 01 - EXEMPLO101
                method_01();
                break;
            case 2:     // metodo 02 - EXEMPLO102
                method_02();
                break;
            case 3:     // metodo 03 - EXEMPLO103
                method_03();
                break;
            case 4:     // metodo 04 - EXEMPLO104
                method_04();
                break;
            case 5:     // metodo 05 - EXEMPLO105
                method_05();
                break;
            default:    // comportamento padrao
                printf("\nERRO: Opcao invalida | Pressione ENTER para continuar\n");
                getchar();
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

- Muitas opcoes dificultam a legibilidade
-
------------------------------- previsao de testes

------------------------------- historico
    Versao      Data            Modificacao
    0.0         23/08           esboco

------------------------------- testes
    Versao      Teste
    0.0         00.(OK)         identificacao de programa
    0.1         03.(OK)         leitura e exibicao mediante a escola
    0.2         05.(OK)         estruturacao da main + metodo 01
    0.3         07.(OK)         metodos = [02, 03, 04, 05]
*/