#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Định nghĩa cấu trúc Oto
struct Oto
{
    int bks; // Biển kiểm soát
    float tt; // Trọng tải
    char cty; // Công ty
};

// Định nghĩa hàm so sánh
bool cmp(const Oto &a, const Oto &b)
{
    // So sánh theo trọng tải
    return a.tt < b.tt;
}

int main()
{
    ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
    
    int n;
    cin >> n;
    
    vector<Oto> a(n);
    int cnt = 0;
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].bks >> a[i].tt >> a[i].cty;
        // Kiểm tra điều kiện tăng biến đếm
        if (a[i].cty == 'B' && a[i].bks % 3 == 0) cnt += 1;
    }
    
    // Sử dụng thuật toán stable_sort
    stable_sort(a.begin(), a.end(), cmp);
    
    cout << cnt << endl;
    
    for (int i = 0; i < 3; i++)
    {
        cout << a[i].bks << endl;
    }
    
    return 0;
}

/*
Hàm stable_sort trong C++
--> Định nghĩa: Là một hàm được sử dụng để sắp xếp các phần tử của
một container theo thứ tự tăng dần hoặc theo một tiêu chí tuỳ chỉnh
stable_sort đảm bảo rằng thứ tự tương đối của các phần tử bằng nhau 
sẽ được duy trì

--> Cú pháp: 
    >> stable_sort(RandomIt first, RandomIt last, Compare comp);
    trong đó: 
        - 'first' và 'last': Đây là các iterator chỉ định phạm vi các
        phần tử cần sắp xếp. Phạm vi này bao gồm 'first' nhưng không
        bao gồm 'last'.
        - 'comp': Đây là một hàm so sánh tuỳ chỉnh. Hàm này nhận
        hai tham số và trả về 'true' nếu phần tử đầu tiên nên đứng
        trước phần tử thứ hai, ngược lại trả về 'false'.

--> Cách hoạt động: thường được triển khai bằng cách sử dụng một biến thể
của thuật toán Merge Sort hoặc một kết hợp của Merge Sort và Insertion Sort.
Cả hai thuật toán này đều là các thuật toán sắp xếp ổn định.
    - Merge Sort:
        + Phân chia mảng thành 2 nửa.
        + Đệ quy sắp xếp từng nửa.
        + Hợp nhất hai nửa đã sắp xếp thành một mảng đã sắp xếp hoàn chỉnh.
    - Insertion Sort: Chèn mỗi phần tử vào vị trí đúng của nó trong mảng đã
    sắp xếp.

--> Độ phức tạp:
    - Thời gian: O(nlogn)
    - Không gian: O(n)
*/