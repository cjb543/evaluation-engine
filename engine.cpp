#include <cstdint>
#include <iostream>

// print passed in board (used mainly for debugging)
void print_board(uint64_t board) {
  for (int rank = 8; rank > 0; rank--) {
    for (int file = 8; file > 0; file--) {
      int square = 8 * (rank - 1) + file;
      bool bit = board & (1ULL << square);
      std::cout << bit << " ";
    }
    std::cout << "\n";
  }
}

int main() {
  uint64_t bitboard = 0;
  print_board(bitboard);
  return 0;
}
