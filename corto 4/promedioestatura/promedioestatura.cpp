#include <iostream>
#include <string>
void ingresar(float notas[ ][5], int n);
void calculo(float notas[ ][5], float promedio[], int n);
using namespace std;
int main(void)
{
    float notas[100][5], promedio[100];
    int n;
    cout<<"PROGRAMA PARA CALCULO DE NOTAS DE ESTUDIANTES" <<endl <<endl;
    cout<<"Ingrese la cantidad de alumnos a los que les calculara su nota:"<<endl;
    cin>>n;
    ingresar(notas, n);
    calculo(notas, promedio, n);
}
void ingresar(float notas[ ][5], int n)
{
cout << "Digite las notas de los estudiantes:" << endl;
for(int i = 0; i < n; i++){cout<<endl;
for(int j = 0; j <5; j++){
do{
    cout << "Ingrese la la nota " << j+1 << " del estudiante " << i+1 << ": ";
    cin >> notas[i][j];
    }while(notas[i][j]>10 || notas[i][j]<0);
}
}
}
void calculo(float notas[ ][5],float promedio[], int n)
{
for(int i = 0; i < n; i++){cout<<endl;
promedio[i]=0;
for(int j = 0; j <5; j++){
    double x, d, c;
    x=notas[i][j];
    d=x*(0.2);
    c=promedio[i];
    promedio[i]=c+d;
}
cout<<"La nota final del estudiante " <<i+1 <<" es: " <<promedio[i] <<" ";
if(promedio[i]>=6){
    cout<<"'APROBADO'"<<endl;
}else{
    cout<<"'REPROBADO'" <<endl;
}
}
}