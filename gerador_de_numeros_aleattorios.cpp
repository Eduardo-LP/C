#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    //função que pega o time do computador onde esse numero só é positivo
   srand((unsigned)time(NULL));

   //aleatorio é uma variavel que só pode assumir numeros de 0 a 2 sendo assim igual a 3 numeros
   int aleatorio = rand()%3;

   cout << aleatorio;

   system("pause");
}
