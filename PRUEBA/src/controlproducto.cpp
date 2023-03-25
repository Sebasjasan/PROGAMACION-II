#include <iostream>
using namespace std;

string productos[] = {"Producto01", "Producto02", "Producto03", "Producto04", "Producto05", "Producto06", "Producto07", "Producto08", "Producto09", "Producto10"};
int unidades[] = {100, 15, 55, 288, 319, 421, 423, 201, 38, 128};

char nameProducto[15];
int opciones, ingreso, retiro;
string siNo, yes = "SI", nou = "NO";

// void ordenar()
// {
//     int productos[] = {8, 4, 5, 9, 1, 2};
//     int cambio;
//     for (int i = 0; i < 6; i++)
//     {
//         for (int j = 0; j < 6; j++)
//         {
//             if (productos[j] > productos[j + 1])
//             {
//                 cambio = productos[j];
//                 productos[j] = productos[j + 1];
//                 productos[j + 1] = cambio;
//             }
//         }
//     }
//     for (int i = 0; i < 6; i++)
//     {
//         cout << productos[i] << " ";
//     }
// }

// void buscarProducto()
// {
//     int producto[] = {1, 2, 3, 4, 5, 6};
//     int nro;
//     cout << "INGRESE UN NUMERO: ";
//     cin >> nro;
//     char band = 'F';

//     for (int i = 0; i < 6; i++)
//     {
//         if (nro == producto[i])
//             band = 'V';
//     }

//     if (band == 'F')
//         cout << "EL NUMERO NO EXISTE";

//     if (band == 'V')
//         cout << "EL NUMERO SI EXISTE";
// }
void totalProductos()
{
    for (int i = 0; i < 10; i++)
        cout << "[+] " << productos[i] << " " << unidades[i] << endl;
}

void ingresar()
{
    cout << "ESCRIBA EL NOMBRE DEL PRODUCTO PARA INGESAR UNIDADES: ";
    cin >> nameProducto;
    cout << "NUMERO DE UNIDADES A INGRESAR: ";
    cin >> ingreso;
    if (nameProducto == productos[0])
        unidades[0] += ingreso;
    if (nameProducto == productos[1])
        unidades[1] += ingreso;
    if (nameProducto == productos[2])
        unidades[2] += ingreso;
    if (nameProducto == productos[3])
        unidades[3] += ingreso;
    if (nameProducto == productos[4])
        unidades[4] += ingreso;
    if (nameProducto == productos[5])
        unidades[5] += ingreso;
    if (nameProducto == productos[6])
        unidades[6] += ingreso;
    if (nameProducto == productos[7])
        unidades[7] += ingreso;
    if (nameProducto == productos[8])
        unidades[8] += ingreso;
    if (nameProducto == productos[9])
        unidades[9] += ingreso;
}
void retirar()
{
    cout << "ESCRIBA EL NOMBRE DEL PRODUCTO PARA RETITAR UNIDADES: ";
    cin >> nameProducto;
    cout << "NUMERO DE UNIDADES A RETIRAR: ";
    cin >> retiro;
    if (nameProducto == productos[0])
        unidades[0] = unidades[0] - retiro;
    if (nameProducto == productos[1])
        unidades[1] = unidades[1] - retiro;
    if (nameProducto == productos[2])
        unidades[2] = unidades[2] - retiro;
    if (nameProducto == productos[3])
        unidades[3] = unidades[3] - retiro;
    if (nameProducto == productos[4])
        unidades[4] = unidades[4] - retiro;
    if (nameProducto == productos[5])
        unidades[5] = unidades[5] - retiro;
    if (nameProducto == productos[6])
        unidades[6] = unidades[6] - retiro;
    if (nameProducto == productos[7])
        unidades[7] = unidades[7] - retiro;
    if (nameProducto == productos[8])
        unidades[8] = unidades[8] - retiro;
    if (nameProducto == productos[9])
        unidades[9] = unidades[9] - retiro;
}

void addIngresar()
{
    cout << "DESEA INGRESAR O RETIRAR ALGO MAS?\n"
         << "'SI' o 'NO': ";
    cin >> siNo;
    if (siNo == yes)
    {
        ingresar();
        addIngresar();
    }
    else
    {
        totalProductos();
    }
}
void addRetirar()
{
    cout << "DESEA INGRESAR O RETIRAR ALGO MAS?\n"
         << "'SI' o 'NO': ";
    cin >> siNo;
    if (siNo == yes)
    {
        retirar();
        addRetirar();
    }
    else
    {
        totalProductos();
    }
}

void ingresarRetirar()
{

    cout << "INGRESAR O RETIRA UNIDADES\n"
         << "1. [+] INGRESAR\n"
         << "2. [+] RETIRAR\n"
         << "OPCIONES: ";
    cin >> opciones;
    switch (opciones)
    {
    case 1:
        ingresar();
        addIngresar();

        break;
    case 2:
        retirar();
        addRetirar();
        break;

    default:
        break;
    }
}

int main()
{
    string producto;
    string AA[10][2] = {{"Producto01", " 10"}, {"Producto02", " 10"}, {"Producto03", " 10"}, {"Producto04", " 10"}, {"Producto05", " 10"}, {"Producto06", " 10"}, {"Producto07", " 10"}, {"Producto08", " 10"}, {"Producto09", " 10"}, {"Producto10", " 10"}};
    for (int fi = 0; fi < 10; fi++)
    {
        for (int ci = 0; ci < 2; ci++)
        {
            cout << AA[fi][ci];
        }
        cout << endl;
    }
    cout << "ESCRIBA UN PRODUCTO: ";
    cin >> producto;

    // int i = 0
    // while (AA[i][0] != producto && )
    // {
    //     /* code */
    // }
    string aux;
    int newi;
    for (int i = 0; i < 10; i++)
    {
        if (AA[i][0] == producto)
        {
            cout << "EXISTE\n";
            newi = i;
            aux = "CHAMO";
        }
    }
    

    // ordenar();
    // buscarProducto();

    // totalProductos();
    // system("pause");
    // system("cls");
    // ingresarRetirar();
    // system("pause");
    // system("cls");
    // totalProductos();

    // cout << "CONTROL DE PRODUCTOS"
    //      << "1. MOSTRAR PRODUCTOS"
    //      << "2. SALIR: "
    //      <<

    // cout << "=================================\n"
    //      << "PRODUCTOS Y UNIDADES DISPONIBLES\n";
    //      totalProductos();
    // cout << "=================================\n";
}