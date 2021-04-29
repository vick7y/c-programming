#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "deck.h"
void print_hand(deck_t * hand){
  for (int i=0;i<(*hand).n_cards;i++){
    print_card(*((*hand).cards[i]));
    printf(" ");
  }
  
}

int deck_contains(deck_t * d, card_t c) {
  for (int i=0;i<(*d).n_cards;i++){
    card_t cur_card=*((*d).cards[i]);
    if (cur_card.value==c.value && cur_card.suit==c.suit){
      return 1;
    }
  }
  return 0;
}

void shuffle(deck_t * d){
  if (!(*d).cards){
    return;}
  for (int i=0;i<(*d).n_cards;i++){
    int r = i+(random()%((*d).n_cards-i));
    card_t * temp = (*d).cards[i];
    (*d).cards[i] = (*d).cards[r];
    (*d).cards[r] = temp;
  }
}

void assert_full_deck(deck_t * d) {
  card_t valid_card[52];
  for (unsigned i=0;i<52;i++){
    valid_card[i]=card_from_num(i);
  }
  for (int j=0;j<52;j++){
    card_t card=valid_card[j];
    assert(deck_contains(d, card));
  }  
}
