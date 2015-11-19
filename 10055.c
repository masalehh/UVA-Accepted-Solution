#include <stdio.h>

int main()
{
    long int a, b;
    while(scanf("%ld %ld", &a , &b) == 2)
    {
        if(a > b)
        {
            printf("%ld\n", a - b );
        }
        else
        {
             printf("%ld\n", b - a );
        }
    }
    return 0;
}
