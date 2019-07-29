#ifndef __disp_7_h
#define __disp_7_h


#include <gpio.h>


__BEGIN_SYS

class disp_7
{
		private:

			GPIO *a,*b,*c,*d,*e,*f,*g,*dp;

		public:
		 
			 disp_7()
			 {
			 	a = new GPIO('C',3, GPIO::OUT);
			 	b = new GPIO('A',7, GPIO::OUT);
				c = new GPIO ('D',1, GPIO::OUT);
				d = new GPIO('D',3, GPIO::OUT);
				e = new GPIO('C',5, GPIO::OUT);
				f = new GPIO('C',6, GPIO::OUT);
				g = new GPIO('B',2, GPIO::OUT);
				dp = new GPIO ('B',3, GPIO::OUT);
	            
			 }

			 ~disp_7()
			 {

			 	delete a;
			 	delete b;
			 	delete c;
			 	delete d;
			 	delete e;
			 	delete f;
			 	delete g;
			 	delete dp;


			 }

			void setNumber(int number)
			{		
				
				

					   
				switch(number)
				{
						case 0: //0b00111111
						a->set(false);
					    b->set(false);
					    c->set(false);
					    d->set(false);
					    e->set(false);
					    f->set(false);
					    g->set(true);
					    dp->set(true);
					    break;

					    case 1: //0b00000110
					    a->set(true);
					    b->set(false);
					    c->set(false);
					    d->set(true);
					    e->set(true);
					    f->set(true);
					    g->set(true);
					    dp->set(true);
					    break;

					    case 2: //0b01011011
					    a->set(false);
					    b->set(false);
					    c->set(true);
					    d->set(false);
					    e->set(false);
					    f->set(true);
					    g->set(false);
					    dp->set(true);
					    break;

					    case 3: //0b01001111
					    a->set(false);
					    b->set(false);
					    c->set(false);
					    d->set(false);
					    e->set(true);
					    f->set(true);
					    g->set(false);
					    dp->set(true);
					    break;

					    case 4: //0b01100110
					    a->set(true);
					    b->set(false);
					    c->set(false);
					    d->set(true);
					    e->set(true);
					    f->set(false);
					    g->set(false);
					    dp->set(true);
					    break;

					    case 5: //0b01101101
					    a->set(false);
					    b->set(true);
					    c->set(false);
					    d->set(false);
					    e->set(true);
					    f->set(false);
					    g->set(false);
					    dp->set(true);
					    break;

					    case 6: //0b01111101
					    a->set(false);
					    b->set(true);
					    c->set(false);
					    d->set(false);
					    e->set(false);
					    f->set(false);
					    g->set(false);
					    dp->set(true);
					    break;


					    case 7: //0b00000111
					    a->set(false);
					    b->set(false);
					    c->set(false);
					    d->set(true);
					    e->set(true);
					    f->set(true);
					    g->set(true);
					    dp->set(true);
					    break;
					    
					    case 8: //0b01111111
					    a->set(false);
					    b->set(false);
					    c->set(false);
					    d->set(false);
					    e->set(false);
					    f->set(false);
					    g->set(false);
					    dp->set(true);
					    break;

					    case 9: //0b01101111
					    a->set(false);
					    b->set(false);
					    c->set(false);
					    d->set(false);
					    e->set(true);
					    f->set(false);
					    g->set(false);
					    dp->set(true);
					    break;
				}


			}




};



__END_SYS
#endif