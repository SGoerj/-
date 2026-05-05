#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void generate_magic_square(int n, int (*magic_square)[n]){
    int r=0,c=(n-1)/2;
    for(int i=1;i<(n*n)+1;i++){
        magic_square[r][c]=i;
        (r==0)?(r=n-1):(r--);(c==n-1)?(c=0):(c++);
        if(0<magic_square[r][c]){
            (r==n-1)?(r=0):(r++);(r==n-1)?(r=0):(r++);(c==0)?(c=n-1):(c--);
        }
    }
}
int main(){
    int n;scanf("%d",&n);
    int (*A)[n]=malloc(n*sizeof(*A));memset(A,0,n*sizeof(*A));
    /*上行等价于int (*A)[n]=calloc(0,n*sizeof(*A))*/
    generate_magic_square(n,A);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    free(A);A=NULL;return 0;
}