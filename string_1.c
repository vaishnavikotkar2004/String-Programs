//Write a c program that accept a string and character to search.the program which will search for the position of occurence of the character in the string otherwise character is not found in the string
#include<stdio.h>
#include<string.h>
int main()
{
  char s1[100],ch;
  int i,flag=-1;
  printf("enter string");
  fgets(s1,100,stdin);
  printf("enter character");
  scanf("%c",&ch);
  for(i=0;s1[i]!='\0';i++)
  {
    if(s1[i]==ch)
     {
       flag=i;
       break;
     }
  }
  if(flag==-1)
     printf("character is not found");
  else
     printf("character is found=%d",flag);
}
