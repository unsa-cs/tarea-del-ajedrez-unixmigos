#include "chess.h"
#include "figures.h"

void display() {
  char **white_Square = whiteSquare;
  char **black_Square = reverse(whiteSquare);
  char **Row_First = repeatH(join(black_Square, white_Square), 4);
  char **pieces;

  for (int i = 0; i < 8; i++) {
    if (i == 0 || i == 7)
      pieces = join(pieces, reverse(rook));
  }
  interpreter(superImpose(pieces, Row_First));
}
