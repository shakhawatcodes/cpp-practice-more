/*Write a function that is passed an array of n pointers to floats and returns a pointer to the
maximum of the n floats.*/
#include <iostream>
using namespace std;

float* returnMax(float* array[], int n)
{
    float* max = array[0];   
    // max-এর মধ্যে প্রথম float-এর address রাখলাম

    for (int i = 1; i < n; i++)
    {
        if (*max < *array[i])
        // *max = max-এর value
        // *array[i] = current value
        {
            max = array[i];
            // maximum পাওয়া গেলে তার address max-এ রাখলাম
        }
    }

    return max;
    // maximum value-এর address return করবে
}

int main()
{
    float a = 1.2;
    float b = 3.4;
    float c = 5;
    float d = 6.8;
    float e = 9.8;

    float* array[5] = {&a, &b, &c, &d, &e};
    // এখানে pointer array নিতে হবে
    // array[0] = &a
    // array[1] = &b
    // array[2] = &c
    // array[3] = &d
    // array[4] = &e

    cout << returnMax(array, 5);cout<<"\n";
    cout << *returnMax(array, 5);
    // returnMax() একটি address return করছে
    // তাই * দিয়ে সেই address-এর value বের করছি

    return 0;
}