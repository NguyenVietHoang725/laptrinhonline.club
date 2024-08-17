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
- Chúng ta bắt đầu với 1 khuôn, 0 ngày và 0 tượng.
- Trong vòng lặp while, chúng ta kiểm tra điều kiện cho đến khi số tượng đạt hoặc vượt quá N.
- Mỗi ngày, chúng ta có hai lựa chọn:
    + Nếu số tượng hiện tại cộng với số khuôn hiện có đủ để đạt hoặc vượt N, chúng ta sử dụng tất cả khuôn để tạo tượng.
    + Nếu không, chúng ta tạo thêm khuôn bằng cách nhân đôi số khuôn hiện có.
- Chúng ta tăng số ngày lên 1 sau mỗi hành động.
- Vòng lặp tiếp tục cho đến khi chúng ta có đủ số tượng.
- Cuối cùng, hàm trả về số ngày cần thiết.

Ý tưởng chính của thuật toán này là tạo ra càng nhiều khuôn càng nhanh trong những ngày đầu, sau đó sử dụng tất cả
các khuôn để tạo tượng trong những ngày cuối. Điều này đảm bảo chúng ta có thể tạo ra số lượng tượng lớn nhất 
trong thời gian ngắn nhất.
*/

#include <iostream>


using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

int minDaysForStatues(int N) {
    int molds = 1;  // Số khuôn ban đầu
    int days = 0;   // Số ngày
    int statues = 0;  // Số tượng đã tạo

    while (statues < N) {
        if (statues + molds >= N) {
            // Nếu có thể tạo đủ tượng trong ngày hôm nay
            days++;
            statues += molds;
        } else {
            // Nếu chưa đủ, tạo thêm khuôn
            days++;
            molds *= 2;
        }
    }

    return days;
}

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    cin >> N;
    cout << minDaysForStatues(N) << endl;
    return 0;
    
    return(0);
}