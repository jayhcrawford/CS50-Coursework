#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 8; i = i + 2)
    {
        printf("%d %d %d %d\n", i, i, i, i);
    }
}
