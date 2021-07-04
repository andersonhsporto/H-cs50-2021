#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>

void get_grade(int letters, int words, int sentences)
{
    float L;
    float S;
    int index;

    // get average number of letters and sentences per 100 words
    L = (float) letters * 100 / words;
    S = (float) sentences * 100 / words;
    index = round((0.0588 * L) - (0.296 * S) - 15.8);

    //get result
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

int main(void)
{
    //get the text imput!
    string text = get_string("Text: ");

    int i;
    int letters;
    int words;
    int sentences;

    i = 0;
    letters = 0;
    words = 1;
    sentences = 0;
    //find the numbers of letters, words and sentences in input text
    while (i < strlen(text))
    {
        //find number of alphabetic(ascii) letters
        if ((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z'))
        {
            letters++;
        }
        //find number of words (space in ascii table is 32 in dec)
        else if (text[i] == 32)
        {
            words++;
        }
        //find number of sentences (terminated with . ! ?)
        else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
        i++;
    }
    //call function get_grade
    get_grade(letters, words, sentences);
}
