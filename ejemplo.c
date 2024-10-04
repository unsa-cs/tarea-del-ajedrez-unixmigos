#include "chess.h"
#include "figures.h"

void display() {
  char **blackKnight = flipV(reverse(knight));
  char **whiteKnight = knight;
  interpreter(blackKnight);
  interpreter(whiteKnight);
}
