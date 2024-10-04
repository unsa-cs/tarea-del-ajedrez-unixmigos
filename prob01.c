#include "chess.h"
#include "figures.h"

void display() {
  char **white_Square = whiteSquare;
  char **black_Square = reverse(whiteSquare);
  char **chessFila = join(white_Square, black_Square);
  interpreter(chessFila);
}
