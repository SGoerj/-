# include<stdio.h>
int x;
int main(){
    printf("输入一个整数：");
    scanf_s("%d",&x);
    switch(x/10){
        case 0:
            printf("x=%d时，y=%d",x,x);break;
        case 1:
            printf("x=%d时，y=%d",x,x*x+1);break;
        case 2:
            printf("x=%d时，y=%d",x,x*x*x+x*x+1);break;
        default:
            printf("x取值非法！");break;
    }
    return 0;
}