/*
<-- Input/Output -->
- Input:
    + Dòng đầu tiên chứa số nguyên n là số quân tượng.
    + n dòng tiếp theo, mỗi dòng chứa hai số nguyên xi và yi là tọa độ của quân tượng thứ i trên bàn cờ.
- Output:
    + Số quân tượng có thể ăn nhau trên bàn cờ.

<-- Phân tích đề bài -->
- Bàn cờ có kích thước 1000x1000, và quân tượng di chuyển theo đường chéo.
- Hai quân tượng có thể ăn nhau nếu chúng nằm trên cùng một đường chéo, bao gồm:
  1. Đường chéo từ trên trái xuống dưới phải có giá trị x - y cố định.
  2. Đường chéo từ trên phải xuống dưới trái có giá trị x + y cố định.

- Do đó, để giải quyết bài toán, ta cần đếm số quân tượng trên cùng một đường chéo và tính số cặp có thể ăn nhau:
- Nếu có k quân tượng trên cùng một đường chéo, số cặp quân tượng có thể ăn nhau là tổ hợp C(k, 2) = k * (k - 1) / 2.

<-- Xác định hướng giải -->
- Sử dụng 2 map để lưu số lượng quân tượng trên các đường chéo:
  + map1: đếm số lượng quân tượng trên các đường chéo có x - y giống nhau.
  + map2: đếm số lượng quân tượng trên các đường chéo có x + y giống nhau.
- Sau đó, duyệt qua từng map và tính tổng số cặp quân tượng có thể ăn nhau theo công thức tổ hợp.
*/

#include <iostream>
#include <map>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'



__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    map<int, int> mp1, mp2;

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        mp1[x - y]++;
        mp2[x + y]++;
    }

    int res = 0;

    for (const auto& x : mp1) {
        int cnt = x.second;
        if (cnt > 1) {
            res += cnt * (cnt - 1) / 2;
        }
    }

    for (const auto& x : mp2) {
        int cnt = x.second;
        if (cnt > 1) {
            res += cnt * (cnt - 1) / 2;
        }
    }

    cout << res;
    
    return(0);
}