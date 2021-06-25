#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for height  size
    int numberOfRows;
    do
    {
        numberOfRows = get_int("Height: ");
    }
    while (numberOfRows > 8 || numberOfRows < 1);
    
    // if 1 error
    if (numberOfRows == 1)
    {
        printf("#\n");
    }
    else
        for (int i = 0; i < numberOfRows; i++)
        {
            // prints empty spaces
            for (int k = numberOfRows - i - 2; k >= 0; k--)
            {
                printf(" ");
            }
            // prints # after spaces
            for (int j = 0; j <= i; j++)
            {
                printf("#");
            }
            // moves one line down
            printf("\n");
        }
}
