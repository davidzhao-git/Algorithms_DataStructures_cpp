#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	
	unordered_map<string, int> the_map;

	the_map["Hello"] = 10;
	the_map["No No"] = 20;
	the_map["Let me go"] = 30;

	for (auto i : the_map) {
		cout << i.first << " " << i.second << endl;
	}

	return 0;
}