#include "Consumer.h"

Consumer(string n, itemQueue q){
	queue = q;
	name = n;
}

void consume(){
	queue.take();

