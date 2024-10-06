#include "chess.h"
#include "figures.h"
#include <threads.h>

void display() {
  char **white_Square = whiteSquare;
  char **black_Square = reverse(whiteSquare);
  char **Row_First = repeatH(join(black_Square, white_Square), 4);
  char **pieces = 0;

  for (int i = 0; i < 8; i++) {
    if (i == 7)
      pieces = join(rook, pieces);
  }
  interpreter(superImpose(pieces, Row_First));
}
