#include<stdio.h>

int main()
{
    long long a;

    while(scanf("%lld\n", &a) == 1)
    {
        if(a<0)
        {
            break;
        }
      printf("%lld", (a*(a+1)/2)+1);
    }
    return 0;210000000
}
