 #include <iostream>
 #include <string.h>
 #include "./Calculadora.hpp" 
 
 using namespace std;

 int main(int argc, char const *argv[])
{
    Calculadora calc;
    char repetir = '\0';
    do
    {
        int num1 = -1, num2 = -1;
        char operacao = -1;
        cout << "Insira uma equação com o seguinte formato: <'Inteiro'> <'+' or '-' or '*'> <'Inteiro'>." << endl;
        cout << "Equação:";
        cin >> num1;
        cin >> operacao;
        cin >> num2;

        switch (operacao)
        {
            case '+':
                cout << "Resultado: " << calc.Soma(num1, num2) << endl;
                break;

            case '-':
                cout << "Resultado: " << calc.Sub(num1, num2) << endl;
                break;

            case '*':
                cout << "Resultado: " << calc.Multi(num1, num2) << endl;
                break;
        
            default:
                cout << "A operação inserida não é válida.\n";
                break;
        }

        do
        {
            cout << "Quer fazer mais algum calculo? [S/N]\n";
            cin >> repetir;
        }while (repetir != 'S' && repetir != 'N');
    } while (repetir == 'S');
    
    return 0;
}
