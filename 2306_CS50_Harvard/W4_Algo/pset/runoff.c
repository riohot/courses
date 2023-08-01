#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

// Max voters and candidates
#define MAX_VOTERS 100
#define MAX_CANDIDATES 9

// GLOBAL 2D array
// We set the max size BUT it doesnt HAVE to BE that SIZE.
// We then populate it below
// preferences[i][j] is jth preference for voter i
int preferences[MAX_VOTERS][MAX_CANDIDATES];

// Candidates have name, vote count, eliminated status
typedef struct
{
    string name;
    int votes;
    bool eliminated;
}
candidate;

// Array of candidates - Datatype candidate (Created above)
candidate candidates[MAX_CANDIDATES];

// Numbers of voters and candidates
int voter_count;
int candidate_count;

// Function prototypes
bool vote(int voter, int rank, string name);
void tabulate(void);
bool print_winner(void);
int find_min(void);
bool is_tie(int min);
void eliminate(int min);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: runoff [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1; // minus the filename
    if (candidate_count > MAX_CANDIDATES)
    {
        printf("Maximum number of candidates is %i\n", MAX_CANDIDATES);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
        candidates[i].eliminated = false;
    }

    voter_count = get_int("Number of voters: ");
    if (voter_count > MAX_VOTERS)
    {
        printf("Maximum number of voters is %i\n", MAX_VOTERS);
        return 3;
    }

    // Keep querying for votes
    // NESTED LOOP
    for (int i = 0; i < voter_count; i++)
    {

        // Query for each rank
        for (int j = 0; j < candidate_count; j++)
        {
            string name = get_string("Rank %i: ", j + 1);

            // Record vote, unless it's invalid
            // i = voter
            // j = rank

            if (!vote(i, j, name))
            {
                printf("Invalid vote.\n");
                return 4;
            }
        }

        printf("\n");
    }

    // Keep holding runoffs until winner exists
    while (true)
    {
        // Calculate votes given remaining candidates
        tabulate();

        // Check if election has been won
        bool won = print_winner();
        if (won)
        {
            break;
        }

        // Eliminate last-place candidates
        int min = find_min();
        bool tie = is_tie(min);

        // If tie, everyone wins
        if (tie)
        {
            for (int i = 0; i < candidate_count; i++)
            {
                if (!candidates[i].eliminated)
                {
                    printf("%s\n", candidates[i].name);
                }
            }
            break;
        }

        // Eliminate anyone with minimum number of votes
        eliminate(min);

        // Reset vote counts back to zero
        for (int i = 0; i < candidate_count; i++)
        {
            candidates[i].votes = 0;
        }
    }
    return 0;
}

//--------------------------------------------

// Record preference if vote is valid
bool vote(int voter, int rank, string name)
{
    // TODO
    for (int i = 0; i < candidate_count; i++)
    {
            if ((strcasecmp(candidates[i].name, name) == 0))
            {
                {
                    // If we know that later on we will be running i, J through this as a nested loop
                    // Then its perhaps obvious voter and rank just represent i,J
                    // i cycles through 0,1,2 etc
                    // if(name) >> assign name at position[i][j] to cycle i
                    preferences[voter][rank] = i;
                    return true;
                }
            }
    }
    return false;
}

// Tabulate votes for non-eliminated candidates
void tabulate(void)
{
    // TODO
    // Nested for loop

    for (int i = 0; i < voter_count; i++)
    {
            for (int j = 0; j < candidate_count; j++)
            {
                // candidates[array location]
                if (!(candidates[preferences[i][j]].eliminated))
                {
                    // Adding to the box of [][]
                    // This is how it registers points for "1st place" by count ++ and then immediately breaking
                    candidates[preferences[i][j]].votes++;
                    break;
                }
            }
    }
    return;
}

// Print the winner of the election, if there is one
bool print_winner(void)
{
    // TODO
    // +50% vote = win
    // print
    // return true

    for (int i = 0; i < candidate_count; i++)
    {
        if (!(candidates[i].eliminated) && candidates[i].votes > voter_count / 2)
        {
            printf("Winner: %s\n", candidates[i].name);
            return true;
        }
    }

    return false;
}

// Return the minimum number of votes any remaining candidate has
int find_min(void)
{
    // TODO
    // if elimination is false {}
    // cycle through candidates[i].votes

    int min = candidates[0].votes;

    for (int i = 0; i < candidate_count; i++)
    {
        if (!(candidates[i].eliminated) && candidates[i].votes < min)
        {
            min = candidates[i].votes;
        }
    }
    // return number
    return min;
}

// Return true if the election is tied between all candidates, false otherwise
bool is_tie(int min)
{
    // TODO
    // if eliminated is false{}
    // true if election is tied else..

    // How many candidates have NOT been eliminated
    // How many candidates have the MIN votes (anything < min will be eliminated)
    // if BOTH are SAME we have a tie

    int elim = 0;
    int voteMin = 0;

    for (int i = 0; i < candidate_count; i++)
    {
        if (!(candidates[i].eliminated))
        {
            elim++;
        }
        if (candidates[i].votes == min)
        {
            voteMin++;
        }
    }
    if (elim == voteMin)
    {
        return true;
    }
    return false;
}

// Eliminate the candidate (or candidates) in last place
void eliminate(int min)
{
    // TODO
    // for loop
    // if eliminated = false{} && i.votes = min {elminated = true}

    for (int i = 0; i < candidate_count; i++)
    {
        if (!(candidates[i].eliminated) && candidates[i].votes == min)
        {
            candidates[i].eliminated = true;
        }
    }

    return;
}