#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for start size
    int start;
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);
  
    // Prompt for end size
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);

    // Calculate number of years until we reach threshold
    int i;

    i = 0;
    while (start < end)
    {
        start = start + (start / 3) - (start / 4);
        i++;
    }
    printf("Years: %i\n", i);
}
