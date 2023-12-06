#include <stdio.h>
#include <stdbool.h>
#include <cs50.h>
#include <string.h>

const int BITS_IN_BYTE = 8;


void print_bulb(int bit);


int main (void)
{
    string input = get_string("Message: ");

    //string_length will be the integer value of the number of characters in 'string' "input." This is given to us by the <string.h> function strlen.
    int string_length = strlen(input);//string_length is now the integer value of the number of characters in 'string' "input".

    // each_letter is initialized to hold the integer value of each character in the array of characters stored in 'string' input.
    int each_letter;

    for ( int i = 0 ; i < string_length ; i++ ) //this "For" Statement (known as a For Loop) iterates (will repeat) UP TO the number of characters in 'string' "input".
    {

    //the "For" loop will take whatever character is at the index of input[i] and place its integer value into each_letter.
    each_letter = input[i];


    //this is a blank binary array. Each position in the array is about to be/not be effected by a proceeding "if" statement.
    //we initialize it to 0,0,0,0,0,0,0,0 because the integer 0 is represented by 00000000 in binary (Base-2).
    bool current_letter[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };



    ////========This is where a series of "If" statements perform checks on whatever integer was stored in integer 'each_letter'.========/////

    //this checks the very first position of the binary character. i^2^0 (1)
    //if the modulus of any number divided by two is zero, then it's an even number. Only odd numbers have a value stored in i^2^0.
    int modulo = (each_letter % 2) + 1;
    if (modulo == 2)
    {
        current_letter[7] = 1;
    }

    //the following "If" statements were the only way that I found to perform these checks.
    //As I was programming them, I realized that there's a larger pattern that could be explained with a smaller, more elegant solution. I did not foray into finding that solution, as I was almost done.

    //checks 2nd row, i^2^1 (2)
    if ((each_letter >= 2 && each_letter < 4)||(each_letter >= 6 && each_letter < 8)||(each_letter >= 10 && each_letter < 12)||(each_letter >= 14 && each_letter < 16)||(each_letter >= 18 && each_letter < 20)||(each_letter >= 22 && each_letter < 24)||(each_letter >= 26 && each_letter < 28)||(each_letter >= 30 && each_letter < 32)||(each_letter >= 34 && each_letter < 36)||(each_letter >= 38 && each_letter < 40)||(each_letter >= 42 && each_letter < 44)||(each_letter >= 46 && each_letter < 48)||(each_letter >= 50 && each_letter < 52)||(each_letter >= 54 && each_letter < 56)||(each_letter >= 58 && each_letter < 60)||(each_letter >= 62 && each_letter < 64)||(each_letter >= 66 && each_letter <68)||(each_letter >= 70 && each_letter < 72)||(each_letter >= 74 && each_letter < 76)||(each_letter >= 78 && each_letter < 80)||(each_letter >= 82 && each_letter < 84)||(each_letter >= 86 && each_letter < 88)||(each_letter >= 90 && each_letter < 92)||(each_letter >= 94 && each_letter < 96)||(each_letter >= 98 && each_letter < 100)||(each_letter >= 102 && each_letter < 104)||(each_letter >= 106 && each_letter < 108)||(each_letter >= 110 && each_letter < 112)||(each_letter >= 114 && each_letter < 116)||(each_letter >= 118 && each_letter < 120)||(each_letter >= 122 && each_letter < 124)||(each_letter >= 126 && each_letter < 128)||(each_letter >= 130 && each_letter < 132)||(each_letter >= 134 && each_letter < 136)||(each_letter >= 138 && each_letter < 140)||(each_letter >= 142 && each_letter < 144)||(each_letter >= 146 && each_letter < 148)||(each_letter >= 150 && each_letter < 152)||(each_letter >= 154 && each_letter < 156)||(each_letter >= 158 && each_letter < 160)||(each_letter >= 162 && each_letter < 164)||(each_letter >= 168 && each_letter < 170)||(each_letter >= 172 && each_letter < 174)||(each_letter >= 176 && each_letter < 178)||(each_letter >= 180 && each_letter < 182)||(each_letter >= 184 && each_letter < 186)||(each_letter >= 188 && each_letter < 190)||(each_letter >= 192 && each_letter <194 )||(each_letter >= 196 && each_letter < 198)||(each_letter >= 200 && each_letter < 202)||(each_letter >= 204 && each_letter < 206)||(each_letter >= 208 && each_letter < 210)||(each_letter >= 212 && each_letter < 214)||(each_letter >= 216 && each_letter < 218)||(each_letter >= 220 && each_letter < 222)||(each_letter >= 224 && each_letter < 226)||(each_letter >= 228 && each_letter < 230)||(each_letter >= 232 && each_letter < 234)||(each_letter >= 236 && each_letter < 238)||(each_letter >= 240 && each_letter < 242)||(each_letter >= 244 && each_letter < 246)||(each_letter >= 248 && each_letter < 250)||(each_letter >= 252 && each_letter < 254)||(each_letter >= 254 && each_letter < 256))
    {
        current_letter[6] = 1;
    }


    //checks 3rd row, i^2^2 (4)
    if ((each_letter >= 4 && each_letter < 8)||(each_letter >= 12 && each_letter < 16 )||(each_letter >= 20 && each_letter < 24)||(each_letter >= 28 && each_letter < 32)||(each_letter >= 36 && each_letter < 40)||(each_letter >= 44 && each_letter < 48)||(each_letter >= 52 && each_letter < 56 )||(each_letter >= 60 && each_letter < 64)||(each_letter >= 68 && each_letter < 72)||(each_letter >= 76 && each_letter < 80)||(each_letter >= 84 && each_letter < 88)||(each_letter >= 92 && each_letter <96)||(each_letter >= 100 && each_letter < 104)||(each_letter >= 108 && each_letter < 112)||(each_letter >= 116 && each_letter < 120)||(each_letter >= 124 && each_letter < 128)||(each_letter >= 132 && each_letter < 136)||(each_letter >= 140 && each_letter < 144)||(each_letter >= 148 && each_letter < 152)||(each_letter >= 156 && each_letter < 160)||(each_letter >= 164 && each_letter < 168)||(each_letter >= 172 && each_letter < 176)||(each_letter >= 180 && each_letter < 184)||(each_letter >= 188 && each_letter < 192)||(each_letter >= 196 && each_letter < 200)||(each_letter >= 204 && each_letter <208)||(each_letter >= 212 && each_letter < 216)||(each_letter >= 220 && each_letter < 224)||(each_letter >= 228 && each_letter < 232)||(each_letter >= 236 && each_letter < 240)||(each_letter >= 244 && each_letter < 248)||(each_letter >= 252 && each_letter <256))
    {
        current_letter[5] = 1;
    }


    //checks 4th row, i^2^3 (8)
    if ((each_letter >= 8 && each_letter < 16)||(each_letter >= 24 && each_letter < 32)||(each_letter >= 40 && each_letter < 48)||(each_letter >= 56 && each_letter < 64)||(each_letter >= 72 && each_letter < 80)||(each_letter >= 88 && each_letter < 96)||(each_letter >= 104 && each_letter < 112)||(each_letter >= 120 && each_letter < 128)||(each_letter >= 136 && each_letter < 144)||(each_letter >= 152 && each_letter < 160)||(each_letter >= 168 && each_letter < 176)||(each_letter >= 184 && each_letter < 192)||(each_letter >= 200 && each_letter < 208)||(each_letter >= 216 && each_letter < 224)||(each_letter >= 232 && each_letter < 240)||(each_letter >= 248 && each_letter < 256))
    {
        current_letter[4] = 1;
    }

    //checks 5th row, i^2^4 (16)
    if ((each_letter >= 16 && each_letter < 32) || (each_letter >= 48 && each_letter < 64) || (each_letter >= 80 && each_letter < 96) || (each_letter >= 112 && each_letter < 128) || (each_letter >= 144 && each_letter < 160) || (each_letter >= 176 && each_letter < 192) || (each_letter >= 208 && each_letter < 224) || (each_letter >= 240 && each_letter < 256))
    {
        current_letter[3] = 1;
    }

    //checks 6th row, i^2^5 (32)
    if ((each_letter >= 32 && each_letter < 64)||(each_letter >= 96 && each_letter < 128)||(each_letter >= 160 && each_letter < 192)||(each_letter >= 224 && each_letter < 256))
    {
        current_letter[2] = 1;
    }

    //checks 7th row, i^2^6 (64)
    if ( (each_letter >= 64 && each_letter < 128) || (each_letter >= 192 && each_letter <= 255) )
    {
        current_letter[1] = 1;
    }

    //checks final row i^2^7 (128)
    if ( each_letter >= 128 )
    {
        current_letter[0] = 1;
    }


    //the procedding "For" Statement will run each bool value in the indexes of 0-7 of current_letter and run it thru the print_bulb function.
    int k;
    for ( k = 0 ; k < 8 ; k++ )
    {
        print_bulb(current_letter[k]);

    }
    //this printf function will go to the next line, the "For" statement that we started for this iteration of input[i] will conclude.
    printf("\n");
    }


}   // NEXT: Either the "For" Statement will repeat, and print the next character in the 'string' input, or if there are no characters, this program will end.


void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
