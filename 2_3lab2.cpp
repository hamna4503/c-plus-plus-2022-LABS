#include <iostream>
using namespace std;

const int LENGTH=8;
const int WIDTH=3;

int main(){
    int area;
    int perimeter;

    area=LENGTH*WIDTH;
    perimeter=2*(LENGTH+WIDTH);
    cout<<"The area of the rectangle is "<<area<<endl;
    cout<<"The perimeter of the rectangle is "<<perimeter<<endl;
    return 0;
}