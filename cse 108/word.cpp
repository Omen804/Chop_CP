#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;  

    int upperCount = 0, lowerCount = 0;
    
    for (char c : s) {
        if (isupper(c)) {
            upperCount++;
        } else if (islower(c)) {
            lowerCount++;
        }
    }

    if (upperCount > lowerCount) {
        
        cout << s;
    } else {
        
        for (char& c : s) {
            c = tolower(c);  
        }
        cout << s;
    }

    return 0;
}
