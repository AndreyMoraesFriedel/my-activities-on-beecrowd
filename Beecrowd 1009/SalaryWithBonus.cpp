#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string name;
    double fixedSalary, totalMade;
    cin >> name;
    cin >> fixedSalary;
    cin >> totalMade;
    double bonus = totalMade * 0.15;
    double finalSalary = fixedSalary + bonus; 
    cout << "TOTAL = R$ " << fixed << setprecision(2) << finalSalary << endl;
    return 0;
}