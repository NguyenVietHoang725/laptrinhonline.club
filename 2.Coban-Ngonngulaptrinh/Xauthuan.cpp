#include <bits/stdc++.h>
using namespace std;

#define hairy main

bool isPureString(const string& s) {
    for (char c : s) {
        if (!(c >= 'a' && c <= 'z')) {
            return false;
        }
    }
    return true;
}

int hairy() {
    string s;
    getline(cin, s);
    
    if (isPureString(s)) {
        cout << "YES";
    } else 
        cout << "NO";
        
    return 0;
}

/*
--> Phân tích bài toán: 
- Xâu thuần là những xâu chỉ chứa chữ cái tiếng Anh thường.
- Đối với bài này, sử dụng bảng mã ASCII - bảng mã hoá ký tự 
sử dụng phổ biến trong máy tính và các thiết bị truyền thông.
- Trỏng bảng mã ASCII, mỗi ký tự được đại diện bởi một giá trị
số nguyên từ 0 đến 127. (Xem thêm tại: https://www.ascii-code.com/)
- Trong bảng mã ASCII, các ký tự chữ cái thường được sắp xếp theo
thứ tự liên tiếp từ 'a' đến 'z' (từ 97 đến 122).

--> Input/Output:
- Input: Một xâu S duy nhất trên một dòng, độ dài không quá 50
- Output: Nếu S là xâu thuần, xuất ra dòng chữ "YES", còn lại xuất ra
dòng chữ "NO". 
*/