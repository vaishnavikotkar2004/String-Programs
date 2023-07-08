#include<stdio.h>
#include<string.h>
int main()
{
  char s1[100],s2[100];
  int k,ch;
  printf("enter 1 string");
  fgets(s1,100,stdin);
  printf("enter 2 string");
  fgets(s2,100,stdin);
  printf("\n1-compare \n2-copy");
  printf("enter choice");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:k=strcmp(s1,s2);
           if(k==0)
              printf("strings are same");
           else if(k>0)
               printf("first string is greater");
           else
               printf("second string is greater");
             break;
   case 2:strcpy(s1,s2);
           printf("\n first string=%s",s1);
           printf("\n second string=%s",s2);
           break;
  default:printf("invalid choice");
          break;
   }
}
