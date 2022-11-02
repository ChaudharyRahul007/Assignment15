/*7. Write a function in C to count a total number of duplicate elements in an array.*/
#include<stdio.h>
void duplicate(int b[],int N);
void duplicate(int b[], int N)
{
    int i,j,count=0;
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<=N;j++)
        {
            if(b[i]==b[j])
            count++;
        }
    }
    printf("Count = %d",count);

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