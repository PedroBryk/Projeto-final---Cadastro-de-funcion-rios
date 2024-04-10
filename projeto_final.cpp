#include<iostream>//Introdução da biblioteca iostream para adicionas os operadores cout e cin
using namespace std;//Introduçaõ da namespace std para facilitar a digitação do código

int main(){//Introduzindo a função principal

    const int senha_pedro = 2023118578;//Senha do primeiro usuário
    const int senha_andre = 2023220541;//Senha do segundo usuário
    int senha_digitada;//Variável para armazenar a senha digitada 

    cout<<"================= Bem-vindo ao CalcMaster! =================";//Mensagem de boas vindas
    cout<<"\nDigite sua senha de acesso: ";//Solicitação de senha 
    cin>>senha_digitada;//Armazenando a senha digitada
    cout<<"============================================================"<<endl;

    if(senha_digitada == senha_pedro || senha_digitada == senha_andre){//Utilizando a condicional para saber o funcionário

        string nome_funcionario; //Variável do nome do funcionário
        string cpf_funcionario;//Variável do cpf do funcionário
        string endereco_funcionario;//Variável do endereço do funcionário
        string data_admissao_funcionario;//Variável da data de adimissão do funcionário
        string tipo_funcionario;//Variável do tipo de funcionário
        double salario_base_funcionario;//Variável do salário base do funcionário
        int hora_extra_funcionario;//Variável da hora extra do funcionário
        int valor_hora_extra_funcionario;//Variável do valor da hora extra do funcionário
        int dia_trabalhado;//Variável dos dias trabalhados
        const string tipo_funcionario_estagiario = "estagiario";//Variável para o estagiário
        const string tipo_funcionario_efetivo = "efetivo";//Variável para o efetivo
        const string tipo_funcionario_temporario = "temporario";//Variável para o temporário
        const double desconto_previdenciario = 0.08;//Variável do desconto previdenciário
        const double desconto_imposto_renda = 0.12;//Variável do descontodo imposto de renda
        int salario_base;//Variável do salário base
        const char hora_extra_positivo = 'S';//Variável da confirmação
        const char hora_extra_positivo_2 = 's';//Variável da confirmação, mas com s minúsculo
        char resposta;//Variável da resposta
        double valor_hora_extra;//Variável do valor da hora extra

        cout<<"Digite o nome do funcionario: ";//Solicitando o nome do funcionário
        cin>>nome_funcionario;//Armazenando o nome do funcionário

        cout<<"Digite o CPF do funcionario: ";//Solicitando o cpf do funcionário
        cin>>cpf_funcionario;//Armazenando o cpf do funcionário

        cout<<"Digite o endereco do funcionario: ";//Solicitando endereco do funcionario
        cin.ignore(); // Limpa o buffer de entrada antes de getline()
        getline(cin, endereco_funcionario);//Permitindo a utilização de espaço na variável 

        cout<<"Digite a data de admissao do funcionario: ";//Solicitando a data de admissao do funcionário
        cin>>data_admissao_funcionario;//Armazenando a data de admissão do funcionário

        cout<<"Digite o tipo de funcionario (efetivo, temporario, estagiario): ";//Solicitando o tipo de funcionário
        cin>>tipo_funcionario;//Armazenando o tipo de funcionário

        if(tipo_funcionario == tipo_funcionario_estagiario){//Verificando se o tipo de funcionário é estagiário

            const int salario_estagiario = 800;//Variável do salário do estagiário 

            cout<<"Digite quantos dias o funcioario foi trabalhar: ";//Solicitando o número de dias que o funcionário foi trabalhar
            cin>>dia_trabalhado;//Armazenando o número de dias trabalhados
            cout<<"============================================================"<<endl;
            cout<<"Holerite de "<<nome_funcionario<<" :"<<endl;//Exibindo o portador do holerite
            cout<<"CPF: "<<cpf_funcionario[0]<<cpf_funcionario[1]<<cpf_funcionario[2]<<"."<<cpf_funcionario[3]<<cpf_funcionario[4]<<cpf_funcionario[5]<<"."<<cpf_funcionario[6]<<cpf_funcionario[7]<<cpf_funcionario[8]<<"-"<<cpf_funcionario[9]<<cpf_funcionario[10]<<endl;//Exibindo o cpf do funcionário
            cout<<"Endereco: "<<endereco_funcionario<<endl;//Exibindo o endereço funcionário
            cout<<"Data de admissao: "<<data_admissao_funcionario<<endl;//Exibindo a data de admissão do funcionário
            cout<<"Tipo de funcionario: "<<tipo_funcionario<<endl;//Exibindo o tipo de funcionário
            cout<<"Dias trabalhados: "<<dia_trabalhado<<endl;//Exibindo a quantidade de dias trabalhados do funcionário
            cout<<"Salario: "<<salario_estagiario<<endl;//Exibindo o salário do funcionário
      
        }else if(tipo_funcionario == tipo_funcionario_efetivo){//Verificando se o tipo de funcionário é efetivo

            cout<<"Digite quantos dias o funcionario foi trabalhar: ";//Solicitando o número de dias trabalhados do funcionário
            cin>>dia_trabalhado;//Armazenando o número de dias trabalhados

            cout<<"Digite o salario base do funcionario: ";//Solicitando o salário base do funcionário
            cin>>salario_base;//Armazenando o salário base 

            cout<<"O funcionario fez horas extras (S/N)? ";//Perguntando se o funcionário fez horas extras
            cin>>resposta;//Armazenando a resposta

            if(resposta == hora_extra_positivo || resposta == hora_extra_positivo_2){//Verificando se o funcionário fez horas extras

            cout<<"Qual o valor da hora extra?  ";//Solicitando o valor da hora extra
            cin>>valor_hora_extra;//Armazenando o valor da hora extra

            cout<<"Quantas horas extras esse funcionario fez? ";//Solicitando quantas horas extras foram realizadas
            cin>>hora_extra_funcionario;//Armazenando o número de horas extras do funcionário

            double valor_total_hora_extra = valor_hora_extra*hora_extra_funcionario;//Cáculo do valor total de hora extra

            double desconto_total_previdenciario = salario_base*desconto_previdenciario;//Cálculo do desconto previdenciário total
            double desconto_total_imposto_renda = salario_base*desconto_imposto_renda;//Cálculo do desconto de imposto de renda
            double desconto_total_impostos = desconto_total_previdenciario+desconto_total_imposto_renda;//Cálculo do desconto total dos impostos

            double salario_descontado = salario_base-desconto_total_impostos;//Cálculo do salário descontado

            double salario_total = salario_descontado+valor_total_hora_extra;//Cálculo do salário total

            cout<<"============================================================"<<endl;
            cout<<"Holerite de "<<nome_funcionario<<" :"<<endl;//Exibindo o portador do Holerite
            cout<<"CPF: "<<cpf_funcionario[0]<<cpf_funcionario[1]<<cpf_funcionario[2]<<"."<<cpf_funcionario[3]<<cpf_funcionario[4]<<cpf_funcionario[5]<<"."<<cpf_funcionario[6]<<cpf_funcionario[7]<<cpf_funcionario[8]<<"-"<<cpf_funcionario[9]<<cpf_funcionario[10]<<endl;//Exibindo o cpf do funcionário 
            cout<<"Endereco: "<<endereco_funcionario<<endl;//Exibindo o endereço do funcionário
            cout<<"Data de admissao: "<<data_admissao_funcionario<<endl;//Exibindo a data de admissão do funcionário
            cout<<"Tipo de funcionario: "<<tipo_funcionario<<endl;//Exibindo o tipo de funcionário
            cout<<"Dias trabalhados: "<<dia_trabalhado<<endl;//Exibindo a quantidade de dias trabalhados do funcionário
            cout<<"Total de horas extras: "<<hora_extra_funcionario<<endl;//Exibindo o total de horas extras do funcionário
            cout<<"Salario: "<<salario_total<<endl;//Exibindo o salário do funcionário

            }else{//Caso o funcionário não tenha feito hora extra

            double desconto_total_previdenciario = salario_base*desconto_previdenciario;//Cálculo do desconto previdenciário total
            double desconto_total_imposto_renda = salario_base*desconto_imposto_renda;//Cálculo do desconto de imposto de renda
            double desconto_total_impostos = desconto_total_previdenciario+desconto_total_imposto_renda;//Cálculo do desconto total dos impostos

            double salario_descontado = salario_base-desconto_total_impostos;//Cálculo do salário descontado
            cout<<"============================================================"<<endl;
            cout<<"Holerite de "<<nome_funcionario<<" :"<<endl;//Exibindo o portador do Holerite
            cout<<"CPF: "<<cpf_funcionario[0]<<cpf_funcionario[1]<<cpf_funcionario[2]<<"."<<cpf_funcionario[3]<<cpf_funcionario[4]<<cpf_funcionario[5]<<"."<<cpf_funcionario[6]<<cpf_funcionario[7]<<cpf_funcionario[8]<<"-"<<cpf_funcionario[9]<<cpf_funcionario[10]<<endl;//Exibindo o cpf do funcionário 
            cout<<"Endereco: "<<endereco_funcionario<<endl;//Exibindo o endereço do funcionário
            cout<<"Data de admissao: "<<data_admissao_funcionario<<endl;//Exibindo a data de admissão do funcionário
            cout<<"Tipo de funcionario: "<<tipo_funcionario<<endl;//Exibindo o tipo de funcionário
            cout<<"Dias trabalhados: "<<dia_trabalhado<<endl;//Exibindo a quantidade de dias trabalhados do funcionário
            cout<<"Total de horas extras: "<<hora_extra_funcionario<<endl;//Exibindo o total de horas extras do funcionário
            cout<<"Salario: "<<salario_descontado<<endl;//Exibindo o salário do funcionário

            }
        }else if(tipo_funcionario == tipo_funcionario_temporario){//Verificando se o tipo de funcionário é temporário

            cout<<"Digite o salario base do funcionario: ";//Solicitando o salário base do funcionário
            cin>>salario_base;//Armazenando o salario base do funcionário

            cout<<"Digite quantos dias o funcioario foi trabalhar: ";//Solicitando a quantidade de dias trabalhados do funcionário
            cin>>dia_trabalhado;//Armazenando o número de dias trabalhados

            double salario_dia_funcionario_temporario = salario_base/30;//Cáculo de quanto vale 1 dia trabalhado do funcionário
            
            double salario_total_funcionario_temporario = salario_dia_funcionario_temporario*dia_trabalhado;//Cálculo do salário total do funcionário
            cout<<"============================================================"<<endl;
            cout<<"Holerite de "<<nome_funcionario<<" :"<<endl;//Exibindo o portador do Holerite
            cout<<"CPF: "<<cpf_funcionario[0]<<cpf_funcionario[1]<<cpf_funcionario[2]<<"."<<cpf_funcionario[3]<<cpf_funcionario[4]<<cpf_funcionario[5]<<"."<<cpf_funcionario[6]<<cpf_funcionario[7]<<cpf_funcionario[8]<<"-"<<cpf_funcionario[9]<<cpf_funcionario[10]<<endl;//Exibindo o cpf do funcionário 
            cout<<"Endereco: "<<endereco_funcionario<<endl;//Exibindo o endereço do funcionário
            cout<<"Data de admissao: "<<data_admissao_funcionario<<endl;//Exibindo a data de admissão do funcionário
            cout<<"Tipo de funcionario: "<<tipo_funcionario<<endl;//Exibindo o tipo de funcionário
            cout<<"Dias trabalhados: "<<dia_trabalhado<<endl;//Exibindo a quantidade de dias trabalhados do funcionário
            cout<<"Salario: "<<salario_total_funcionario_temporario<<endl;//Exibindo o salário do funcionário

        }

    }else{//Condicionador caso a senha esteja incorreta

        cout<<"Acesso negado - Senha incorreta";//Exibindo o resultado caso a senha esteja incorreta

    }

    return 0;//Return 0; para verificar se há erros
}