#include <iostream>
#include <iomanip>

#define hairy main

using namespace std;

int hairy() {
    int n;
    cin >> n;

    double tongdt = 0, max = 0;
    
    double hcn[n][2]; // Sử dụng array 2 chiều để lưu các cặp giá trị chiều dài và chiều rộng
    for (int i = 0; i < n; i++) {
        // Nhập lần lượt chiều dài và chiều rộng
        cin >> hcn[i][0] >> hcn[i][1];
        // Tính diện tích hcn được tạo bởi từng cặp chiều dài và chiều rộng vừa nhập
        double temp = hcn[i][0] * hcn[i][1];
        // Tính tổng diện tích các hcn
        tongdt += temp;
        // Tìm diện tích hcn lớn nhất
        if (temp > max) 
            max = temp;
    }
    
    // Tính diện tích trung bình của các hình chữ nhật
    double tbc = tongdt / n;
    
    cout << fixed << setprecision(3) << tbc << endl;

    cout << fixed << setprecision(3) << max;

    return 0;
}