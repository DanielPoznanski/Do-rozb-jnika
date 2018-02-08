#include<stdio.h>

int main()
{
    int rok,wiek;
    scanf("%i",&rok);
        if(rok<0)
        {
            wiek=rok/100;
                if(rok%100!=0)
                    wiek=wiek-1;
        }
    else {
         wiek=rok/100;
    if(rok%100!=0)
        wiek=wiek+1;
    }
    if(wiek<0)
    printf("%i p.n.e",wiek*(-1));
    else{
        printf("%i n.e",wiek);
    }
}
