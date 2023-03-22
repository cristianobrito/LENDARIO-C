#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    int x=1;
    FILE *p1;
    p1=fopen("LER.txt", "w");
    if(p1==NULL)
    {
        puts("ERRO W\n");
        exit(1);
    }
    fprintf(p1,"ola estou escrevendo aqui denovo [%d]\n",x);
    fprintf(p1,"\tSEGUNDA VEZ [%d]\n",x+1);
    fclose(p1);
    Sleep(500);
// --------------------------------------------------------
    FILE *p;
    char buffer[1024];
    p=fopen("LER.txt", "r");
    if(p==NULL)
    {
        puts("ERROR:\n");
        exit(1);
    }
    while(fgets(buffer,1024,p))
    {
        printf("%s\n",buffer);

    }
    fclose(p);
    return 0;
}
