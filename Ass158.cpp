/*8. Write a function in C to print all unique elements in an array*/
#include<stdio.h>
void duplicate(int b[],int N);
void duplicate(int b[], int N)
{
    int i,j,count=0;
    printf("Unique Elements:");
    for(i=0;i<N;i++)
    {
        count=0;
        for(j=0;j<=N;j++)
        {
            if(i!=j)
             {
              if(b[i]==b[j])
               count++;
            }
         }
           if(count==0)
            printf("%d ",b[i]);
    }
}
int main()
{
    int a[20];
    int n ,i;
    printf("Enter Array Length :");
    scanf("%d",&n);
    printf("Enter Array Elements :\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    duplicate(a,n);
    return 0;
}