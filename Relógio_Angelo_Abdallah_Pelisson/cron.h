#ifndef CRON_H
#define CRON_H


#include <gpio.h>
#include <alarm.h>
#include <disp_7.h>


__BEGIN_SYS

class cron {

private:
    int *vet[4];
	int c_sec;
	int c_min;
	int min_c;
	int sec_c;
	
	
public:


cron()
{

	
}
~cron()
{
	


}

void constanteCron(int c_sec, int c_min)
		{

		}
void incrementoSegundo_C()
		{
			c_sec = c_sec++;
				sec_c =  c_sec;
		}


		void cronometro()
		{
			if(c_sec > 59)
			{
				c_min = c_min++;
				min_c = c_min;
				c_sec =0;
			}

		}

int initCron()
{
			c_sec = 0;
			c_min = 0;
			min_c =0;
}
void fourDigitsCron(int vet[])
		{
			vet[0] = min_c/10;
			vet[1] = min_c%10;
			vet[2] = sec_c/10;
			vet[3] = sec_c%10;
			

		}






};

__END_SYS
#endif
