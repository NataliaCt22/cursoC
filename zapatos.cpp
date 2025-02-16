#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    float precioCompra, precioVenta, cantidadComprada;
    int talla;
    char referencia[15], descripcion[30];

    // Ingreso de datos
    cout << "Ingrese la referencia del zapato: ";
    cin >> referencia;

    cout << "Ingrese la descripcion del zapato: ";
    cin >> descripcion;

    cout << "Ingrese la talla del zapato: ";
    cin >> talla;

    cout << "Ingrese la cantidad de zapatos comprada: ";
    cin >> cantidadComprada;

    cout << "Ingrese el precio de compra por unidad (en $): ";
    cin >> precioCompra;

    cout << "Ingrese el precio de venta por unidad (en $): ";
    cin >> precioVenta;

    // Cálculos de costos y ganancias
    float costoTotal = precioCompra * cantidadComprada;
    float ingresoTotal = precioVenta * cantidadComprada;
    float gananciaBruta = ingresoTotal - costoTotal;
    float margenGanancia = gananciaBruta / ingresoTotal * 100;  // Porcentaje de ganancia

    // Mostrar resultados
    cout << "\n----- Resultados -----\n";
    cout << "Costo total (compra + gastos): $" << costoTotal << endl;
    cout << "Ingreso total: $" << ingresoTotal << endl;
    cout << "Ganancia bruta: $" << gananciaBruta << endl;
    cout << "Margen de ganancia: " << margenGanancia << "%" << endl;

    return 0;
}

// Erika Natalia Castellanos Perea CC1012458125
