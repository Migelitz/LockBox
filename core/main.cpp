#include "cipher.hpp"
#include <filesystem>
#include <fstream>
#include <iostream>
#include <limits>
#include <string>
#define MIN_CHOICE 1
#define MAX_CHOICE 3
using namespace std;

// Credential storage location
filesystem::path filepath = "../credentials/credentials.txt";

void save_credentials(void) {

    string account_name;
    string password;

    // Gather credentials
    cout << "Account Name: ";
    cin >> account_name;
    cout << "Password: ";
    cin >> password;

    filesystem::create_directories(filepath.parent_path());

    ofstream outFile(filepath, ios::app); // Saving credentials to local and txt file temporarily; ios::app means input-output-stream <- (class) append
    
    // Saving credentials
    if (outFile.is_open()) {
        outFile << "Account Name: " << account_name << endl;
        outFile << "Password: " << password << endl;
        outFile << "\n";
        outFile.close();
        cout << "=================================================" << endl;        
        cout << "Your credentials has been saved successfully!" << endl;
        cout << "=================================================" << endl;  
    } else {
        cout << "=================================================" << endl;        
        cerr << "Fail to open file" << endl;
        cout << "=================================================" << endl;        
    }
}

void retrieve_credentials(void) {

        ifstream file(filepath);
 
        if (file.is_open()) {
            
            string stored_credentials;
            file >> stored_credentials;

            cout << "=================================================" << "\n" << endl;
            cout << "Your saved credentials:" << endl;
            cout << stored_credentials; // Prints the skipped first word in txt file. Will find the simpler solution. (Looks weird and waster of resources for this solution?)
            while (getline(file, stored_credentials)) {
                cout << stored_credentials << endl;
            }
            cout << "== END OF THE LIST ==" << "\n" << endl;
            cout << "=================================================" << endl;
            file.close();

        } else {

            cout << "=================================================" << endl;
            cerr << "Failed to retrieve data." << endl;
            cout << "=================================================" << endl;

        }

}

int main(void) {

    int user_input;

    cout << "=================================================" << endl;
    cout << "Welcome to LockBox++" << endl;
    cout << "Your secure and safe credentials storer" << endl;
    cout << "=================================================" << endl;

    // Loops the program after one action
    while (true) {
        
        int user_input = 0;

        do {

            cout << "Choose an action:" << endl;
            cout << "1 - Save Credentials" << endl;
            cout << "2 - Retrieve Credentials" << endl;
            cout << "3 - Exit" << endl;
            cout << "=================================================" << endl;
            cout << "Action: ";
            cin >> user_input;

            // Handle input error
            if (cin.fail()) {
                cin.clear(); // Clear the error state
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore bad input until \n met
            }

        } while (user_input < MIN_CHOICE || user_input > MAX_CHOICE);

        if (user_input == 1) {
            save_credentials();
        } else if (user_input == 2) {
            retrieve_credentials();
        } else {
            cout << "Exiting program..." << endl;
            break;
        }
    }
    
    return 0;
}