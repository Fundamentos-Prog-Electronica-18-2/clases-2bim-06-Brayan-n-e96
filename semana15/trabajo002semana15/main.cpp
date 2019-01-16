#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int convertirStringToInt(string v){
    // proceso para convertir un cadena en entero

    int i;
    std::istringstream(v) >> i;
    return i;
}

int main()
{
    int suma = 0;
    string s;
    ifstream f( "informacion.txt" );
    if ( f.is_open() )
    {
        // getline( f, s );

        while( !f.eof() )
        {
            suma = suma + convertirStringToInt(s);
            getline( f, s );
            //cout << s << endl;
        }
    }else{
        cout << "Error de apertura del archivo." << endl;
    }
    cout << suma <<endl;
    return 0;
}
