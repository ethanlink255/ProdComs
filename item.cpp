#include "item.h"

item::item(string prod, int i){
	producer = prod;
	id = i;
}

int item::getId(){
	return id;
}

string item::getProducer(){
	return producer;
}
