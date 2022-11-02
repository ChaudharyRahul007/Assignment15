/*2. Write a function to find the smallest number from the given array of any size. (TSRS)*/
#include<stdio.h>
int small(int b[])
{
    int i,smallest=0;
    smallest=b[0];
    for(i=0;i<=9;i++)
    {
        if(b[i]<smallest)
        smallest=b[i];
    }
    return smallest;

}
int main()
{
    int a[10],i;
    printf("Enter 10 numbers:");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    printf("%d Smallest number :",small(a));
    return 0;
}