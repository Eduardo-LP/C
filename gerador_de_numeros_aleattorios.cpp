#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    //fun��o que pega o time do computador onde esse numero s� � positivo
   srand((unsigned)time(NULL));

   //aleatorio � uma variavel que s� pode assumir numeros de 0 a 2 sendo assim igual a 3 numeros
   int aleatorio = rand()%3;

   cout << aleatorio;

   system("pause");
}
