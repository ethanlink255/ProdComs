#include <iostream>
#include <thread>
#include "Consumer.h"
#include "Producer.h"
#include "itemQueue.h"

int main(){
	//Create shared iteqm queue resource
	itemQueue* iq = new itemQueue();

	//Initialize Producer and Consumers 
	Producer nProd("First Producer", iq);
	Consumer nComs("First Consumer", iq);

	Producer sProd("Second Producer", iq);
	Consumer sComs("Second Consumer", iq);

	Consumer tComs("Third Consumer", iq);

	//create threads for Prod Coms objects
	std::thread nProdth(nProd);
	nProdth.detach();
	std::thread nComth(nComs);
	nComth.detach();

	std::thread sProdth(sProd);
	std::thread sComth(sComs);
	sProdth.detach();
	sComth.detach();

        std::thread tComth(tComs);
        tComth.detach();

	//prevents the ending of the main application thread
	while (true);
}



