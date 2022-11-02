/*4. Write a function to rotate an array by n position in d direction. The d is an indicative 
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and 
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )*/
#include<stdio.h>
void position(int b[],int N);
void position(int b[], int N)
{
    int i,temp=0,d=2;
     while(d!=0)
       {
        temp=b[N];
        for(i=N;i>0;i--)
        {
            b[i]=b[i-1];
        }
           b[0]=temp;
           d--;
       }
       for(i=0;i<N;i++)
       printf("%d ",b[i]);
}
  int main()
{
 int a[20];
 int i,n;
 printf("Enter Array Lenght:");
 scanf("%d",&n);
 printf("Enter Array Elements:");
 for(i=0;i<n;i++)
 scanf("%d\n",&a[i]);
  position(a,n);
return 0;

}