#include "chess.h"
#include "figures.h"

void display() {
  char **white_square = whiteSquare;
  char **black_square = reverse(whiteSquare);
  char **row_first = repeatH(join(black_square, white_square), 4);
  interpreter(row_first);
}
