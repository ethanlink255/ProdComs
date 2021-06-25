#ifndef CONSUMER_H
#define CONSUMER_H


#include "itemQueue.h"
#include <string>

//using namespace std;

class Consumer{
private:
	itemQueue iq;
	std::string name;
public:
	Consumer(string n, itemQueue q);
	void consume();
};

#endif

