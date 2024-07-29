#include <iostream>
#include <cmath>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

pair<ll, ll> calculateSnailPosition(ll n) {
    // Xác định đường chéo đang chứa bước hiện tại
    ll d = ceil((sqrt(8 * n + 9) - 1) / 2);

    // Xác định vị trí hiện tại trên đường chéo hiện tại
    ll p = n - d * (d - 1) / 2 + 1;

    // Tính toán hàng và cột dựa trên tính chẵn lẻ của đường chéo
    if (d % 2 == 0) {
        return {p, abs(d - p + 1)};
    } else {
        return {abs(d - p + 1), p};
    }
}

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll n;
    cin >> n;

    pair<ll, ll> result = calculateSnailPosition(n);
    cout << result.first << " " << result.second << "\n";
    
    return(0);
}

/*
<-- Input/Output -->
- Input:
    + Một số tự nhiên n ( 1 <= n <= 10^8) duy nhất
- Output:
    + Hai số nguyên dương là vị trí (hàng và cột) của sên

<-- Phân tích đề bài -->

<-- Xác định hướng giải -->
- Với n nhập vào, ta xây dựng công thức xác định sau n bước thì ốc sên nằm trên đường chéo nào như sau:
    + Nhận thấy, mỗi đường chéo chứa các số liên tiếp và số lượng các số trên từng đường chéo tăng dần.
        VD: Đường chéo thứ 1 có 1 số, đường chéo thứ 2 có 2 số, đường chéo thứ 3 có 3 số, ...
    + Ta tính được tổng số số trên các đường chéo:
        Tổng số số trên các đường chéo từ 1 đến d là: S = (d * (d + 1)) / 2
    + Để tìm đường chéo từ n, ta cần giải phương trình: 
        (d * (d + 1)) / 2 = n (dấu = ở đây tương đương dấu xấp xỉ)
        <=> d^2 + d - 2 * n = 0
        => d = (-1 + sqrt(1 + 8 * n)) / 2
        (sử dụng dấu xấp xỉ bởi vì n là số nguyên)
    + Bởi vì d không phải là một số nguyên nên ta cần làm tròn nó -> Sử dụng hàm ceil
    + Tuy nhiên, vì khi làm tròn có thể khiến mất đi một số bước nên ta cần cộng một giá trị lớn hơn 1 
    để đảm bảo việc làm tròn trở nên chính xác hơn.
    => Công thức cuối cùng: d = ceil((sqrt(8 * stepNumber + 9) - 1) / 2);
- Sau khi xác định được đường chéo ốc sên nằm trên sau n bước, ta tiếp tục xác định vị trí ốc sên trên
đường chéo đó sau n bước: 
    + Tính tổng số bước trên các đường chéo trước đó (từ 1 đến d - 1): 
        Tổng số bước = ((d - 1) * d) / 2 (CT dựa trên việc tính tổng các số nguyên từ 1 đến (d - 1))
    + Tính vị trí của bước thứ n trong đường chéo:
        p = n - Tổng số bước + 1 <=> p = n - (((d - 1) * d) / 2) + 1
        Lý do có (+1) là vì tính số bước bắt đầu từ 1 thay vì 0
- Cuối cùng, xác định vị trí cụ thể của ốc sên:
    + Kiểm tra đường chéo sau n bước là chẵn hay lẻ (Điều nảy ảnh hưởng đến việc xác định vị trí cụ thể):
        * Các đường chéo với số chẵn thường bắt đầu từ góc dưới bên trái và đi lên góc trên bên phải.
        * Các đường chéo với số lẻ thường bắt đầu từ góc trên bên phải và đi xuống góc dưới bên trái.
    + 
*/