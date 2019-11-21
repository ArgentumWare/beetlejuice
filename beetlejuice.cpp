#include <iostream>
#include <fstream>
#include <string>
#include "counter.h"
using namespace std;

start beg;
ifstream counter;
ofstream header;
string content;
string hContent;
int i;

int main() {
	counter.open("counter.txt");
	for(i=0 ; counter.eof()!=true ; i++) {
		content += counter.get();
	}
	header.open("counter.h");
	header << content;
	if (beg.time == 1) {
		cout << "Oh boy, I'm so glad you changed your mind! you are never gonna regret this!";
		hContent = "class start {\n    int time = 2;\n};";
		hContent >> header;
	}
	else if (beg.time == 2) {
		cout << "That's right, just give me one more!";
		hContent = "class start {\n    int time = 3;\n};";
		hContent >> header;
	}
	else if (beg.time == 3) {
		cout << "It's showtime!";
		hContent = "class start {\n    int time = 1;\n};";
		hContent >> header;
		system("chmod +x beetlejuice.bash");
		system("./beetlejuice.bash");
	}
	return 0;
}
