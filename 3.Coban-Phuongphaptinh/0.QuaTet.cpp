#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, m;
    cin >> n >> m;

    int a[m];
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    sort(a, a + m);

    int res = INT_MAX;
    for (int i = 0; i <= m - n; i++) {
        int temp = a[i + n - 1] - a[i];
        if (temp < res) {
            res = temp;
        }
    }

    cout << res << endl;
    return 0;
}

/*
<-- Input/Output -->
- Input:
    + Dòng đầu tiên gồm 2 chữ số cách nhau bởi khoảng trắng n và m (2 <= n <= m <= 50)
    + Dòng thứ 2 gồm m chữ số cách nhau bởi khoảng trắng f1, f2, ..., fm (1 <= fi <= 1000)
    Kích thước của m chiếc rubix trong cửa hàng. Tất cả đều là số nguyên.
- Output:
    + Dòng duy nhất chứa giá trị A - B nhỏ nhất có thể.

<-- Phân tích đề bài -->
- Mua n chiếc rubix cho n sinh viên. 
- Chỉ còn m chiếc rubix và có kích thước khác nhau f1, f2, ..., fm
- Yêu cầu: Sự chênh lệch giữa A (lớn nhất) và B (bé nhất) là bé nhất cỏ thể và tìm giá trị A - B đó.
- Trước tiên, ta sắp xếp lại mảng kích thước các khối rubix.
- Sau đó xem xét trên từng đoạn n phần tử liên tiếp, tìm khoảng cách bé nhất.
*/