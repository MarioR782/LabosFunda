#include <iostream>
#include <cmath>
using namespace std;
int fun1(int a, int b);
int main(void)
{
    int mayor, menor;
    cout <<" Programa para sacar el MCD de dos numeros enteros." << endl << endl;
    cout << "Digite el numero mayor:" <<endl;
    cin >> mayor; cout<<endl;
    cout << "Digite el numero menor:" <<endl;
    cin >> menor; cout<<endl;
    fun1( mayor, menor);

    cout<< "Fin del programa.";
}

int fun1(int a, int b)
{
    int resultante;
    do
    {
        resultante = a % b;
        if(resultante!=0)
        {
            a = b;
            b = resultante;
        }
    } while (resultante != 0);
    cout << "EL MCD es: " << b;
    cout << endl;
    return (1);
}