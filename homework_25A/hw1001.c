#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define  p   0.4
void evolution( int M,int N,char (* lifeMatrix)[N], int n){
    if(M>1&&N>1){
        for(int time=0;time<n;time++){
            char (*A)[N]=malloc(M*sizeof(*A));
            /*复制。一个来判断，一个来赋值*/
            for(int i=0;i<M;i++){for(int j=0;j<N;j++){A[i][j]=lifeMatrix[i][j];}}
            /*中中*/for(int i=1;i<M-1;i++){
                for(int j=1;j<N-1;j++){
                    switch(A[i][j]){
                        case 1:
                            switch((A[i-1][j]+A[i+1][j]+A[i][j-1]+A[i][j+1])/2){
                                case 0:lifeMatrix[i][j]=0;break;
                                case 1:break;
                                case 2:lifeMatrix[i][j]=0;break;
                                default:break;
                            }break;
                        case 0:if((A[i-1][j]+A[i+1][j]+A[i][j-1]+A[i][j+1])==3)lifeMatrix[i][j]=1;break;
                        default:break;
                    }
                }
            }
            /*上中*/for(int j=1;j<N-1;j++){
                switch(A[0][j]){
                    case 1:
                        switch((A[1][j]+A[0][j-1]+A[0][j+1])/2){
                            case 0:lifeMatrix[0][j]=0;break;
                            case 1:break;
                            default:break;
                        }break;
                    case 0:if((A[1][j]+A[0][j-1]+A[0][j+1])==3)lifeMatrix[0][j]=1;break;
                    default:break;
                }
            }
            /*下中*/for(int j=1;j<N-1;j++){
                switch(A[M-1][j]){
                    case 1:
                        switch((A[M-2][j]+A[M-1][j-1]+A[M-1][j+1])/2){
                            case 0:lifeMatrix[M-1][j]=0;break;
                            case 1:break;
                            default:break;
                        }break;
                    case 0:if((A[M-2][j]+A[M-1][j-1]+A[M-1][j+1])==3)lifeMatrix[M-1][j]=1;break;
                    default:break;
                }
            }
            /*左中*/for(int i=1;i<M-1;i++){
                switch(A[i][0]){
                    case 1:
                        switch((A[i-1][0]+A[i+1][0]+A[i][1])/2){
                            case 0:lifeMatrix[i][0]=0;break;
                            case 1:break;
                            default:break;
                        }break;
                    case 0:if((A[i-1][0]+A[i+1][0]+A[i][1])==3)lifeMatrix[i][0]=1;break;
                    default:break;
                }
            }
            /*右中*/for(int i=1;i<M-1;i++){
                switch(A[i][N-1]){
                    case 1:
                        switch((A[i-1][N-1]+A[i+1][N-1]+A[i][N-2])/2){
                            case 0:lifeMatrix[i][N-1]=0;break;
                            case 1:break;
                            default:break;
                        }break;
                    case 0:if((A[i-1][N-1]+A[i+1][N-1]+A[i][N-2])==3)lifeMatrix[i][N-1]=1;break;
                    default:break;
                }
            }
            switch(A[0][0]){case 1:if(A[0][1]+A[1][0]<2)lifeMatrix[0][0]=0;break;default:break;}
            switch(A[0][N-1]){case 1:if(A[0][N-2]+A[1][N-1]<2)lifeMatrix[0][N-1]=0;break;default:break;}
            switch(A[M-1][0]){case 1:if(A[M-1][1]+A[M-2][0]<2)lifeMatrix[M-1][0]=0;break;default:break;}
            switch(A[M-1][N-1]){case 1:if(A[M-1][N-2]+A[M-2][N-1]<2)lifeMatrix[M-1][N-1]=0;break;default:break;}
            free(A);A=NULL;
        }
    }
    else    for(int i=0;i<M;i++){for(int j=0;j<N;j++){lifeMatrix[i][j]=0;}}
    for(int i=0;i<M;i++){for(int j=0;j<N;j++){(lifeMatrix[i][j]==1)?(lifeMatrix[i][j]='*'):(lifeMatrix[i][j]='-');}}/*把数字换成规定符号*/
}
int main(){
    int M,N,n;
    scanf("%d%d%d",&M,&N,&n);
    srand((unsigned)time(NULL));
    char (*lifeMatrix)[N]=malloc(M*sizeof(*lifeMatrix));
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            (((double)rand()/RAND_MAX)>=p)?(lifeMatrix[i][j]=0):(lifeMatrix[i][j]=1);
            /*用数字初始化方便计算*/
        }
    }
    evolution(M,N,lifeMatrix,n);
    for(int i=0;i<M;i++){for(int j=0;j<N;j++){printf("%c\t",lifeMatrix[i][j]);}printf("\n");}
    free(lifeMatrix);lifeMatrix=NULL;return 0;
}