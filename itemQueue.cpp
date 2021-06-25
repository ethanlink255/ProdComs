#include "itemQueue.h"

void itemQueue::put(item val){
	iq.push(val);
}

item itemQueue::take(){
	item ci = iq.front();
	iq.pop();
	return ci;
}
