#include "itemQueue.h"

mutex crit;

void itemQueue::put(item val){
	iq.push(val);
	item test = iq.front();

}

item itemQueue::take(){
	//checks if there as an element in the queue to return, else throw excpetion
	if(iq.size() != 0){
		item ci = iq.front();
		iq.pop();
		return ci;
	}
	throw out_of_range("No elements present in itemQueue instance");
}

int itemQueue::cid(){
	return iq.front().getId();
}

int itemQueue::len(){
	return iq.size();
}
