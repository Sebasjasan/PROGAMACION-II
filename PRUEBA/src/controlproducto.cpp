#include <iostream>
using namespace std;

string productos[] = {"Producto01", "Producto02", "Producto03", "Producto04", "Producto05", "Producto06", "Producto07", "Producto08", "Producto09", "Producto10"};
int unidades[] = {100, 15, 55, 288, 319, 421, 423, 201, 38, 128};

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

void buscarProducto()
{
    int producto[] = {1, 2, 3, 4, 5, 6};
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
void totalProductos()
{
    for (int i = 0; i < 10; i++)
        cout << productos[i] << " " << unidades[i] << endl;
}
void ingresarRetirar()
{
    char nameProducto[15];
    int opciones, ingreso, retiro;

    cout << "INGRESAR O RETIRA UNIDADES\n"
         << "1. [+] INGRESAR\n"
         << "2. [+] RETIRAR\n"
         << "OPCIONES: ";
    cin >> opciones;
    switch (opciones)
    {
    case 1:
        cout << "ESCRIBA EL NOMBRE DEL PRODUCTO PARA INGESAR UNIDADES: ";
        cin >> nameProducto;
        cout << "NUMERO DE UNIDADES A INGRESAR: ";
        cin >> ingreso;
        if (nameProducto == productos[0])
            unidades[0] += ingreso;
            break;
    case 2:
        cout << "ESCRIBA EL NOMBRE DEL PRODUCTO PARA RETITAR UNIDADES: ";
        cin >> nameProducto;
        cout << "NUMERO DE UNIDADES A RETIRAR: ";
        cin >> retiro;
        if (nameProducto == productos[0])
            unidades[0] = unidades[0] - retiro;

        break;

    default:
        break;
    }
}

int main()
{
    // ordenar();
    // buscarProducto();
    totalProductos();
    system("pause");
    system("cls");
    ingresarRetirar();
    system("pause");
    system("cls");
    totalProductos();


}