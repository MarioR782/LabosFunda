#include <iostream>
#include <cmath>
bool funbisiesto(int b);
bool funpar(int d);
int funmostrar(int h,int m,int s);
using namespace std;
int main()
{
    int dias, mes, hora;
    bool f, x;
    cout<<" Programa que agrega un dia a la fecha" << endl << endl;
    cout<<"Por favor ingrese la fecha en dos digitos:" <<endl << endl;
    cout<<"Ingrese el a\244o sus ultimos dos digitos:" <<endl << endl;
    cin>>hora;
    while(hora<0 || hora>100)
    {
    cout<<"Error, ingrese correctamente el a\244o (sus ultimos dos digitos):" <<endl;
    cin>>hora;
    }
    cout<<"Ingrese el mes (mm):" <<endl;
    cin>>mes;
    while(mes<1 || mes>13)
    {
    cout<<"Error, ingrese correctamente el mes (mm):" <<endl;
    cin>>mes;
    }
    x=funpar(mes);
    f= funbisiesto(hora);
    if(f==false)
    {
        if(mes<8)
        {
            if(mes==2){
                cout<<"Ingrese el dia (dd):" <<endl;
                cin>>dias;
                while(dias<1 || dias>28)
                {cout<<"Error, ingrese correctamente el dia (dd):" <<endl;
                cin>>dias;}
        dias=dias+1;
        if(dias>=29){
        dias=1;
        mes=mes+1;
        if(mes>=13)
        {
        mes=1;
        hora=hora+1;
        if(hora>=100)
        {hora=0;}
        }}
            }else{
            if(x==0){
                cout<<"Ingrese el dia (dd):" <<endl;
                cin>>dias;
                while(dias<1 || dias>30)
                {cout<<"Error, ingrese correctamente el dia (dd):" <<endl;
                cin>>dias;}
        dias=dias+1;
        if(dias>=31){
        dias=1;
        mes=mes+1;
        if(mes>=13)
        {
        mes=1;
        hora=hora+1;
        if(hora>=100)
        {hora=0;}
        }}
                }
            if(x!=0){
                cout<<"Ingrese el dia (dd):" <<endl;
                cin>>dias;
                while(dias<1 || dias>31)
                {cout<<"Error, ingrese correctamente el dia (dd):" <<endl;
                cin>>dias;}
        dias=dias+1;
        if(dias>=32){
        dias=1;
        mes=mes+1;
        if(mes>=13)
        {
        mes=1;
        hora=hora+1;
        if(hora>=100)
        {hora=0;}
        }}
                }
                }
        }
        if(mes>8){
            if(x==0){
                cout<<"Ingrese el dia (dd):" <<endl;
                cin>>dias;
                while(dias<1 || dias>31)
                {cout<<"Error, ingrese correctamente el dia (dd):" <<endl;
                cin>>dias;}
        dias=dias+1;
        if(dias>=32){
        dias=1;
        mes=mes+1;
        if(mes>=13)
        {
        mes=1;
        hora=hora+1;
        if(hora>=100)
        {hora=0;}
        }}
                }
            if(x!=0){
                cout<<"Ingrese el dia (dd):" <<endl;
                cin>>dias;
                while(dias<1 || dias>30)
                {cout<<"Error, ingrese correctamente el dia (dd):" <<endl;
                cin>>dias;}
        dias=dias+1;
        if(dias>=31){
        dias=1;
        mes=mes+1;
        if(mes>=13)
        {
        mes=1;
        hora=hora+1;
        if(hora>=100)
        {hora=0;}
        }}
                }
        }
    }
        if(f==true)
    {
        if(mes<8)
        {
            if(mes==2){
                cout<<"Ingrese el dia (dd):" <<endl;
                cin>>dias;
                while(dias<1 || dias>29)
                {cout<<"Error, ingrese correctamente el dia (dd):" <<endl;
                cin>>dias;}
        dias=dias+1;
        if(dias>=30){
        dias=1;
        mes=mes+1;
        if(mes>=13)
        {
        mes=1;
        hora=hora+1;
        if(hora>=100)
        {hora=0;}
        }}
            }else{
            if(x==0){
                cout<<"Ingrese el dia (dd):" <<endl;
                cin>>dias;
                while(dias<1 || dias>30)
                {cout<<"Error, ingrese correctamente el dia (dd):" <<endl;
                cin>>dias;}
        dias=dias+1;
        if(dias>=31){
        dias=1;
        mes=mes+1;
        if(mes>=13)
        {
        mes=1;
        hora=hora+1;
        if(hora>=100)
        {hora=0;}
        }}
                }
            if(x!=0){
                cout<<"Ingrese el dia (dd):" <<endl;
                cin>>dias;
                while(dias<1 || dias>31)
                {cout<<"Error, ingrese correctamente el dia (dd):" <<endl;
                cin>>dias;}
        dias=dias+1;
        if(dias>=32){
        dias=1;
        mes=mes+1;
        if(mes>=13)
        {
        mes=1;
        hora=hora+1;
        if(hora>=100)
        {hora=0;}
        }}
                }
                }
        }
        if(mes>8){
            if(x==0){
                cout<<"Ingrese el dia (dd):" <<endl;
                cin>>dias;
                while(dias<1 || dias>31)
                {cout<<"Error, ingrese correctamente el dia (dd):" <<endl;
                cin>>dias;}
        dias=dias+1;
        if(dias>=32){
        dias=1;
        mes=mes+1;
        if(mes>=13)
        {
        mes=1;
        hora=hora+1;
        if(hora>=100)
        {hora=0;}
        }}
                }
            if(x!=0){
                cout<<"Ingrese el dia (dd):" <<endl;
                cin>>dias;
                while(dias<1 || dias>30)
                {cout<<"Error, ingrese correctamente el dia (dd):" <<endl;
                cin>>dias;}
        dias=dias+1;
        if(dias>=31){
        dias=1;
        mes=mes+1;
        if(mes>=13)
        {
        mes=1;
        hora=hora+1;
        if(hora>=100)
        {hora=0;}
        }}
                }
        }
    }
    cout<<"La fecha mas un dia es: ";
    funmostrar(dias, mes, hora);
}
int funmostrar(int h,int m,int s)
{
    if(h<10) {cout <<0;}
    cout<<h;
    cout<<"/" ;
    if(m<10) {cout <<0;}
    cout<<m; 
    cout<<"/";
    if(s<10) {cout <<0;}
    cout<<s;
}
bool funbisiesto(int b)
{
    int a, i, o;
    a=b%400;
    o=b%4;
    i=b%100;
   if(a==0)
   {
      return true;
   }
   if(i!=0)
       {
        switch (o)
        {
        case 0:
        return true;
        break;
        
        default:
        return false;
            break;
        }
       }
    return (1);
}
bool funpar(int d)
{
    int a;
    a=d%2;
    if(a=0){
        return true;
    }else{
        return false;
    }
    return (1);
}