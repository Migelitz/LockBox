#include <iostream>
#include <limits>
#define MAX_CHOICE 2
#define MIN_CHOICE 1
using namespace std;

void save_credentials(void) {
    string account_name;
    string password;

    // Gather credentials
    cout << "Account Name:" << endl;
    cin >> account_name;
    cout << "Password:" << endl;
    cin >> password;

    // Saving credentials


    // Credential feedback
    cout << "Your credentials has saved successfully" << endl;

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
        cin >> user_input;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

    } while (user_input < MIN_CHOICE || user_input > MAX_CHOICE);

    if (user_input == 1) {
        save_credentials();
    } else if (user_input == 2) {
        retrieve_credentials();
    }
    

    return 0;
}