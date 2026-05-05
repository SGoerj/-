#include<stdio.h>
#include<string.h>
int main(){
    char countries[10][40],*index_by_length[10],*index_by_alphabet[10],*T[1];
    for(int i=0;i<10;i++){
        fgets(*(countries+i),40,stdin);
        index_by_alphabet[i]=*(countries+i);
        index_by_length[i]=*(countries+i);
    }
    printf("\n");
    for(int i=0;i<9;i++){
        for(int j=0;j<9-i;j++){
            if(strlen(index_by_length[j])>strlen(index_by_length[j+1])){
                T[0]=index_by_length[j];index_by_length[j]=index_by_length[j+1];index_by_length[j+1]=T[0];
            }
        }
    }
    for(int i=0;i<10;i++){
        printf("%s",index_by_length[i]);
    }
    printf("\n");
    for(int i=0;i<9;i++){
        for(int j=0;j<9-i;j++){
            if(strcmp(index_by_alphabet[j],index_by_alphabet[j+1])>=0){
                T[0]=index_by_alphabet[j];index_by_alphabet[j]=index_by_alphabet[j+1];index_by_alphabet[j+1]=T[0];
            }
        }
    }
    for(int i=0;i<10;i++){
        printf("%s",index_by_alphabet[i]);
    }
}