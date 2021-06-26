#include <iostream>
#include <thread>
#include "Consumer.h"
#include "Producer.h"
#include "itemQueue.h"

int main(){
	itemQueue* iq = new itemQueue();

	Producer nProd("First Producer", iq);
	Consumer nComs("First Consumer", iq);

	Producer sProd("Second Producer", iq);
	Consumer sComs("Second Consumer", iq);

	Consumer tComs("Third Consumer", iq);

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


	while (true);
}



