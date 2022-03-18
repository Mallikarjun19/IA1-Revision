#include<stdio.h>
void input(int *a,int *b)
{
  printf("enter two numbers: \n");
  scanf("%d%d",a,b);
}
void add(int a,int b,int *sum)
{
  *sum=a+b;
}
void output(int a,int b,int sum)
{
  printf("the sum of %d + %d is %d",a,b,sum);
}
void main()
{
  int x,y,total;
  input(&x,&y);
  add(x,y,&total);
  output(x,y,total);
}