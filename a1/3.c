#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int simple_recursive(string input);

string smaller_conversion[100];

int main (void) {
    string jay = "98";
    int returned = simple_recursive(jay);

    return 0;
}

int simple_recursive(string input) {

    int bb = strlen(input);

    int output[25];

    int hh;
    for ( hh = 0; hh < bb ; hh++ )
    {
    output[hh] = input[hh] - '0';
    printf("%i\n", output[hh]);
    }


    return output;
}
