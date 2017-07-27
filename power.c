#include <stdio.h>
int main()
{
    int n,m,result = 1;

    printf("Enter n value: ");
    scanf("%d", &n);

    printf("Enter m value: ");
    scanf("%d", &m);

    while (m!= 0)
    {
        result *= n;
        --m;
    }

    printf("Answer = %d", result);

    return 0;
}
