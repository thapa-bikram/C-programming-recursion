#include<stdio.h>

void print(int n)
{
    if (n == 0)
    {
        return;
    }

    print(n - 1);
    printf("%d\t", n);
}

int main()
{
    int a;
    printf("Enter the value of n\n");
    scanf("%d", &a);
    print(a);
    return 0;
}
