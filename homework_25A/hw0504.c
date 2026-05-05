// 第四题 约分
#include<stdio.h>
int a,b;
int GCD(int x,int y){
    int c=x,d=y;
    while(c%d!=0&&d%c!=0){
        if(c>=d)
            c=(c%d);
        else
            d=(d%c);
    }
    if(c>=d)
        return d;
    else
        return c;
}
int main(){
    scanf_s("%d/%d",&a,&b);
    printf("%d/%d",(a/GCD(a,b)),(b/GCD(a,b)));
}