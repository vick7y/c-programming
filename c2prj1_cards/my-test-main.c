#include "cards.h"

int main(void) {
  card_t c;
  c=card_from_letters(13,SPADES);
  print_card(c);

  return 0;

}
