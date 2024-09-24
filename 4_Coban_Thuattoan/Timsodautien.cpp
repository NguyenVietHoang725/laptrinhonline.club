/*
<-- Input/Output -->
- Input:
    + Dòng đầu là số bộ kiểm thử t (1 <= t <= 100).
    + Tiếp theo là t dòng, mỗi dòng chứa hai số N (1 <= N <= 100) và M (1 <= M <= 10^6), tương ứng là cơ số và số mũ.
- Output:
    + Gồm t dòng, mỗi dòng chứa chữ số đầu tiên của N^M.

<-- Phân tích đề bài -->
- Bài toán yêu cầu tính chữ số đầu tiên của lũy thừa lớn N^M.
- Việc tính trực tiếp lũy thừa này không khả thi vì số lượng chữ số có thể rất lớn (M có thể lên tới 10^6).
- Thay vào đó, ta có thể sử dụng phương pháp logarit để tìm chữ số đầu tiên mà không cần tính toàn bộ lũy thừa.

<-- Xác định hướng giải -->
1. Tính logarit cơ số 10 của N^M:
   \[
   \log_{10}(N^M) = M \times \log_{10}(N)
   \]
2. Lấy phần thập phân của kết quả để tìm vị trí của N^M trên thang logarit:
   \[
   frac = M \times \log_{10}(N) - \text{floor}(M \times \log_{10}(N))
   \]
3. Chữ số đầu tiên của N^M sẽ là:
   \[
   \text{first\_digit} = \text{floor}(10^{frac})
   \]
*/


#include <iostream>
#include <cmath>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'



__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t; cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        double loga = m * log10(n);
        double frac = loga - floor(loga);
        int fi_digit = (int)pow(10, frac);
        cout << fi_digit << "\n";
    }
    
    return(0);
}