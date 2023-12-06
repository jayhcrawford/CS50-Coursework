#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string input);

int main(void)
{
    string input = get_string("Enter a positive integer: ");

    if (input[1] < 1)
    {
        printf("Invalid Input\n");
        return 1;
    }

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }

    //Convert string to int
    printf("%i\n", convert(input));
}

int convert(string input)
{
    int converted = 0;

    

    return converted;
}
