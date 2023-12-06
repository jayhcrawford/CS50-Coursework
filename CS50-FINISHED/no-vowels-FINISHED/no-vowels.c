// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>

int replace(string input);

int main(int argc, string argv[])
{
    string input = argv[1];
    replace(input);
    return 0;
}


int replace(string input)
{
    for (int i = 0; input[i] != '\0' ; i++)
    {
        switch(input[i])
        {
            case 'a' :
                printf("6");
                break;
            case 'e' :
                printf("3");
                break;
            case 'i' :
                printf("1");
                break;
            case 'o' :
                printf("0");
                break;
            default :
                printf("%c", input[i]);
                break;
        }
    }
    printf("\n");
    return 0;
}


//
