#include <iostream>
#include <cmath>
using namespace std;
int fun1(int b);
int main(void)
{
    int x;
    cout<< " Programa para conocer si el ano digitado es bisiesto o no." << endl << endl;
    cout<< " Ingrese el ano que deseea saber si es bisiesto." << endl << endl;
    cin >> x;
    cout << endl <<endl;
    cout<< " El ano " << x <<": ";
    fun1(x);
}
int fun1 (int b)
{
    int a, i, o;
    a=b%400;
    o=b%4;
    i=b%100;
   if(a==0)
   {
       cout<< " si es bisiesto";
   }
   if(i!=0)
       {
        switch (o)
        {
        case 0:
        cout<< " si es bisiesto";
        break;
        
        default:
        cout<< " no es bisiesto";
            break;
        }
       }
}