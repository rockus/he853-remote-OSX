#include <stdlib.h>
#include <stdio.h>
#include "he853.h"

int main(int argc, char **argv)
{
	int deviceId = atoi(argv[1]);
	int command = atoi(argv[2]);
	HE853Controller *remote = new HE853Controller();
	printf("Sending command[%i] to deviceId[%i]\n", command, deviceId);
	remote->sendUK((uint16_t)deviceId, (uint8_t)command);
	sleep(2);
	printf("Sending UkNewcommand[%i] to deviceId[%i]\n", command, deviceId);
	remote->sendUKNew((uint16_t)deviceId, (uint8_t)command);
	sleep(2);
	printf("Sending Kakucommand[%i] to deviceId[%i]\n", command, deviceId);
	remote->sendKaku((uint16_t)deviceId, (uint8_t)command);

	return 0;
}
