#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
const int longCad = 20;
struct costoPorArticulo{
char nombreArticul[longCad + 1];
int cantidad;
float precio;
float costoDeArticulo;
};
void leerProductos(costoPorArticulo cantidadArticulos[100],int numeroDeArticulos);
void facturaProductos(costoPorArticulo cantidadArticulos[100],int numeroDeArticulos);
void calculoDeCosto(costoPorArticulo cantidadArticulos[100],int numeroDeArticulos);
float costototal(costoPorArticulo cantidadArticulos[100],int numeroDeArticulos);
int main(void){
    int numeroDeArticulos;
    float costoTotal;
    costoPorArticulo cantidadArticulos[100];
    cout<<"FACTURA DE COMPRA EN TIENDA 'BUEN DIA'." <<endl <<endl;
    cout<<"Ingrese la cantidad de diferentes tipos de articulos que desea facturar:"<<endl;
    cin>>numeroDeArticulos;
    while(numeroDeArticulos<1||numeroDeArticulos>100){/*Con While se asegura que el 
    usuario digite como minimo un articulo y se establece un maximo de cin articulos para facturar*/
    cout<<"Por favor ingrese un numero de articulos mayor a CERO y menor a CIEN:"<<endl;
    cin>>numeroDeArticulos;}
    cout<<endl;
    leerProductos(cantidadArticulos,numeroDeArticulos);
    calculoDeCosto(cantidadArticulos,numeroDeArticulos);
    cout<<"Listado de compra de articulos:"<<endl <<endl;
    facturaProductos(cantidadArticulos,numeroDeArticulos);
    costoTotal=costototal(cantidadArticulos, numeroDeArticulos);
    cout<<endl <<"TOTAL DE COMPRA: $" <<costoTotal <<" ";
}

void leerProductos(costoPorArticulo cantidadArticulos[100],int numeroDeArticulos){
    int i;
    for(i=0;i<numeroDeArticulos;i=i+1){
        fflush(stdin);/*Vaciar el buffer*/
        cout<<"Digite el nombre del articulo:"<<endl;
        cin.getline(cantidadArticulos[i].nombreArticul,20,'\n');
        cout<<"Digite la cantidad de productos que comprara:"<<endl;
        cin>>cantidadArticulos[i].cantidad;
        while(cantidadArticulos[i].cantidad<=0||cantidadArticulos[i].cantidad>100)/*Con el while se establece un
        minimo de 1 procucto a comparar y un maximo de 100.*/
        {
        if(cantidadArticulos[i].cantidad<=0){
        cout<<"Ingrese una cantidad de productos mayor a CERO para comprar este articulo:"<<endl;
        cin>>cantidadArticulos[i].cantidad;
        }else{
        cout<<"Por politicas de venta, no se permite la compra de mas de CIEN productos por articulos."<<endl;
        cout<<"Por favor ingrese una cantidad de produntos menor a CIEN:"<<endl;
        cin>>cantidadArticulos[i].cantidad;
        }
        }
        cout<<"Digite el precio del articulo por unidad:"<<endl;
        cin>>cantidadArticulos[i].precio;
        while(cantidadArticulos[i].precio<=0 || cantidadArticulos[i].precio>1000)/*Se pone evita que los articulos
        no valgan nada y se establece un costo maximo de $1000*/
        {
        cout<<"Los precios establecidos no exceden los $1000.00 y deben ser mayores a $0.00:"<<endl;
        cin>>cantidadArticulos[i].precio;
        }
        cout<<endl;
    }
}
void facturaProductos(costoPorArticulo cantidadArticulos[100],int numeroDeArticulos){
    int i;
    for(i=0;i<numeroDeArticulos;i=i+1){
        cout<<"Nombre del articulo: "<<cantidadArticulos[i].nombreArticul <<" " <<endl;
        cout<<"Cantidad de articulos comprados: "<<cantidadArticulos[i].cantidad <<" " <<endl;
        cout<<"Precio del articulo por unidad: $"<<cantidadArticulos[i].precio <<" " <<endl;
        cout<<"Precio del articulo por unidad: $"<<cantidadArticulos[i].costoDeArticulo <<" " <<endl;
        cout<<endl;
    }
}
void calculoDeCosto(costoPorArticulo cantidadArticulos[100],int numeroDeArticulos){
    int i;
    for(i=0;i<numeroDeArticulos;i=i+1){
        int articulos=0;
        float precioUnitario=0;
        articulos=cantidadArticulos[i].cantidad;
        precioUnitario=cantidadArticulos[i].precio;
        cantidadArticulos[i].costoDeArticulo=(articulos*precioUnitario);/*Se multiplica el costo del 
        articulo por la cantidad que comprara de este*/
    }
}
float costototal(costoPorArticulo cantidadArticulos[100],int numeroDeArticulos){
    int i;
    float costoTotal=0;
    for(i=0;i<numeroDeArticulos;i=i+1){
        costoTotal=costoTotal+cantidadArticulos[i].costoDeArticulo;
    }
    return costoTotal;/*La funcion retorna el costo total de la compra*/
}