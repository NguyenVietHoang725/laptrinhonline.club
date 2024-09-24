/*
<-- Input/Output -->
- Input:
    + Hai dòng, mỗi dòng chứa một số nguyên dương có tối đa 100 chữ số.
    + Các số này rất lớn, không thể xử lý bằng kiểu dữ liệu nguyên cơ bản như int hay long long.

- Output:
    + In ra tích của hai số nguyên lớn đó dưới dạng một số nguyên không có dấu cách hoặc ký tự thừa.

<-- Phân tích đề bài -->
- Bài toán yêu cầu nhân hai số nguyên rất lớn (tối đa 100 chữ số mỗi số), không thể dùng trực tiếp các kiểu dữ liệu nguyên vì chúng bị giới hạn về kích thước.
- Phân tích nhận ra rằng thực chất việc nhân 2 số tức là nhân 2 đa thức.
- Do đó, cần sử dụng chuỗi (string) để lưu trữ các chữ số và nhân từng chữ số của hai số nguyên.
- Kết quả của phép nhân cũng sẽ rất lớn, do đó phải sử dụng một cấu trúc dữ liệu để lưu kết quả từng chữ số.

<-- Xác định hướng giải -->
- Đọc hai số nguyên dưới dạng chuỗi.
- Lưu từng chữ số của mỗi số vào vector `A` và `B`, theo thứ tự ngược lại (để nhân từ hàng đơn vị trước).
- Tạo một vector `C` có kích thước bằng tổng chiều dài của `A` và `B` để lưu tích từng chữ số.
- Thực hiện phép nhân thủ công từng chữ số của `A` với từng chữ số của `B`, lưu kết quả vào vector `C`.
- Xử lý phần dư (carry) từ các phép nhân và đảm bảo các chữ số trong vector `C` được điều chỉnh chính xác.
- Loại bỏ các số 0 không cần thiết ở đầu kết quả và in ra đáp án cuối cùng.
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string x;
    vector<long> A, B, C; 
    
    cin >> x; 
    for (auto it = x.rbegin(); it != x.rend(); it++) 
        A.push_back(*it - '0'); 
    
    cin >> x; 
    for (auto it = x.rbegin(); it != x.rend(); it++) 
        B.push_back(*it - '0'); 
    
    C.resize(A.size() + B.size(), 0);
    
    for (int i = 0; i < A.size(); i++) {
        for (int j = 0; j < B.size(); j++) {
            C[i + j] += A[i] * B[j];
        }
    }
    
    long memo = 0;
    for (auto &c : C) {
        memo += c;         
        c = memo % 10;    
        memo /= 10;        
    }
    
    while (C.size() > 1 && C.back() == 0) {
        C.pop_back();
    }

    for (; memo>0; memo/=10) C.push_back(memo%10);

    for (auto it = C.rbegin(); it != C.rend(); it++) {
        cout << *it;
    }
    
    return 0;
}
