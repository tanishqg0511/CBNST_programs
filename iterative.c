#include <stdio.h>
#include <math.h>
#define F(x) 2 * x - log10(x) - 7
#define X(x) (7 + log10(x)) / 2
#define G(x) 2 - (1 / x)

int main()
{
  float x1, x2, x;
  int i = 1;

  do
  {
    printf("\nEnter the value of x: ");
    scanf("%f", &x);
    if (fabs(G(x)) > 1)
      printf("Guess again");
    else
      break;
  } while (1);

  x1 = X(x);
  int j = 0;
  printf("\n after iteration 1 value of x = %f", x1);
  j++;
  do
  {
    j++;
    x2 = X(x1);
    if (fabs(x1 - x2) < 0.0001)
    {
      printf("\n\nREAL ROOT = %.3f", x1);
      i = 0;
    }
    else
      x1 = x2;
    if (i == 1)
      printf("\n after iteration %d value of x = %f", j, x1);
  } while (i != 0);
}