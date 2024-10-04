#include "chess.h"
#include "figures.h"

void display() {
  char **blackRook = reverse(rook);
  interpreter(blackRook);
}
