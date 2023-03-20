#include <stdio.h>
#include <stdlib.h>

int somar(int a, int b) /* FUNCOES QUE RETORNAM */
{
  return a+b;
}

int a,b,c; /* VARIAVEIS GLOBAIS */

int main()
{

  printf("digite sua soma\nentre com os numeros\n");
  scanf("%d %d",&a,&b);
  c=somar(a,b);  /* CHAMADA DA FUNCAO */
  printf("soma: %d\n",c);
  if(c==24)
  {
      puts("\nhummm boiola!!\n");
  }
  else if(c<10)
  {
      puts("ninho\n");
  }
  else{
    puts("soi a hombre cabrom!!");
  }
  int i=0;
  while(c<5)
  {
      printf("ola amigo: %d\n",c);
      c++;
  }
  return 0;
}
