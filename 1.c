//print n to 1.
#include<stdio.h>
void print(int n)
{
    printf("%d\t",n);
    if(n==1)
    {
        return;
    }
    print(n-1);

}
int main()
{
    int a ;
    printf("Enter the value of n\n");
    scanf("%d",&a);
    print(a);
    return 0;
    
}