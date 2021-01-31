 /*
Write a program that will read in a length in feet and inches and output 
the equivalent length in meters and centimeters. Use at least threefunctions: 
one for user input,one or more for calculating, and one for output(console).
 Include a loop that lets the user repeat this computation for new input values 
 until the user says he or she wants to end the program(user has to type exit).
 There are 0.3048 meters in a foot, 100 centimeters in a meter, and 12 inches in a foot.
 */

#include <iostream>

using namespace std;

float processInput(float feet, float inches){
    cout << "You have inputted the following length: " << endl;
    cout << "Feet: " << feet << " Inches: " << inches << endl; 

    float totalFeet = feet + (inches / 12); 
}

float calculate(float totalFeet){
    //total measurement in meters 
    float meters = 0.3048 * totalFeet; 
    return meters;
}

void output(float meters){
    cout << "Your measurement in meters is: " << meters << endl;
    
    // 1 m = 100 cm
    cout << "Your measurement in centimeters is: " << meters * 100 << endl; 
}

int main() {
    string userInput;
    float feetInput;
    float inchesInput;
  
    while (userInput != "exit") {

        //read in length
        cout << "Input your length ini its food and inch measurement separated by a space " << endl; 
        cin >> feetInput >> inchesInput; 
        output(calculate(processInput(feetInput, inchesInput)));

        cout << "Enter 'exit' to quit out of the program or 'continue' to convert another length." << endl;
        cin >> userInput;
    }

return 0; 
}