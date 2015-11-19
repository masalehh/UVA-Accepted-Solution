#include<stdio.h>
int main()
{
    long int n, k, c = 0, d = 0;
    while(scanf("%ld %ld", &n, &k) == 2 && k > 1)
    {

        c = n / k;
        d = n % k;
        n = n + c;
        c = c + d;

            while(c >= k)
                {
                    d = c % k;
                    c = c / k;
                    n = n + c;
                    c = c + d;

                }


        printf("%ld\n", n);
    }

    return 0;
}
