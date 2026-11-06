/*Write the following function that is passed an array of n pointers to floats and returns a
newly created array that contains those n float values in reverse order.
float* mirror(float* p[], int n)*/
#include <iostream>
using namespace std;

float* mirror(float* p[], int n)
{
    float* re_p = new float[n];
    // নতুন n সংখ্যক float-এর array তৈরি করতে হবে
    // float* re_p[] নয়
    // new float[n] → n সংখ্যক float-এর জন্য memory allocate করবে

    for (int i = n - 1; i >= 0; i--)
    // n থেকে শুরু করা যাবে না, কারণ last index হলো n-1
    {
        re_p[n - 1 - i] = *p[i];//logically chinta.
        // p[i] হলো একটি pointer
        // *p[i] হলো সেই pointer-এর ভিতরের float value
        // সেই value reverse array-তে রাখছি
    }

    return re_p;
    // নতুন তৈরি array-এর প্রথম element-এর address return করছি
}

int main()
{
    float a = 1.2;
    float b = 3.4;
    float c = 5;
    float d = 6.8;
    float e = 9.8;

    float* p[5] = {&a, &b, &c, &d, &e};

    float* result = mirror(p, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << result[i] << " ";
    }

    delete[] result;
    // new[] দিয়ে memory নেওয়া হয়েছিল, তাই delete[] করতে হবে

    return 0;
}