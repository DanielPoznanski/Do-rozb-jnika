#include <stdio.h>

void f5(int *krot_licz,int n){
for(int i=1;i<=n;i++){
    for(int j=0;j<krot_licz[i-1];j++){
        printf("%i, ",i);
    }
}

}

int main()
{
int tab[]={1,2,4,5};
f5(tab,4);
}
