#include<stdio.h>
int valid_brackets(char *str){
    int n=0;
    while(*str&&n>=0){
        if(*str=='(')n++;
        if(*str==')')n--;
        str++;
    }
    if(n==0)return 1;
    return 0;
}
int main(){
    char a[101];
    fgets(a,101,stdin);
    if(valid_brackets(a))printf("true");
    else    printf("false");
}