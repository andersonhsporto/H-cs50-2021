#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Get name and return greeting message!
    string name = get_string("What is your name?\n");
    printf("hello, %s\n", name);
}
