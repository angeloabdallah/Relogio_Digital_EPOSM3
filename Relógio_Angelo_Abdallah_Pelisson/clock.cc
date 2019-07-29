#include <utility/ostream.h>
#include <Time.h>
#include<disp_7.h>
#include <chronometer.h>
#include <disp4_7.h>
#include <alarm.h>
#include <gpio.h>
#include <teclado1.h>
#include <cron.h>
#include <desp.h>

using namespace EPOS;


OStream cout;

Time h;
desp j;
disp4_7 k;
cron c;
Chronometer crn;
teclado1 key, bot;

int main()

{
	int digito_h[4];
	int digito_cron[4];
	int digito_zero[] = {0,0,0,0};
	int digito_desp[4];
	int bt;
	int aux;
	bool sw;

	k.initDigits();
	h.constanteHoras(0,0,0);
	c.constanteCron(0,0);
	j.constanteDesp(0,0);
	crn.start();
	sw = 1;
	
	
		while(true){
  
           if (crn.read()>=1000000)
           {
           		h.incrementoSegundo_H();
           		c.incrementoSegundo_C();
           		j.incrementoSegundo_D();
           		crn.reset();
    		    crn.start();        
           }
           
	    		h.incrementoHora(); 
	    		c.cronometro();
	    		//j.despertador();
	    		h.fourDigitsHora(digito_h);
	    		c.fourDigitsCron(digito_cron);
	    		j.fourDigitsDesp(digito_desp);
	    		//c.fourDigitsCron(digito_cron);
	    		//k.showDigit(digito_h);

	    		//aux = bot.tecla1();
	    		bt = key.tecla1();
	    			
	    				
	    			

	    		switch(bt) {

	    			case 1:
	    			if(sw == 1)
	    		{
	    			aux = 1;
					sw = 0;
					bt = 0;
					cout << 'a' << endl;
				} 
	    		   	break;

	    			case 2:	
	    			if(sw == 1)
	    		{
					aux = 2;
					sw = 0;
					bt = 0;					
					cout << 'b' << endl;
				

	    		} 
	    				break;

	    			case 3:
	    					if(sw == 1)
	    		{
	    			aux = 3;
	    			sw = 0;
					bt = 0;
					cout << 'c' << endl;
					

	    		} 
	    				break;



	    			case 4:
	    					if(sw == 1)
	    		{
					aux = 4;
					sw = 0;
					bt = 0;	
					cout << 'd' << endl;
					

	    		} 
	    				break;

	    			default:

	    			if(sw == 0)
	    		{
	    			sw = 1;
	    		}


	    		}

	    	switch(aux)
	    	{
	    		case 1:
	    		k.showDigit(digito_h);
	    		//flag++;
	    		break;

	    		case 2:

	    		k.showDigit(digito_zero);
	    		Alarm::delay(5);
	    		//flag = 0;
	    		c.initCron();
	    		j.initDesp();
	    		
	    		break;

	    		case 3:
	    		
	    		k.showDigit(digito_desp);
	    		
	            break;

	            case 4:

				k.showDigit(digito_cron);

	            
	            break;

	            default:

	            aux =0;
	    		
	    	}

				          
          }
	return 0;
} 