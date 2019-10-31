#include <iostream>
using namespace std;

float convert(float cel){
    float a = (cel*1.8)+ 32;
    return a;
}

int main(){
    float fah;
    float cel;
    cout << "digite  temperatura em graus Celsius: ";
    cin >> cel;
    fah = convert(cel);
    cout << "\na temperatura em graus celsius eh " << cel << " e a temperatura em fahrenheit eh " << fah;
    if(cel > 40){
        cout << "\nEsta muito quente meoo!!";
    }
    if(cel < 10){
        cout << "\nEsta muito frio. Estou congelando :(";
    }
    return 0;
}
