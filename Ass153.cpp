/*3. Write a function to sort an array of any size. (TSRS)*/
#include<stdio.h>
int sort(int b[]);
int sort(int b[])
{
    int i,j,temp;
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<=9;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;

            }
        }
    }
    for(i=0;i<=9;i++)
    printf("%d ",b[i]);
}
int main()
{
    int arr[10];
    printf("Enter 10 number :");
    for(int i=0;i<=9;i++)
    scanf("%d",&arr[i]);
    printf("Array Elements\n");
    sort(arr);
    
    return 0;
}