/*FUNDAMENTOS DE PROGRAMACION
LABORATORIO DE PROGRAMACION
ERICK SAUL GARCIA HERNANDEZ
PRACTICA NUMERO 11
EJERCICIO 3*/


#include <stdio.h>
#include <stdlib.h>
#define apar = 10
#define comp = 100


void in_lista(int arr[apar][comp])
{
  int i, j;
  for (i = 0; i < apar; i++)
  {
  for(j = 0; j< comp; j++)
    {
      arr[i][j] =  0;
    }
  }        
}
void llenar(arr[10][100])
{
  int i, j, nc;
  for (i = 0; i < 10; i++)
  {
    printf("Dame la cantidad: ", i);
    scanf("%d", &nt);
    for (j = 0; j < nc; j++);
    {
      printf("Dame el numero de componentes: (0-99)", j);
      scanf("%d"; &nc);
      arr[i][nc] = 1;
    }
  }
}
void mensual(apar_men[10])
{
  int i;
  for (i = 0; i < 10; i++)
    {
      printf("Numero de aparatos mensuales de %d: ", i);
      scanf("%d", &apar_men[i]);
    }
}
void tot_mens(int arr[apar][comp], int men[10], int nt[100])
{
  int i, j;
  for (i = 0; i < 10, i++)
    {
      for(j = 0; j < 100, j++)
        {
          nt[j] = arr[i][j] * apar_men[i];
        }
    }
}

