# include<stdio.h>
# include<math.h>
double a,b,c,s;
int main(){
    scanf_s("%lf%lf%lf",&a,&b,&c);
    s=sqrt((a+b-c)*(a+c-b)*(b+c-a)*(a+b+c)/16);
    if ((a+b>c)&&(b+c>a)&&(c+a>b)){
        if ((fabs(a-b)<1e-6)||(fabs(b-c)<1e-6)||(fabs(c-a)<1e-6)){
            if((fabs(a-b)<1e-6)&&(fabs(b-c)<1e-6))
                printf("边长为%lf,%lf,%lf的三角形是等边三角形，其面积为%lf",a,b,c,s);
            else if((fabs(a*a+b*b-c*c)<1e-6)||(fabs(a*a-b*b+c*c)<1e-6)||(fabs(-a*a+b*b+c*c)<1e-6))
                printf("边长为%lf,%lf,%lf的三角形是等腰直角三角形，其面积为%lf",a,b,c,s);
            else
                printf("边长为%lf,%lf,%lf的三角形是等腰三角形，其面积为%lf",a,b,c,s);
            
        }
        else if((fabs(a*a+b*b-c*c)<1e-6)||(fabs(a*a-b*b+c*c)<1e-6)||(fabs(-a*a+b*b+c*c)<1e-6))
            printf("边长为%lf,%lf,%lf的三角形是直角三角形，其面积为%lf",a,b,c,s);
        else
            printf("边长为%lf,%lf,%lf的三角形是一般三角形，其面积为%lf",a,b,c,s);
    }
    else
        printf("无法构成三角形！");
    return 0;
}