#ifndef pr13_h
#define pr13_h

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct card {
    char cardId;
    char cardSuit;
    int cardPoints;
} CARD;

typedef struct card_deck {
	int n_cards;
	int size_cards;
	CARD * pcards;
} CARD_DECK;

typedef struct player {
    char *pusername;
    CARD_DECK deck;
    struct player * pnext;
} PLAYER;

typedef struct game {
    PLAYER *pplayers;
} GAME;

/**
* Given an array of numbers, creates and inits a linked list of players.
* Each player should be initialized with an empty array of cards (empty deck of cards)
* @param pnames - array of player names
* @param size - number of players to insert
* @return copy of the created game
*/
GAME create_game(const char *pnames[], int size);

/**
* Given an initialized game, a card suit and a user name searchs for the card
* with the highest value in his/her deck of cards
* @param g - copy of initialized game
* @param suit - card suit to search
* @param pname - name of the player to search
* @return pointer to the found card (NULL if nonexistent)
*/
CARD* find_highest_card_player(GAME g, char suit, const char pname[]);

/**
* Inserts a new player into the initialized game.
* Linked list insertion.
* @param pg - pointer to the initialized game
* @param player - new player's name
*/
void insert_player(GAME *pg, const char player[]);

/**
* Inserts a new cards into the deck of cards of a given player
* Array insertion.
* @param pg - pointer to the initialized game
* @param player - player's name
* @param id - new card id
* @param suit - new card suit
* @param points - new card points
*/
void insert_card(GAME *pg, const char player[], char id, char suit, int points);

void print_game (GAME g);

#endif /* pr13_h */