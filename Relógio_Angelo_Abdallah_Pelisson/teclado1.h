#ifndef TECLADO1_H
#define TECLADO1_H

#include <disp_7.h>
#include <utility/ostream.h>

__BEGIN_SYS



class teclado1 {

private:

	GPIO::GPIO *R1, *R2,*R3, *R4, *C2, *C1;
	int tc;

public:


teclado1()
{

	R1 = new GPIO('B',7, GPIO::IN);
 	R2 = new GPIO('C',0, GPIO::IN);
	R3 = new GPIO('A',0, GPIO::IN);
	R4 = new GPIO('C',1, GPIO::IN);
	C2 = new GPIO('A',6, GPIO::OUT);
	C1 = new GPIO('C',4 , GPIO::OUT);		

}
~teclado1()
{
	delete R1;
	delete R2;
	delete R3;
	delete R4;
	delete C2;
	delete C1;


}


int tecla1()
{
C1->set(false);
C2->set(true);
R1->set(true);
R2->set(true);
R3->set(true);
R4->set(true);


	if(R1->get()==0)
		{
			tc = 1;
			return tc;
		}else if(R4->get()==0)
		{
			tc = 2;
			return tc;
		}


C1->set(true);
C2->set(false);
R1->set(true);
R2->set(true);
R3->set(true);
R4->set(true);

	if(R1->get()==0)
		{
			tc = 3;
			return tc;
		}else if(R4->get()==0)
		{
			tc = 4;
			return tc;
		}


return 0;

}
/*
//saida 0 ||| entrada 1
void teclaHora()
{
	OStream cout;
	C1->set(false);
	C1->set(true);
	bt = R1->get();
	
	if (R1->get()==1)
	{
		cout << "A"<<endl;
		bt=0;

	}

}

void teclaCron()
{
	OStream cout;
	C1->set(false);
	if (R2->get()==0)
	{
		cout << "D"<<endl;
	}

}


void teclaDesp()
{
	OStream cout;
	C1->set(false);
	if (R3->get()==0)
	{
		cout << "C"<<endl;
	}

}

*/



};

__END_SYS
#endif
// criar um método inteiro retorne um valor botão, e dessa forma 
//no main realizar o debouncer.