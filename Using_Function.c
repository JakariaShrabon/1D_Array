#include <stdio.h>
int *sum(int ar[], int b[], int n)
{
  int *c;
  c = (int *)malloc(n * sizeof(int));
  for (int i = 0; i < n; i++)
  {
    c[i] = ar[i] + b[i];
  }
  return c;
}
int main()
{
  int ar[] = {1, 2, 3};
  int b[] = {1, 2, 3};
  int n = 3;
  int *c;
  c = sum(ar, b, n);
  for (int i = 0; i < 3; i++)
  {
    printf("%d", c[i]);
  }
  free(c);
  return 0;
}