#include "Consumer.h"

Consumer::Consumer(std::string n, itemQueue q){
	iq = q;
	name = n;
}

void Consumer::consume(){
	iq.take();
}
