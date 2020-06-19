#include <iostream>
#include <cmath>
using namespace std;
int fun1(int b);
int main(void)
{
    int x;
    cout << endl;
    cout << " Programa para conocer si el a\244o digitado es bisiesto o no." << endl << endl;
    cout << " Ingrese el a\244o que deseea saber si es bisiesto." << endl << endl;
    cin >> x;
    cout << endl <<endl;
    cout << " El a\244o es " << x <<": ";
    fun1(x);
}
int fun1 (int b)
{
    bool t = true;
    bool f = false;
    int a, i, o;
    a=b%400;
    o=b%4;
    i=b%100;
   if(a==0)
   {
       cout<< t;
   }
   if(i!=0)
       {
        switch (o)
        {
        case 0:
        cout<< t;
        break;
        
        default:
        cout<< f;
            break;
        }
       }
}