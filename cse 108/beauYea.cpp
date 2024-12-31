#include <iostream>
#include <set>
using namespace std;

bool hasDistinctDigits(int year) {
    string s = to_string(year);
    set<char> digits(s.begin(), s.end());
    return digits.size() == s.size(); 
}

int main() {
    int y;
    cin >> y;
    
   
    y++;
    
    
    while (!hasDistinctDigits(y)) {
        y++;
    }
    
    cout << y << endl;
    return 0;
}
