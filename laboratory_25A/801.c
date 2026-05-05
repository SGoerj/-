#include<stdio.h>
#include<string.h>
int main(){
    char a[101]/*原串*/,*A[20]/*词串指针*/,*p;int i=0;
    fgets(a,101,stdin);
    p=strtok(a," \n");
    for(i=0;p!=NULL;i++){
        A[i]=p;p=strtok(NULL," \n");
    }
    for(i-=1;i>=0;i--){
        printf("%s ",A[i]);
    }
    return 0;
}