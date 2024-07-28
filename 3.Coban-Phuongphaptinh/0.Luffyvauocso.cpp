#include <iostream>
#include <vector>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

int tongUocLe(int x) {
    int sum = 0;

    for (int i = 1; i * i <= x; i++) {
        // Nếu i là ước của x
        if (x % i == 0) {
            // Nếu i lẻ -> Cộng i vào tổng
            if (i % 2 == 1) sum += i; 
            // Nếu x/i lẻ và khác i, cộng x/i vào tổng
            if (i != x / i && (x / i) % 2 == 1) sum += x / i;
        }
    }

    return sum;
}

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;
    
    // Quy hoạch động
    vector<int> a(100001, 0);
    for (int i = 1; i <= 100000; i++) {
        a[i] = a[i - 1] + tongUocLe(i);
    }

    // Xử lý các bài toán con
    while (n--) {
        int x, y;
        cin >> x >> y;
        cout << a[y] - a[x - 1] << endl;
    }

    return 0;
}

/*
<-- Input/Output -->
- Input:
    + Dòng đầu chứa số nguyên T là số lượng bộ test. (1 <= T <= 1000)
    + Mỗi dòng tiếp theo chứa 2 số nguyên a, b. (1 <= a <= b <= 105)
- Output:
    + Với mỗi test, in ra tổng được yêu cầu trên một dòng

<-- Phân tích đề bài -->
- Gx là tổng tất cả các ước lẻ của x.
- Yêu cầu tính: G(a) + G(a+1) + ... + G(b-1) + Gb với a, b cho trước.
- Duyệt từ 1 đến căn bậc hai của x để tìm các ước số
- Nếu i là ước của x (x % i == 0), kiểm tra:
    + Nếu i lẻ, cộng i vào tổng.
    + Nếu x/i lẻ và khác i, cộng x/i vào tổng.
- Sử dụng quy hoạch động để tính toán các bài toán con.
*/