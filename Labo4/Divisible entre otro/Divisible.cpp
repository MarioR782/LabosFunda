# include  <iostream>
# include  <cmath>
using namespace std;
int  main (void)
{
    int a;
    int b;
    int c;
    cout << endl;
    cout << " Verificar si un numero es divisible entre otro. " << endl << endl;
    cout << " Digite el numero que desea saber si es divisible entre otro (dividendo): " << endl;
    cin >> a;
    cout << endl;
    cout << " Digite el numero por el cual quiere saber si se puede dividir (divisor): " << endl;
    cin >> b;
    cout << endl;
    c = (a% b); 
    if (c == 0 )
    {
    cout << " El numero " << a << " , SI es divisible entre " << b << " . " << endl;
    } 
    else
    {
    cout << " El numero " << a << " , NO es divisible entre " << b << " . " << endl;
    }
    cout << endl;
    return ( 0 );
}