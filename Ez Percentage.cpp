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

double a;
double b;
double c;
double d;
double e;
    
cin>>a;
cin>>b;
cin>>c;
cin>>d;
cin>>e;

double marks = a+b+c+d+e;
double total;
cin >> total;
    
double percentage = (marks*100)/total;

cout << "Entered Marks : " << a << " , " << b << " , " << c << " , " << d << " , " << e << endl;

cout << "Total Max. Marks : " << total << endl;

cout << "Marks Obtained In " << total << " : " << marks << endl;

cout << "Percentage : " << percentage << "%";

return 0;


}