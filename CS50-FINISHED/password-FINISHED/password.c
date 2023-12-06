// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

//variables
    int upper = 0;
    int lower = 0;
    int punct = 0;
    int digit = 0;
    int i;
//variables


bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}




bool valid(string password)
{
    int h = strlen(password);
    for (i = 0; i < h; i++)
    {
        if (password[i] >= 'A' && password[i] <= 'Z') // upper characters
        {
            upper = 1;
        }
        if (password[i] >= 'a' && password[i] <= 'z') // lower characters
        {
            lower = 1;
        }
        if ( (password[i] >= '!' && password[i] <= '/') || (password[i] >= ':' && password[i] <= '@') || (password[i] <= '[' && password[i] >= '`') || (password[i] >='{' && password[i] <='{') ) // symbol characters
        {
            punct = 1;
        }
        if (password[i] >= '0' && password[i] <= '9') // number characters
        {
            digit = 1;
        }
    }

    if (digit == 0 || punct == 0 || upper == 0 || lower == 0)
    {
        return false;
    }
    else
    {
        return true;
    }

}
