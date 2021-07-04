#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<cs50.h>

bool check(string str)
{
    int i;

    i = 0;
    while (i < strlen(str))
    {
        // check if the key is a digit
        if (!isdigit(str[i]))
        {
            return (true);
        }
        i++;
    }
    return (false);
}

void cypher(int key, char *str)
{
    int i;

    i = 0;
    //cypher using input caesar key
    while (str[i] != '\0')
    {
        //check if is lowercase
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            printf("%c", (str[i] - 'a' + key) % 26 + 'a');
        }
        //check if is uppercase
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            printf("%c", (str[i] - 'A' + key) % 26 + 'A');
        }
        else
        {
            printf("%c", str[i]);
        }
        i++;
    }
    printf("\n");
}

int main(int argc, char **argv)
{
    if (argc != 2 || check(argv[1]))
    {
        // warn user if there are more than 1 argument and exit
        printf("Usage: ./caesar key\n");
        return 1;
    }
    //convert string in argv[1] to int and print messages
    int key = atoi(argv[1]);
    //get the plaintext from user
    string str = get_string("plaintext: ");
    printf("ciphertext: ");
    cypher(key, str);
}
