/*10. Write a function in C to count the frequency of each element of an array*/
#include<stdio.h>
void frequency(int a[],int b[],int N);
void frequency(int a[],int b[],int N)
{
    int i,j;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
        b[i]=1;
    }
    for(i=0;i<N;i++)
    {
        if(b[i]==0)
        continue;
        for(j=i+1;j<N;j++)
        {
            if(b[i]==0)
            continue;
            if(a[i]==a[j])
            {
                b[i]++;
                b[j]=0;
            }
        }
    }
    printf("\nFrequencies are :");
    for(i=0;i<N;i++)
    {
        if(b[i]!=0)
        printf("\n Frequency %d is %d ",a[i],b[i]);
    }
}
int main()
{
    int a[10],f[10];
    int n;
    printf("Enter Array Length :");
    scanf("%d",&n);
    printf("Enter Elements:\n");
    frequency(a,f,n);
    return 0;
}