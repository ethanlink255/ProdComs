#ifndef CONSUMER_H
#define CONSUMER_H

#include "itemQueue.h"
#include <string>
#include <iostream>
#include <thread>
#include <exception>


//tells compiler about the mutex crit stored in itemQueue
extern mutex crit;

class Consumer{
private:
	itemQueue* iq;
	std::string name;
public:
	Consumer(string n, itemQueue* iq);
	void consume();

	void operator() (){
		while (true){
			//prevents program from moving too fast for grading
			this_thread::sleep_for(2000ms);
			consume();
		}
	}
};

#endif

