#include<stdio.h>
int input_n()
{
  int a;
  printf("enter the value of n\n");
  scanf("%d",&a);
  return a;
}
int sum_n(int n)
{
  int sum=0;
  do{
    sum=sum+n;
    n=n-1;
  }while(n>0);
    return sum;
}
void output(int n,int sum)
{
  int i;
  for(i=1;i<n;i++)
    {
      printf("%d+",i);
    }
  printf("%d is %d",n,sum);
}
void main()
{
   int x,y;
  x=input_n();
  y=sum_n(x);
  output(x,y);
}