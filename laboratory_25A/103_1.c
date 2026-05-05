# include<stdio.h>
float x;
int main(){
    printf("输入一个实数：");
    scanf_s("%f",&x);
    if(0<=x&&x<10)
        printf("x=%f时，y=%f",x,x);
    else if(10<=x&&x<20)
        printf("x=%f时，y=%f",x,x*x+1);
    else if(20<=x&&x<30)
        printf("x=%f时，y=%f",x,x*x*x+x*x+1);
    else
        printf("x取值非法！");
    return 0;
}