#include <cs50.h>
#include <stdio.h>

// para avisar ao compilador que essa funçao existe, mesmo que ela seja definida depois do main
void print_row(int bricks);

int main(void)
{
    // Prompt user for height (int)
    int height;
    do
    {
        height = get_int("Height: ");
    } 
    while (height < 1);


    // Print pyramid of that height
    for (int i = 1; i <= height; i++)
    {
        // Print row based on width row    
        print_row(i);
    }
}

// Given a number of bricks, print that number of bricks.
void print_row(int bricks)
{
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("\n");
}
