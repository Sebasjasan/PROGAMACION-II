#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int num1, add, rest, newi, opc, siNo;
string newString, producto;
string productos[10][2] = {{"Producto01", "100"}, {"Producto02", "015"}, {"Producto03", "055"}, {"Producto04", "288"}, {"Producto05", "319"}, {"Producto06", "421"}, {"Producto07", "423"}, {"Producto08", "201"}, {"Producto09", "038"}, {"Producto10", "128"}};

void imprimeProductos()
{
    for (int fi = 0; fi < 10; fi++)
    {
        for (int ci = 0; ci < 2; ci++)
        {
            cout << productos[fi][ci] << " ";
        }
        cout << endl;
    }
}

void buscarProducto()
{
    cout << "ESCRIBA UN PRODUCTO PARA INGRESAR O RETIRAR UNIDADES: ";
    cin >> producto;

    for (int i = 0; i < 10; i++)
    {
        if (productos[i][0] == producto)
        {
            // cout << "EXISTE\n";
            newi = i;
        }
    }
    // cout << "LA POSICION ES: " << newi;
    // cout << endl;
    num1 = stoi(productos[newi][1]);
    // cout << num1;
    // cout << endl;
}

void retirar()
{
    cout << "UNIDADES A RETIRAR: ";
    cin >> rest;
    num1 = num1 - rest;
    if (num1 >= 0)
    {
        stringstream ss;
        ss << num1;
        newString = ss.str();
        // cout << "EL STRING ES: " << newString;
        productos[newi][1] = newString;
        imprimeProductos();
        cout << endl;
    }
    else
    {
        cout << "UNIDADES INSUFICIENTES\n";
        imprimeProductos();
    }
}

void ingresar()
{
    cout << "UNIDADES A INGRESAR: ";
    cin >> add;
    system("cls");
    num1 += add;
    stringstream ss;
    ss << num1;
    newString = ss.str();
    // cout << "EL STRING ES: " << newString;
    productos[newi][1] = newString;
    imprimeProductos();
    cout << endl;
}

void ingresarOretirar()
{
    cout << "INGRESAR O RETIRAR\n"
         << "1. INGRESAR\n"
         << "2. RETIRAR\n"
         << "OPCIONES: ";
    cin >> opc;
    system("cls");
    switch (opc)
    {
    case 1:
        ingresar();
        break;
    case 2:
        retirar();
        break;

    default:
        break;
    }
}

void ingresarOretirarMas()
{
    do
    {
        cout << "DESEAR INGRESAR O RETIRAR ALGO MAS?\n"
             << "1. SI\n"
             << "2. NO\n"
             << "OPCIONES: ";
        cin >> siNo;
        system("cls");
        switch (siNo)
        {
        case 1:
            buscarProducto();
            ingresarOretirar();
            break;
        case 2:
            imprimeProductos();
            break;

        default:
            break;
        }
    } while (siNo != 2);
}

int main()
{
    imprimeProductos();
    system("pause");
    system("cls");
    buscarProducto();
    ingresarOretirar();
    ingresarOretirarMas();
}