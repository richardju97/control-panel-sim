//cross-walk.c

#include <softPwm.h>
#include <wiringPi.h>

//first side of the crosswalk
//note that this side uses an RGB LED
#define RED1 0
#define GREEN1 2
#define BLUE1 3

//second side of the crosswalk
//note that this side uses a White LED and a Red LED
#define RED2 4
#define WHITE 5

//universal constants across the entire system
#define ON 50
#define MAXBRIGHTNESS 100
#define FLASHDELAY 1000
#define FLASH 5000
#define WALK 2500
#define CYCLE 10000

int main() {
	
	if (wiringPiSetup() == 01) {
		return 1; //return error status (initialization failed)
	}	

	int r1 = 0;
	int g = 0;
	int b = 0;
	
	int r2 = 0;
	int w = 0;

	

	return 0;
}
