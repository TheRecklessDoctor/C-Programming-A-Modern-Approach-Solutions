#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

// external variables
int num_in_rank[NUM_RANKS];
int num_in_suit[NUM_SUITS];
bool royalFlush,straight, flush, four, three;
int pairs; // can be 0, 1 or 2

//prototypes
void read_cards(void);
void analyse_hands(void);
void print_result(void);


// main
// Calls read_cards, analyse_hands and print_result repeatedly
int main(void){
	for(;;){
		read_cards();
		analyse_hands();
		print_result();
	}

	return 0;
}

// read_cards
// Reads the cards into the external variables num_in_rank, num_in_suit;
// checks for bad cards and duplicate cards
void read_cards(void){
	bool card_exists[NUM_RANKS][NUM_SUITS];
	char ch, rank_ch, suit_ch;
	int rank, suit;
	bool bad_card;
	int cards_read = 0;

	for(rank = 0; rank < NUM_RANKS; rank++){
		num_in_rank[rank] = 0;
		for(suit = 0; suit < NUM_SUITS; suit++){
			card_exists[rank][suit] = 0;
		}
	}

	for(suit = 0; suit < NUM_SUITS; suit++){
			num_in_suit[suit] = 0;
		}
	
	while(cards_read < NUM_CARDS){

		bad_card = false;
		printf("Enter a card: ");

		rank_ch = getchar();
		switch(rank_ch){
			case '0': exit(EXIT_SUCCESS);
			case '2': rank = 0; break;
			case '3': rank = 1; break;
			case '4': rank = 2; break;
			case '5': rank = 3; break;
			case '6': rank = 4; break;
			case '7': rank = 5; break;
			case '8': rank = 6; break;
			case '9': rank = 7; break;
			case 't': case 'T': rank = 8; break;
			case 'j': case 'J': rank = 9; break;
			case 'q': case 'Q': rank = 10; break;
			case 'k': case 'K': rank = 11; break;
			case 'a': case 'A': rank = 12; break;
			default: bad_card = true;
		}

		suit_ch = getchar();
		switch(suit_ch){
			case 'c': case 'C': suit = 0; break;
			case 'd': case 'D': suit = 1; break;
			case 'h': case 'H': suit = 2; break;
			case 's': case 'S': suit = 3; break;
			default: bad_card = true;
		}

		while((ch = getchar()) != '\n'){
			if(ch != ' ') bad_card = true;
		}

		if(bad_card)
			printf("Bad card: ignored\n");
		else if(card_exists[rank][suit])
			printf("Duplicate card: ignored\n");
		else{
			num_in_rank[rank]++;
			num_in_suit[suit]++;
			card_exists[rank][suit] = true;
			cards_read++;
		}
	}

}


// analyse_hand
// Determines whether the hand contains a straight, a flush, four-of-a-kind
// and/or three-of-a-kind; determines the number of pairs; stores the results into the 
// external variables straight, flush, four, three and pairs.
void analyse_hands(void){
	int num_consec = 0;
	int rank, suit;
	int temp_sum = 0;
	royalFlush = false;
	straight = false;
	flush = false;
	four = false;
	three = false;
	pairs = 0;


	for(rank = 8; rank <= 12; rank++){
		if(num_in_rank[rank] == 1){
			temp_sum++;
		}	
	}
	int temp_suit_sum = 0;
	for(suit = 0; suit < NUM_SUITS; suit++){
//		printf("%d in %d and temp_sum: %d\n ", num_in_suit[suit], suit, temp_sum);
		if(num_in_suit[suit] == NUM_CARDS && temp_sum == 5){
			printf("%d %d\n", temp_sum, num_in_suit[suit]);
			royalFlush = true;
			return;
		}
	}

	for(suit = 0; suit < NUM_SUITS; suit++){
		if(num_in_suit[suit] == NUM_SUITS) 
			flush = true;
	}
	rank = 0;
	while(num_in_rank[rank] == 0) 
		rank++;
	
	for(; rank < NUM_RANKS && num_in_rank[rank] > 0; rank++){
		num_consec++;
		if(num_consec == NUM_CARDS){
			straight = true;
			return;
		}

	}
	for(rank = 0; rank < NUM_RANKS; rank++){
		if(num_in_rank[rank] == 4){four = true;}
		if(num_in_rank[rank] == 3){three = true;}
		if(num_in_rank[rank] == 2){pairs++;}

		}


}


// print_result
// prints the classification of the hand based on the external variables
// straight, flush, four, three and pairs.
void print_result(void){
	if(royalFlush)        printf("RoyalFlush");
	else if(straight && flush) printf("Straight flush");
	else if(four)         printf("Four of a kind");
	else if(three &&
	        pairs == 1)   printf("Full house");
	else if(flush)        printf("Flush");
	else if(straight)     printf("Straight");
	else if(three)        printf("Three of a kind");
	else if(pairs == 2)   printf("Two pairs");
	else if(pairs == 1)   printf("Pair");
	else                  printf("High card");

	printf("\n\n");
}



