/*1. Write a function to find the greatest number from the given array of any size. (TSRS)*/
#include<stdio.h>
int greatest(int b[])
{
    int i,max=0;
    max=b[0];
    for(i=0;i<=9;i++){
         if(b[i]>max)
        {
           max=b[i];
        }
    }
       
    return max;
}

int main()
{
    int a[10],k;
    printf("Enter 10 numbers:");
    for(int i=0;i<=9;i++)
    scanf("%d",&a[i]);
    k=greatest(a);
     printf(" %d Greatest Number:",k);
    return 0;
}