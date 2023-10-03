#include <iostream>
using namespace std;

void verificaDia(){
    
    string diasDaSemana[7]{"Domingo","Segunda","Terça","Quarta","Quinta","Sexta","Sabado"};
    int dia;
    cin>> dia;
    
    if (dia == 1) {
        cout<<"O numero da semana selecionado foi: "<<diasDaSemana[0];
    } else if (dia == 2) {
        cout<<"O numero da semana selecionado foi: "<<diasDaSemana[1];
    }else if (dia == 3) {
        cout<<"O numero da semana selecionado foi: "<<diasDaSemana[2];
    }else if (dia == 4) {
        cout<<"O numero da semana selecionado foi: "<<diasDaSemana[3];
    }else if (dia == 5) {
        cout<<"O numero da semana selecionado foi: "<<diasDaSemana[4];
    }else if (dia == 6) {
        cout<<"O numero da semana selecionado foi: "<<diasDaSemana[5];
    }else if (dia == 7) {
        cout<<"O numero da semana selecionado foi: "<<diasDaSemana[6];
    } else {
        cout << "Dia não existente";
    }
}

int main()
{

    cout<<"Domingo = 1, Segunda = 2, Terça = 3,Quarta = 4, Quinta = 5, Sexta = 6, Sabado = 7 \n";
    cout<<"Digite o numero correspondente a o dia da semana \n ";
    verificaDia();
    
}



