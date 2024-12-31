#include <iostream>
#include <vector>
#include <iomanip>  

using namespace std;

int main() {
    int n;
    cin >> n; 
    
    vector<int> percentages(n); 
    int sum = 0; 
    
    
    for (int i = 0; i < n; i++) {
        cin >> percentages[i];
        sum += percentages[i];
    }
    
    
    double result = static_cast<double>(sum) / n;
    
    
    cout << fixed << setprecision(12) << result << endl;
    
    return 0;
}
