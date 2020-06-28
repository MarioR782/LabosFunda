#include <iostream>
#include <string>
void llenarArreglo(float x[ ]);
float media(float c[]);
int compararArriba(float j[],float e);
int compararabajo(float h[],float a);
using namespace std;
int main(void)
{
    float estatura[25];
    int arriba, debajo;
    float promedio=0;
    cout<<"PROGRAMA PARA SABER CUANTOS ALUMNOS SE ENCUENTRA ARRRIBA Y ABAJO DE LA MEDIA DE ESTATURAS."<<endl;
    llenarArreglo(estatura);
    promedio=media(estatura);
    arriba= compararArriba(estatura, promedio);
    debajo= compararabajo(estatura, promedio);
    cout<<"Los estudiantes que se encuentra arriba del promedio de estaturas son: " <<arriba <<" " <<endl;
    cout<<"Los estudiantes que se encuentra debajo del promedio de estaturas son: " <<debajo <<" " <<endl;
}
int compararabajo(float h[],float a)
{
    int abajo=0;
    float m;
for(int i = 0; i <25 ; i++){
    m=h[i];
    if(m<a)
    {
        abajo=abajo+1;
    }}
    return abajo;
}
int compararArriba(float j[],float e)
{int arriba=0;
float n;
for(int i = 0; i <25 ; i++){
    n=j[i];
    if(n>e)
    {
        arriba=arriba+1;
    }}
    return arriba;
}
void llenarArreglo(float x[ ])
{
int i;
for(i = 0; i <25 ; i++){
cout << "Digite la estatura del estudiante '" <<(i+1) <<"':";
cin >> x[i];
}
}
float media(float c[])
{
    float suma=0;
    int i;
for(int i = 0; i <25 ; i++){
    suma=suma+(c[i]);
}
suma=(suma/25);
return suma;
}