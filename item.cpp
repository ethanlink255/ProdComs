#include "item.h"

item::item(std::string prod, int i){
	producer = prod;
	id = i;
}

int item::getId(){
	return id;
}

std::string item::getProducer(){
	return producer;
}
