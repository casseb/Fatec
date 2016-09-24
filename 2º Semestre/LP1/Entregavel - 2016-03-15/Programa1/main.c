//inclus�o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "bycasseb.h"
//vari�veis globais
char dic [][11]={"cat","gato","gato",
                "dog","cachorro","perro",
                "is", "�","es",
                "bad","ruim","malo",
                "region","regi�o","regi�n",
                "shepherds","pastores","pastores",
                "field","campo","campo",
                "flock","rebanho","reba�o"
                "night","noite","noche",
                "angel","anjo","�ngel",
                "Lord","Senhor","Sr",
                "glory","Gl�ria","gloria",
                "great","�timo","gran",
                "fear","medo","miedo",
                "God","Deus","Dios",
                "good","bom","bueno",
                "day","dia","d�a",
                "city","cidade","ciudad",
                "baby","beb�","bab�",
                "earth","terra","tierra",
                "peace","paz","paz",
                "highest","maior","m�s",
                "to","para","a",
                "in","dentro","dentro de",
                "key","chave","clave",
                "case","caso","caso",
                "computer","computador","ordenador",
                "card","carta","carta",
                "help","ajuda","ayudar",
                "need","precisa","es necessario",
                "you","voc�","usted",
                "my","minha","mi",
                "level","n�vel","nivel",
                "shake","sacudir","sacudir",
                 "","","",};

char frase [50];
char palavra [11];
char *p;

// fun�ao que n�o retorna valor
void pega_palavra()
 {
  char *q;
  q=palavra;
  while (*p && *p!=' ')
  {
      *q=*p;
      p++;
      q++;
  }
  if (*p==' ')p++;
  *q='\0';
 }

// fun��o principal, n�o pode faltar.
void regraTraducao(int fator)
{
    setlocale(LC_ALL, "Portuguese");
    char opcao='s';
    int linha;
        printf("\nDigite a frase desejada:");
        fflush(stdin);
        gets(frase);
        p=frase;
        pega_palavra();
        printf("\n");
        do
        {
            int i;
            for(i=0;*dic[i];i=i+3){
                if(strcmp(dic[i],palavra)==0){
                    break;
                }
            }
            if(*dic[i]){
                    linha = (i+fator);
                }
                else{
                    linha = (-1);
                }
            if(linha!=-1)
                printf("%s ",dic[linha]);
            else
                printf("%s ",palavra);
            pega_palavra();
        }while(*palavra);

        printf("\n");
        system("pause");
}

void enPt(){
    regraTraducao(1);
}

void enEs(){
    regraTraducao(2);
}

void ptEn(){
    regraTraducao(-1);
}

void main(){
    espMenu3Opcoes("Ingl�s para Portugu�s",enPt,"Ingl�s para Espanhol",enEs,"Portugu�s para Ingl�s",ptEn);
}
