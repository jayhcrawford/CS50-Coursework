#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>


int main(int argc, string argv[])
{
    string input = argv[1];
    // This will find the length of the string.
    int f = strlen(input);
    printf("The length of the string is: %i\n", f);

    //This will give the length of the string minus 1, preparing for recursion.
    int cc = f - 1;

    //This will take the final character in the input and convert it to an integer.
    int char_convert = input[cc];
    char_convert = char_convert-48;

    printf("The character at the end of the string is: %i\n", char_convert);


    printf("The next character will be at index #%i\n", cc);

    string new_string[100];
    int bbb;
    for (bbb = 0 ; bbb <= f ; bbb++)
    {
        new_string[bbb] = &input[bbb];
        printf("%c\n", new_string);
    }




    //This will be the output of the new string.
    printf("The new string is: %s\n", input);



    return 0;

}
