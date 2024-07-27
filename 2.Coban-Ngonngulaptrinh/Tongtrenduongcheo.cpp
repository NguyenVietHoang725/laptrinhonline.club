#include <iostream>
#include <vector>
using namespace std;

#define hairy main
#define int long long

signed hairy() {
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    
    // Nhập ma trận
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    
    // Tính tổng đường chéo chính và các đường chéo song song
    for (int k = (n - 1); k >= -(n - 1); --k) {
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            int j = i + k;
            // Kiểm tra chỉ số j có hợp lệ không
            if (j >= 0 && j < n) {
                sum += matrix[i][j];
            }
        }
        cout << sum << endl;
    }
    
    return 0;
}
/*
HƯỚNG GIẢI: 
- Hiểu về đường chéo trong ma trận: 
    + Đường chéo chính: Phần tử trên đường chéo chính của ma trận
    có chỉ số hàng và cột bằng nhau: (i, i).
    + Các đường chéo song song với đường chéo chính:
        * Các đường chéo song song có dạng (i, i + k), với k là khoảng cách
        so với đường chéo chính.
        * Với mỗi giá trị của k, các phần tử trên cùng một đường chéo
        song song có dạng (i, i + k) khi k dương và (i, i - k) khi k âm.
- Tư duy để tạo ra vòng lặp
    + Xác định phạm vi của k: Để bao phủ tất cả các đường chéo song song, 
    k phải chạy từ -(n - 1) đến (n - 1). Đối với ma trận 'n x n', đây là 
    phạm vi tối đa của các đường chéo song song.
    + Cách sử dụng k để tạo ra các chỉ số hợp lệ: Đối với mỗi giá trị của k,
    cần phải duyệt qua các hàng của ma trận và tính toán chỉ số cột tương ứng
    để kiểm tra hợp lệ và cộng giá trị.
- Lập vòng lặp:
    + Vòng lặp ngoài: for (int k = (n - 1); k >= -(n - 1); --k)
        * Bắt đầu từ (n - 1) (đường chéo song song xa nhất bên phải) và
        kết thúc ở -(n - 1) (đường chéo song song xa nhất bên trái).
    + Vòng lặp trong: for (int i = 0; i < n; ++i)
        * Duyệt qua tất cả các hàng của ma trận.
    + Tính toán chỉ số cột j: 
        * int j = i + k; tính toán chỉ số cột dựa trên hàng i và khoảng cách k
        * Kiểm tra if (j >= 0 && j < n) để đảm bảo j nằm trong phạm vi hợp lệ
        của ma trận.
- Mô phỏng tư duy:
    + Đường chéo chính (k = 0): Các phần tử là (0, 0), (1, 1), (2, 2), ...
    + Đường chéo phía trên đường chéo chính: 
        * Ví dụ k = 1: Các phần tử là: (0, 1), (1, 2), (2, 3), ...
    + Đường chéo phía dưới đường chéo chính: 
        * Ví dụ k = -1: Các phần tử là: (1, 0), (2, 1), (3, 2), ...
*/