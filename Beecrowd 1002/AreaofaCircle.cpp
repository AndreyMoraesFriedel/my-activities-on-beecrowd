#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double raio;
    cin >> raio;
    double pi = 3.14159;
    double area = pi * pow(raio, 2);
    cout << "A=" << fixed << setprecision(4) << area << endl;
    return 0;
}