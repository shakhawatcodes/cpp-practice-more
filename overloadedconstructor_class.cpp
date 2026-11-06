/*      43.    Write a class declaration named  Circle  with a private member variable named 
  radius . Write set and get functions to access the  radius  variable, and a function 
named  getArea  that returns the area of the circle. The area is calculated as 
  3.14159 * radius * radius    
   44.    Add a default constructor to the  Circle  class in question 43. The constructor should 
initialize the  radius  member to 0.   
   45.    Add an overloaded constructor to the  Circle  class in question 44. The constructor 
should accept an argument and assign its value to the  radius  member variable.   
   46.    Write a statement that defines an array of five objects of the  Circle  class in question 
45. Let the default constructor execute for each element of the array.   
   47.    Write a statement that defines an array of five objects of the  Circle  class in question 
45. Pass the following arguments to the elements’ constructor: 12, 7, 9, 14, and 8.   
   48.    Write a  for  loop that displays the radius and area of the circles represented by the 
array you defined in question 47.    */
#include<iostream>
using namespace std;
class Circle{
  private:
  float radius;
 public:
  Circle()
  { radius =0;}// default constructor.

 Circle(float r1)//overloaded constructor
    {
      radius=r1;
    }

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
Circle c[5]={12, 7, 9, 14, 8};
for(int i=0;i<5;i++)
  {
cout << "Radius: " << c[i].get_radius() << endl;
        cout << "Area: " << c[i].get_Area() << endl;
  }
}





 