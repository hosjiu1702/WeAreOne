#include <string.h>
#include <errno.h>

#include <wiringPi.h>
#include <wiringSerial.h>
int main()
{

	int serial_port;

  if (wiringPiSetup () == -1)
  {
    //fprintf (stdout, "Unable to start wiringPi: %s\n", strerror (errno)) ;
    return 1 ;
}

	if((serial_port = serialOpen("/dev/ttyAMA0", 9600)) < 0)
	{
		//printf("\nerror during init serial");
		return 0;
	}

	while(1)
	{
		int i;
		unsigned int c = 1;

		serialPutchar(serial_port, c);

		delay(500);

	}

	return 0;
}
