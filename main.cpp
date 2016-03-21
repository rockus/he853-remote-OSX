#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "he853.h"

int main(int argc, char **argv)
{
	int deviceId = atoi(argv[1]);
	int command = atoi(argv[2]);
	HE853Controller *remote = new HE853Controller();

	printf("Sending EU command[%i] to deviceId[%i]\n", command, deviceId);
	remote->sendEU((uint16_t)deviceId, (uint8_t)command);
/*
	usleep(2000);

	printf("Sending UkNewcommand[%i] to deviceId[%i]\n", command, deviceId);
	remote->sendUK((uint16_t)deviceId, (uint8_t)command);

	usleep(2000);

	printf("Sending Kakucommand[%i] to deviceId[%i]\n", command, deviceId);
	remote->sendKaku((uint16_t)deviceId, (uint8_t)command);

	printf("Sending Kakucommand New[%i] to deviceId[%i]\n", command, deviceId);
	remote->sendKakuNew((uint16_t)deviceId, (uint8_t)command);
*/	
	return 0;
}
