#include<stdio.h>
#include<math.h>
float input()
{
  float n;
  printf("enter a number\n");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
  float sqrt_result;
 float x=n/4;
  sqrt_result=(0.5*(x+(n/x)));
while(fabs(x-sqrt_result)>0.00001)
  {
    x=sqrt_result;
    sqrt_result=(0.5*(x+(n/x)));
}
  return sqrt_result;
}
void output(float n,float sqrt_result)
{
 printf("the sqrt of %f is %f",n,sqrt_result); 
}
void main()
{
  float x,result;
  x=input();
  result=my_sqrt(x);
  output(x,result);
}