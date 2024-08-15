/*
<-- Input/Output -->
- Input:
    + Dòng đầu là số trường hợp kiểm thứ n (1 <= n <= 100)
    + Dòng thứ 2 là gồm n số đo độ của n góc các giá trị alpha
    là các số nguyên 0 < alpha < 180 cách nhau mỗi số một khoảng trắng 
- Output:
    + Gồm n dòng mỗi dòng hoặc là "YES" hoặc là "NO" là kết quả của 
    bài toán tương ứng với từng góc 

<-- Phân tích đề bài -->
- Tính chất của đa giác đều: Tổng các góc trong = (n-2) * 180 (với n là số cạnh)

<-- Xác định hướng giải -->

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
    
    int n,a[105];
    cin >> n;
    float c[105]; 
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++) {
        c[i] = (360*1.0) / ((a[i]-180) * 1.0);
        if (c[i] == (int)c[i])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return(0);
}