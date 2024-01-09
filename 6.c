//print n to 1.
#include<stdio.h>
int sum(int n)
{
    int ans;
     if(n==0 || n==1)
    {
        return n;
    }
    
   ans = n + sum(n-1);
   return ans;

}
int main()
{
    int a ;
    printf("Enter the value of n\n");
    scanf("%d",&a);
    printf("%d\n",sum(a));
    return 0;
    
}