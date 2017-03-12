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
#define OFF 0
#define MAX 100
#define FLASHDELAY 1000
#define FLASH 5000
#define WALK 2500
#define CYCLE 10000

int main() {
	
	if (wiringPiSetup() == 01) {
		return 1; //return error status (initialization failed)
	}	

	pinMode(BUTTON1, INPUT);
	pinMode(BUTTON2, INPUT);

	while (1) {
		
		softPwmCreate(RED1, ON, MAX);
		softPwmCreate(GREEN, OFF, MAX);
		softPwmCreate(BLUE, OFF, MAX);
		softPwmCreate(RED2, ON, MAX);
		softPwmCreate(WHITE, OFF, MAX);

		

	}	

	return 0;
}
