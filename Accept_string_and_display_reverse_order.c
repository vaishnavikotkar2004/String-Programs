#include<stdio.h>
#include<string.h>
int main()
{
 char s1[100];
 int i;
 printf("enter string");
 fgets(s1,100,stdin);
 for(i=0;s1[i]!='\0';i++);
 printf("\n reverse order");
 for(i=1;i>=0;i--)
 {
   printf("%c",s1[i]);
 }
}
