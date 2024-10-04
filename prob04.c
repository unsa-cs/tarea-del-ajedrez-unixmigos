#include "chess.h"
#include "figures.h"

void display() {
  char **white_square = whiteSquare;
  char **black_square = reverse(whiteSquare);
  char **row_first = repeatH(join(black_square, white_square), 4);
  char **white_rook = rook;
  char **impose_row_rook = superImpose(white_rook, row_first);

  interpreter(impose_row_rook);
}
