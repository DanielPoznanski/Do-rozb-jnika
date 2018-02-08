#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void f2(char *napis){
for(int i=0;napis[i]!='\0';i++){
    if(napis[i]=='a'){
        napis[i]='1';
        if (napis[i+1]!='a')
        napis[i+1]='2';
        if (napis[i+2]!='a')
        napis[i+2]='3';
    }
}}
int main(){

char napis[10]={"apaszka"};
f2(napis);
printf("%s",napis);

}
