#ifndef ITEMQUEUE_H
#define ITEMQUEUE_H

#include <queue>
#include "item.h"


using namespace std;

class itemQueue{
private:
	queue<item> iq;
public:
	void put(item val);
	item take();

};

#endif
