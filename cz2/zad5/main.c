#include <stdio.h>
#include <stdlib.h>

struct trojkat
{
    int a;
    int b;
    int c;
};


void f5(struct trojkat *tab,struct trojkat *tab2,int n)
{
    int a,b,c;
    for(int i=0; i<n; i++)
    {
        a=tab[i].a;
        b=tab[i].b;
        c=tab[i].c;
        if (a<0)
            a=a*(-1);
        if(b<0)
            b=b*(-1);
        if(c<0)
            c=c*(-1);
        if(a+b>c && b+c>a && c+a>b)
        {
            tab2[i].a=a;
            tab2[i].b=b;
            tab2[i].c=c;
        }
        else
        {
            tab2[i].a=0;
            tab2[i].b=0;
            tab2[i].c=0;
        }


    }

}
int main(){
struct trojkat *tab;
struct trojkat *tab2;
tab=malloc(3*sizeof(struct trojkat));
tab2=malloc(3*sizeof(struct trojkat));
tab[0].a=3;
tab[0].b=4;
tab[0].c=5;
tab[1].a=5;
tab[1].b=40;
tab[1].c=1;
tab[2].a=-3;
tab[2].b=-4;
tab[2].c=-5;
f5(tab,tab2,3);
printf("%i %i %i\n", tab2[0].a, tab2[0].b,tab2[0].c);
printf("%i %i %i\n", tab2[1].a, tab2[1].b,tab2[1].c);
printf("%i %i %i\n", tab2[2].a, tab2[2].b,tab2[2].c);


}
