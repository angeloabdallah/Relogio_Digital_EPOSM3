#ifndef DESP_H
#define DESP_H


#include <gpio.h>
#include <alarm.h>
#include <disp_7.h>


__BEGIN_SYS

class desp {

private:
    int *vet[4];
	int c_sec;
	int c_min;
	int min_c;
	int sec_c;
	
	
public:


desp()
{

	
}
~desp()
{
	


}

void constanteDesp(int c_sec, int c_min)
		{

		}
void incrementoSegundo_D()
		{
			
			c_sec = c_sec--;
			sec_c = c_sec;
			}


		void despertador()
		{
			if(sec_c == 0 )
			{
				c_sec = 0;
			}
		}

int initDesp()
{
			c_sec = 60;
			
}

void fourDigitsDesp(int vet[])
		{
			vet[0] = 0;
			vet[1] = 0;
			vet[2] = sec_c/10;
			vet[3] = sec_c%10;
			

		}






};

__END_SYS
#endif
