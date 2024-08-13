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
#include <vector>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'



__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;

    vector<int> test_cases(t);
    for (int i = 0; i < t; ++i) {
        cin >> test_cases[i];
    }

    for (int n : test_cases) {
        int sum = 1;
        int current_diagonal = 1;

        // Tìm đường chéo mà số thứ n thuộc về
        while (n > sum) {
            ++current_diagonal;
            sum += current_diagonal;
        }

        // Vị trí trên đường chéo
        int offset = sum - n;
        int numerator, denominator;

        // Nếu đường chéo là lẻ, tử số giảm dần và mẫu số tăng dần
        if (current_diagonal % 2 == 1) {
            numerator = 1 + offset;
            denominator = current_diagonal - offset;
        } 
        // Nếu đường chéo là chẵn, tử số tăng dần và mẫu số giảm dần
        else {
            numerator = current_diagonal - offset;
            denominator = 1 + offset;
        }

        cout << "TERM " << n << " IS " << numerator << "/" << denominator << endl;
    }
    
    return(0);
}