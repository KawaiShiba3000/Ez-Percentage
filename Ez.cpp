#include <iostream>
using namespace std;
int main() {
 
 /*enter your marks of five subjects with space between each of them...
 then give another space and enter total max. marks of exam....
 this will help you obtain your total marks out of max. marks.....
 and will also help in obtain your percentage :) */
 
    int a;
    int b;
    int c;
    int d;
    int e;
cin>>a;
cin>>b;
cin>>c;
cin>>d;
cin>>e;
    int marks = a+b+c+d+e;
    int total;
    cin >> total;
    
auto percentage = (marks*100)/total;

cout << "marks out of " << total << " : " << marks << endl;
cout << "percentage : " << percentage << "%";

return 0;



}