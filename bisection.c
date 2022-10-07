#include<stdio.h>
#include<math.h>
float f(float a)
{
    float fa=(a*a*a)-(4*a)-9;
    return fa;
}
void bisection()
{
    float a,b;
    while(1)
    {
        printf("Enter the value of a, b");
        scanf("%f%f",&a,&b);
        if(f(a)*f(b)<0)
        {
            printf("\nroot lies between a and b");
            break;
        }
        else
            printf("\nRoots not lie between a and b , re-enter the value");
    }

    float tol;
    printf("\nenter the tolerance :");
    scanf("%f",&tol);
    int it=0;
    while(1)
    {
        it++;
        float x=(a+b)/2;
        if(fabs(f(x))<tol)
        {
            printf("\nRoot of the equation after %d iteration = %f",it,x);
            break;
        }
        printf("\n after %d iteration value of x=%f ",it,x);
        if(f(a)*f(x)<0)
        b=x;
        else
        a=x;
    }
}
int main()
{
    bisection();
}