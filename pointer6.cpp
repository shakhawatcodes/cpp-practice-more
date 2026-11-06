/*Write the following function that returns the number of bytes that s has to be incremented
before it points to the null character '\0':
unsigned len(const char* s)*/
#include <iostream>
using namespace std;

unsigned len(const char* s)
{
    int i = 0;
    int count = 0;

    while (s[i] != '\0')
    {
        count++;
        i++;
    }

    return count;
}

int main()
{
    const char* str = "Hello World";

    cout << "Length = " << len(str) << endl;

    return 0;
}