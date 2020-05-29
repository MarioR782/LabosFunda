# include  <iostream>
# include  <string.h>
# include  <string>
# include  <cmath>

using namespace std;
int  main  ()
{
    string Palabra;
    int Longuitud;
    int Par;
    cout << " Determinar si la palabra digitada posee mas de diez caracteres o no, y si la longitud es par o impar " << endl;
    cout << " Ingrese una palabra: " << endl;
    cin >> Palabra;
    cout << endl;
    Longuitud = (Palabra. length ());
    if (Longuitud> 10 )
    {
        cout << " La palabra " << Palabra << " , posee mas de diez caracteres. " << endl << endl;
    }
    else
    {
        cout << " La palabra " << Palabra << " , posee menos de diez caracteres. " << endl << endl;
    }
    Par = Longuitud% 2 ;
    if (Par == 0 )
    {
        cout << " La palabra " << Palabra << " , posee una longitud Par. " << endl << endl;
    }
    else
    {
        cout << " La palabra " << Palabra << " , posee una longitud Impar. " << endl << endl;
    }
}