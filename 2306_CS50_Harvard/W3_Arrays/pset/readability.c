#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

float count_avg(float inputA, float inputB);
float count_letters(string input);
float count_input(string input);
float count_sentences(string input);

int main(void)
{
    string text = get_string("Text: ");
    float sen = count_sentences(text);
    float wurd = count_input(text);
    float lett = count_letters(text);

    //float cavL = (lett / wurd) * 100;
    float cavL = count_avg(lett, wurd);
    //float cavS = (sen / wurd) * 100;
    float cavS = count_avg(sen, wurd);

    // equation store in a variable
    // example of using other equations/algorithms in code
    // float index = 0.0588 * (float) cavL - 0.296 * (float) cavS - 15.8;
    float index = 0.0588 * cavL - 0.296 * cavS - 15.8;

    printf((index < 1) ? "Before Grade 1\n" : (index > 16) ? "Grade 16+\n" : "Grade %i\n", (int) round(index));
}

// returns the average of any given two inputs
float count_avg(float inputA, float inputB)
{
    return (inputA / inputB) * 100;
}

// returns the sum of letters in a given string[]
// Determined by isalpha instead is isupper/lower
float count_letters(string input)
{
    int sum = 0;
    for (int i = 0; i < strlen(input); i++)
    {
        if (isalpha(input[i]))
        {
            sum += 1;
        }
    }
    return sum;
}

// returns the sum of words in a given string[]
// Determined by isblank()
float count_input(string input)
{
    int sum = 1;
    for (int i = 0; i < strlen(input); i++)
    {
        if (isblank(input[i]))
        {
            sum += 1;
        }
    }
    return sum;
}

// returns the sum of sentences in a given string[]
// Determined by !, ?, .
float count_sentences(string input)
{
    int sum = 0;
    for (int i = 0; i < strlen(input); i++)
    {
        if (input[i] == '!' || input[i] == '.' || input[i] == '?')
        {
            sum += 1;
        }
    }
    return sum;
}