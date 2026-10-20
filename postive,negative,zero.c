#include<stdio.h>
void main()
{
 int n;
 printf("Enter a number:");
 scanf("%d",&n);
 if(n>0)
 {
  printf("print the number is positive:");
 }
 else if(n<0)
 {
  printf("print the number is negative:");
 }
 else 
 {
  printf("the number is zero:"); 
 }
} 