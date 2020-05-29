# include  <iostream>
# include  <cmath>
# include  <cstdio>
# include  <string>
using namespace std;
int  main (void)
{
    string a;
    string e, i;
    int ultima, x;
    cout << " Determinar si la palabra inicia y finaliza con la misma letra " << endl << endl;
    cout << " Ingrese una palabra " << endl << endl;
    cin >> a;
    cout << endl;
    ultima = (a).length ();
    x = (ultima- 1 );
    i = a. substr ( 0 , 1 );
    e = a. substr (x, ultima);
    if (i == e)
    {
        cout << " La primera letra ' " << i << " ' SI es igual a la ultima letra ' " << e << " '. " ;
    }
    else
    {
        cout << " La primera letra ' " << i << " ' NO es igual a la ultima letra ' " << e << " '. " ;
    }
}