/*Write a function that uses pointers to copy an array of double.*/
#include<iostream>
using namespace std;
void Copyarray(double* source,double* destination,int n)
        {
          for(int i=0;i<n;i++)
          {
            *(destination+i)=*(source+i);



          }
        }
int main()
{
double source[]={10.5,7.9,2.3,5.9,9.7};
double destination[5];
Copyarray(source,destination,5);

cout<<"Copied Array:\n";

for(int j=0;j<5;j++)
{

cout<<destination[j]<<"\n";




}
return 0;
}


        