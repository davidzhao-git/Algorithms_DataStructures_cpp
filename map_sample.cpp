#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int,char> example = {{21,'a'},
                             {3,'b'},
                             {4,'c'},
                             {0,'d'}};

    auto search = example.find(2);
    
    cout << search->first << endl;
    cout << "end of first" << endl;
    cout << search->second << endl;
    cout << "end of second" << endl;
    
    if (search == example.end()) {
        cout << "print out here" << endl;
    }
    
    return 0;
    
}