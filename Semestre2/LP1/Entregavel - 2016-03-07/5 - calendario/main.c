#include <stdio.h>
#include <stdlib.h>
#include "bycasseb.h"


main()
{
    int dia,mes,ano;
    dia = capturaInt("Digite o dia: ");
    mes = capturaInt("Digite o m�s: ");
    ano = capturaInt("Digite o ano: ");

    impDiaDaSemana(dia,mes,ano);
}
