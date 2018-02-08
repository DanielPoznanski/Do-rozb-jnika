#include <stdio.h>
#include <stdlib.h>

int rekurencja(int p,int q){
if(q==0 && p>=1)
    return 0;
if(p==0)
    return 2*q;
if(p>=1 && q==1)
    return 2;
if(p>=1 && q>=2){
    return rekurencja(p-1,rekurencja(p,q-1));
}
}


int main()
{
int p,q,wynik;
scanf("%i %i",&p,&q);
wynik=rekurencja(p,q);
printf("%i",wynik);
}
