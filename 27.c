#include<stdio.h>
#include<string.h>
int main()
{
  char s1[100],s2[100];
  int k,ch;
  printf("enter 1 string");
  fgets(s1,100,stdin);
  printf("enter 2 string");
  fgets(s1,100,stdin);
  printf("\n 1-copy \n 2-compare");
  do
  {
    printf("enter choice");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1 : strcpy(s1,s2);
               printf("first string=%s",s1);
               printf("second string=%s",s2);
               break;
     case 2 : k=strcmp(s1,s2);
              if(k>0)
                 printf("1 string greater");
              else if(k<0)
                  printf("2 string greater");
               else
                  printf("strings are same");
               break;
   default : printf("invalid choice");
             break;
     }
   }while(ch<3);
}

