#include <iostream>
#include <vector>
using namespace std;

vector<int> sieve_of_eratosthenes(int L, int R) 
{
    // Bước 1: Tạo mảng đánh dấu
    vector<bool> prime(R + 1, true);

    // Bước 2: Lặp từ số nguyên tố nhỏ nhất (2)
    int p = 2;
    while (p * p <= R) 
    {
        // Bước 3: Đánh dấu bội số
        if (prime[p] == true) 
        {
            for (int i = p * p; i <= R; i += p)
                prime[i] = false;
        }

        // Bước 4: Tăng giá trị của p và lặp lại quá trình
        p += 1;

    }

    // Bước 5: Thu thập kết quả
    vector<int> primes_in_range;
    for (int p = max(2, L); p <= R; ++p) 
    {
        if (prime[p])
            primes_in_range.push_back(p);
    }
    return primes_in_range;
}

int main() 
{
    ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--) 
    {
        int l, r;
        cin >> l >> r;
        vector<int> primes = sieve_of_eratosthenes(l, r);
        for (int prime : primes)
            cout << prime << " ";
        cout << endl;
    }
    return 0;
}

/*
Thuật toán sàng lọc Eratosthenes là một phương pháp cổ điển và hiệu quả
để tìm tất cả các số nguyên tố nhỏ hơn hoặc bằng một số nguyên dương n.

--> Cách thức hoạt động: Dựa trên nguyên tắc loại bỏ các bội số của mỗi số
nguyên tố bắt đầu từ 2. Quá trình này tiếp tục cho đến khi tất cả các bội số
của các số nguyên tố nhỏ hơn hoặc bằng căn bậc hai của n đã được đánh dấu

--> Các bước cụ thể
+ Bước 1. Khởi tạo: Tạo một mảng đánh dấu 'prime' với kích thước (n + 1) và gán
giá trị 'true' cho tất cả các phần tử (ban đầu giả định tất cả các số từ 2
đến n đều là số nguyên tố).
+ Bước 2. Bắt đầu từ số nguyên tố nhỏ nhất (2): Lặp từ số nguyên tố đâu tiên p = 2
+ Bước 3. Đánh dấu bội số:
    - Nếu 'prime[p]' là 'true' tức là p là một số nguyên tố.
    - Đánh dấu tất cả các bội số của p bắt đầu từ p^2 là không phải số nguyên tố
(gán 'false' cho các phần tử tương ứng trong mảng 'prime').
+ Bước 4. Tăng giá trị của p: Tăng giá trị của p lên và lặp lại quá trình cho đến khi
p^2 lớn hơn n.
+ Bước 5. Thu thập kết quả: Các chỉ số có giá trị 'true' trong mảng 'prime' từ 2 đến n
là các số nguyên tố.

--> Độ phức tạp:
    - Thời gian: O(nlog(log(n)))
    - Không gian: O(n)
*/