/*
<-- Input/Output -->
- Input:
    + Một chuỗi string đại diện cho thời gian ở định dạng 12 giờ 
        * (hh:mm:ssAM hoặc hh:mm:ss:PM)
        * (01 <= hh <= 12 và 00 <= mm, ss <= 59)
- Output:
    + Thời gian sau khi chuyển đổi sang định dạng 24 giờ hợp lệ.

<-- Phân tích đề bài -->
- Lưu ý:
    + Nửa đêm là 12:00:00 AM trên đồng hồ 12 giờ và 00:00:00 trên đồng hồ 24 giờ.
    + Trưa là 12:00:00 PM trên đồng hồ 12 gừi và 12:00:00 trên đồng hồ 24 giờ.
<-- Xác định hướng giải -->

*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int hh, mm, ss;
    string type;

    // Biến temp dùng để đọc dấu ":" có trong đầu vào
    char temp;
    cin >> hh >> temp >> mm >> temp >> ss >> type;

    // Xác định giờ trên đồng hồ 24 giờ dựa trên "PM" hay "AM"
    if (type == "PM" && hh != 12) hh += 12;
    if (type == "AM" && hh == 12) hh = 0;

    // Xuất ra thời gian tương ứng với đồng hồ 12 giờ trên đồng hồ 24 giờ
    cout << setfill('0') << setw(2) << hh << ":";
    cout << setfill('0') << setw(2) << mm << ":";
    cout << setfill('0') << setw(2) << ss;
    
    return(0);
}