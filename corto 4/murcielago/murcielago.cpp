#include <iostream>
#include <string>
char murcielago(char clave[], int i);
void desplegarArreglo(char x[ ], int n);
using namespace std;
int main(void)
{
    string palabra, resultado;
    char clave[50];
    int n;
    cout<<"PROGRAMA PARA CODIFICAR EN CLAVE MURCIELAGO."<<endl<<endl;
    cout<<"Ingrese la palabra que desea pasar a clave murcielago:" <<endl;
    cin>>clave;
    palabra=clave;
    n=(palabra).length();
    for(int i = 0; i < n; i++){
    murcielago(clave, i);}
    resultado=clave;
     cout<<"La palabra '"<<palabra<<"' codificada en clave murcielago es '"<<resultado <<"'." <<endl;
    desplegarArreglo(clave, n);
}
char murcielago(char clave[], int i)
{
    switch (clave[i])
    {
    case 'm':
        clave[i]='0'; 
        break;
        case 'u':
        clave[i]='1'; 
        break;
        case 'r':
        clave[i]='2'; 
        break;
        case 'c':
        clave[i]='3'; 
        break;
        case 'i':
        clave[i]='4'; 
        break;
        case 'e':
        clave[i]='5'; 
        break;
        case 'l':
        clave[i]='6'; 
        break;
        case 'a':
        clave[i]='7'; 
        break;
        case 'g':
        clave[i]='8'; 
        break;
        case 'o':
        clave[i]='9'; 
        break;
    
    default:  return clave[i];
        break;
    }
    return clave[i];
}
void desplegarArreglo(char x[ ], int n)
{
int i;
for(i = 0; i < n; i++)
cout << x[i] << " ";
cout << endl;
}