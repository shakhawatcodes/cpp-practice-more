/*    Add a default constructor to the  Circle  class in question 43. The constructor should 
initialize the  radius  member to 0. 
43 .Write a class declaration named  Circle  with a private member variable named 
  radius . Write set and get functions to access the  radius  variable, and a function 
named  getArea  that returns the area of the circle. The area is calculated as 
  3.14159 * radius * radius 






*/
#include<iostream>
using namespace std;
class Circle{
  private:
  float radius;
 public:
  Circle()
  { radius =0;}// default constructor.
 void set_radius(float r)
      {
         radius=r;


      }
 float get_radius(){

   return radius;
 } 
 float get_Area(){ 

 return 3.14159 * radius * radius;
  }
};
int main()
{
Circle c1;
float R;
cout<<"Enter the radius of circle 1:";
cin>>R;
c1.set_radius(R);
cout<<"The radius:"<<c1.get_radius()<<endl;
cout<<"The area is:"<<c1.get_Area();






}
 