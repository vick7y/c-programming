#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "cards.h"


void assert_card_valid(card_t c) {
  assert(c.value>=2);
  assert(c.value<=VALUE_ACE);
  assert(c.suit>=SPADES);
  assert(c.suit<=CLUBS);

}

const char * ranking_to_string(hand_ranking_t r) {
  switch(r){
  case STRAIGHT_FLUSH: return "STRAIGHT_FLUSH";
  case FOUR_OF_A_KIND: return "FOUR_OF_A_KIND";
  case FULL_HOUSE: return "FULL_HOUSE";
  case FLUSH: return "FLUSH";
  case STRAIGHT: return "STRAIGHT";
  case THREE_OF_A_KIND: return "THREE_OF_A_KIND";
  case TWO_PAIR: return "TWO_PAIR";
  case PAIR: return "PAIR";
  case NOTHING: return "NOTHING";
  }
  return 0;
}

char value_letter(card_t c) {
  switch(c.value) {
  case 10:return '0';
  case VALUE_JACK:return 'J';
  case VALUE_QUEEN:return 'Q';
  case VALUE_KING:return 'K';
  case VALUE_ACE:return 'A';
  default: break;
  }
  return '0'+c.value;
}


char suit_letter(card_t c) {
  switch(c.suit){
  case SPADES: return 's';
  case HEARTS: return 'h';
  case DIAMONDS: return 'd';
  case CLUBS: return 'c';
  default: break;
  }
  return 0;
  
}

void print_card(card_t c) {
  char value_text=value_letter(c);
  char suit_text=suit_letter(c);
  printf("%c%c",value_text,suit_text);
}

card_t card_from_letters(char value_let, char suit_let) {
  card_t temp;
  switch(value_let){
  case '0': temp.value=10; break;
  case 'J': temp.value=VALUE_JACK; break;
  case 'Q': temp.value=VALUE_QUEEN; break;
  case 'K': temp.value=VALUE_KING; break;
  case 'A': temp.value=VALUE_ACE; break;
  default: temp.value = value_let - 48; break;
  }

  switch(suit_let){
  case 's': temp.suit=0;break;
  case 'h': temp.suit=1;break;
  case 'd': temp.suit=2;break;
  case 'c': temp.suit=3;break;
  }

  assert_card_valid(temp);
  return temp;
}

card_t card_from_num(unsigned c) {
  card_t temp;
  temp.value=c%13+2;
  temp.suit=c/13;
  return temp;
}
