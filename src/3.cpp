#include <iostream>
using namespace std;

int main() {
    // Generate a random number between 1 and 10
    int randNum = (rand() % 10) + 1;
    cout << "The random number is: " << randNum << endl;
    return 0;
}
