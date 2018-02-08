#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE *fp;
if((fp=fopen("plik.bin","rb"))==NULL){
    printf("Nie dziala ");
    exit(1);
}
char tab[90];
fread(tab,sizeof(char),10,fp); //odczytanie peirwszych 10 bajtow pliku fp zapisanych do tablicy tab
printf("%s",tab);
}
