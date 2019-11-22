#include <iostream>
#include <string>
using namespace std;

string beetlejuice;

int prompt() {
	cout << "";
	cin >> beetlejuice;
	if (beetlejuice != "BEETLEJUICE") {
		prompt();
	}
	return 0;
}

int main() {
	cout << "Oh boy, I'm so glad you changed your mind! you are never gonna regret this!" << endl;
	prompt();
	cout << "That's right, just give me one more!";
	prompt();
	cout << "It's showtime!";
	system("chmod +x beetlejuice.bash");
	system("./beetlejuice.bash");
	return 0;
}
