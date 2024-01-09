//Make a function which calculates a raised to the power b using recursion.
#include<stdio.h>
int cal(int num, int pow)
{
    if(pow==0)
    {
        return 1;
    }
    int result=1;
    result = num*cal(num,pow-1);
    return result;
}
int main()
{
    int num,pow;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("Enter power\n");
    scanf("%d",&pow);
    printf("The result is %d\n",cal(num,pow));   
    return 0;
}