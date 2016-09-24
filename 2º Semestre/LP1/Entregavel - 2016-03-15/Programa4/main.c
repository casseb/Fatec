#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "bycasseb.h"

void main()
{
    setlocale(LC_ALL, "Portuguese");

    /*Teste fun��o strupr*/
    char up[] = "teste";
    strupr(up);
    printf("Teste fun��o strupr: ");
    puts(up);

    /*Teste fun��o strcat*/
    char* cat3;
    char* cat1 = "teste1";
    char* cat2 = "teste2";
    cat3 = strcat(cat1,cat2);
    printf("Teste fun��o strcat: ");
    puts(cat3);

    /*Teste fun��o strpos*/
    int pos;
    pos = strpos("teste",'e');
    printf("Teste fun��o strpos: ");
    printf("%i\n",pos);

    /*Teste fun��o strdel*/
    char* del;
    del = strdel("teste",3);
    printf("Teste fun��o strdel: ");
    puts(del);

    /*Teste fun��o strins*/
    char* ins;
    ins = strins('x',"teste",3);
    puts(ins);
}
