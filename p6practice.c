#include<stdio.h>
void input_two_string(char *s1,char *s2)
{
  printf("enter thr first string\n");
  scanf("%s",s1);
  printf("enter the second string\n");
  scanf("%s",s2);
}
int strcmp(char *s1,char *s2)
{
  int i=0;
  for(int i=0;s1[i]!='\0' && s1[i]==s2[i];i++);
    return s1[i]-s2[i];
}
void output(char *s1,char *s2,int r)
{
  if(r>0)
    printf("%s is greater than %s",s1,s2);
  else if(r<0)
    printf("%s is greater than %s",s2,s1);
  else
    printf("both strings are equal");
}
int main()
{
  char s1[100],s2[100];
  input_two_string(s1,s2);
  int r=strcmp(s1,s2);
  output(s1,s2,r);
  return 0;
}