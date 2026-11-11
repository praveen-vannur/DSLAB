#include <stdio.h>
int main()
{
    int a[10][10], s, v, i, j, count;
    printf("Enter number of states and vehicles per state: ");
    scanf("%d%d", &s, &v);
    for(i = 0; i < s; i++)
    {
        printf("Enter registrations for state %d:\n", i + 1);
        for(j = 0; j < v; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < s; i++)
    {
        count = 0;
        for(j = 0; j < v; j++)
        {
            count++;
        }
        printf("State %d: %d vehicles\n", i + 1, count);
    }
    return 0;
}

