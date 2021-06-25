#include "Producer.h"

Producer::Producer(string n, itemQueue q){
	name = n;
	iq = q;
	itemId = 0;
}

void Producer::produce(){
	item pItem(name, itemId);
	itemId++;
	iq.put(pItem);
}
