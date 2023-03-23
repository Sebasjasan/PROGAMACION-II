#include <iostream>
using namespace std;

int opc, nroSilla, nroVelador, nroMesa, nroCama;
int totalNroSilla, totalNroVelador, totalNroMesa, totalNroCama;
int v = 0, c = 0, m = 0, s = 0;

void Bait1()
{
    cout << "1. SILLA\n"
         << "2. VELADOR\n"
         << "3. MESA\n"
         << "4. CAMA\n"
         << "5. SALIR\n"
         << "Opciones: ";
    cin >> opc;
    system("cls");
    switch (opc)
    {
    case 1:
        cout << "Ingrese el numero de sillas: ";
        cin >> nroSilla;
        totalNroSilla += nroSilla;
        system("cls");
        break;
    case 2:
        cout << "Ingrese el numero de veladores: ";
        cin >> nroVelador;
        totalNroVelador += nroVelador;
        system("cls");
        break;
    case 3:
        cout << "Ingrese el numero de mesas: ";
        cin >> nroMesa;
        totalNroMesa += nroMesa;
        system("cls");
        break;
    case 4:
        cout << "Ingrese el numero de camas: ";
        cin >> nroCama;
        totalNroCama += nroCama;
        system("cls");
        break;
    case 5:
        exit(0);

    default:
        break;
    }
}

void nroMuebles()
{

    cout << "1. SILLA\n"
         << "2. VELADOR\n"
         << "3. MESA\n"
         << "4. CAMA\n"
         << "5. SALIR\n"
         << "Opciones: ";
    cin >> opc;
    system("cls");
    switch (opc)
    {
    case 1:
        cout << "Ingrese el numero de sillas: ";
        cin >> nroSilla;
        totalNroSilla += nroSilla;
        system("cls");
        break;
    case 2:
        cout << "Ingrese el numero de veladores: ";
        cin >> nroVelador;
        totalNroVelador += nroVelador;
        system("cls");
        break;
    case 3:
        cout << "Ingrese el numero de mesas: ";
        cin >> nroMesa;
        totalNroMesa += nroMesa;
        system("cls");
        break;
    case 4:
        cout << "Ingrese el numero de camas: ";
        cin >> nroCama;
        totalNroCama += nroCama;
        system("cls");
        break;
    case 5:
        exit(0);
    default:
        break;
    }
}

void intro()
{
    cout << "===========================\n"
         << "      BIENVENIDO\n"
         << "[+] SILLAS    $4.80\n"
         << "[+] VELADOR   $25\n"
         << "[+] MESAS     $50\n"
         << "[+] CAMA      $100\n"
         << "===========================\n";
}

void pregunta()
{
    string SiNo;
    string Yes = "SI";
    string Nou = "NO";
    do
    {
        cout << "QUIERE COMPRAR ALGO?\n";
        cout << "'SI' O 'NO': ";
        cin >> SiNo;
        system("cls");
    } while ((SiNo != Yes) && (SiNo != Nou));

    if (SiNo == Yes)
        Bait1();
    else
        exit(0);
}

void descuentos()
{
    float silla = 4.80;
    float velador = 25;
    float mesa = 50;
    float cama = 100;
    float total, totalDescuento, totalDescuentoEspecial;

    float totalSilla, descuentoSilla, totalDescuentoSilla;
    float totalVelador, descuentoVelador, totalDescuentoVelador;
    float totalMesa, descuentoMesa, totalDescuentoMesa;
    float totalCama, descuentoCama, totalDescuentoCama;
    float totalSillaCama, descuentoSillaCama, totalDescuentoSillaCama;
    float totalVeladorMesa, descuentoVeladorMesa, totalDescuentoVeladorMesa;

    if (totalNroVelador <= 20)
    {
        totalVelador = velador * totalNroVelador;
        descuentoVelador = totalVelador * 0.05;
        totalDescuentoVelador = totalVelador - descuentoVelador;
        totalDescuentoVeladorMesa = 0;
    }
    if (totalNroVelador > 20)
    {
        totalVelador = velador * totalNroVelador;
        descuentoVelador = totalVelador * 0.075;
        totalDescuentoVelador = totalVelador - descuentoVelador;
        totalDescuentoVeladorMesa = 0;
    }

    if (totalNroMesa <= 10)
    {
        totalMesa = mesa * totalNroMesa;
        descuentoMesa = totalMesa * 0.05;
        totalDescuentoMesa = totalMesa - descuentoMesa;
        totalDescuentoVeladorMesa = 0;
    }
    if (totalNroMesa > 10)
    {
        totalMesa = mesa * totalNroMesa;
        descuentoMesa = totalMesa * 0.075;
        totalDescuentoMesa = totalMesa - descuentoMesa;
        totalDescuentoVeladorMesa = 0;
    }
    if ((totalNroVelador > 10) && (totalNroMesa > 10))
    {
        totalVeladorMesa = (velador * totalNroVelador) + (mesa * totalNroMesa);
        descuentoVeladorMesa = totalVeladorMesa * 0.10;
        totalDescuentoVeladorMesa = totalVeladorMesa - descuentoVeladorMesa;
        totalDescuentoVelador = 0;
        totalDescuentoMesa = 0;
    }
    if (totalNroSilla <= 20)
    {
        totalSilla = silla * totalNroSilla;
        descuentoSilla = totalSilla * 0.05;
        totalDescuentoSilla = totalSilla - descuentoSilla;
        totalDescuentoSillaCama = 0;
    }
    if (totalNroSilla > 20)
    {
        totalSilla = silla * totalNroSilla;
        descuentoSilla = totalSilla * 0.075;
        totalDescuentoSilla = totalSilla - descuentoSilla;
        totalDescuentoSillaCama = 0;
    }

    if (totalNroCama <= 10)
    {
        totalCama = cama * totalNroCama;
        descuentoCama = totalCama * 0.05;
        totalDescuentoCama = totalCama - descuentoCama;
    }
    if (totalNroCama > 10)
    {
        totalCama = cama * totalNroCama;
        descuentoCama = totalCama * 0.075;
        totalDescuentoCama = totalCama - descuentoCama;
        totalDescuentoSillaCama = 0;
    }
    if ((totalNroSilla > 10) && (totalNroCama > 5))
    {
        totalSillaCama = (silla * totalNroSilla) + (cama * totalNroCama);
        descuentoSillaCama = totalSillaCama * 0.08;
        totalDescuentoSillaCama = totalSillaCama - descuentoSillaCama;
        totalDescuentoSilla = 0;
        totalDescuentoCama = 0;
    }

    total = totalSilla + totalVelador + totalMesa + totalCama;
    totalDescuento = totalDescuentoSilla + totalDescuentoVelador + totalDescuentoMesa + totalDescuentoCama;
    totalDescuentoEspecial = totalDescuentoSilla + totalDescuentoVelador + totalDescuentoMesa + totalDescuentoCama + totalDescuentoSillaCama + totalDescuentoVeladorMesa;
    cout << "EL VALOR DE LOS MUEBELS ES: " << total;
    if (totalDescuento == totalDescuentoEspecial)
    {
        cout << "\nEL VALOR DE LOS MUEBELS CON EL DECUENTO ES: " << totalDescuento;
        //cout << "\nNO SE APLICA NINGUN DECEUTNTO ESPECIAL EN ESTA COMPRA";
    }
    else
    {
        cout << "\nEL VALOR DE LOS MUEBELS CON EL DECUENTO ESPECIAL ES: " << totalDescuentoEspecial;
    }
}

void dormitorio(){
    if ((totalNroVelador >= 2) && (totalNroCama >= 1))
    {
        do
        {
            c++;
            v += 2;
        } while ((totalNroVelador != v && totalNroVelador != v+1) && (totalNroCama != c));
        cout << "\nSE TIENE " << c << " JUEGOS DE DORMITORIO";
    }
    else
    {
        cout << "\nNO SE TIENE NINGUN JUEGO DE DERMITORIO";
    }
}

void comedor(){
    if ((totalNroSilla >= 4) && (totalNroMesa >= 1))
    {
        do
        {
            m++;
            s += 4;
        } while ((totalNroSilla != s && totalNroSilla != s+1 && totalNroSilla != s+2 && totalNroSilla != s+3) && (totalNroMesa != m));
        cout << "\nSE TIENE " << m << " JUEGOS DE MESA";
    }
    else
    {
        cout << "\nNO SE TIENE NINGUN JUEGO DE MESA";
    }
}

void factura(){
    cout << "TOTAL DE MUEBLES COMPRADOS"
         << "\nSILLAS: " << totalNroSilla
         << "\nVELADORES: " << totalNroVelador
         << "\nMESAS: " << totalNroMesa
         << "\nCAMAS: " << totalNroCama << endl;


}

void comprarOtro()
{
    string SiNo;
    string Yes = "SI";
    string Nou = "NO";
    do
    {
        do
        {
            cout << "QUIERE AGREGAR ALGO A LA ANTERIOR COMPRA?\n";
            cout << "'SI' O 'NO': ";
            cin >> SiNo;
            system("cls");
            if (SiNo == Yes)
            {
                nroMuebles();
            }
            if (SiNo == Nou)
            {
                factura();
                descuentos();
                dormitorio();
                comedor();
                cout << "GRACIAS POR SU COMPRA!!\n";
                exit(0);
            }
        } while (1);
    } while ((SiNo != Yes) && (SiNo != Nou));
}

int main()
{
    intro();
    system("pause");
    system("cls");
    pregunta();
    comprarOtro();

    return 0;
}
