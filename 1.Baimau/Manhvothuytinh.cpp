#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <limits>
using namespace std;

// Định nghĩa một cấu trúc Toado chứa hai biến x, y là tọa độ của một điểm trong không gian Decac
typedef struct 
{
    double x;
    double y;
} Toado;

int main() 
{
    ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
    
    int n; cin >> n; // Nhập n
    
    // Vector lưu tọa độ của n điểm
    vector<Toado> a(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i].x >> a[i].y;
    }
    
    double max = numeric_limits<double>::min(); // Lưu khoảng cách mảnh vỡ xa nhất
    double sum = 0; // Tính khoảng cách của mảnh vỡ xa nhất
    for (int i = 0; i < n; i++) 
    {
        double dodai = sqrt(pow(a[i].x, 2) + pow(a[i].y, 2));
        if (max < dodai) max = dodai;
        sum += dodai;
    }

    cout << fixed << setprecision(3) << sum << endl;
    cout << fixed << setprecision(3) << max << endl;
    
    return 0;
}