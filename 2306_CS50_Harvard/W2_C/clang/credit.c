#include <stdio.h>
#include <cs50.h>

void printBrand(long long credit);
bool check_validity(long long credit_card_number);
int findLength(long long n);
bool checksum(long long credit);


int main(void)
{
    long long credit_card_number;
    do 
    {
        credit_card_number = get_long_long("Number: ");
    } 
    while (credit_card_number < 0);
    
    // This task in its simple form
    if (check_validity(credit_card_number))
        printBrand(credit_card_number);
    else 
        printf("INVALID\n");
}

// primary function to our goal
bool check_validity(long long credit_card_number)
{
    // define length with a function
    int len = findLength(credit_card_number); 
    // forumula to meet requirements mentioned
    return ((len == 13 || len == 15 || len == 16) && checksum(credit_card_number));
}

// ancilliary function to the main goal
int findLength(long long n)
{
    int len;
    // N number divide by 10 and increment every time
    for (len = 0; n > 0; n /= 10, len++);
    return len;
}

// abstracted function. 
bool checksum(long long credit)
{
    int sum = 0;
    for (int i = 0; credit != 0; i++, credit /= 10)
    {
        // if even number
        if (i % 2 == 0)
        // add last digit to sum
        sum += credit % 10;
        else 
        {
            int digit = 2 * (credit % 10);
            sum += digit / 10 + digit % 10; 
        }
    }
    return sum % 10 == 0;
}

void printBrand(long long credit)
{
    if ((credit >= 340000000000000 && credit < 350000000000000) || (credit >= 370000000000000 && credit < 380000000000000))
    {
        printf("AMEX\n");
    }
    else if (credit >= 5100000000000000 && credit < 5600000000000000)
    {
        printf("MASTERCARD\n");
    }
    else if ((credit >= 4000000000000 && credit < 5000000000000) || (credit >= 4000000000000000 && credit < 5000000000000000))
    {
        printf("VISA\n");
    }
    // must include this because even though credit card number may meet the input specs it still may fail the brand specs therefore...
    else 
    {
        printf("INVALID\n");
    }
}




