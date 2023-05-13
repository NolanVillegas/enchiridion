#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*practice mode: must input full command every addition
default: only addition to code is needed
input triggers explanation + options until command is finished.
additions will be added as topic are covered. */

namespace cmdZero {
    int initializeProSpec() {
        string entspec;
        vector<string> example1 = {"example1"};
        vector<string> example2 = {"example2"};
        vector<string> example3 = {"example3"};
        vector<vector<string>> programSpec;
        programSpec.push_back(example1);
        programSpec.push_back(example2);
        programSpec.push_back(example3);


        cout << "Input: ";
        cin >> entspec;


    }
}

void main() {
    // string 
}
