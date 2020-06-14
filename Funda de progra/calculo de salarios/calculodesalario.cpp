#include<iostream>
#include<conio.h>
#include <cmath>
#include <cstdlib>

using namespace std;
int main (char)
{
    float a, b, c= 1.75, d= 2.50, total, real, descuento, renta, i, n;
    cout << " Programa para calcular el salario de N empleados" << endl << endl;
    cout << " Digite la cantidad de empleados que desea conocer sus salarios" << endl << endl;
    cin >> n;
    do
    {
        n--;
        cout << " Digite la cantidad de horas trabajadas" << endl << endl;
    cin >> a;
    cout << endl;
    cout << " Digite la contida de horas extras trabajdas" << endl << endl;
    cin >> b;

    total = (a*c)+(b*d);
    cout << endl;
    cout << " El salario total del empleado es de:"<< endl << endl << total << " Dolares" << endl << endl;

    descuento = (total*0.04)+(total*0.0625);
    real = (total-descuento);
    cout << " El salario real del empleado es de;" << endl << endl << real << endl << endl;


    if (total > 500)
    {
        renta = (total*0.04)+(total*0.0625)+(total*0.10);
        real = (total-renta);

        cout << " El salario es mayor de 500 dolares por lo cual se le aplicara la renta" << endl << endl;
        cout << " El salario real con el impuesto de la renta es de:" << endl << endl << real << endl << endl;
    }
 
    } while (n = n); 
     
    return 0;
}


