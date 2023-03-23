#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <locale.h>

void ler();                         /* ASSINATURA OU PROTOTIPO       */

int main()
{
  setlocale(LC_ALL, "Portuguese");  /* USANDO A ACENTUAÇÃO           */
  time_t t;
  time(&t);
  FILE *handle;
  handle=fopen("A1.txt","w");
  if(handle==NULL)
  {
      puts("error!");
      exit(1);
  }
  fprintf(handle,"\tBEM VINDOS AO LISTÃO caça \n");
  fprintf(handle,"\t\twordlist:\n");
  fprintf(handle,"nano\ncristiano\njoyce\nakilles\ncarlos\nedson\n");
  fprintf(handle,"\n \t%s", ctime(&t));
  fclose(handle);
  Sleep(500);
  ler();
  return 0;
}

void ler()
{
    FILE *handle;                      /* CRIA O HANDLE         */
    char buffer[1024];                 /* PEGA A ENTRADA        */
    handle=fopen("A1.txt","r");        /* RETORNA UM HANDLE     */
    if(handle==NULL)                   /* TESTE LOGICO          */
    {
       puts("error");
       exit(1);                        /* SAI SE DER ERRO       */
    }
    while(fgets(buffer,1024,handle))   /* LENDO O ARQUIVO       */
    {
        printf("%s",buffer);           /* IMPRIME NO CONSOLE    */
    }

    fclose(handle);                    /* FECHA O ARQUIVO       */
}
