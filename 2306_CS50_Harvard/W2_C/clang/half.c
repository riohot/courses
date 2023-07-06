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

    // return a string(" , function(arguments)")
    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}

// TODO: Complete the function
float half(float bill, float tax, int tip)
{
    // calc. tax amount
    float taxAmount = bill * (tax / 100);
    // calc. bill + tax
    float billAmount = bill + taxAmount;
    // cal. tip
    float tipAmount = billAmount * ((float) tip / 100);
    // total
    float total = billAmount + tipAmount;
    // float last = total / 2;
    return total / 2;
}
