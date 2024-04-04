#include<iostream>
using namespace std;

int main(){

    const int senha_pedro = 12345;
    const int senha_andre = 54321;
    int senha_digitada;

    cout<<"Bem-vindo ao CalcMaster!"<<endl;
    cout<<"Digite sua senha de acesso: ";
    cin>>senha_digitada;

    if(senha_digitada == senha_pedro || senha_digitada == senha_andre){

        string nome_funcionario; //utilizando string pois são palavras
        string cpf_funcionario;
        string endereco_funcionario;
        string data_admissao_funcionario;
        string tipo_funcionario;
        double salario_base_funcionario;
        int hora_extra_funcionario;
        int valor_hora_extra_funcionario;
        int dia_trabalhado;
        const string tipo_funcionario_estagiario = "estagiario";
        const string tipo_funcionario_efetivo = "efetivo";
        const string tipo_funcionario_temporario = "temporario";
        const double desconto_previdenciario = 0.08;
        const double desconto_imposto_renda = 0.12;
        int salario_base;
        const char hora_extra_positivo = 'S';
        const char hora_extra_positivo_2 = 's';
        char resposta;
        double valor_hora_extra;

        cout<<"Digite o nome do funcionario: "<<endl;
        cin>>nome_funcionario;

        cout<<"Digite o CPF do funcionario: "<<endl;
        cin>>cpf_funcionario;

        cout<<"Digite o endereco do funcionario: "<<endl;
        cin.ignore(); // Limpa o buffer de entrada antes de getline()
        getline(cin, endereco_funcionario);

        cout<<"Digite a data de admissao do funcionario: "<<endl;
        cin>>data_admissao_funcionario;

        cout<<"Digite o tipo de funcionario (efetivo, temporario, estagiario): "<<endl;
        cin>>tipo_funcionario;

        if(tipo_funcionario == tipo_funcionario_estagiario){

            const int salario_estagiario = 800;

            cout<<"Digite quantos dias o funcioario foi trabalhar: ";
            cin>>dia_trabalhado;

            cout<<"Holerite de "<<nome_funcionario<<" :"<<endl;
            cout<<"CPF: "<<cpf_funcionario<<endl;
            cout<<"Endereco: "<<endereco_funcionario<<endl;
            cout<<"Data de admissao: "<<data_admissao_funcionario<<endl;
            cout<<"Tipo de funcionario: "<<tipo_funcionario<<endl;
            cout<<"Dias trabalhados: "<<dia_trabalhado<<endl;
            cout<<"Salario: "<<salario_estagiario<<endl;
      
        }else if(tipo_funcionario == tipo_funcionario_efetivo){

            cout<<"Digite quantos dias o funcioario foi trabalhar: ";
            cin>>dia_trabalhado;

            cout<<"Digite o salario base do funcionario: ";
            cin>>salario_base;

            cout<<"O funcionario fez horas extras (S/N)? ";
            cin>>resposta;

            if(resposta == hora_extra_positivo || resposta == hora_extra_positivo_2){

            cout<<"Qual o valor da hora extra?  ";
            cin>>valor_hora_extra;

            cout<<"Quantas horas extras esse funcionario fez? ";
            cin>>hora_extra_funcionario;

            double valor_total_hora_extra = valor_hora_extra*hora_extra_funcionario;

            double desconto_total_previdenciario = salario_base*desconto_previdenciario;
            double desconto_total_imposto_renda = salario_base*desconto_imposto_renda;
            double desconto_total_impostos = desconto_total_previdenciario+desconto_total_imposto_renda;

            double salario_descontado = salario_base-desconto_total_impostos;

            double salario_total = salario_descontado+valor_total_hora_extra;

            cout<<"Holerite de "<<nome_funcionario<<" :"<<endl;
            cout<<"CPF: "<<cpf_funcionario<<endl;
            cout<<"Endereco"<<endereco_funcionario<<endl;
            cout<<"Data de admissao: "<<data_admissao_funcionario<<endl;
            cout<<"Tipo de funcionario: "<<tipo_funcionario<<endl;
            cout<<"Dias trabalhados: "<<dia_trabalhado<<endl;
            cout<<"Total de horas extras: "<<hora_extra_funcionario<<endl;
            cout<<"Salario: "<<salario_total<<endl;

            }else{

            double desconto_total_previdenciario = salario_base*desconto_previdenciario;
            double desconto_total_imposto_renda = salario_base*desconto_imposto_renda;
            double desconto_total_impostos = desconto_total_previdenciario+desconto_total_imposto_renda;

            double salario_descontado = salario_base-desconto_total_impostos;

            cout<<"Holerite de "<<nome_funcionario<<" :"<<endl;
            cout<<"CPF: "<<cpf_funcionario<<endl;
            cout<<"Endereco"<<endereco_funcionario<<endl;
            cout<<"Data de admissao: "<<data_admissao_funcionario<<endl;
            cout<<"Tipo de funcionario: "<<tipo_funcionario<<endl;
            cout<<"Dias trabalhados: "<<dia_trabalhado<<endl;
            cout<<"Total de horas extras: "<<hora_extra_funcionario<<endl;
            cout<<"Salario: "<<salario_descontado<<endl;

            }
        }else if(tipo_funcionario == tipo_funcionario_temporario){

            cout<<"Digite o salario base do funcionario: ";
            cin>>salario_base;

            cout<<"Digite quantos dias o funcioario foi trabalhar: ";
            cin>>dia_trabalhado;

            double salario_dia_funcionario_temporario = salario_base/30;
            
            double salario_total_funcionario_temporario = salario_dia_funcionario_temporario*dia_trabalhado;
            
            cout<<"Holerite de "<<nome_funcionario<<" :"<<endl;
            cout<<"CPF: "<<cpf_funcionario<<endl;
            cout<<"Endereco"<<endereco_funcionario<<endl;
            cout<<"Data de admissao: "<<data_admissao_funcionario<<endl;
            cout<<"Tipo de funcionario: "<<tipo_funcionario<<endl;
            cout<<"Dias trabalhados: "<<dia_trabalhado<<endl;
            cout<<"Salario: "<<salario_total_funcionario_temporario<<endl;

        }

    }else{

        cout<<"Acesso negado - Senha incorreta";

    }

    return 0;
}