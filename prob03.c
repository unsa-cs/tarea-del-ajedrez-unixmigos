#include "chess.h"
#include "figures.h"

void display() {
  char **white_Square = whiteSquare;
  char **black_Square = reverse(whiteSquare);
  char **chessFila = repeatH(join(white_Square, black_Square), 4);
  char **chessFila2 = up(reverse(chessFila), chessFila);  
  interpreter(chessFila2);
}
