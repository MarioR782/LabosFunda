#include <iostream>
using namespace std;
int main(void){
    int numerosimpares[100], i, j;
    string a;
    cout<<" Programa que muertre los cien primeros numeros enteros impares." <<endl <<endl;
    cout<<" Para concer los cien numeros impares" <<endl;
    cout<<" Escriba 'continuar' o 'no':" <<endl;
    cin>>a;cout<<endl;
    if(a=="continuar"){
    cout<<"Los cien primeros numeros impares son:" <<endl;
    for(int i = 0; i <100; i++)
    {
        numerosimpares[i]=(2*(i)+1);
    }
    for(int j = 99; j>=0; j--)
    {
        cout<<numerosimpares[j] << " " <<endl;
    }}else{
    if(a=="no"){
        cout<<"El progrma a finalizado.";
    }
    }
}