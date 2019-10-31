#include <iostream>
using namespace std;

int main(){
 int linha = 10;
 int k = 0;
 int p = 0;

while(k < 10){
    while(p < linha){
        cout << "*";
        p++;
        }
        k++;
        linha--;
        cout << endl;
        p = 0;
    }
}
