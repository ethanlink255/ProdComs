#include <string>

using namespace std;

class item{
public:
	item(string prod, int i);
	int getId();
	string getProducer();
private:
	String producer;
	int id;
}
