#include <stdio.h>
#include <stdlib.h>

int f3(char *napis){
int licznik=1;
for(int i=0;napis[i]!='\0';i++)
{
    if(napis[i]==' ')
        licznik=licznik+1;

}
return licznik;

}


int main()
{
char napis[]={"Bylo sobie �ycie do p�ki nie powsta�o programowanie, tak"};
int wynik=f3(napis);
printf("%i",wynik);
}
