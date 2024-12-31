#include <iostream>
using namespace std;

int main() {
    int matrix[5][5];
    
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }
    
    
    int one_row = -1, one_col = -1;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] == 1) {
                one_row = i;
                one_col = j;
                break;
            }
        }
        if (one_row != -1) break; 
    }
    
    
    int moves = abs(one_row - 2) + abs(one_col - 2);
    
    
    cout << moves << endl;
    
    return 0;
}
