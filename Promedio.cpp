#include<iostream>

using namespace std;
int main()
{
    int num1, num2, num3;
    float promedio;
    cout<<"ingrese el primer numero" <<endl;
    cin>>num1;
    cout<<"ingrese el segundo numero"<<endl;
    cin>>num2;
    cout<<"ingrese el tercer numero"<<endl;
    cin>>num3;

    promedio = float(num1+num2+num3)/3;
    cout<<"el promedio(media) es de: ";
    cout<<promedio;

    return 0;
    }
