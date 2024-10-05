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
  char **row_pieces_left = join(join(join(white_rook, white_knight), white_bishop), white_queen);
  char **row_pieces_right = join(join(join(white_king, white_bishop), white_knight), white_rook);
  char **row_pieces = join(row_pieces_left, row_pieces_right); 
  char **impose_row_pieces = superImpose(row_pieces, row_first);

  interpreter(impose_row_pieces);
}
