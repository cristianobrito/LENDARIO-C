/*
    funcoes ou modulos

*/
#include "LEGENDARIO.h"        // ARQUIVOS CRIADOS POR NOS USAM ""
#include <stdio.h>             // ADICIONADO POR CAUSA DO EX00_17
#define VALOR 3                // DEFINE UMA CONSTANTE USADA NO EXEMPLO EX00_5
#define SECRET 7               // DEFINE O VALOR USADO NO EX00_19
typedef enum { F, T } boolean; // TIPO CRIADO PARA USAR NO EX00_7 (TIPO BOOL)

int somar(int a, int b);       /* FUNCAO USADA NO EX00_28 | prototipo da funcao ou assinatura */
int somar(int a, int b)
{
    return a+b;
}

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
    printf("ola %s",nome);

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

/*  IF | ELSE | ELSE IF  */
void EX00_18()
{
    printf("=====================   EX00_18  =======================\n");
    int a,b;
    printf("digite dois numeros: <tedle enter para cada um>\n");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("A maior %d",a);
    }else if(b>a)
    {
        printf("B maior %d",b);
    }else{
        printf("A e B iguais %d",a,b);
    }
    puts("\n");
}

// --------------------------------------------------------------------------
void EX00_19()
{
    printf("=====================   EX00_19  =======================\n");
    int palpite;
    printf("advinhe o numero secreto: \n");
    scanf("%d",&palpite);
    if(palpite == SECRET)
    {
        printf("ACERTOU %d",SECRET);
        puts("\n");
        return(0);
    }
    if(palpite != SECRET)
    {
        printf("ERRORU!! %d",palpite);
        puts("\n");
        return(1);
    }
    puts("\n");
}
/*
    LEMBRAR DOS OPERADORES
    && AND AMBAS AS CONDIÇOES VERDADEIRAS
    || OU  UMA OU OUTRA VERDADEIRA OU NENHUMA E VERDADEIRA
    !  NOT O ITEM E FALSO
    !  USADO PARA ANTES DE UMA CONDICAO PARA TORNALO FALSO E SE FOR FALSO TORNAR EM VERDADEIRO
*/
// --------------------------------------------------------------------------
void EX00_20()
{
    printf("=====================   EX00_20  =======================\n");
    int a,b;
    printf("digite dois numeros <tecle enter para cada um>:\n");
    scanf("%d %d",&a,&b);
    if(a>b && b<10)
    {
        printf("a > que b e b < que 10");
        puts("\n");
    }
    if(b>a || b>10)
    {
        printf("b e >a >10");
        puts("\n");
    }
    if(a != b)               // NAO IGUAL
    {
        printf("nao sao iguais");
        puts("\n");
    }else{
        printf("digitou letra ou zero:");
        puts("\n");
    }

    puts("\n");
}

/* MULTIPLA ESCOLHA SWITCH CASE */
void EX00_21()
{
    printf("=====================   EX00_21  =======================\n");
    int code;
    printf("escolha sua opcao: (1-3)");
    scanf("%d",&code);
    switch(code)
    {
    case 1:
        printf("escolha 1 ");
        break;
    case 2:
        printf("escolha 2 ");
        break;
    case 3:
        printf("escolha 3 ");
        break;
    default:
        puts("nada foi escolhido\n");
    }
    puts("\n");

}
// ------------------------------------------------------------------------------
void EX00_22()
{
    printf("=====================   EX00_22  =======================\n");
    char choice;
    puts("meal plans:");
    puts("A - Breakfast, lunch, and dinner");
    puts("B - Lunch and Dinner only");
    puts("C - Dinner only");
    printf("sua escolha: ");
    scanf("%c",&choice);
    printf("voce escolheu: \n");
    switch(choice)
    {
    case 'A':
        printf("Breakfast ");
    case 'B':
        printf("Lunch ");
    case 'C':
        printf("Dinner ");
    default:
        puts("nada foi escolhido\n");
    }
    puts("\n");

}
// -----------------------------------------------------------------------
void EX00_23()
{
    printf("=====================   EX00_23  =======================\n");
    int a,b,larger;          // LARGER (MAIOR)
    printf("entre com um valor A: ");
    scanf("%d",&a);
    printf("entre com o segundo valor B: ");
    scanf("%d",&b);

    /*
       ? É CONHECIDO COMO OPERADOR TERNARIO
       RESULT = COMPARACAO ? IF_TRUE : IF_FALSE
       COMPARA A e B SE A FOR MAIOR VAI SER TRUE E SERA EXECUTADO A PARTE TRUE
       SE B FOR MAIOR A SERA FALSE E SERA EXECUTADO A PARTE DE B
       QUALQUER UMA DAS DUAS QUE SEJE TRUE SERA ARMAZENADA EM LARGER
       ESTUDAR OPERADOR TERNARIO
    */

    larger= (a>b) ? a : b;
    printf("valor de %d e larger.\n",larger);
    puts("\n");

}
// -----------------------------------------------------------------------
/* LOOPS */

void EX00_24()
{
    printf("=====================   EX00_24  =======================\n");
    int x=0;
    for(x=0;x<10;x++)
    {
        printf("%d",x);
    }
    puts("\n");

}
//-----------------------------------------------------------------------
void EX00_25()
{
    printf("=====================   EX00_25  =======================\n");
    int x,alpha;
    for(alpha='A';alpha<='G';alpha++)
    {
        for(x=1;x<7;x++)
        {
            printf("%c%d\t", alpha,x);
        }
        putchar("\n");
    }

}
//-----------------------------------------------------------------------

void EX00_26()
{
    puts("\n");
    printf("=====================   EX00_26  =======================\n");
    int x=0;
    while(x<10)
    {
        printf("%d",x);
        x=x+1;
    }
    puts("\n");
}

//-----------------------------------------------------------------------

void EX00_27()
{
    puts("\n");
    printf("=====================   EX00_27  =======================\n");
    int x=0;

    do{
        printf("%d\t",x);
        x=x+2;
    }while(x<20);

    puts("\n");
}
/*----------------------------------------------------------*/

void EX00_28()
{
    int a,b,c;
    printf("=====================   EX00_28  =======================\n");
    printf("JA SOU UMA FUNCAO E CHAMO OUTRA\ndigite sua soma: \n");
    getchar();
    scanf("%d %d\n",&a,&b);
    /* a funcao somar e global */
    c=somar(a, b);
    printf("soma: %d", c);
}
/* continua 130 */
