#include <iostream>
#include <string>
using namespace std;

int main() {
    while (true) {
        string user_input;
        cout << "can i pleaseeee have the boba :( : ";
        cin >> user_input;

        for (char& c : user_input) {
            c = tolower(c); // Convert input to lowercase
        }

        if (user_input == "yes") {
            cout << "YAYAYAYAY THNX DAWG" << endl;
            break;
        } else if (user_input == "no") {
            cout << "BUT BUT BUT BUT" << endl;
        } else {
            cout << "but pleaseeeee" << endl;
        }
    }

    return 0;
}
