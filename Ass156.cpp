/*6. Write a function in C to read n number of values in an array and display it in reverse 
order.*/
#include<stdio.h>
void reverse(int b[] , int N);
void reverse(int b[] , int N)
{
    int i;
    printf("Revers Order :");
    for(i=N;i>=0;i--)
    {
        printf("%d ",b[i]);
    }
}

int main()
{
    int a[20];
    int i,n;
    printf("Enter Array Lengths :");
    scanf("%d",&n);
    printf("Enter Elements :\n");
    for(i=0;i<=n;i++)
    scanf("%d",&a[i]);
    reverse(a,n);
    return 0;
}