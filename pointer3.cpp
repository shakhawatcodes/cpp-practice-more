/*Write a function that is passed an array of n pointers to floats and returns a newly created
array that contains those n float values.*/


#include <iostream>
using namespace std;

float* ReturnArray(float* array[], int n)
{
    float* newArray = new float[n];

    for(int i = 0; i < n; i++)
    {
        newArray[i] = *(array[i]);
    }

    return newArray;
}

int main()
{
    float a = 1.2;
    float b = 3.2;
    float c = 3.0;
    float d = 3.0;
    float e = 3.0;
    float f = 5.6;
    float g = 8.9;
    float h = 7.0;

    float* array[8] = {&a, &b, &c, &d, &e, &f, &g, &h};

    int numelement = 8;

    float* result = ReturnArray(array, numelement);

    for(int i = 0; i < numelement; i++)
    {
        cout << result[i] << " ";
    }

    delete[] result;
}