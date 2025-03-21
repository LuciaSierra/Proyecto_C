#include <stdio.h>

void convertirMoneda(float cantidad, int opcion) {
    float resultado;

    switch(opcion) {
        case 1: // Convertir Quetzales a Dólares
            resultado = cantidad * 0.13; // 1 GTQ = 0.13 USD (aproximadamente)
            printf("%.2f Quetzales son %.2f Dólares estadounidenses.\n", cantidad, resultado);
            break;
        case 2: // Convertir Quetzales a Euros
            resultado = cantidad * 0.12; // 1 GTQ = 0.12 EUR (aproximadamente)
            printf("%.2f Quetzales son %.2f Euros.\n", cantidad, resultado);
            break;
        case 3: // Convertir Dólares a Quetzales
            resultado = cantidad * 7.75; // 1 USD = 7.75 GTQ (aproximadamente)
            printf("%.2f Dólares son %.2f Quetzales.\n", cantidad, resultado);
            break;
        case 4: // Convertir Euros a Quetzales
            resultado = cantidad * 8.25; // 1 EUR = 8.25 GTQ (aproximadamente)
            printf("%.2f Euros son %.2f Quetzales.\n", cantidad, resultado);
            break;
        case 5: // Convertir Dólares a Euros
            resultado = cantidad * 0.92; // 1 USD = 0.92 EUR (aproximadamente)
            printf("%.2f Dólares son %.2f Euros.\n", cantidad, resultado);
            break;
        case 6: // Convertir Euros a Dólares
            resultado = cantidad * 1.09; // 1 EUR = 1.09 USD (aproximadamente)
            printf("%.2f Euros son %.2f Dólares estadounidenses.\n", cantidad, resultado);
            break;
        default:
            printf("Opción no válida.\n");
    }
}

int main() {
    float cantidad;
    int opcion;

    // Menú de opciones
    printf("Bienvenido al conversor de monedas!\n");
    printf("Seleccione la opción de conversión:\n");
    printf("1. Convertir Quetzales a Dólares\n");
    printf("2. Convertir Quetzales a Euros\n");
    printf("3. Convertir Dólares a Quetzales\n");
    printf("4. Convertir Euros a Quetzales\n");
    printf("5. Convertir Dólares a Euros\n");
    printf("6. Convertir Euros a Dólares\n");
    printf("Ingrese el número de opción: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);

    convertirMoneda(cantidad, opcion);

    return 0;
}
