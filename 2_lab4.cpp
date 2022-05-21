// Hamna Aamir
#include <iostream>
using namespace std;
int main()
{

float average; 

cout << "Input your average:" << endl;
cin >> average;

if (average >= 90 && average<=100){
    cout << "A category" << endl;
}
else if(average>=80 && average<=89){
    cout<<"B category"<<endl;
}
else if(average >=60 && average <=79 ){
    cout<<"You pass"<<endl;
}
else if(average>=0 && average <=59){
    cout<<"You failed"<<endl;
}
else{
    cout << "Invalid data" << endl;
}
return 0;
}
