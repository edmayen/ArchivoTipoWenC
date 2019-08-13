#include<stdio.h>
#include<stdlib.h>
#define T 50
void Crea(FILE**);
void Cargar(FILE*);

int main()
{
    system("color F0");
    FILE *ap=NULL;
    Crea(&ap);
    Cargar(ap);
    fclose(ap);
}

void Crea(FILE **ap)
{
    char nom[T];
    printf("\n\t\t\tArchivo de Tipo Escitura.\n\n");
    printf("\nIngresa el Nombre del Archivo con la Extencion -.txt-: ");
    gets(nom);
    *ap=fopen(nom,"w");
    if(*ap==NULL)
    {
        printf("\n\nError. No se Pudo Abrir el Archivo.\n\n");
        getchar();
        exit(1);
    }
}

void Cargar(FILE *ap)
{
    char cad[T], *var;
    printf("\n\nIngresa las Cadenas, para Terminar de Cargar Ingresa el Nulo.\n\n");
    var=gets(cad);
    while(var!=NULL)
    {
        fprintf(ap,"%s\n",cad);
        var=gets(cad);
    }
}
