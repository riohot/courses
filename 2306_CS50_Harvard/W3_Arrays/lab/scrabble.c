#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    // if (score1 > score2)
    // {
    //     printf("Player 1 wins!\n");
    // }
    // else if (score1 < score2)
    // {
    //     printf("Player 2 wins!\n");
    // }
    // else
    // {
    //     printf("Tie!\n");
    // }

    printf("%s\n", (score1 > score2) ? "Player 1 wins!" : (score1 < score2) ? "Player 2 wins!" : "Tie!");
    // printf p1 wins if score1 > score2
    // printf p2 wins if score1 < score2
    // else tie

}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    int sum = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        if (isupper(word[i]))
        {
            int x = word[i] - 65;
            sum += POINTS[x];
        }
        else if (islower(word[i]))
        {
            int x = word[i] - 97;
            sum += POINTS[x];
        }
        else if (ispunct(word[i]))
        {
            sum += 0;
        }
        // letter - 65
        // sum+= points[letter - 65] // didnt update
        //
    }
    return sum;
}

// original logic understanding that String is a collection of Chat
// then you can work with char as if they are ints
// maths then to convert this defauly ASCII code to Alphabeticall
// check through our iteration if uppercase > - 65 > += sum
// or through our iteration is lowercase > - 97 > += sum
// else if punct > + 0;
// return
// compare and print through if (logic) print etc


 // get out letter
        //int x = word[i] - 65;
        // letter - 65
        // sum+= points[letter - 65] // didnt update
        // sum += POINTS[x];
        //