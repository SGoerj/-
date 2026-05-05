#include<stdio.h>
#include<string.h>
#define    X    50
char input[X+X+X];//多留位置方便轮换
int n;
//定义处理回车的函数
int dlt_ntr(){
    int j=0;
    while(input[j]!='\0'){
        if(input[j]=='\n'){
            input[j]='\0';
            return 0;
        }
        j++;
    }
    return 1;
}
//定义处理缓冲区的函数
void dlt_bff(){
    int c;
    while((c=getchar())!=EOF&&c!='\n');
}
int main(){
    fgets(input,X+1,stdin);
    if(dlt_ntr())
        dlt_bff();
    int N=strlen(input);
    scanf_s("%d",&n);
    n=n%N;//减少对n大小的限制
    for(int i=N-1;i>=0;i--){
        input[i+n]=input[i];
    }//整体右移
    for(int i=n-1;i>=0;i--){
        input[i]=input[N+i];
        input[N+i]='\0';
    }//部分交换到左边
    fputs(input,stdout);
    return 0;
}