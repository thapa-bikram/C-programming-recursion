//Find nth number of fibonacci series.
#include<stdio.h>
int fibo(int n)
{
    if(n==1 || n==2)
    {
        return 1;
    }
    int result = fibo(n-1)+fibo(n-2);
    
    return result;
}
int main()
{
    int num;
    printf("Enter a number \n");
    scanf("%d",&num);
    printf("Result = %d\n",fibo(num));
    return 0;
}