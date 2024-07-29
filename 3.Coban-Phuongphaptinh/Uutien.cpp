#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

// Comparator để sắp xếp các phần tử theo tần suất xuất hiện và thứ tự xuất hiện
bool comparator(const pair<int, pair<int, int>>& a, const pair<int, pair<int, int>>& b) {
    if (a.second.second == b.second.second)
        return a.second.first < b.second.first; // Sắp xếp theo thứ tự xuất hiện ban đầu nếu tần suất bằng nhau
    return a.second.second > b.second.second; // Sắp xếp theo tần suất giảm dần
}

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    
    vector<int> a(n);
    map<int, pair<int, int>> freq; // {value: {first_appearance_index, frequency}}
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (freq.find(a[i]) == freq.end())
            freq[a[i]] = {i, 1};
        else
            freq[a[i]].second++;
    }
    
    vector<pair<int, pair<int, int>>> elements; // {value, {first_appearance_index, frequency}}
    for (auto& it : freq) {
        elements.push_back({it.first, it.second});
    }
    
    sort(elements.begin(), elements.end(), comparator);
    
    for (int i = 0; i < 3; ++i) {
        cout << elements[i].first << " ";
    }
    
    return 0;
}
