#include<stdio.h>
int main(){
    char a[101]/*原串*/,b[20][20]={'\0'}/*新串*/,*p,*q;int i=0;
    fgets(a,101,stdin);p=a;
    while(*p){
        q=*(b+i);
        while(*p!=' '&&*p!='\n'){
            *q=*p;q++;p++;
        }
        i++;p++;
    }
    for(i-=1;i>=0;i--){
        printf("%s ",*(b+i));
    }
    return 0;
}