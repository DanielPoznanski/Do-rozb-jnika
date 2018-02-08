#include <stdio.h>
#include <stdlib.h>

void f2(int *n,int *m){

int pom;
if(*n%*m==0){
    pom=*n;
    *n=*m;
    *m=pom;

}


}


int main()
{
int n,m;
n=15;
m=5;
f2(&n,&m);
printf("%i\n%i",n,m);
}
