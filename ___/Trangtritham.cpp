/*
<-- Input/Output -->
- Input:
    + Một dòng duy nhất chứa hai số nguyên a và b (1≤a,b≤1000)
    + a và b lần lượt là chiều dài và chiều rộng của thảm (đơn vị m)
- Output:
    + Một số nguyên duy nhất là số bông hoa tối thiểu cần xếp
    + Đảm bảo tồn tại hai bông cách nhau <1m

<-- Phân tích đề bài -->
- Thảm hình chữ nhật kích thước a x b (m)
- Cần tìm số bông hoa tối thiểu để đảm bảo có 2 bông cách nhau <1m
- Có thể xếp hoa lên viền thảm
- Coi mỗi bông hoa như một điểm

<-- Xác định hướng giải -->
1. Chia thảm thành lưới ô vuông 1m x 1m
2. Số ô theo chiều dài: a + 1 (thêm 1 cho viền)
3. Số ô theo chiều rộng: b + 1 (thêm 1 cho viền)
4. Tổng số điểm giao của lưới: (a+1) * (b+1)
5. Áp dụng nguyên lý Dirichlet: cần (a+1)*(b+1) + 1 bông hoa
   để đảm bảo có 2 bông nằm trong cùng 1 ô (cách <1m)
*/

#include <iostream>
using namespace std;
#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int a, b;
    cin >> a >> b;
    
    ll result = (ll)(a + 1) * (b + 1) + 1;
    
    cout << result << endl;
    
    return 0;
}