/* Write a program that uses a structure to store the following data on a company 
division: 
   Division Name (such as East, West, North, or South)  
  First-Quarter Sales  
  Second-Quarter Sales  
  Third-Quarter Sales  
  Fourth-Quarter Sales  
  Total Annual Sales  
  Average Quarterly Sales   
 The program should use four variables of this structure. Each variable should rep
resent one of the following corporate divisions: East, West, North, and South. The 
user should be asked for the four quarters sales figures for each division. Each 
division’s total and average sales should be calculated and stored in the appropriate 
member of each structure variable. These figures should then be displayed on the 
screen. 
  .*/
 
#include <iostream>
using namespace std;

struct division
{
    string Division_Name;
    float First_Quarter_Sales;
    float Second_Quarter_Sales;
    float Third_Quarter_Sales;
    float Fourth_Quarter_Sales;
    float Total_Annual_Sales;
    float Average_Quarterly_Sales;
};

int main()
{
    division east, west, north, south;

    // East Division
    cout << "Enter East division sales:" << endl;

    cout << "Enter 1st quarter sale figure in taka: ";
    cin >> east.First_Quarter_Sales;

    cout << "Enter 2nd quarter sale figure in taka: ";
    cin >> east.Second_Quarter_Sales;

    cout << "Enter 3rd quarter sale figure in taka: ";
    cin >> east.Third_Quarter_Sales;

    cout << "Enter 4th quarter sale figure in taka: ";
    cin >> east.Fourth_Quarter_Sales;

    east.Total_Annual_Sales =
        east.First_Quarter_Sales +
        east.Second_Quarter_Sales +
        east.Third_Quarter_Sales +
        east.Fourth_Quarter_Sales;

    east.Average_Quarterly_Sales =
        east.Total_Annual_Sales / 4;

    cout << "Annual total sale: "
         << east.Total_Annual_Sales << endl;

    cout << "Average quarterly sales: "
         << east.Average_Quarterly_Sales << endl;


    // North Division
    cout << "\nEnter North division sales:" << endl;

    cout << "Enter 1st quarter sale figure in taka: ";
    cin >> north.First_Quarter_Sales;

    cout << "Enter 2nd quarter sale figure in taka: ";
    cin >> north.Second_Quarter_Sales;

    cout << "Enter 3rd quarter sale figure in taka: ";
    cin >> north.Third_Quarter_Sales;

    cout << "Enter 4th quarter sale figure in taka: ";
    cin >> north.Fourth_Quarter_Sales;

    north.Total_Annual_Sales =
        north.First_Quarter_Sales +
        north.Second_Quarter_Sales +
        north.Third_Quarter_Sales +
        north.Fourth_Quarter_Sales;

    north.Average_Quarterly_Sales =
        north.Total_Annual_Sales / 4;

    cout << "Annual total sale: "
         << north.Total_Annual_Sales << endl;

    cout << "Average quarterly sales: "
         << north.Average_Quarterly_Sales << endl;


    // একইভাবে West এবং South করতে হবে

    return 0;
}

