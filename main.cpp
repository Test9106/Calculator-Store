#include <iostream>

using namespace std;

// 1. Declaración de la función y el procedimiento
double calcularTotalPagar(int cantidad, double precio);
void mostrarTotal(double totalPagar);

int main() {
    int cantidad;
    double precio;

    cout << "> Cantidad: ";
    cin >> cantidad;

    cout << "> Precio: ";
    cin >> precio;

    // 2. Llamadas
    double total = calcularTotalPagar(cantidad, precio);
    mostrarTotal(total);

    return 0;
}

// 3. Función
double calcularTotalPagar(int cantidad, double precio) {
    double total = cantidad * precio;

    if (total > 5000) {
        total -= total * 0.10;
    }

    return total;
}

// 4. Procedimiento
void mostrarTotal(double totalPagar) {
    cout << "> Total a pagar: " << totalPagar << endl;
}