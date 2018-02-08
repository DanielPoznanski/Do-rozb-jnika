#include <stdio.h>
#include <stdlib.h>

int f4(int **tab,int m, int n)
{
    int suma=0;
    for(int i=0; i<n; i++)
    {
        if (i%2==0)
            for(int j=0; j<m; j++)
            {
                suma=suma+tab[i][j];

            }
    }
    return suma;

}
int main()
{
    int **tab;
    tab=malloc(5*sizeof(int*));
    for(int i=0; i<5; i++)
    {
        tab[i]=malloc(5*sizeof(int));
        for(int j=0; j<5; j++)
        {
            tab[i][j]=1;

        }
    }
    int suma=f4(tab,5,5);
    printf("%i",suma);
}
