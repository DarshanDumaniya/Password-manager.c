#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static const char darshan[] =
"0123456789"
"!@#$%^&*"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";
int size = sizeof(darshan) - 1;

int main()
{
    //password length
    int length = 8;

    srand(time(0));
    for (int i = 0; i < length; i++)
    {
        printf("%c", darshan[rand() % size]);
    }
    return 0;
}