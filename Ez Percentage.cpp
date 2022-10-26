#include <iostream>
using namespace std;

/*enter you marks of five subjects..... then enter total max. marks of your exam 

This software will help you get your total marks out of max. marks and will also give you the percentage you got*/


int main() {

double marks[5];
for (int i = 0;i < 5;i++) {
    cin >> marks[i];
}

double tmarks = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];
double total;
cin >> total;
    
double percentage = (tmarks*100)/total;

cout << "Entered Marks : " << marks[0] << " , " << marks[1] << " , " << marks[2] << " , " << marks[3] << " , " << marks[4] << endl;

cout << "Total Max. Marks : " << total << endl;

cout << "Total Marks Obtained Out Of " << total << " : " << tmarks << endl;

cout << "Percentage : " << percentage << "%";

return 0;


}