#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    cout << "Welcome to Engineering Calculator!" << endl;
    cout << "Enter 'quit' to exit." << endl;

    string input;
    while (true) {
        cout << ">> ";
        getline(cin, input);

        if (input == "quit") {
            cout << "Exiting calculator..." << endl;
            break;
        }

       
        double result;
        try {
            result = stod(input);
        }
        catch (...) {
            cout << "Error: Invalid input!" << endl;
            continue;
        }

        
        size_t pos = input.find("sin");
        if (pos != string::npos) {
            double angle = result;
            result = sin(angle * 3.14159265 / 180); 
        }

        pos = input.find("cos");
        if (pos != string::npos) {
            double angle = result;
            result = cos(angle * 3.14159265 / 180);
        }

        pos = input.find("tan");
        if (pos != string::npos) {
            double angle = result;
            result = tan(angle * 3.14159265 / 180);
        }

        
        cout << "Result: " << result << endl;
    }

    return 0;
}
