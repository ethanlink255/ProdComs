#include "itemQueue.h"
#include <string>

using namespace std;

class Producer{
private:
	string name;
	int itemId;
	itemQueue iq;
public:
	Producer(string n, itemQueue q);
	void produce();


