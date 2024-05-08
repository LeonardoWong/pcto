#include <iostream>
#include <string>
//#include <windows.h>
#include <unistd.h>

using namespace std;

int main() {
    string myString = "Hello, World!";
    for (char letter : myString) {
        cout << letter << " ";
    }
    cout << endl;
    return 0;
}
