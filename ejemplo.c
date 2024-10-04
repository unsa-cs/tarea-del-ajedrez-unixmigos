#include "chess.h"
#include "figures.h"

void display() {
  char **blackRook = flipV(rook);
  interpreter(blackRook);
}
