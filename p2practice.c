#include<stdio.h>
int input()
{
  int a;
  printf("enter the number: \n");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  if((a>b)&&(a>c))
    return a;
  else if((b>a)&&(b>c))
    return b;
  else
    return c;
}
void output(int a,int b,int c,int largest)
{
  printf("the biggest of %d,%d and %d is %d",a,b,c,largest);
}
void main()
{
  int x,y,z,big;
  x=input();
  y=input();
  z=input();
  big=cmp(x,y,z);
  output(x,y,z,big);
}