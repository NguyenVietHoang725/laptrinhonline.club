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
#include <string>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

string findWinner(string a, string b, string c) {
    string currentPlayer = "A"; // Bắt đầu với Alice
    
    while (true) {
        if (currentPlayer == "A") {
            if (a.empty()) // Nếu Alice không còn lá bài
                return "A"; // Alice thắng cuộc
            else {
                if (a[0] == 'a')
                    currentPlayer = "A"; // Alice giữ lượt
                else if (a[0] == 'b')
                    currentPlayer = "B"; // Chuyển lượt cho Bob
                else if (a[0] == 'c')
                    currentPlayer = "C"; // Chuyển lượt cho Charlie
                a = a.substr(1); // Loại bỏ lá bài đầu tiên
            }
        } else if (currentPlayer == "B") {
            if (b.empty()) // Nếu Bob không còn lá bài
                return "B"; // Bob thắng cuộc
            else {
                if (b[0] == 'a')
                    currentPlayer = "A"; // Chuyển lượt cho Alice
                else if (b[0] == 'b')
                    currentPlayer = "B"; // Bob giữ lượt
                else if (b[0] == 'c')
                    currentPlayer = "C"; // Chuyển lượt cho Charlie
                b = b.substr(1); // Loại bỏ lá bài đầu tiên
            }
        } else if (currentPlayer == "C") {
            if (c.empty()) // Nếu Charlie không còn lá bài
                return "C"; // Charlie thắng cuộc
            else {
                if (c[0] == 'a')
                    currentPlayer = "A"; // Chuyển lượt cho Alice
                else if (c[0] == 'b')
                    currentPlayer = "B"; // Chuyển lượt cho Bob
                else if (c[0] == 'c')
                    currentPlayer = "C"; // Charlie giữ lượt
                c = c.substr(1); // Loại bỏ lá bài đầu tiên
            }
        }
    }
}

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string a, b, c;
    getline(cin, a); // Đọc chuỗi của Alice
    getline(cin, b); // Đọc chuỗi của Bob
    getline(cin, c); // Đọc chuỗi của Charlie

    cout << findWinner(a, b, c) << endl; // Tìm người chiến thắng và in kết quả
    
    return(0);
}