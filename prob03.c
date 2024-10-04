#include "chess.h"
#include "figures.h"

void display() {
  char **white_Square = whiteSquare;
  char **black_Square = reverse(whiteSquare);
  char **Row_First = repeatH(join(black_Square, white_Square), 4);
  char **Row_Second = reverse(Row_First);
  char **RowDouble = up(Row_First, Row_Second);  
  interpreter(repeatV(RowDouble, 2));
}
