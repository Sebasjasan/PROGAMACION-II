#include <iostream>
using namespace std;

void ordenar()
{
    int productos[] = {8, 4, 5, 9, 1, 2};
    int cambio;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (productos[j] > productos[j + 1])
            {
                cambio = productos[j];
                productos[j] = productos[j + 1];
                productos[j + 1] = cambio;
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << productos[i] << " ";
    }
}

void buscarProducto(){
    int producto[] = {1,2,3,4,5,6};
    int nro;
    cout << "INGRESE UN NUMERO: ";
    cin >> nro;
    char band = 'F';

    for (int i = 0; i < 6; i++)
    {
        if (nro == producto[i])
        band = 'V';
    }

    if (band == 'F')
        cout << "EL NUMERO NO EXISTE";

    if (band == 'V')
        cout << "EL NUMERO SI EXISTE";
    

}
void productos(){
    string productos[2] = {"UNO","DOS"};
    cout << productos[1];
}

int main()
{
    // ordenar();
    // buscarProducto();
    productos();
}