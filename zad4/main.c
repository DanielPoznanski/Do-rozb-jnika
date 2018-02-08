#include <stdio.h>

int f4(int *tab,int n,int m){
int licznik=0;
for(int i=0;i<n;i++){
    if (tab[i]==m)
    licznik=licznik+1;
}
    return licznik;

}

int main()
{
    int tab[]={1,2,3,4,5,8,8,8};
    int wynik=f4(tab,8,1);
    printf("%i",wynik);
}
