#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{

    int cents = get_cents(); // Ask how many cents the customer is owed

    int quarters = calculate_quarters(cents); // Calculate the number of quarters to give the customer
    cents = cents - quarters * 25;

    int dimes = calculate_dimes(cents); // Calculate the number of dimes to give the customer
    cents = cents - dimes * 10;

    int nickels = calculate_nickels(cents); // Calculate the number of nickels to give the customer
    cents = cents - nickels * 5;

    int pennies = calculate_pennies(cents); // Calculate the number of pennies to give the customer
    cents = cents - pennies * 1;

    int coins = quarters + dimes + nickels + pennies; // Sum coins

    printf("%i\n", coins); // Print total number of coins to give the customer
}


int get_cents(void)
{
    int a = -1;
    while (a<0 || a>1000)
    {
        a = get_int("Change owed: ");
    }
    return a;
}

int calculate_quarters(int cents)
{
    int b;
    b = cents/25;
    return b;
}

int calculate_dimes(int cents)
{
    int c;
    c = cents/10;
    return c;
}

int calculate_nickels(int cents)
{
    int d;
    d = cents/5;
    return d;
}

int calculate_pennies(int cents)
{
    int e;
    e = cents/1;
    return e;
}
