#include <iostream>


using namespace std;

int main(void){
    int h, m, s;
    char c;
    cout << endl;
    cout << " Programa que lee la hora, hh, mm y ss en el modo de 24h" << endl << endl ;
    cout << " Digite la hora (separa por puntos o comas) que desea aumentar un segundo" << endl << endl;
    cin >> h >> c >> m >> c >> s;
    s = s + 1;
    if (s >= 60){
        s = 0; 
        m = m + 1;
        if (m >= 60){
            m = 0; 
            h = h + 1;
            if(h >= 24){
                h = 0;
            }
        }
    }
    if (h < 10){
        cout << 0;
        }
        cout << h;
        cout << ";";
        if (m < 10 ){
            cout << 0;
        }
        cout << m ;
        cout << ";";
        if (s < 10){
            cout << 0;
        }
        cout << s ;
        cout << endl;
    }
