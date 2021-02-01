#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {
    string name,headline;
    float proj,exam,total;
    ifstream inFile("outfile",ios::in);
    if(!inFile) {
        cerr << "Fail opening" << endl;
        exit(1);
    }
    getline(inFile,headline);
    cout << headline << endl;
    while(inFile >> name >> proj >> exam >> total) {
        cout << name << "\t" << proj << "\t" << exam << "\t" << total << endl;
    }
    return 0;
}
