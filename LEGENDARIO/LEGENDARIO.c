/*
    funcoes ou modulos

*/
#include "LEGENDARIO.h"      // ARQUIVOS CRIADOS POR NOS USAM ""
#include <stdio.h>           // ADICIONADO POR CAUSA DO EX00_17
#define VALOR 3 // DEFINE UMA CONSTANTE USADA NO EXEMPLO EX00_5

typedef enum { F, T } boolean; // TIPO CRIADO PARA USAR NO EX00_7 (TIPO BOOL)

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
// -------------------------------------------------------------------

void EX00_6()
{
    printf("=====================   EX00_6  =======================\n");
    char   c;
    int    i;
    float  f;
    double d;

    c='C';
    i=1;
    f=29.23;
    d=28000.007;

    printf("%c\n",c);
    printf("%d\n",i);
    printf("%f\n",f);
    printf("%f\n",d);
    puts("\n");
}
// -------------------------------------------------------------------

void EX00_7()
{
    printf("=====================   EX00_7  =======================\n");
    boolean bool1, bool2;
    bool1=F;
    if(bool1 == F)
    {
        printf("bool1 e false\n");
    }else{
        printf("bool1 is true\n");
    }
    bool2=2;
    if(bool2 == F)
    {
        printf("bool2 is false\n");
    }else{
        printf("bool2 is true\n");
    }
    puts("\n");
}
// -------------------------------------------------------------------

void EX00_8()
{
    printf("=====================   EX00_8  =======================\n");

    unsigned int ono;
    ono=-1;
    printf("o valor de ono e: %u\n", ono);
    ono=1;
    printf("retirando o sinal de ono e: %u \ncorreto!!\nestudar mais os modificadores de tipos em c", ono);

    puts("\n");
}
// -------------------------------------------------------------------

void EX00_9()
{
    printf("=====================   EX00_9  =======================\n");

    int prime;
    prime=10;
    printf("o valor de prime: %d\n",prime);
    prime=20;
    printf("o valor de prime: %d\n",prime);
    prime=30;
    printf("o valor de prime: %d\n",prime);

    puts("\n");
}
// -------------------------------------------------------------------

void EX00_10()
{
    printf("=====================   EX00_10  =======================\n");
    int a,b,c;
    a=5;
    b=7;
    c=a+b;
    printf("a=5 b=7 c=a+b\n");
    printf("variaveis misturadas\nvalor de C=%d",c);
    puts("\n");
}

// -------------------------------------------------------------------

void EX00_11()
{
    printf("=====================   EX00_11  =======================\n");
    int c;

    printf("espero um caractere:\n");
    c=getchar();
    printf("o caractere digitado foi '%c'.\n",c);
    puts("\n");
}
// -------------------------------------------------------------------

void EX00_12()
{
    printf("=====================   EX00_12  =======================\n");
    int ch;

    printf("PRESS <ENTER>\n");
    getchar();
    ch='H';
    putchar(ch);
    ch='i';
    putchar(ch);
    putchar('!');

    puts("\n");
}
// -------------------------------------------------------------------

void EX00_13()
{
    /* getchar e putchar trabalham com int mas aceitam caractere */
    printf("=====================   EX00_13  =======================\n");
    char a,b,c,d;

    a='W';
    b=a+24;
    c=b+8;
    d='\n';
    printf("%c%c%c%c",a,b,c,d);
    puts("\n");
}
// -------------------------------------------------------------------

void EX00_14()
{
    printf("=====================   EX00_14  =======================\n");
    char prompt[]="tecle enter para explodir:\n";
    printf("%s",prompt);
    getchar();
    puts("\n");
}
// -------------------------------------------------------------------

void EX00_15()
{
    printf("=====================   EX00_15  =======================\n");
    char nome[15];
    printf("digite seu nome: \n");
    scanf("%s",nome);
    printf("ola -> %s",nome);

    puts("\n");
}
// -------------------------------------------------------------------

void EX00_16()
{
    printf("=====================   EX00_16  =======================\n");
    int fav;
    printf("digite seu numero favorito: \n");
    scanf("%d",&fav);
    printf("seu numero favorito e = %d",fav);

    puts("\n");
}
// -------------------------------------------------------------------

void EX00_17()
{
    printf("=====================   EX00_17  =======================\n");
    char nome[10];
    printf("who are you: \n");
    fgets(nome,10,stdin);
    printf("ola forasteiro, %s, seja bem-vindo",nome);

    puts("\n");
}
// continua no capitulo 7
// pg 83 84
