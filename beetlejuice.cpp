#include <iostream>
#include <string>
#include <vector>
using namespace std;

string beetlejuice;
string command;
string path;
string parentpath;

int prompt() {
	cout << "";
	cin >> beetlejuice;
	if (beetlejuice != "BEETLEJUICE") {
        	cout << "C'mon, man! Say, \"BEETLEJUICE\" " << endl;
		prompt();
	}
	return 0;
}

string SplitFilename (const std::string& str)
{
    std::size_t found = str.find_last_of("/\\");
    return str.substr(0,found);
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
