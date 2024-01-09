//print n to 1.
#include<stdio.h>
void print(int n,int sum)
{
    if(n==0)
    {
        printf("sum is %d\n",sum);
        return;
    }
    print(n-1,sum+n);
}
int main()
{
    int a ;
    printf("Enter the value of n\n");
    scanf("%d",&a);
    print(a,0);
    return 0;
    
}