#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
    
    string s;
    getline(cin, s);
    
    
    vector<int> numbers;
    
  
    stringstream ss(s);
    string temp;
    
   
    while (getline(ss, temp, '+')) {
        numbers.push_back(stoi(temp));  
    }
    
  
    sort(numbers.begin(), numbers.end());
    
   
    for (size_t i = 0; i < numbers.size(); ++i) {
        if (i != 0) cout << "+"; 
        cout << numbers[i];
    }
    cout << endl;
    
    return 0;
}
