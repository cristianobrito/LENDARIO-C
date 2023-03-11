/*
    funcoes ou modulos

*/
#include "LEGENDARIO.h"      // ARQUIVOS CRIADOS POR NOS USAM ""

#define VALOR 3 // DEFINE UMA CONSTANTE USADA NO EXEMPLO EX00_5

void configuracao(void)
{
    system("TITLE EXC LEGENDARIO");
    system("color 1e");
    puts("\n");
}
// -------------------------------------------------------------------

void EX00_0(void)
{
    printf("=====================   EX00_0  =======================\n");
    printf("OLA MUNDO!\n");
    puts("\n");
}
// -------------------------------------------------------------------

void EX00_1(void)
{
    printf("=====================   EX00_1  =======================\n");
    puts("puts pula uma linha!\n");
}
// -------------------------------------------------------------------

void EX00_2(void)
{
    printf("=====================   EX00_2  =======================\n");
    printf("4 x 5 = %d\n",4*5);
    puts("\n");
}
// -------------------------------------------------------------------

void EX00_3(void)
{
    printf("=====================   EX00_3  =======================\n");
    puts("entendendo a funcao");
    puts("puts");
    puts("\n");
}
// -------------------------------------------------------------------

void EX00_4(void)
{
    printf("=====================   EX00_4  =======================\n");
    printf("\'%%d' exibe o valor de um inteiro %d\n",999);
    printf("\'%%f' exibe o valor de um float   %f\n",99.97);
    /* usamos \ (contra barra) para caracteres especiais e %% para exibir porcentagem */
    puts("\n");
}
// -------------------------------------------------------------------

void EX00_5(void)
{
    printf("=====================   EX00_5  =======================\n");
    printf("USANDO UMA CONSTANTE: \n"); //
    printf("o valor da constante da linha 7 e: %d\n",VALOR);
    printf("somando 1 a constante temos      %d\n",VALOR+1);
    printf("diminuindo 1 da constante temos  %d\n",VALOR-1);
    printf("multiplicando a constante temos  %d\n",VALOR*VALOR);
    printf("dividimos 9 pela constante temos %d\n",9/VALOR);
    puts("\n");

}
