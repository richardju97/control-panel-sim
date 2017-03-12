//cross-walk.c

#include <softPwm.h>
#include <wiringPi.h>

//first side of the crosswalk
//note that this side uses an RGB LED
#define RED1 0
#define GREEN 2
#define BLUE 3
#define BUTTON1 26

//second side of the crosswalk
//note that this side uses a White LED and a Red LED
#define RED2 4
#define WHITE 5
#define BUTTON2 27

//universal constants across the entire system
#define ON 50
#define MAX 100
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

	pinMode(BUTTON1, INPUT);
	pinMode(BUTTON2, INPUT);

	while (1) {
		
		softPwmCreate(RED1, r1, MAX);
		softPwmCreate(GREEN, g, MAX);
		softPwmCreate(BLUE, b, MAX);
		softPwmCreate(RED2, r2, MAX);
		softPwmCreate(WHITE, w, MAX);

		

	}	

	return 0;
}
