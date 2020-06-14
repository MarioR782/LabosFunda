#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int main (void)
{
    int contador = 0, numsorpresa = 77, numero, i;
    do
    {

    cout << " Digite un numero:" << endl << endl ; cin >> numero;
    if 
    (numero > numsorpresa){
        cout << " El numero que ingresa es mayor al numero secreto";
    }
    if 
    (numero < numsorpresa){
        cout << " El numero que ingresa es menor al numero secreto";
    }
    } while (numero != 0);
    
}
