#include<stdio.h>
#include<string.h>
int main()
{
 char s1[100],s2[100],s3[100];
 int i,j,k;
 printf("enter 1 string");
 fgets(s1,100,stdin);
 printf("enter 2 string");
 fgets(s2,100,stdin);
 printf("enter 3 string");
 fgets(s3,100,stdin);
 for(i=0;s1[i]!='\0';i++);
 for(j=0;s2[j]!='\0';j++);
 for(k=0;s3[k]!='\0';k++);
 if(i<j&&i<k)
    printf("\n 1 string is smaller=%s",s1);
 else if(j<k&&j<i)
    printf("\n 2 string is smaller=%s",s2);
 else
    printf("\n 3 string is smaller=%s",s3);
}
