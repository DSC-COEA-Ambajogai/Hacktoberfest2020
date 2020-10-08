/*
        Name: Subhash Sarangi
        Program Name: Fibonacci Series
*/

/*########## Program Start ##########*/

#include <stdio.h>
#include <stdlib.h>

// All constant definitions
#define MAX_STRING_LENGTH 128

// Function prototypes
void fibonacci(int n);
void printUsage(char *programName, char *msg);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printUsage(argv[0], NULL);
        exit(1);
    }

    int n = atoi(argv[1]);

    fibonacci(n);

    exit(0);
}

void printUsage(char *programName, char *msg)
{
    printf("Usage: %s <Length of the series>\n", programName);
    if (msg)
        printf("%s\n", msg);

    return;
}

void fibonacci(int n)
{
    int prevPrev, prev, current;
    int i;
    prevPrev = 0, prev = 1;

    printf("[");
    for (i = 0; i < n; i++)
    {
        printf("%d, ", prevPrev);
        fflush(NULL);

        current = prevPrev + prev;
        prevPrev = prev;
        prev = current;
    }

    printf("\b\b]\n");

    return;
}

/*########## Program End ##########*/