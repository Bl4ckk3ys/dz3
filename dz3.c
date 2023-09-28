#include <stdio.h>

int main()
{
    int v, u, t1, t2;
    scanf("%d %d %d %d", &v, &u, &t1, &t2);
    printf("%d",((v-u)*t2 + v*t1));
    return 0;
}