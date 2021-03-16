#include <stdio.h>
#include <stdlib.h>

#define MIN 60
#define HRS 24 
#define SEC 60

int main(int x, char** y) {
	int min, hrs, sec; // declare var of cycles
	int totalhrs = atoi(y[1]);
	int totalmin = atoi(y[2]);
	int totalsec = atoi(y[3]);
	for (hrs = 0; hrs < HRS; hrs++) {
		for (min = 0; min < MIN; min++) {
			for (sec = 0; sec < SEC; sec++) {
				printf("%d:%d:%d\n", hrs, min, sec);
				if (hrs == totalhrs && min == totalmin && sec == totalsec) {
					return 0;	
				}
			}
		}
	}
}
