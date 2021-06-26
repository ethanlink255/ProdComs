#include "Producer.h"

Producer::Producer(string n, itemQueue* q){
	name = n;
	iq = q;
	itemId = 0;
}

void Producer::produce(){

	item pItem(name, itemId);
	itemId++;

	crit.lock();
	cout << "Item Created with attr. " << name << ", " << itemId << endl;
	iq->put(pItem);
	crit.unlock();
}

