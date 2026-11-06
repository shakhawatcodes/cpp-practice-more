/*Write a function that uses pointers to search for the address of a given integer in a given
array. If the given integer is found, the function returns its address; otherwise it returns
NULL.*/
#include <iostream>
using namespace std;

int* IntegerChecker(int* array, int n, int as)
{
    for (int i = 0; i < as; i++)
    {
        if (*(array + i) == n)
        {
            cout << "Found\n";
            cout << "The address is: ";
            return (array + i);
        }
    }

    return NULL;
}

int main()
{
    int array[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;
    int num = 5;

    int* result = IntegerChecker(array, num, size);

    if (result != NULL)
    {
        cout << result << endl;
        cout << "Value is: " << *result << endl;
    }
    else
    {
        cout << "Not Found\n";
    }
}