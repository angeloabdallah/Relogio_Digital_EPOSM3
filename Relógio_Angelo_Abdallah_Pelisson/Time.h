#ifndef TIME_H
#define TIME_H


#include <gpio.h>
#include <alarm.h>
#include <disp_7.h>


__BEGIN_SYS


class Time
{

private:

		int hour;
		int min;
		int sec;
		int constHour;
		int constMin; 
		int constSec; 
		int *vec[4];
		int x;
	
	public:

		Time()
		{

		}

		~Time() 
		{
		
		}

		void constanteHoras(int constSec, int constMin, int constHour)
		{
			constHour = 0;
			constSec =0;
			constMin = 0;
		}

	//classe cronometro do epos

		
		void incrementoSegundo_H()
		{
			constSec = constSec++;
				sec =  constSec;
		}


		

		void incrementoHora()
		{			
			   

			if(constSec >= 59)
			{
				constMin = constMin + 1;
				min = constMin;
				constSec =0;

			}

			if(constMin >= 59)
			{
				constHour = constHour + 1;		
				hour = constHour++;
				constMin=0;
				
			}

			if(constHour >= 24)
			{
				constHour=0; 
			}	 

		}



		void fourDigitsHora(int vec[])
		{
            
			




			vec[0] = hour/10;
			vec[1] = hour%10;
			vec[2] = min/10;
			vec[3] = min%10;
			
		}

		



		

	
};

__END_SYS
#endif