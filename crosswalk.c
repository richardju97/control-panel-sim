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

	int button1 = LOW;
	int button2 = LOW;
	int status = 0;

	//status
	//0 -> STOP (RED) 
	//1 -> WALK (WHITE)
	//2 -> FLASHING RED


	pinMode(BUTTON1, INPUT);
	pinMode(BUTTON2, INPUT);

	while (1) {
		
		softPwmCreate(RED1, ON, MAX);
		softPwmCreate(GREEN, OFF, MAX);
		softPwmCreate(BLUE, OFF, MAX);
		softPwmCreate(RED2, ON, MAX);
		softPwmCreate(WHITE, OFF, MAX);

		button1 = digitalRead(BUTTON1);
		button2 = digitalRead(BUTTON2);	

		if ((button1 == LOW || button2 == LOW) && status == 0) {
			
			softPwmWrite(RED1, ON);
			softPwmWrite(GREEN, ON);
			softPwmWrite(BLUE, ON);
			softPwmWrite(RED2, OFF);
			softPwmWrite(WHITE, ON);
			delay(WALK);
		}

		//temporarily set back to red for testing
			softPwmWrite(RED1, ON);
			softPwmWrite(GREEN, OFF);
			softPwmWrite(BLUE, OFF);
			softPwmWrite(RED2, ON);
			softPwmWrite(WHITE, OFF);

		delay(100);		

	}	

	return 0;
}
