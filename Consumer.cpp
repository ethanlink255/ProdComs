#include "Consumer.h"

Consumer::Consumer(std::string n, itemQueue* q){
	iq = q;
	name = n;
}

void Consumer::consume(){
	crit.lock();
	if(iq->len() != 0){
		item ci = iq->take();
		cout <<  endl << "Item Taken! CONSID: " << ci.getId() << " CONPID: " << ci.getProducer() << endl << endl;
	}
	else{
		cout << "No Items to Take!" << endl << endl;

	}
	crit.unlock();

}
