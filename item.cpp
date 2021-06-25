#include "item.h"

item::item(std::string prod, int i){
	producer = prod;
	i = id;
}

int item::getId(){
	return id;
}

std::string item::getProducer(){
	return producer;
}
