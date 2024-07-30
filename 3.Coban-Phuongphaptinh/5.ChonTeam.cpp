/*
<-- Input/Output -->
- Input:
    + Dòng duy nhất gồm 1 số nguyên n (2 <= n <= 10^5)
    + n dòng tiếp theo là tên của n sinh viên tương ứng (Độ dài tên trong đoạn [0, 10] và S_i != S_j (i != j))
- Output:
    + Dòng duy nhất chỉ số cách có thể chọn team thoả mãn đầu bài

<-- Phân tích đề bài -->
- Mỗi team gồm 3 thành viên.
- Điều kiện:  
    + Tên bắt đầu với 'M', 'A', 'R', 'C', 'H'.
    + Không có nhiều hơn 1 người cùng bắt đầu bởi một chữ cái (trùng ký tự đầu).

<-- Xác định hướng giải -->
- Sử dụng nguyên lý đếm cơ bản: Chọn 3 người từ 5 nhóm khác nhau (M, A, R, C, H), với điều kiện không có hai người nào
từ cùng một nhóm.
- Tính toán số cách chọn:
    + Chọn 3 nhóm từ 5 nhóm có sẵn => Sử dụng 3 vòng lặp lồng nhau.
    + Với mỗi cách chọn 3 nhóm, số cách chọn một người từ mỗi nhóm là tích của số người trong mỗi nhóm được chọn.
- Ba vòng lặp:
    + Vòng lặp đầu tiên chọn nhóm thứ nhất (i)
    + Vòng lặp thứ hai chọn nhóm thứ hai (j), bắt đầu từ i+1 để tránh trùng lặp.
    + Vòng lặp thứ ba chọn nhóm thứ ba (k), bắt đầu từ j+1
    => Đảm bảo không đếm trùng lặp và không chọn 2 người từ cùng 1 nhóm.
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

ll countTeams(const vector<int>& counts) {
    ll total = 0;
    int size = counts.size();
    
    for (int i = 0; i < size - 2; i++) {
        for (int j = i + 1; j < size - 1; j++) {
            for (int k = j + 1; k < size; k++) {
                total += (ll)counts[i] * counts[j] * counts[k];
            }
        }
    }
    
    return total;
}

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    cin >> N;
    
    // Vector đếm số lượng sinh viên có tên bắt đầu bằng mỗi chữ cái
    vector<int> counts(5, 0); // M, A, R, C, H 
    string name;
    
    for (int i = 0; i < N; i++) {
        cin >> name;
        char first = name[0];
        if (first == 'M') counts[0]++;
        else if (first == 'A') counts[1]++;
        else if (first == 'R') counts[2]++;
        else if (first == 'C') counts[3]++;
        else if (first == 'H') counts[4]++;
    }
    
    cout << countTeams(counts) << endl;
    
    return(0);
}