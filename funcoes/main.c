#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <locale.h>

void ler();                         /* ASSINATURA OU PROTOTIPO       */

int main()
{
  setlocale(LC_ALL, "Portuguese");  /* USANDO A ACENTUAÇÃO           */
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
  fclose(handle);
  Sleep(500);
  ler();
  return 0;
}

void ler()
{
    FILE *handle;
    char buffer[1024];
    handle=fopen("A1.txt","r");
    if(handle==NULL)
    {
       puts("error");
       exit(1);
    }
    while(fgets(buffer,1024,handle))
    {
        printf("%s",buffer);
    }
    fclose(handle);
}
