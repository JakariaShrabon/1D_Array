#include<stdio.h>
#include <stdlib.h>
#include<math.h>

int *angle_of_vector(int u[],int v[],int n){
  int i;
  int *x;
  x=(int*)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
  {
    x[i]=u[i]+v[i]*cos(90);
  }
  return x;
}

int main()
{
    int u[10]={-7,3,0,3};
    int v[10]={1,3,-2,7};
    int i,n=4;
    int *c;
    c=angle_of_vector(u,v,n);
    printf("The angale of this vector is :");
    printf("\n");
    for(i=0;i<n;i++){
        printf("%d\n",c[i]);

    }
    free(c);
    return 0;

}