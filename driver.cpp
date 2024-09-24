#include <iostream>

using namespace std;

double prompt(double lower, double upper, string question, string invalid) {
    double value;
    
    cout << question << endl;
    while (!(cin >> value) || value < lower || value > upper)
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << invalid << endl;
        cout << question << endl;
    }
    return value;
}

double prompt(string question, string invalid) {
    double value;
    
    cout << question << endl;
    while (!(cin >> value))
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << invalid << endl;
        cout << question << endl;
    }
    return value;
}

int main() {
    double grade = prompt(0, 100, "What is your grade?", "That grade is invalid");
    cout << "Your grade is " << grade << "%." << endl;
    
    double twopointfive = prompt(2.5, 2.5, "What is 5 divided by 2?", "That is incorrect.");
    cout << "You're right! 5 divided by 2 is " << twopointfive << "." << endl;
    
    double favorite = prompt("What's your favorite number?", "That's not a number! Let's try again.");
    
    if (favorite == 49) {
        cout << "Wow! " << favorite << " is my favorite number too!" << endl;
    }
    else {
        cout << "Nice! " << favorite << " is a cool number." << endl;
    }
    
    return 0;
}
