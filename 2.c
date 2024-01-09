//print 1 to n.
#include<stdio.h>
void print(int n,int a)
{
    printf("%d\t",a);
    if(a==n)
    {
        return;
    }
    a++;
    print(n,a);

}
int main()
{
    int a=1;
    int n ;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    print(n,a);
    return 0;
    
}