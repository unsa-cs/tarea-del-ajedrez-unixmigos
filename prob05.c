#include "chess.h"
#include "figures.h"
#include <threads.h>

void display() {
  char **white_Square = whiteSquare;
  char **black_Square = reverse(whiteSquare);
  char **Row_First = repeatH(join(black_Square, white_Square), 4);
  char **pieces = reverse(rook);

  for (int i = 1; i < 8; i++) {
    if (i == 7)
      pieces = join(pieces, reverse(rook));
    else if (i == 1 || i == 6)
      pieces = join(pieces, reverse(knight));
    else if (i == 2 || i == 5)
      pieces = join(pieces, reverse(bishop));
    else if (i == 3)
      pieces = join(pieces, reverse(queen));
    else
      pieces = join(pieces, reverse(king));
  }
  interpreter(superImpose(pieces, Row_First));
}
