/*
<-- Input/Output -->
- Input:
    + Dòng đầu tiên chứa một số nguyên n (1 < n <= 10^6), là số lượng phần tử trong dãy.
    + Dòng thứ hai chứa n số nguyên, mỗi số có giá trị tuyệt đối không vượt quá 10^9.
    
- Output:
    + Một số nguyên duy nhất là tích nhỏ nhất của hai phần tử trong dãy số.

<-- Phân tích đề bài -->
- Bài toán yêu cầu tìm tích nhỏ nhất của hai phần tử trong dãy số nguyên.
- Chúng ta cần lưu ý các trường hợp:
    1. Các số âm: tích của hai số âm có thể là tích nhỏ nhất.
    2. Số 0: nếu có số 0, tích nhỏ nhất có thể là 0.
    3. Các số dương: nếu không có số âm hoặc số 0, tích nhỏ nhất có thể là tích của hai số dương nhỏ nhất.

<-- Xác định hướng giải -->
1. Đọc vào số lượng phần tử `n` và dãy số.
2. Khởi tạo biến để theo dõi giá trị số âm nhỏ nhất, số lớn nhất, và kiểm tra sự tồn tại của số 0.
3. Duyệt qua dãy số và cập nhật các biến cần thiết:
    - Nếu có số âm, lưu số âm nhỏ nhất.
    - Nếu có số dương, lưu số dương lớn nhất.
    - Nếu có số 0, đánh dấu để xử lý trường hợp đặc biệt.
4. Xử lý theo các trường hợp:
    - Nếu có số âm, tích nhỏ nhất có thể là tích của số âm lớn nhất và số dương lớn nhất.
    - Nếu có số 0, tích nhỏ nhất là 0.
    - Nếu chỉ có số dương, tích nhỏ nhất là tích của hai số dương nhỏ nhất.
5. In ra kết quả.

*/

#include <iostream>
#include <algorithm>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'



__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    ll *a = new ll[n];
    bool nega = false;
    bool zero = false;
    ll smallestNega = 0;
    ll maxNum = -1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < smallestNega) {
            nega = true;
            smallestNega = a[i];
        }
        if (a[i] == 0) {
            zero = true;
        }
        if (a[i] > maxNum) 
            maxNum = a[i];
    }

    if (nega) {
        cout << smallestNega * maxNum;
    } else if (zero) {
        cout << 0;
    } else {
        sort(a, a + n);
        cout << a[0] * a[1];
    }
    
    return(0);
}