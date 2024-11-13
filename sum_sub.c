#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int first, second;
  float three, four;
  int sum1,sum2;
  float sum3,sum4;
  sum1 = 0;
  sum2 = 0;
  scanf("%d %d", &first, &second);
  scanf("%f %f", &three, &four);

  sum1 = first + second;
  sum2 = first - second;
  sum3 = three + four;
  sum4= three - four;
  printf("%d %d\n",sum1,sum2);
  printf("%f %f",sum3,sum4);

  return 0;
}