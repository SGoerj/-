#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int get_array(double a[],int N){
    char B[2048],*p=B;int n=0;
    fgets(B,2048,stdin);
    p[strcspn(p,"\n")]='\0';
    while(n<N){
        while(*p&&!isdigit(*p))p++;
        if(!*p)break;
        a[n]=strtod(p,&p);++n;
    }
    return n;
}
double inner_product(double *a,double *b,int n){
    double s=0;
    for(int i=0;i<n;i++){s+=a[i]*b[i];}
    return s;
}
int main(){
    int n;double a[50],b[50];char c[1024];
    scanf_s("%d",&n);fgets(c,1024,stdin);/*主要为了清理\n*/
    get_array(a,n);
    get_array(b,n);
    printf("%f",inner_product(a,b,n));
    return 0;
}