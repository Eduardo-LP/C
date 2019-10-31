#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
/*&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&&&& Verificação do voto &&&&&&&&
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&*/
int idade;
    cout << "digite a sua idade: ";
    cin >> idade;
    cout << "\nPela sua idade o voto eh ";

    if(idade >= 18 && idade <=70){
        cout << "Obrigatorio";
    }else if(idade == 16 || idade == 17 || idade > 70){
            cout << "facultativo";
    }else{
        cout << "Invalido";
    }

/*&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
&&&&&&&&&&& Media Escolar &&&&&&&&&&&
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&*/
float n1,n2,n3;
float media;
    cout << "\nDigite suas notas:\n";
    cin >> n1 >> n2 >> n3;
media = (n1 + n2 + n3)/3;
    cout << "A media anual eh: " << media;
    cout << "\nE o aluno esta ";
    if(media >= 8.5){
        cout << "de Parabens";

    }else if(media >= 7 && media < 8.5){
            cout << "passado";

    }else if(media >= 1.66 && media < 7){
            cout << " em Exame";
    }else{
        cout << "reprovado";
    }
}
