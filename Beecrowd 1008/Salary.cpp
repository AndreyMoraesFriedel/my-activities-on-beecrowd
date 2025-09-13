#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int id, workedHoursAmount;
    double perWorkedHours;
    cin >> id;
    cin >> workedHoursAmount;
    cin >> perWorkedHours;

    double SALARY = workedHoursAmount * perWorkedHours;

    cout << "NUMBER = " << id << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << SALARY << endl;
    return 0;
}