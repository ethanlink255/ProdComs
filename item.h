#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>

using namespace std;

class item{
public:
	item(string prod, int i);
	int getId();
	string getProducer();
private:
	//these values are preinitialized so you can see the change after init,
	//note because they need to be
	string producer = "UNSET";
	int id = -1;
};

#endif
