#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

// external variables
int hand[NUM_CARDS][2] = {{0}};
bool straight, flush, four, three;
int pairs; // can be 0, 1 or 2

//prototypes
void read_cards(void);
void analyze_hands(void);
void print_result(void);
bool check_duplicate(int cards_read, int rank, int suit);
void sort_cards();


// main
// Calls read_cards, analyse_hands and print_result repeatedly
int main(void){
	for(;;){
		read_cards();
		analyze_hands();
		print_result();
	}

	return 0;
}

bool check_duplicate(int cards_read, int rank, int suit){
	for(int i = 0; i < cards_read; i++){
		if(hand[i][0] == rank && hand[i][1] == suit){
			return true;
		}
	}

	return false;
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
		else if(check_duplicate(cards_read, rank, suit))
			printf("Duplicate card: ignored\n");
		else{
			hand[cards_read][0] = rank;
			hand[cards_read][1] = suit;
			cards_read++;
		}
	}

}

// sort_cards
// sorts the cards by rank as its needed to check if the hand is straight
void sort_cards(){
	
	int temp_rank, temp_suit;
	
	for(int i = 0; i < NUM_CARDS; i++){
		for(int j = i+1; j<NUM_CARDS; j++){
			temp_rank = hand[i][0];
			temp_suit = hand[i][1];

			if(hand[j][0] < hand[i][0]){
				hand[i][0] = hand[j][0];
				hand[i][1] = hand[j][1];
				hand[j][0] = temp_rank; 
				hand[j][1] = temp_suit; 

			}
		}
	}
}

// analyse_hand
// Determines whether the hand contains a straight, a flush, four-of-a-kind
// and/or three-of-a-kind; determines the number of pairs; stores the results into the 
// external variables straight, flush, four, three and pairs.
void analyze_hands(void){
	int num_consec = 0;
	int rank, suit;
	straight = false;
	flush = false;
	four = false;
	three = false;
	pairs = 0;

	
	sort_cards();
	
	bool sameSuit = true;
	int firstSuit = hand[0][1];
	for(suit = 0; suit < NUM_CARDS ; suit++){
		if(hand[suit][1] != firstSuit){
			sameSuit = false;	
		}		
	}
	flush = sameSuit ? true : false;


	for(int i = 1; i < NUM_CARDS; i++){
		if(hand[i][0] != hand[i-1][0] + 1){
			break;
		}
		num_consec++;
	}
	if(num_consec == NUM_CARDS){
		straight = true;
		return;
	}
	int prevRank = 0; 
	for(int i = 0; i < NUM_CARDS - 1; i++){
		if(hand[i][0] == prevRank){
			continue;
		}		

		int ranks = 1;
		for(int j = i+1; j < NUM_CARDS; j++){
			if(hand[j][0] == hand[i][0]){
				ranks++;
			}
		}

		if(ranks == 4){
			four = true;
			return;
		}else if(ranks == 3){
			three = true;
		}else if(ranks == 2){
			pairs++;
			printf("%d pairs\n", pairs);
		}
		ranks = 1;
		prevRank = hand[i][0];


	}	

	return;

}


// print_result
// prints the classification of the hand based on the external variables
// straight, flush, four, three and pairs.
void print_result(void){
	if(straight && flush) printf("Straight flush");
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



