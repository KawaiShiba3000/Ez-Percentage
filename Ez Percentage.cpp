#include <iostream>
using namespace std;

/*enter you marks of five subjects with 
space between each of them.....then give 
another space and enter total max. marks
of your exam....
this software will help you get your
total marks out of max. marks and will 
also give you the percentage you got*/


int main() {

    float a;
    float b;
    float c;
    float d;
    float e;
    
cin>>a;
cin>>b;
cin>>c;
cin>>d;
cin>>e;

    float marks = a+b+c+d+e;
    float total;
    cin >> total;
    
float percentage = (marks*100)/total;

cout << "marks out of " << total << " : " << marks << endl;

cout << "percentage : " << percentage << "%";

return 0;


}