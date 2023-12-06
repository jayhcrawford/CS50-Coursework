#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool return26Alpha(string string_character);

string letterSwap(string key_string, string message);


int main(int argc, string argv[])
{
    if (argc == 1)
    {
        printf("Usage: ./substitution key\n");
        return 0;
    }

    string key = argv[1];
    
    int g = strlen(key);


    if (g < 26 || g > 26)
    {
        printf("Key must contain 26 characters.\n");
        return 0;
    }

    if (g == 26)
    {
        bool rr = return26Alpha(key);
        if (rr == 1)
        {
            printf("This String Will Work\n");
        }
    }

        string plaintext = get_string("plaintext: ");
        string output = letterSwap(key, keyLowerC, plaintext);
        printf("%s", output);
        printf("\n");

}


string letterSwap(string lower_key, string key_string, string message)
{
    int i;
    for (i = 0; i <= 26; i++)
    {
        switch(message[i])
        {
            case 'a':
                message[i] = lower_key[i];
            case 'A':
                message[i] = key_string[i];
            case 'b':
                message[i] = lower_key[i];
            case 'B':
                message[i] = key_string[i];
            case 'c':
                message[i] = lower_key[i];
            case 'C':
                message[i] = key_string[i];
            case 'd':
                message[i] = lower_key[i];
            case 'D':
                message[i] = key_string[i];
            case 'e':
                message[i] = lower_key[i];
            case 'E':
                message[i] = key_string[i];
            case 'f':
                message[i] = lower_key[i];
            case 'F':
                message[i] = key_string[i];
            case 'g':
                message[i] = lower_key[i];
            case 'G':
                message[i] = key_string[i];
            case 'h':
                message[i] = lower_key[i];
            case 'H':
                message[i] = key_string[i];
            case 'i':
                message[i] = lower_key[i];
            case 'I':
                message[i] = key_string[i];
            case 'j':
                message[i] = lower_key[i];
            case 'J':
                message[i] = key_string[i];
            case 'k':
                message[i] = lower_key[i];
            case 'K':
                message[i] = key_string[i];
            case 'l':
                message[i] = lower_key[i];
            case 'L':
                message[i] = key_string[i];
            case 'm':
                message[i] = lower_key[i];
            case 'M':
                message[i] = key_string[i];
            case 'n':
                message[i] = lower_key[i];
            case 'N':
                message[i] = key_string[i];
            case 'o':
                message[i] = lower_key[i];
            case 'O':
                message[i] = key_string[i];
            case 'p':
                message[i] = lower_key[i];
            case 'P':
                message[i] = key_string[i];
            case 'q':
                message[i] = lower_key[i];
            case 'Q':
                message[i] = key_string[i];
            case 'r':
                message[i] = lower_key[i];
            case 'R':
                message[i] = key_string[i];
            case 's':
                message[i] = lower_key[i];
            case 'S':
                message[i] = key_string[i];
            case 't':
                message[i] = lower_key[i];
            case 'T':
                message[i] = key_string[i];
            case 'U':
                message[i] = key_string[i];
            case 'u':
                message[i] = lower_key[i];
            case 'V':
                message[i] = key_string[i];
            case 'v':
                message[i] = lower_key[i];
            case 'W':
                message[i] = key_string[i];
            case 'w':
                message[i] = lower_key[i];
            case 'X':
                message[i] = key_string[i];
            case 'x':
                message[i] = lower_key[i];
            case 'Y':
                message[i] = key_string[i];
            case 'y':
                message[i] = lower_key[i];
            case 'Z':
                message[i] = key_string[i];
            case 'z':
                message[i] = lower_key[i];
        }

    }
    return message;
}


bool return26Alpha(string string_character)
{
    bool done = 0;
    bool alphaChecker[26] = {0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0};

    int jj;
    for (jj = 0; jj <= 26; jj++)
    {

    //A or a
    if (string_character[jj] == 'a' || string_character[jj] == 'A')
    {
        alphaChecker[0] = 1;
    }

    //B or b
    if (string_character[jj] == 'b' || string_character[jj] == 'B')
    {
        alphaChecker[1] = 1;
    }

    //C or c
    if (string_character[jj] == 'c' || string_character[jj] == 'C')
    {
        alphaChecker[2] = 1;
    }

    //D or d
    if (string_character[jj] == 'd' || string_character[jj] == 'D')
    {
        alphaChecker[3] = 1;
    }

    //E or e
    if (string_character[jj] == 'e' || string_character[jj] == 'E')
    {
        alphaChecker[4] = 1;
    }

    //F or f
    if (string_character[jj] == 'f' || string_character[jj] == 'F')
    {
        alphaChecker[5] = 1;
    }

    //G or g
    if (string_character[jj] == 'g' || string_character[jj] == 'G')
    {
        alphaChecker[6] = 1;
    }

    //H or h
    if (string_character[jj] == 'h' || string_character[jj] == 'H')
    {
        alphaChecker[7] = 1;
    }

    //I or i
    if (string_character[jj] == 'i' || string_character[jj] == 'I')
    {
        alphaChecker[8] = 1;
    }

    //J or j
    if (string_character[jj] == 'j' || string_character[jj] == 'J')
    {
        alphaChecker[9] = 1;
    }

    //K or k
    if (string_character[jj] == 'k' || string_character[jj] == 'K')
    {
        alphaChecker[10] = 1;
    }

    //L or l
    if (string_character[jj] == 'l' || string_character[jj] == 'L')
    {
        alphaChecker[11] = 1;
    }

    //M or m
    if (string_character[jj] == 'm' || string_character[jj] == 'M')
    {
        alphaChecker[12] = 1;
    }

    //N or n
    if (string_character[jj] == 'n' || string_character[jj] == 'N')
    {
        alphaChecker[13] = 1;
    }

    //O or o
    if (string_character[jj] == 'o' || string_character[jj] == 'O')
    {
        alphaChecker[14] = 1;
    }

    //P or p
    if (string_character[jj] == 'p' || string_character[jj] == 'P')
    {
        alphaChecker[15] = 1;
    }

    //Q or q
    if (string_character[jj] == 'q' || string_character[jj] == 'Q')
    {
        alphaChecker[16] = 1;
    }

    //R or r
    if (string_character[jj] == 'r' || string_character[jj] == 'R')
    {
        alphaChecker[17] = 1;
    }

    //S or s
    if (string_character[jj] == 's' || string_character[jj] == 'S')
    {
        alphaChecker[18] = 1;
    }

    //T or t
    if (string_character[jj] == 't' || string_character[jj] == 'T')
    {
        alphaChecker[19] = 1;
    }

    //U or u
    if (string_character[jj] == 'u' || string_character[jj] == 'U')
    {
        alphaChecker[20] = 1;
    }

    //V or v
    if (string_character[jj] == 'v' || string_character[jj] == 'V')
    {
        alphaChecker[21] = 1;
    }

    //W or w
    if (string_character[jj] == 'w' || string_character[jj] == 'W')
    {
        alphaChecker[22] = 1;
    }

    //X or x
    if (string_character[jj] == 'x' || string_character[jj] == 'X')
    {
        alphaChecker[23] = 1;
    }

    //Y or y
    if (string_character[jj] == 'y' || string_character[jj] == 'Y')
    {
        alphaChecker[24] = 1;
    }

    //Z or z
    if (string_character[jj] == 'z' || string_character[jj] == 'Z')
    {
        alphaChecker[25] = 1;
    }
    }

    bool checked = 1;
    int ww;
    for (ww = 0 ; ww <=26 ; ww++)
    {
        if (alphaChecker[ww] == 1)
        {
        checked = 1;
        }

    }
    if ( checked == 1)
    {
        done = 1;
    }

    if ( checked != 1)
    {
        done = 0;
    }
    return done;
}


