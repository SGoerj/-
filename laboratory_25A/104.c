# include<stdio.h>
int ch;
int main(){
    while(((ch=getchar())!=10)&&(ch!=48)){
        if (65<=ch&&ch<=90)
            printf("'%c'已经是大写字母\n",ch);
        else if(97<=ch&&ch<=122)
            printf("%c\n",ch-32);
        else
            printf("'%c'不是字母\n",ch);
    }
    return 0;
}