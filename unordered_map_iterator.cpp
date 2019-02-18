#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

	unordered_map<string, float> the_map;

	the_map["GOOG"] = 900.12;
	the_map["AAPL"] = 200;
	the_map["FB"] = 180.55;
	
	the_map.insert(make_pair("NFLX", 299.78));
	the_map.insert(make_pair("BAC", 23.1));

	string key = "FB";

	if (the_map.find(key) == the_map.end()) {
		cout << key << " not found\n";
	}
	else {
		cout << key << " is found\n";
	}

	unordered_map<string, float>::iterator iter;
	cout << "Print all the paris:\n";

	for (iter = the_map.begin(); iter != the_map.end(); iter++) {
		cout << iter->first << " " << iter->second << endl;
	}

	return 0;

}