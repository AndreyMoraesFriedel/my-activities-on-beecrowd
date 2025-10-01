#include <iostream>
#include <iomanip>
#include <vector>
#include <math.h>
using namespace std;

vector<string> split(string frase, char c){
    frase += c;
    vector<string> vetparts;
    int checkpoint = 0;
    for(int i = 0;i<frase.size();i++){
        if(frase[i] == c){
            string recorte = "";
            for(int j = checkpoint;j<i;j++){
                recorte += frase[j];
            }
            vetparts.push_back(recorte);
            checkpoint = i + 1;
        }
    }
    return vetparts;
}

double areaTriangulo(double A, double C){
    double area = (A * C) / 2;
    return area;
}

double areaCirculo(double C){
    double PI = 3.14159;
    return PI * pow(C, 2);
}

double areaTrapezio(double A, double B, double C){
    double areaTrapezio = ((A + B) * C) / 2;
    return areaTrapezio;
}

double areaQuadrado(double B){
    return pow(B, 2);
}

double areaRetangulo(double A, double B){
    return A * B;
}

int main(){
    string valores = "";
    getline(cin, valores);
    vector<string> vls = split(valores, ' ');
    
    double A = stod(vls[0]);
    double B = stod(vls[1]);
    double C = stod(vls[2]);
    
    cout << "TRIANGULO: " << fixed << setprecision(3) << areaTriangulo(A, C) << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << areaCirculo(C) << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << areaTrapezio(A, B, C) << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << areaQuadrado(B) << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << areaRetangulo(A, B) << endl;
    
    return 0;
}