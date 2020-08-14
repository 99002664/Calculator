#include <stdio.h>
int sum(int num1, int num2);
int sub(int num1, int num2);

int main()
{  int x, y, choice, result;
  int (*ope[2])(int, int);
  ope[0] = sum;
  ope[1] = sub;
   printf("Enter two integer numbers: ");
  scanf("%d%d", &x, &y);
  printf("Enter 0 to sum, 1 to subtract: ");
  scanf("%d", &choice);
  result = ope[choice](x, y);
  printf("%d", result);
return 0;}

int sum(int x, int y) {return(x + y);}
int sub(int x, int y) {return(x - y);}

