#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void lerBin();               /* PROTOTIPO OU ASSINATURA       */
void VerificaBin();

int main()
{
    time_t tic;
    time(&tic);
    // FILE *fopen( const char *filename, const char *mode );
    FILE *p1;
    p1=fopen("LER.txt", "w");
    if(p1==NULL)
    {
        puts("ERRO W\n");
        exit(1);
    }
    fprintf(p1,"pedro\npaulo\ntimoteo\njoao\nmatheus\nthiago\njudas\n");
    fprintf(p1,"%s", ctime(&tic));
    fclose(p1);
    Sleep(500);
    lerBin();                /* CHAMADA DA FUNCAO               */
    VerificaBin();

// --------------------------------------------------------

    FILE *p;
    char buffer[1024];
    p=fopen("LER.txt", "r");
    if(p==NULL)
    {
        puts("ERROR:\n");
        exit(1);
    }
    while(fgets(buffer,1024,p))  /* ENQUANTO DOR TRUE           */
    {
        printf("%s",buffer);
    }
    fclose(p);
    return 0;
}

void lerBin()
{
    time_t t;
    time(&t);
    FILE *handle;                    /* CRIA A VARIAVEL DO TIPO ARQUIVO     */
    int score[5];                    /* GUARDA A VARIAVEL ATE O FIM DO PROG */
    int i;
    handle=fopen("scores.dat","w");  /* HANDLE E UM PONTEIRO                */
    if(!handle)                      /* OPERADOR DE NEGACAO NOT             */
    {
        puts("error\n");
        exit(1);                     /* SAI SE DER ERRO                     */
    }
    for(i=0;i<5;i++)
    {
      printf("digite seu placar:\n");
      scanf("%d",&score);            /* PEGA O ENDERECO DOS PONTOS          */

    }
    //fprintf(handle,"PONTOS: %d",score);
    fwrite(&score,sizeof(int),5,handle);
    fprintf(handle,"\n%s",ctime(&t));
    fclose(handle);                  /* FECHA O ARQUIVO                     */
    puts("score salvo!!\n");
}

// ----------------------------------------------------------------------
void VerificaBin()
{
    FILE *handle;                    /* CRIA A VARIAVEL DO TIPO ARQUIVO */
    int score[5];                    /* TYPE INT                        */
    int x;

    handle=fopen("scores.dat","r");  /* HANDLE E UM PONTEIRO            */
    if(!handle)                      /* OPERADOR DE NEGACAO NOT         */
    {
        puts("error\n");
        exit(1);                     /* SAI SE DER ERRO                 */
    }
    fread(score,sizeof(int),5,handle);
    fclose(handle);
    for(x=0;x<5;x++)
    {
        printf("scores: #%d: %d\n",x+1,score[x]);
    }
    puts("\n\n");
}

// https://www.ime.usp.br/~pf/algoritmos/aulas/pont.html
// https://www.freecodecamp.org/portuguese/news/manipulacao-de-arquivos-em-c-como-abrir-e-fechar-arquivos-e-escrever-algo-neles/
