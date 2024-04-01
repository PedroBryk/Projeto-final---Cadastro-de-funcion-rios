#include<iostream>
using namespace std;

int main(){

    const int senha_pedro = 12345;
    const int senha_andre = 54321;
    int senha_digitada;

    cout<<"Digite sua senha de acesso: ";
    cin>>senha_digitada;

    if(senha_digitada == senha_pedro || senha_digitada == senha_andre){

        string nome_funcionario; //utilizando string pois são palavras
        double cpf_funcionario;
        string data_admissao_funcionario;
        string tipo_funcionario;
        int salario_base_funcionario;
        int hora_extra_funcionario;
        const string tipo_funcionario_estagiario = "estagiario";


        cout<<"Digite o nome do funcionario: "<<endl;
        cin>>nome_funcionario;

        cout<<"Digite o CPF do funcionario: ";
        cin>>cpf_funcionario;

        cout<<"Digite a data de admissao do funcionario: "<<endl;
        cin>>data_admissao_funcionario;

        cout<<"Digite o tipo de funcionario (efetivo, temporario, estagiario): "<<endl;
        cin>>tipo_funcionario;

        if(tipo_funcionario == tipo_funcionario_estagiario){

            cout<<"E um estagiario";

        }else{

            cout<<"Digite o salario base do funcionario: "<<endl;
            cin>>salario_base_funcionario;

            cout<<"Digite as horas extras do funcionario: "<<endl;
            cin>>hora_extra_funcionario;
        }

    }else{

        cout<<"Acesso negado - Senha incorreta";

    }

    return 0;
}