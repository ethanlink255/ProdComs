#ifndef PRODUCER_H
#define PRODUCER_H

#include "itemQueue.h"
#include <string>
#include <chrono>
#include <thread>
#include <iostream>

using namespace std;

//tells compiler about the mutex crit stored in itemQueue.h
extern mutex crit;

class Producer{
private:
	string name;
	int itemId;
	itemQueue* iq;
public:
	Producer(string n, itemQueue* q);
	void produce();

	void operator() (){
	        while (true){
                	produce();
			//prevents program from moving too fast to grade
			this_thread::sleep_for(2000ms);
        	}
	}

};


#endif

