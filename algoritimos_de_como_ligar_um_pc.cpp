#include <iostream>

using namespace std;

int main (){
    int passos,conf;

    cout << "selecione a configuracao desejada:\n" <<
            "selecione 1 para abrir os passos:\n"  <<
            "selecione 2 para abrir o painel de ajuda\n";

    cin >> conf;

    if (conf == 1){
        cout << "selecione qual passo voce deseja ir:\n" <<
                "pressionando 6 sera possivel visualizar todo o algoritmo mais resumido\n";
        cin >> passos;
        while (passos <= 6){
           if (passos == 1){
            cout << "verifique se o computador esta conectado na tomada\n";
           cin >> passos;
           }
           if (passos == 2){
            cout << "pressionar o botao ligar\n";
           cin >> passos;
           }
           if (passos == 3){
            cout << "selecionar um sistema operacional\n";
           cin >> passos;
           }
           if (passos  == 4){
            cout << "fazer login\n";
           cin >> passos;
           }
           if (passos == 5){
            cout << "se divertir\n";
            cin >> passos;
           }
           if (passos == 6){
            cout << " para ligar um computador.\n" << "primeiro nos precisamos saber se ele esta ligado na tomada\n" << "E depois fazemos todos os procedimentos acima\n";
           cin >> passos;
           }
        }
    }else if (conf == 2){
         cout << "ligue para o eduardo lemos: 996484748\n";

    }else {
        cout << "configuracao errada\n";
    }





}
