#include <cstdint>
#include <iostream>
using bitboard = uint64_t;
// note: should I create a class for each side? there's a sh*tload of
// declarations here and no operations being done... it would certainly create a
// lot more readability... Maybe a class for the whole board? That would be a
// pretty huge class. Inheritance time? I don't knowwwwwwww ~.~. Being a
// turbo-newbie sucks.
//
// Should I create representations of where pieces should ideally be? 2D array
// or bitboard? Bitboard would keep consistency across the program...What is
// happening!

// print passed-in board (used mainly for debugging)
void print_board(uint64_t board) {
  for (int rank = 0; rank < 8; rank++) {
    for (int file = 0; file < 8; file++) {
      int square = rank * 8 + file;
      bool bit = board & (1ULL << square);
      std::cout << bit << " ";
    }
    std::cout << "\n";
  }
  std::cout << "\nA B C D E F G H\n";
}

int main() {
  // I need to throw these huge declarations somewhere. And fix nvim
  // auto-formatting my things...
  //  starting white piece bitboards
  bitboard white_king = 1ULL << 60;
  bitboard white_queen = 1ULL << 59;
  bitboard white_rooks = (1ULL << 56) | (1ULL << 63);
  bitboard white_bishops = (1ULL << 58) | (1ULL << 61);
  bitboard white_knights = (1ULL << 57) | (1ULL << 62);
  bitboard white_pawns = (1ULL << 48) | (1ULL << 49) | (1ULL << 50) |
                         (1ULL << 51) | (1ULL << 52) | (1ULL << 53) |
                         (1ULL << 54) | (1ULL << 55);

  // starting black piece bitboards
  bitboard black_king = 1ULL << 4;
  bitboard black_queen = 1ULL << 3;
  bitboard black_rooks = (1ULL << 0) | (1ULL << 7);
  bitboard black_bishops = (1ULL << 2) | (1ULL << 5);
  bitboard black_knights = (1ULL << 1) | (1ULL << 6);
  bitboard black_pawns = (1ULL << 8) | (1ULL << 9) | (1ULL << 10) |
                         (1ULL << 11) | (1ULL << 12) | (1ULL << 13) |
                         (1ULL << 14) | (1ULL << 15);

  return 0;
}
