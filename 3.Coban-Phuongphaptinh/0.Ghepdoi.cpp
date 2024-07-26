#include <iostream>
using namespace std;

int main() 
{
    int x, y;
    cin >> x >> y;

    if (x <= y) 
    {
        cout << x << " " << (y - x) / 2;
    } else 
    {
        cout << y << " " << (x - y) / 2;
    }
}
/* 
HƯỚNG GIẢI: 
- Input: 2 số nguyên x, y (1 <= x, y <= 100) 
với x là số lượng nam, y là số lượng nữ.
- Output: 2 số nguyên. Số đầu tiên là số cặp
nam nữ, số thứ hai là số cặp đồng giới.
- Xác định hướng giải: 
    + Số cặp nam nữ: phụ thuộc vào số lượng nam/nữ cái nào ít hơn
    thì sẽ là số cặp khác giới tối đa có thể ghép.
    + Số lượng nam/nữ còn lại chia đôi thì sẽ đượng số lượng cặp
    đồng giới.
*/