# include<stdio.h>
# include<math.h>
double s,n;
int main(){
    for(s=0,n=1;1/(2*n-1)>=1e-6;n++){
        s+=pow(-1,n-1)/(2*n-1);
    }
    printf("Π=%.18lf\n",4*s);
    printf("acos(-1)= %.18Lf \n",  acos(-1.0L) );
    return 0;
}