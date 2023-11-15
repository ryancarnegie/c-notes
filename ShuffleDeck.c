/* Populate and shuffle a deck of cards 
   the first deck is displayed in order,
   the second deck is shuffled and displayed again.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDS 52
#define FACES 13

struct card {
	const char *face;
	const char *suit;
};

typedef struct card Card;

void fillDeck(Card* const Deck, const char* faces[], const char* suits[]);
void displayCards(const Card* const Deck);
void shuffle(Card* const deck);

int main() {
	srand(time(NULL));
	const char *faces[] = {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", 
                         "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
	const char *suits[] = { "Hearts", "Diamonds", "Clubs", "Spades" };
	
	Card deck[CARDS];
	fillDeck(deck, faces, suits);
	displayCards(deck);
	shuffle(deck);
	displayCards(deck);

	return 0;
}

void shuffle(Card* const deck) {
	for (size_t i = 0; i < CARDS; i++) {
		size_t j = rand() % CARDS;
		Card temp = deck[i];
		deck[i] = deck[j];
		deck[j] = temp;
	}
}

void fillDeck(Card* const Deck, const char* faces[], const char* suits[]) {
	for (size_t i = 0; i < CARDS; ++i) {
		Deck[i].face = faces[i % FACES];
		Deck[i].suit = suits[i / FACES];
	}
}

void displayCards(const Card* const Deck) {
	size_t i;
	for (i = 0; i < CARDS; i++) {
		printf("%-5s of %-10s%s", Deck[i].face, Deck[i].suit,
			(i + 1) % 4 ? " " : "\n");
	}
	puts("\n\n\n");
}

