#include "itemQueue.h"

void put(item* val){
	iq.push(val);
}

item* take(){
	return iq.pop();
}
