#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void get_string(char s[]){
    fgets(s,100,stdin);
}
void replace_char(char s[],char c1,char c2){
    for(size_t i=0;i<strlen(s);i++){
        if(s[i]==c1)s[i]=c2;
    }
}
int main(){
    char str[100],a,b;
    get_string(str);
    scanf("%c %c",&a,&b);
    replace_char(str,a,b);
    printf("%s",str);
}