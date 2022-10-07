#include<stdio.h>
#include<math.h>
int main(){
    float tv,ta;
    printf("enter true value amd Absolute value\n");
    scanf("%f%f",&tv,&ta);

    float ab,re,pe;
    ab=fabs(tv-ta);
    re=ab/tv;
    pe=re*100;
    printf(" Absolute error= %f \n relative error=%f \n percentage error=%f", ab,re,pe);
}