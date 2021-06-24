#include "itemQueue.h"
#include <string>

using namespace std;

class Consumer{
private:
	itemQueue queue;
	string name;
public:
	Consumer(string n, itemQueue q);
	void consume();


