#include<stdio.h>

int main()
{
    int i, j, t, n, value;
    scanf("%d", &t);
    for(i = 0; i< t; i++)
    {
        scanf("%d", &n);
        value = n * 567;
        value = (value/9) + 7492;
        value = value * 235;
        value = (value/47) - 498;

        if(value < 0)
        {
            value = value * (-1);
        }
        printf("%d\n", (value/10)%10);


    }

    return 0;
}
