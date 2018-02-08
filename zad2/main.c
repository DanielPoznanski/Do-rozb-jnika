#include <stdio.h>
#include <stdlib.h>

int main()
{
int n;
int suma=0;
int licznik=0;
int liczba=1;
scanf("%i",&n);
if (n<=0){
    printf("0");
return 0;}

while(licznik!=n)
    {
     if(liczba%3==0 || liczba%7==0){
            suma=suma+liczba;
            licznik=licznik+1;

     }
     liczba=liczba+1;
    }
    printf("%i",suma);
}
