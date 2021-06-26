#include "itemQueue.h"

mutex crit;

void itemQueue::put(item val){
	iq.push(val);
	item test = iq.front();

}

item itemQueue::take(){
	item ci = iq.front();
	iq.pop();
	return ci;
}

int itemQueue::cid(){
	return iq.front().getId();
}

int itemQueue::len(){
	return iq.size();
}
