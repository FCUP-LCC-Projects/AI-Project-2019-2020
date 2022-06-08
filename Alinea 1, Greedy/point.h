#ifndef POINT
#define POINT

#include <stdio.h>
#include <stdlib.h>

#include "errorMessage.h"

typedef struct Point
{
  int x, y;
  
}Point;

/* Aloca dinamicamente memoria para um novo ponto
   com coordenadas x e y e retorna o seu apontador*/
Point *newPoint(int x, int y);

/* Retorna 1 se dois pontos são iguais 0 caso contrario.*/
int equalPoint(Point *a, Point *b);

/* */
int comparePoint(Point *a, Point *b);

/* */
void printPoint(Point *p);

#endif
