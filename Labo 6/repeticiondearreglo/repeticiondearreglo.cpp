#include <iostream>
using namespace std;
void llenarArreglo(int [ ], int);
int main(void)
{
    int arreglo[250],n, x, suma=0;
    cout<< " Programa para conocer cuantas veces se repite un numero entero en un arreglo:" <<endl <<endl;
    cout<< " Digite la cantidad de elementos que desea ingresar a su arreglo (Existe un maximo de 250):" <<endl;
    cin>>n;
    llenarArreglo(arreglo, n);
    cout<<" Digite el numero entero que desea saber cuantas veces se repite en el arreglo ingresado:" <<endl;
    cin>>x;
    for (int i = 0; i < n; i++) 
  {
    int elementoActual = arreglo[i];
    if (elementoActual == x){
        suma=suma+1;
    }
  }
    cout<<" El numero '"<< x <<"' se repite la cantidad de '"<< suma <<"' veces en el arreglo." <<endl;
    return 0;
}
void llenarArreglo(int x[ ], int n)
{
int i;
cout<<" Digite los elementos que perteneceran al arreglo:" <<endl;
for(i = 0; i < n; i++)
cin >> x[i];
}