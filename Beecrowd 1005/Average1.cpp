#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double number1, number2;
    cin >> number1;
    cin >> number2;
    double MEDIA = ((number1 * 3.5) + (number2 * 7.5)) / 11;
    cout << "MEDIA = " << fixed << setprecision(5) << MEDIA << endl;
    return 0;
}