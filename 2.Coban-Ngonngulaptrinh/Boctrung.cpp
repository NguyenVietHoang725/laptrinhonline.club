#include <iostream>
using namespace std;

#define hairy main

int hairy() {
    int n, s, t;
    cin >> n >> s >> t;
    int res = 0;

    if (t > s) res = n - s + 1;
    else res = n - t + 1;

    cout << res;

    return 0;
}

/*
--> Phân tích bài toán: 
- Bán n quả trứng đồ chơi. Trong n quả trứng có chính xác s sticker và t món đồ chơi.
- Mỗi quả trứng có thể là 1 trong 3 loại:
    + Chứa 1 sticker và 0 đồ chơi.
    + Chứa 0 sticker và 1 đồ chơi.
    + Chứa 1 sticker và 1 đồ chơi.
- Yêu cầu: Tính số lượng trứng tối thiểu phải mua để nhận được ít nhất 1 sticker và 1 đồ chơi.
- Lưu ý: Trong quá trình mua không mở trứng (Chỉ đươc mua với số lượng trứng đã định trước).
 
--> Input/Output:
- Input: Dòng duy nhất gồm 3 số nguyên n, s, t (1 <= n <= 10^9) (1 <= s, t <= n) (n <= s + t)
- Output: Số lượng trứng tối thiểu Ben phải mua để đảm bảo rằng, dù là loại nào, 
Ben sẽ nhận được ít nhất một sticker và một món đồ chơi.

--> Hướng dẫn giải: 
- Nếu Ben muốn đảm bảo có ít nhất một sticker và một đồ chơi, anh ta cần mua 
một số lượng trứng đủ để chắc chắn rằng ít nhất một quả có sticker và một quả 
có đồ chơi.
- Nếu Ben chỉ mua s trứng, có thể tất cả đều chứa sticker và không có đồ chơi.
- Nếu Ben chỉ mua t trứng, có thể tất cả đều chứa đồ chơi và không có sticker.
- Do đó, Ben cần mua đủ nhiều trứng để chắc chắn rằng có ít nhất một trứng 
không chỉ chứa sticker hoặc chỉ chứa đồ chơi.
=> Có 2 trường hợp:
- TH1: t > s
    + Nếu số trứng có đồ chơi (t) nhiều hơn số trứng có sticker (s), Ben cần mua ít nhất n - s + 1 trứng.
    + Vì n - s là số trứng không chứa sticker. Ben cần mua thêm ít nhất 1 trứng để chắc chắn có ít nhất 
    một trứng có sticker và có khả năng chứa đồ chơi.
- TH2: s >= t
    + Nếu số trứng có sticker (s) nhiều hơn hoặc bằng số trứng có đồ chơi (t), Ben cần mua ít nhất n - t + 1 trứng.
    + Vì n - t là số trứng không chứa đồ chơi. Ben cần mua thêm ít nhất 1 trứng để chắc chắn có ít nhất một trứng 
    có đồ chơi và có khả năng chứa sticker.
*/