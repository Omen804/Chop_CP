#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;            
    string s;         
    cin >> n >> s;

    int antonWins = 0, danikWins = 0;

    
    for (char c : s) {
        if (c == 'A') {
            antonWins++;
        } else if (c == 'D') {
            danikWins++;
        }
    }

    
    if (antonWins > danikWins) {
        cout << "Anton" << endl;
    } else if (danikWins > antonWins) {
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }

    return 0;
}
