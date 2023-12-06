#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int i;
    int zz = 0;
    do
    {
    i = get_int("Height: ");
    }
    while (i<=0 || i>8);

    int row;
    for (row = 0; row<i; ++row)
    {

        for (int bbb=i-1; bbb>row; bbb--)
        {
        printf(" ");
        }

        for (int aaa=-1; aaa<row; aaa++)
        {
        printf("#");
        }

        printf("  ");

        for (int aaa=-1; aaa<row; aaa++)
        {
        printf("#");
        }

        printf("\n");
    }



}
