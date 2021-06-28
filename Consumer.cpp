#include "Consumer.h"

Consumer::Consumer(std::string n, itemQueue* q){
	iq = q;
	name = n;
}


void Consumer::consume(){
	crit.lock();

	//Checks if the shared item queue resource contains any times to take
	try{
		item ci = iq->take();
		cout << "Item Taken! ItemID: " << ci.getId() << " Producer: " << ci.getProducer() << endl << endl;
	}
	catch(exception& e){

		cout << "No Items to Take!" << endl << endl;

	}
	crit.unlock();

}
