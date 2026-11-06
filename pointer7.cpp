/*Write the following function that copies the first n bytes beginning with *s2 into the bytes
beginning with *s1, where n is the number of bytes that s2 has to be incremented before it
points to the null character '\0':
void cpy(char* s1, const char* s2)*/
#include <iostream>
using namespace std;

void cpy(char* s1, const char* s2)
{
    int i = 0, n = 0;   

    while (s2[i] != '\0')
    {
        n++;
        i++;
    }

    for (int j = 0; j < n; j++)  
    {
        s1[j] = s2[j];
    }

    s1[n] = '\0';   // Correction: copied string-এর শেষে null character দিতে হবে

    cout << "s1:\n";

    for (int k = 0; k < n; k++)
    {
        cout << s1[k] << "\n";
    }
}

int main()
{
    char s1[100];
    const char* s2 = "Hello";

    cpy(s1, s2);

    return 0;
}