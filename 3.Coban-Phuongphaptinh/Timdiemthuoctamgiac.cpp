#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

typedef struct {
    double x, y;
} Toado;

double tinhKhoangCach(Toado a, Toado b) {
    return sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
}

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    Toado a, b, c, m;
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> m.x >> m.y;

    double ma = tinhKhoangCach(a, m);
    double mb = tinhKhoangCach(b, m);
    double mc = tinhKhoangCach(c, m);

    double res = max({ma, mb, mc});

    if (res == ma) cout << (int)a.x << " " << (int)a.y;
    else if (res == mb) cout << (int)b.x << " " << (int)b.y;
    else if (res == mc) cout << (int)c.x << " " << (int)c.y;
    
    return 0;
}

/*
<-- Input/Output -->
- Input:
    + Dòng thứ 1, 2, 3, 4 lần lượt là toạ độ của các điểm A, B, C, M.
    + Các số nhập vào đều là số nguyên trong đoạn [-1000, 1000].
- Output:
    + Tọa độ của điểm cần tìm, gồm hai số là hoành độ và tung độ.
    + Chú ý: Dữ liệu nhập vào đảm bảo chỉ có duy nhất một điểm thỏa mãn đề bài.

<-- Phân tích đề bài -->
- Yêu cầu tìm điểm thuộc tam giác có khoảng cách tới M là lớn nhất.
- Ta nhận thấy một điều rằng điểm có khoảng cách tới M lớn nhất sẽ là 1 trong 3 đỉnh của tam giác ABC.
- Vì vậy ta chỉ cần tính độ dài các đoạn MA, MB, MC và so sánh để đưa ra kết quả.

<-- Xác định hướng giải -->
- Tạo struct định nghĩa toạ độ điểm.
- Định nghĩa hàm tính độ dài các đoạn MA, MB, MC.
- Tìm đoạn có độ dài lớn nhất -> Toạ độ đỉnh tương ứng là kết quả cần tìm.
*/