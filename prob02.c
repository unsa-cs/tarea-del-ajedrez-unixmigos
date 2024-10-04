#include "chess.h"
#include "figures.h"

void display() {
  char **white_Square = whiteSquare;
  char **black_Square = reverse(whiteSquare);
  char **chessFila = repeatH(join(black_Square, whiteSquare), 2);
  char **tmp = flipV(chessFila);
  char **tmp2 = join(chessFila, tmp);
  interpreter(tmp2);
}
