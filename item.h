#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>

using namespace std;

class item{
public:
	item(std::string prod, int i);
	int getId();
	std::string getProducer();
private:
	std::string producer = "UNSET";
	int id = -1;
};

#endif
