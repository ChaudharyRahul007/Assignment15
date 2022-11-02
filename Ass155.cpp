/*5. Write a function to find the first occurrence of adjacent duplicate values in the array. 
Function has to return the value of the element.*/
#include<stdio.h>
int adjacent(int b[], int N);
int adjacent(int b[], int N)
{
    int i;
    for(i=0;i<=N-1;i++)
    {
        if(b[i]==b[i+1])
        return b[i];
    }
    return 0;
}
int main()
{
    int a[20];
     int k,n,i;
    printf("Enter Array length :");
    scanf("%d",&n);
    printf("Enter Array Elements :\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
     k =adjacent(a,n);
     printf("Adjacent duplicates = %d ",k);
     return 0;
}