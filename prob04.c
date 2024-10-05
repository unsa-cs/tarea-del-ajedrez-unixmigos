#include "chess.h"
#include "figures.h"

void display() {
  char **white_square = whiteSquare;
  char **black_square = reverse(whiteSquare);
  char **row_first = repeatH(join(black_square, white_square), 4);
  char **white_rook = rook;
  char **white_knight = knight;
  char **white_bishop = bishop;
  char **white_king = king;
  char **white_queen = queen;
  char **row_pieces_left = join(join(white_rook, white_knight), white_bishop);
  char **row_pieces_left_knight = join(join(white_rook, flipV(white_knight)), white_bishop);
  char **row_pieces_center = join(white_queen, white_king);
  char **row_pieces_right = flipH(rotateL(rotateL(row_pieces_left_knight)));
  char **row_pieces = join(join(row_pieces_left, row_pieces_center), row_pieces_right); 
  char **impose_row_pieces = superImpose(row_pieces, row_first);

  interpreter(impose_row_pieces);
}
