#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string s;
    getline(cin, s);
    int length = s.length();

    vector<int> v;
    string temp = ""; 
    
    for (int i = 0; i < length; i++) {
        if (s[i] != '+') {
            temp += s[i]; 
        } else {
            if (!temp.empty()) {
                int num = stoi(temp);
                v.push_back(num);
                temp = ""; 
            }
        }
    }

    if (!temp.empty()) {
        int num = stoi(temp);
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i != v.size() - 1) {
            cout << "+"; 
        }
    }

    return 0;
}
