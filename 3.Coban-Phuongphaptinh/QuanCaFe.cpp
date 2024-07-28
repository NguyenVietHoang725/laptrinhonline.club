#include <iostream>
#include <vector>
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
    
    vector<pair<int, int>> times(n);
    for (int i = 0; i < n; i++) {
        cin >> times[i].first >> times[i].second;
    }

    sort(times.begin(), times.end());

    int res = 1;
    int streak = 1;
    for (int i = 1; i < n; i++) {
        if (times[i-1] == times[i]) {
            streak++;
            res = max(res, streak);
        } else {
            streak = 1;
        }
    }

    cout << res;
    
    return 0;
}

/*
<-- Input/Output -->
- Input:
    + Dòng đầu tiên ghi số nguyên n (1 <= n <= 10^5).
    + n dòng tiếp theo, mỗi dòng gồm cặp số nguyên h[i], m[i] tương ứng là giờ và phút 
    mà người thứ i tới quán (0 <= h[i] <= 23, 0 <= m[i] <= 59).
- Output:
    + In ra số nhân viên ít nhất mà vẫn đảm bảo phục vụ được tất cả n người.

<-- Phân tích đề bài -->
- Biến n người tới quán và biết chính xác thời gian người thứ i sẽ tới vào luc h[i] giờ, m[i] phút.
- Không quá 1 phút để phục vụ một khách hàng nhưng nếu một vị khách tới mà không nhận được sự phục vụ thì sẽ lập tức bỏ đi. (1)
- Yêu cầu: Tìm số nhân viên ít nhất để có thể phục vụ được tất cả n người.

<-- Xác định hướng giải -->
- Thời gian nhập vào có thể không theo trình tự thời gian -> Phải sort lại.
- Như vậy, nên sử dụng vector kiểu pair để lưu giá trị giờ và phút.
- Vì dữ liệu (1) nên ta kiểm tra 2 điều kiện:
    + Thời gian đến có trùng nhau hay không? (Nếu trùng thì có thể sẽ phải bổ sung nhân viên)
    + Có bao nhiêu người đến cùng thời gian? (Streak) Điều này xảy ra 2 trường hợp:
        * Streak cũ nhỏ hơn streak mới -> Cần thêm nhân viên.
        * Streak cũ lớn hơn streak mới -> Số lượng nhân viên hiện tại là đủ, không cần thêm.
*/