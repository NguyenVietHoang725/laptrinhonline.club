/*
<-- Input/Output -->
- Input:
    + Nhiều dòng dữ liệu thông tin về sinh viên, mỗi dòng bao gồm Họ và tên, Ngày/Tháng/Năm sinh và Giới tính.
    + Dữ liệu đầu vào có thể có tối đa 2000 sinh viên và mỗi dòng được ngăn cách bởi dấu cách (space).
    + Ví dụ: 
        LE KIM ANH 3/4/1990 NU
        TRAN DINH 13/2/1989 NAM
        NGUYEN DINH HA NAM 24/12/1991 NAM

- Output:
    + In ra danh sách sinh viên sau khi sắp xếp theo thứ tự tăng dần của ngày/tháng/năm sinh.
    + Trong trường hợp các sinh viên có cùng ngày sinh, giữ nguyên thứ tự so với danh sách ban đầu.
    + Ví dụ output:
        TRAN DINH 13/2/1989 NAM
        LE KIM ANH 3/4/1990 NU
        NGUYEN DINH HA NAM 24/12/1991 NAM

<-- Phân tích đề bài -->
- Đề bài yêu cầu sắp xếp danh sách sinh viên dựa trên ngày/tháng/năm sinh, nhưng không làm thay đổi thứ tự nếu các sinh viên có cùng ngày sinh.
- Dữ liệu của mỗi sinh viên gồm ba phần:
    + Họ và tên (có thể gồm nhiều từ)
    + Ngày sinh (định dạng Ngày/Tháng/Năm)
    + Giới tính (NAM hoặc NU)
- Cần chú ý rằng ngày/tháng/năm sinh có định dạng không cố định, có thể không đủ 2 chữ số cho ngày hoặc tháng, nên cần phải phân tích chuỗi cẩn thận.

<-- Xác định hướng giải -->
1. **Đọc dữ liệu**:
    - Sử dụng vòng lặp `while` để đọc từng dòng từ đầu vào cho đến khi hết dữ liệu.
    - Phân tách thông tin họ tên và ngày/tháng/năm sinh bằng cách sử dụng một vòng lặp để ghép họ tên cho đến khi gặp chuỗi có chứa dấu '/' (ngày sinh).
    - Phân tích ngày/tháng/năm sinh bằng cách sử dụng `stringstream` để tách từng phần.

2. **Sắp xếp**:
    - Sử dụng thuật toán `stable_sort` để sắp xếp danh sách sinh viên dựa trên năm, tháng và ngày sinh. 
    - Thuật toán `stable_sort` đảm bảo rằng thứ tự các sinh viên có cùng ngày sinh sẽ không thay đổi.

3. **In kết quả**:
    - Sau khi sắp xếp, in ra danh sách sinh viên đã được sắp xếp với định dạng giữ nguyên như đầu vào.
*/ 

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

#define __Hairy_Nguyen__ signed main()
#define ll long long
#define endl '\n'

struct SV {
    string hoten;
    int d, m, y;
    string gender;
};

bool compare(const SV& a, const SV& b) {
    if (a.y != b.y) 
        return a.y < b.y;
    if (a.m != b.m)
        return a.m < b.m;
    return a.d < b.d;
}

__Hairy_Nguyen__ {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
        
    vector<SV> sv;
    string input;

    while (getline(cin, input)) {
        stringstream ss(input);
        SV _sv;
        string date;

        getline(ss, _sv.hoten, ' ');

        while (true) {
            string temp;
            ss >> temp;
            if (temp.find('/') != string::npos) {
                date = temp;
                break;
            }
            _sv.hoten += " " + temp;
        }

        stringstream nhapDate(date);
        string part;
        getline(nhapDate, part, '/');
        _sv.d = stoi(part);
        getline(nhapDate, part, '/');
        _sv.m = stoi(part);
        getline(nhapDate, part, '/');
        _sv.y = stoi(part);

        ss >> _sv.gender;

        sv.push_back(_sv);
    }

    stable_sort(sv.begin(), sv.end(), compare);

    for (const auto& _sv: sv) {
        cout << _sv.hoten << " " << _sv.d << "/" << _sv.m << "/" << _sv.y << " " << _sv.gender << endl;
    }
    
    return(0);
}