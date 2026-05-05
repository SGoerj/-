# include<stdio.h>
int a,time,n=7;
int main(){
    printf("自然数n的值域为[0,10],请输入猜测数值：");
    for (time=1;time<=3;time++){
        scanf_s("%d",&a);
        if(a==n){
            printf("猜对了！");
            break;
        }
        else if(a>n)
            if (time!=3)
                printf("猜大了，再来一次。");
            else
                printf("次数已用尽，请重新开始。");
        else
            if (time!=3)
                printf("猜小了，再来一次。");
            else
                printf("次数已用尽，请重新开始。");
    }
    return 0;
}