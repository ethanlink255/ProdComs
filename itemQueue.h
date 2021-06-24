#include <queue>
#include "item.h"


using namespace std;

class itemQueue{
private:
	queue<item*> iq;
public:
	itemQueue();
	void put(item* val);
	item take();

}

