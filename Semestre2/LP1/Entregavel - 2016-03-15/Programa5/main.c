#include <stdio.h>
#include <stdlib.h>

void main()
{

    char *dia_semana(int n) { /* Aqui foi usado um ponteiro de chars */
        char *d[] = { /* Aqui tamb�m */
            "erro",
            "domingo",
            "segunda-feira",
            "ter�a-feira",
            "quarta-feira",
            "quinta-feira",
            "sexta-feira",
            "s�bado"
        };
        return d[1<=n && n<=7 ? n : 0];/*Ser� retornado uma string baseado no n�mero informado
        como par�metro, dentro do return h� uma opera��o tern�ria retornando ele mesmo caso seja de 1 a 7
        ou zero, que no caso � a posi��o que esta escrito "erro" caso n�o esteja neste rage*/
    }

    printf("%s",dia_semana(4));
}
