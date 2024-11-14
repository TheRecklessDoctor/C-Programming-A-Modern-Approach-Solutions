#include <stdio.h>

/* Definitions */
#define ARRAY_LENGTH 8

/* External Variables */
int times[8] = {(8 * 60), (9 * 60 + 43), (11 * 60 + 19), (12 * 60 + 47), (14 * 60), (15 * 60 + 45), (19 * 60), (21 * 60 + 45)};


void find_closest_flight(int desired_time, int *departure_time);

int main(void){
	int clos_departure_time, hours, min;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hours, &min);

	find_closest_flight((hours * 60 + min), &clos_departure_time);

	switch(clos_departure_time){
		case 0: printf("Closest departure time is: 8:00 am, arriving at 10:16am"); break;
		case 1: printf("Closest departure time is: 9:43 am, arriving at 11:52 am"); break;
		case 2: printf("Closest departure time is: 11:19 am, arriving at 1:31 pm"); break;
		case 3: printf("Closest departure time is: 12:47 pm, arriving at 3:00 pm"); break;
		case 4: printf("Closest departure time is: 2:00 pm, arriving at 4:08 pm"); break;
		case 5: printf("Closest departure time is: 3:45pm, arriving at 5:55 pm"); break;
		case 6: printf("Closest departure time is: 7:00 pm, arriving at 9:20 pm"); break;
		case 7: printf("Closest departure time is: 9:45 pm, arriving at 11:58 pm"); break;
		
	}


	return 0;

}


void find_closest_flight(int desired_time, int *departure_time){



	*departure_time = 0;

	for(int i = 0; i < ARRAY_LENGTH-1; i++){
		if(desired_time >= times[i] && desired_time <= times[i+1]){
			*departure_time = i;	
			break;
		}	
	}

	if(desired_time - times[*departure_time] > times[*departure_time + 1] - desired_time){
		*departure_time = *departure_time + 1;
	}
}



