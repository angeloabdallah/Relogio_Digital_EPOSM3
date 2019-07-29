#ifndef DISP4_7_H
#define DISP4_7_H


#include <gpio.h>
#include <disp_7.h>
#include <alarm.h>

__BEGIN_SYS



class disp4_7
{

private:

GPIO::GPIO *digits[4];
int values[4];

public:

    disp4_7()
        {

        digits[0] = new GPIO('D',5, GPIO::OUT);
        digits[1] = new GPIO('D',4, GPIO::OUT);
        digits[2] = new GPIO('A',1, GPIO::OUT);
        digits[3] = new GPIO('A',3, GPIO::OUT);
       
        }

    ~disp4_7()
    {

        for (int i=0; i<4; i++){
                delete digits[i];
}
    }
  

  void initDigits()
  {
    for (int i = 0; i < 4; i++)
        {
            digits[i]->set(false);
        }
  }

    void showDigit(int values[]) {

        disp_7 n;

            for (int i=0; i<4; i++)
            { 

                n.setNumber(values[i]);
                digits[i]->set(true);
                Alarm::delay(10);
                for (int x = 0; x < 4; x++)
        {
            digits[x]->set(false);
        }

           }
        }



    void shutDigit() {

                   for (int i=0; i<4; i++)
            { 

                digits[i]->set(false);
               

           }
        }

    };




__END_SYS
#endif
