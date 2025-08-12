#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }
    
    int max_val = *max_element(heights.begin(), heights.end());
    int min_val = *min_element(heights.begin(), heights.end());
    
    int max_pos = 0;
    while (heights[max_pos] != max_val) max_pos++;
    
    int min_pos = n - 1;
    while (heights[min_pos] != min_val) min_pos--;
    
    int swaps = max_pos + (n - 1 - min_pos);
    
    if (max_pos > min_pos) {
        swaps--;
    }
    
    cout << swaps << endl;
    
    return 0;
}
