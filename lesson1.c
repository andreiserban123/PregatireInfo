#include <stdio.h>
int main()
{
    int x, y, n;
    scanf("%d", &n);
    x = 1;
    y = n - 1;
    while (x <= y)
    {
        printf("%d %d\n", x, y);
        x++;
        y--;
    }
    return 0;
}
