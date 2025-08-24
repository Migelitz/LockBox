#include <filesystem>
#include <fstream>
#include <iostream>
#include <limits>
#define MIN_CHOICE 1
#define MAX_CHOICE 2
using namespace std;

void save_credentials(void) {
    string account_name;
    string password;
    filesystem::path filepath = "../credentials/credentials.txt";

    // Gather credentials
    cout << "Account Name: ";
    cin >> account_name;
    cout << "Password: ";
    cin >> password;

    filesystem::create_directories(filepath.parent_path());

    ofstream outFile(filepath); // Saving credentials to local and txt file temporarily
    
    // Saving credentials
    if (outFile.is_open()) {
        outFile << "Account Name: " << account_name << "\n" << "Password: " << password;
        outFile.close();
        
        cout << "Your credentials has been saved successfully!" << endl;
    } else {
        cout << "Fail to open file" << endl;
    }

    /*
        For now, it can only save 1 credential. It just overwrites the existing file
    */

}

void retrieve_credentials(void) {
    
}

int main(void) {

    int user_input;

    cout << "=================================================" << endl;
    cout << "Welcome to LockBox++" << endl;
    cout << "Your secure and safe credentials storer" << endl;
    cout << "=================================================" << endl;

    do {
        cout << "Choose an action:" << endl;
        cout << "1 - Save Credentials" << endl;
        cout << "2 - Retrieve Credentials" << endl;
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
    }
    

    return 0;
}