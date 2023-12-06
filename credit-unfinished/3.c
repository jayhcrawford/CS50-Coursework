#include <stdio.h>
#include <cs50.h>


int main(void)
{
    long creditcard = get_long("Card Number: ");

    char str[256];
    long x = creditcard;
    sprintf(str, "%ld", x);

    int a = str[0] - '0';
    int b = str[1] - '0';
    int c = str[2] - '0';
    int d = str[3] - '0';
    int e = str[4] - '0';
    int f = str[5] - '0';
    int g = str[6] - '0';
    int h = str[7] - '0';
    int i = str[8] - '0';
    int j = str[9] - '0';
    int k = str[10] - '0';
    int l = str[11] - '0';
    int m = str[12] - '0';
    int n = str[13] - '0';
    int o = str[14] - '0';
    int p = str[15] - '0';
    int q = str[16] - '0';

    int bb = (b*2);
    int dd = (d*2);
    int ff = (f*2);
    int hh = (h*2);
    int jj = (j*2);
    int ll = (l*2);
    int nn = (n*2);
    int pp = (p*2);

    int checkSum = (((bb)+(dd)+(ff)+(hh)+(jj)+(ll)+(nn)+(pp)) + ((a)+(c)+(e)+(g)+(i)+(k)+(m)+(o)+(q)))%10;

    if (checkSum==00)
    {
        printf("Valid!\n");
    }
    else
    {
        printf("Invalid\n");
    }

}


//4111111111111113
