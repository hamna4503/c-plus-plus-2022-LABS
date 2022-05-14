// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from the keyboard and the output will go to
// the screen.
// Hamna Aamir
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
int quantity; // contains the amount of items purchased
float itemPrice; // contains the price of each item
float totalBill; // contains the total bill.
cout << setprecision(4) << fixed << showpoint; // formatted output
cout << "Please input the number of items bought" << endl; 
cin>>quantity; 
cout<< " Please enter price: "<<endl;
cin>>itemPrice;
totalBill = quantity * itemPrice ;
cout<<"The total price is $"<<totalBill<<endl;
return 0;
}

