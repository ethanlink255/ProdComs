#ifndef ITEM_H
#define ITEM_H

#include <string>

//using namespace std;

class item{
public:
	item(std::string prod, int i);
	int getId();
	std::string getProducer();
private:
	std::string producer;
	int id;
};

#endif
