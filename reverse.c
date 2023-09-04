#include<stdio.h>
#include<string.h>
int mian()
{
char str[100],temp;
int i=0,j=0;
printf("Enter the string:");
gets(str);
j=strlen(str)-1;
while(i<j)
  {
    temp=str[j];
    str[j]=str[i];
    str[i]=temp;
    i++;
    j--;


  }
  printf("%s",str);





return 0;
//This is the code for reverse of A string}
