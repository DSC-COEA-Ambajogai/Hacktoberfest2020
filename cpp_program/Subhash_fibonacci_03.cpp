/*
        Name: Subhash Sarangi
        Program Name: Fibonacci Series
*/

/*########## Program Start ##########*/

#include <iostream>
using namespace std;

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
    cout << "Usage: " << programName << " <Length of the series>" << endl;
    if (msg)
        cout << msg << endl;

    return;
}

void fibonacci(int n)
{
    int prevPrev, prev, current;
    int i;
    prevPrev = 0, prev = 1;

    cout << "[";
    for (i = 0; i < n; i++)
    {
        cout << prevPrev << ", ";
        fflush(NULL);

        current = prevPrev + prev;
        prevPrev = prev;
        prev = current;
    }

    cout << "\b\b]" << endl;

    return;
}

/*########## Program End ##########*/