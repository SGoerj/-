#include<stdio.h>
#include<string.h>
int a,b;
char nmb1[50],nmb2[50],nmb[50];
int main(){
    scanf_s("%d%d",&a,&b);
    snprintf(nmb1,sizeof(nmb1),"%d",a);
    snprintf(nmb2,sizeof(nmb2),"%d",b);
    strcpy(nmb,nmb1);
    strcat(nmb1,nmb2);
    strcat(nmb2,nmb);
    if(strcmp(nmb1,nmb2)>=0)printf("%s",nmb1);
    else printf("%s",nmb2);
}