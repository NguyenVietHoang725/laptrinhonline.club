#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n; // Số người bạn
    cin >> n;
    
    vector<int> a(n); // Lưu trữ vị trí căn nhà
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    // Sắp xếp các vị trí tăng dần
    sort(a.begin(), a.end());
    
    int sum = 0;
    int k = n / 2; // Vị trí nằm ở giữa
    
    for (int i = 0; i < n; i++)
    {
        sum += abs(a[k] - a[i]); 
    }

    cout << sum; // Xuất ra tổng khoảng cách
    
    return 0;
}

/* 
HƯỚNG GIẢI: 
- Xác định yêu cầu đề bài: Tính tổng khoảng cách từ căn nhà của Luffy
đến nhà của từng người bạn sao cho là nhỏ nhất.
- Input: 
    + n: Số người bạn (Kiểu nguyên) (1 <= n <= 500)
    + a1, a2, ..., an: Vị trí căn nhà mà người bạn thứ i đang sống (Kiểu nguyên) (1 <= ai <= 30000)
- Output: 
    + sum: Tổng khoảng cách nhỏ nhất từ nhà Luffy đến nhà các người bạn.
- Xác định hướng giải quyết:
    + Lưu ý rằng Luffy có thể chọn bất cứ vị trí nào để làm nhà (kể cả xây chồng lên
    nhà bạn mình)
    + Vì các vị trí nhập vào không được sắp xếp theo thứ tự nào => Sắp xếp lại.
    + Từ đó suy ra được rằng vị trí ở giữa sẽ cách đều các vị trí còn lại => Tổng MIN.
*/