#include <iostream>
#include <iomanip>
#include <vector>
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

int main(){
    double sp = 0;
    double finalValue = 0;
    for(int i = 0;i<2;i++){
        string frase = "";
        getline(cin,frase);
        vector<string> product = split(frase, ' ');
        int unitsofproduct = stoi(product[1]);
        double productPrice = stod(product[2]);
        sp = unitsofproduct * productPrice;
        finalValue += sp;
    }
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << finalValue << endl;
    return 0;
}