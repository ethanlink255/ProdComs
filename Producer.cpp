#include "Producer.h"

Producer(string n, itemQueue q){
	name = n;
	iq = q;
	itemId = 0;
}
void produce(){
	item* pItem = new item(name, iq);
	itemId++;
	iq.push(pItem);
}
