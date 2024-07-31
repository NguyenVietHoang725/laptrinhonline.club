/*
<-- Input/Output -->
- Input:
    + 
    + 
- Output:
    + 
    + 

<-- Phân tích đề bài -->


<-- Xác định hướng giải -->

*/

#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

string findSmallestMultiple(int N) {
    queue<string> q;
    vector<bool> visited(N, false);
    
    q.push("9");
    
    while (!q.empty()) {
        string current = q.front();
        q.pop();
        
        long long num = 0;
        for (char c : current) {
            num = (num * 10 + (c - '0')) % N;
        }
        
        if (num == 0) {
            return current;
        }
        
        if (!visited[num]) {
            visited[num] = true;
            q.push(current + "0");
            q.push(current + "9");
        }
    }
    
    return ""; // This should never happen for valid input
}

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        cout << findSmallestMultiple(N) << endl;
    }
    
    return(0);
}