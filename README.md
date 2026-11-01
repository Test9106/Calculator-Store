# Actividad Propuesta: Funciones y Procedimientos - Caso Práctico "La Tienda"

## Datos del Estudiante
- **Nombre:** Chris Joseph Jean Carty
- **Matrícula:** [Escribe tu matrícula aquí]
- **Asignatura:** [Escribe la asignatura aquí]

## Descripción
Solución en C++ al ejercicio propuesto en la presentación "Funciones y procedimiento". 
El programa registra la cantidad y el precio de un producto, calcula el total de la venta y aplica un descuento automático del 10% si el monto bruto supera los 5,000.

## Capturas de Pantalla en Ejecución
A continuación, se presentan los escenarios de prueba:

### Escenario 1: Compra sin descuento (Total <= 5000)
![Prueba sin descuento](./imagenes/escenario_sin_descuento.jpg)

### Escenario 2: Compra con descuento (Total > 5000)
![Prueba con descuento](./imagenes/escenario_con_descuento.jpg)

## Estructura del Código
- `calcularTotalPagar(cantidad, precio)`: Función que retorna el cálculo del monto con o sin descuento aplicado.
- `mostrarTotal(totalPagar)`: Procedimiento que imprime el resultado final en la consola.
- `main()`: Punto de entrada que maneja la interacción con el usuario.