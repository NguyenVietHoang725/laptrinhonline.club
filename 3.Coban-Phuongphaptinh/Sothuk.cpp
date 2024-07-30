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
- Khi liệt kê các số tự nhiên bắt đầu từ 1 và loại bỏ các số chia hết cho n, chúng ta
sẽ có một dãy số mới mà không chứa các bội của n.
- Giả sử chúng ta đang tìm số thứ k trong dãy số không chứa các bội của n. Hãy thử
tưởng tượng số thứ k là x trong dãy số gốc (bao gồm các bội của n).
- Nếu x là số thứ k không chia hết cho n, thì từ 1 đến x sẽ có một số lượng bội của n.
- Số lượng bội của n từ 1 đến x chính là (x / n).
- Để x là số thứ k không chia hết cho n, thì x cần phải là k cộng thêm số lượng bội của n
từ 1 đến x: x = k + (x / n)
- Giả sử: x = k + (k / (n-1))
    + (x / n) = (x / n) (Dấu '=' tương đương xấp xỉ)
    + (k / (n-1)) = (k / (n-1))  (Dấu '=' tương đương xấp xỉ)
    Do đó chúng ra có phương trình gần đúng: x = k + (x / n)
    Nếu n là rất lớn, (x / n) sẽ rất nhỏ và gần bằng 0. Nhưng trong trường hợp tổng quát,
    ta có thể dùng cách làm khác đơn giản hơn là công thức: x = k + ((k-1) / (n-1))
- Công thức cuối cùng: x = k + ((k-1) / (n-1))
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
    
    ll n, k; cin >> n >> k;
    cout << k + (k - 1) / (n - 1);
    
    return(0);
}