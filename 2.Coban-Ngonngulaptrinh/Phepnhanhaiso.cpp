/*
<-- Input/Output -->
- Input:
    + Dòng đầu gồm số bộ test t (1 <= t <= 100).
    + Tiếp theo t dòng, mỗi dòng gồm 2 số nguyên dương được biểu diễn dưới dạng viết liền của 2 số và tích của 2 số.
- Output:
    + In ra t dòng, mỗi dòng gồm 2 số nguyên dương a và b sao cho khi viết liền a và b, ta được chuỗi số đầu vào và tích của a và b đúng bằng giá trị đã cho.

<-- Phân tích đề bài -->
- Đề bài yêu cầu xác định 2 số nguyên a và b từ một chuỗi số được viết liền nhau sao cho tích của chúng bằng với tích đã cho.
- Chúng ta sẽ thử chia chuỗi số thành 2 phần, một phần là số a và phần còn lại là số b, sau đó kiểm tra xem tích của chúng có đúng bằng tích đã cho hay không.
- Cần duyệt qua các vị trí cắt chuỗi từ vị trí 1 đến độ dài chuỗi - 1 (không được cắt ở đầu và cuối).

<-- Xác định hướng giải -->
- Với mỗi chuỗi số s, ta sẽ thử cắt tại các vị trí từ 1 đến độ dài chuỗi - 1 để tạo ra 2 chuỗi con.
- Chuyển 2 chuỗi con thành 2 số nguyên a và b, sau đó kiểm tra tích của chúng.
- Nếu tích của a và b bằng với tích đã cho, ta in ra a và b, ngược lại nếu duyệt hết chuỗi mà không tìm được cặp a, b nào thì in "NO".
- Cần xử lý t bộ test.
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
    
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        ll tich;
        cin >> s >> tich;

        bool found = false;
        ll fi = -1, se = -1;
        int leng = s.length();

        for (int it = 1; it < leng; ++it) {  
            string first = s.substr(0, it);
            string second = s.substr(it);

            fi = stoll(first);
            se = stoll(second);

            if (fi * se == tich) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << fi << " " << se << endl;  
        } else {
            cout << "NO" << endl; 
        }
    }

    
    return(0);
}