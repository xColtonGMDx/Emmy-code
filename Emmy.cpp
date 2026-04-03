#include <iostream>
#include <string>
using namespace std;

class soft {
	public:
	    string Emmy;
	    
	    void lol() {
	    	cout << "I love " << Emmy << " so much <3" << endl;
	    }
};
void Emmalyn() {
	soft e;
	e.Emmy = "Emmy";
	e.lol();
}
class Love {
	public:
	  string Emmy_love;
	  void love() {
	  	cout << "How much I love Emmy: " << Emmy_love << endl;
	  }
};
int main() {
	Emmalyn();
	Love L;
	L.Emmy_love = "Infinite";
	L.love();
	return 0;
}
	
