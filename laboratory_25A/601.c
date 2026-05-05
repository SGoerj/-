#include<stdio.h>
char in[100],out[3]={'a','b','c'};
int i=0,n;
int main(){
    fgets(in,100,stdin);
    for(i=0,n=0;i<100;i++){
        if(in[i]=='1'){
            printf("%c",out[n]);
            n=0;
        }
        else
            n++;
    }
}