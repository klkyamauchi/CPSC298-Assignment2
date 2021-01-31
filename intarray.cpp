/* 
Write a program that will read up to ten nonnegative integers into an array called numberArray 
and then write/printthe integers back to the screen(console output). For this exercise you 
need notuse any functions. 
*/


#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) { 

    //initialize array of size 10 
    vector<int> numberArray(10);
    int tempVal; 

    // prompt and read integers into the array
    for (int i = 0; i < numberArray.size(); ++i) {
        cout << "Enter a nonnegative integer" << endl; 
        cin >> tempVal;
        numberArray.at(i) = tempVal;  
    }

    cout << "Your array of numbers is: " << endl;
    for (int i = 0; i < numberArray.size(); ++i) {
        cout << numberArray.at(i) << " " ;
    }

    return 0;


}