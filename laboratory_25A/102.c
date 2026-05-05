# include<stdio.h>
float x,y;
int main(){
    scanf_s("%f %f",&x,&y);
    if((-2<=x&&x<=2)&&(-2<=y&&y<=2))
        printf("Yes");
    else
        printf("No");
    return 0;
}