#include <stdio.h>
#include <stdlib.h>

void menu()
{
  printf("\nLista de opciones:\n");
  printf("1. Crear promedio de numeros\n");
  printf("2. Sumar numeros\n");
  printf("3. Salir\n");
}

void promediar()
{
  int cantidad_numeros, cantidad_iteraciones_numeros;
  float cada_numero, suma = 0, promedio = 0;

  printf("\nIngrese la cantidad de numeros a promediar: ");
  scanf("%d", &cantidad_numeros);

  for (cantidad_iteraciones_numeros = 1; cantidad_iteraciones_numeros <= cantidad_numeros; ++cantidad_iteraciones_numeros)
  {
    printf("Ingrese el numero %d: ", cantidad_iteraciones_numeros);
    scanf("%f", &cada_numero);
    suma += cada_numero;
  }

  promedio = suma / cantidad_numeros;

  printf("El promedio de los %d numeros es: %f\n", cantidad_numeros, promedio);
}

void sumar()
{
  int cantidad_numeros, cantidad_iteraciones_numeros;
  float cada_numero, suma_numeros = 0;

  printf("\nIngrese la cantidad de numeros a sumar: ");
  scanf("%d", &cantidad_numeros);

  for (cantidad_iteraciones_numeros = 1; cantidad_iteraciones_numeros <= cantidad_numeros; ++cantidad_iteraciones_numeros)
  {
    printf("Ingrese el numero %d: ", cantidad_iteraciones_numeros);
    scanf("%f", &cada_numero);
    suma_numeros += cada_numero;
  }

  printf("La suma de los %d numeros es: %f\n", cantidad_numeros, suma_numeros);
}

int main()
{
  int opcion, opcion_operacion;

  do
  {
    menu();
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
      printf("\nOpcion seleccionada: Crear promedio de numeros\n");
      printf("1. Ingresar la cantidad de numeros a promediar\n");
      printf("2. Volver a la lista de opciones\n");
      scanf("%d", &opcion_operacion);

      switch (opcion_operacion)
      {
      case 1:
        promediar();
        break;

      case 2:
        menu();
        scanf("%d", &opcion);
        break;

      default:
        printf("Opcion invalida. Ingrese un numero del 1 al 2.\n");
        break;
      }

      break;
    case 2:
      printf("\nOpcion seleccionada: Sumar numeros\n");
      printf("1. Ingresar la cantidad de numeros a sumar\n");
      printf("2. Volver a la lista de opciones\n");
      scanf("%d", &opcion);

      switch (opcion_operacion)
      {
      case 1:
        sumar();
        break;

      case 2:
        menu();
        scanf("%d", &opcion);
        break;

      default:
        printf("Opcion invalida. Ingrese un numero del 1 al 2.\n");
        break;
      }

      break;
    case 3:
      printf("\nSaliendo del programa...\n");
      return 0;
      break;
    default:
      printf("Opcion invalida. Ingrese un numero del 1 al 3.\n");
    }
  } while (opcion != 3);

  return 0;
}