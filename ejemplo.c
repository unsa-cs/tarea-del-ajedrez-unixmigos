#include "chess.h"
#include "figures.h"

void display() {
  char **blackRook = reverse(reverse(rook));
  interpreter(blackRook);
}
