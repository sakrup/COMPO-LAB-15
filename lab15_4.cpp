#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify source code above this line
void shuffle(int &a,int &b,int &c,int &d){
	int shuffle[] = {a,b,c,d};

	for(int i = 0;i < 4;i++){
		int random = rand()%4;

		int rest = shuffle[i];
		shuffle[i] = shuffle[random];
		shuffle[random] = rest;
	}

	a = shuffle[0];
	b = shuffle[1];
	c = shuffle[2];
	d = shuffle[3];
}