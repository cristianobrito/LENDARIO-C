#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ler_db();

int main()
{
    struct agent{
      char actor[32];
      int year;
      char title[32];
    };
    struct agent bond;
    FILE *handle;

    strcpy(bond.actor,"sean coneri");
    bond.year=32;
    strcpy(bond.title,"octopus");
    handle=fopen("bond.db", "w");
    if(!handle)
    {
        puts("error\n");
        exit(1);
    }
    fwrite(&bond,sizeof(struct agent),1,handle);
    fclose(handle);
    printf("dados salvos!\n\n");
    ler_db();
    return 0;
}

void ler_db()
{
    struct agent{
      char actor[32];
      int year;
      char title[32];
    };
    struct agent bond;
    FILE *handle;
    handle=fopen("bond.db", "r");
    if(!handle)
    {
        puts("error\n");
        exit(1);
    }
    while(fread(&bond,sizeof(struct agent),1,handle))
    {
        printf("ACTOR:\t\tYEAR:\tTITLE:\n");
        printf("%10s\t%-5d\t%-10s\n",bond.actor,
                                     bond.year,
                                     bond.title);
    }
    fclose(handle);
}
