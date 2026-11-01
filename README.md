# Actividad Propuesta: Funciones y Procedimientos - Caso Práctico "La Tienda"

## Datos Académicos
- **Nombre:** Chris Joseph Jean Carty
- **Matrícula:** 2025-1965
- **Asignatura:** Lógica de Programación
- **Maestro:** Gamaliel Reyes

## Descripción
Solución en C++ al ejercicio propuesto en la presentación "Funciones y procedimiento". 
El programa registra la cantidad y el precio de un producto, calcula el total de la venta y aplica un descuento automático del 10% si el monto bruto supera los 5,000.

## Capturas de Pantalla en Ejecución
A continuación, se muestra el funcionamiento paso a paso del programa con un escenario donde se aplica el descuento:

### Paso 1: Ingreso de la cantidad
El usuario introduce una cantidad inicial de 100 unidades.
![Ingreso de cantidad](./imagenes/Screenshot%202026-11-01%20113354.png)

### Paso 2: Ingreso del precio
El usuario define el precio unitario en 5000.
![Ingreso de precio](./imagenes/Screenshot%202026-11-01%20113411.png)

### Paso 3: Cálculo y resultado final
El programa calcula el monto bruto (100 * 5000 = 500,000). Al superar los 5,000, aplica automáticamente el 10% de descuento (50,000), dando como resultado final 450,000. El proceso finaliza con éxito (código 0).
![Resultado final](./imagenes/Screenshot%202026-11-01%20113420.png)

## Estructura del Código
- `calcularTotalPagar(cantidad, precio)`: Función que retorna el cálculo del monto con o sin descuento aplicado.
- `mostrarTotal(totalPagar)`: Procedimiento que imprime el resultado final en la consola.
- `main()`: Punto de entrada que maneja la interacción con el usuario.
