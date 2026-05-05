#include<stdio.h>
long long int factorial(int n){
    long long int x=1ll;
    for(n;n>0;n--){
        x=x*n;
    }
    return x;
}
long double power(double x,int n){
    long double e=1L;
    for(n;n>0;n--){
        e=e*x;
    }
    return e;
}
double expotential(double x){
    double s=0;
    for(int i=0;i<20;i++){
        s+=(power(x,i)/factorial(i));
    }
    return s;
}
int main(){
    int n;
    double x;
    scanf("%lf%d",&x,&n);
    printf("%lld\n%.50lf",factorial(n),expotential(x));
}