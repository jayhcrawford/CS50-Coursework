// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}

// TODO: Complete the function
float half(float bill, float tax, int tip)
{
    float x = bill * ( tax / 100 ); //returns tax
    float y = bill + x; //returns bill with tax
    float z = y*tip/100; //returns tip
    float a = y + z; //returns bill with tax and tip
    float b = a / 2; //splits the bill
    return b;
}
