/*
<-- Input/Output -->
- Input:
    + Dòng đầu tiên ghi 1 số nguyên N (1 <= N <= 10^6)
    + Dòng thứ hai ghi N số nguyên có giá trị 25 hoặc 50 hoặc 100
- Output:
    + Nếu có thể bán vé theo đúng thứ tự thì in ra "YES, ngược lại "NO"

<-- Phân tích đề bài -->    
- Mỗi người có đúng 1 tờ tiền mệnh giá 25k hoặc 50k hoặc 100k.
- Yêu cầu: Có thể bán vé cho mỗi khách hàng theo đúng thứ tự hay không (giá 1 vé “Fast and Furious 9” là 25k) ?

<-- Xác định hướng giải -->
- Đối với khách có tờ tiền mệnh giá 25k -> Không phải trả lại tiền thối -> Cộng vào két 25k.
- Đối với khách có tờ tiền mệnh giá 50k hoặc 100k -> Phải trả lại tiền thối -> Lấy tiền trong két trả lại.
- Như vậy nếu tiền trong két bị âm => Không thể trả tiền theo thứ tự và ngược lại.
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
    
    int n;
    cin >> n;

    int remaining_money = 0;
    int paid_back_money = 0;

    while (n--) {
        int a;
        cin >> a;

        if (a == 25) 
            remaining_money += a;
        else 
            paid_back_money += (a - 25);
    }

    if (remaining_money >= paid_back_money)
        cout << "YES";
    else 
        cout << "NO";
    
    return(0);
}