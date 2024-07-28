#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

string generatePalindrome(int num) {
    string result = to_string(num);
    string reversed = result;
    reverse(reversed.begin(), reversed.end());
    return result + reversed;
}

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    
    int num = 1;
    string palindrome;
    
    while (n > 0) {
        palindrome = generatePalindrome(num);
        n--;
        num++;
    }
    
    cout << palindrome << endl;
    return 0;
}

/*
<-- Input/Output -->
- Input:
    + Một dòng duy nhất chứa số nguyên dương N (1 <= N <= 1000)
- Output:
    + Số thứ N trong dãy các số đối xứng có độ dài chẵn.

<-- Phân tích đề bài -->
- Số đối xứng là số nếu đọc từ trái qua phải, hay từ phải qua trái đều được số giống nhau.
- Yêu cầu: Tìm số đối xứng độ dài chẵn thứ N trong dãy số.

- Nhận thấy, số đối xứng có độ dài chẵn thứ n chính là số được tạo từ số nguyên dương n nhập vào.
- Vì vậy chuyển số nhập vào thành chuỗi và đảo ngược nó. Cuối cùng kết hợp lại.
*/