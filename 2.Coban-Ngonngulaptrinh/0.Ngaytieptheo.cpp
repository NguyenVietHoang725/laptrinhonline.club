#include <iostream>
#include <string>
using namespace std;

struct ThoiGian 
{
    int ngay, thang, nam;
};

int main() 
{
    ThoiGian tg;
    char slash; // Sử dụng kiểu char để lưu dấu '/'
    
    // Đọc ngày, tháng, năm với dấu '/'
    cin >> tg.ngay >> slash >> tg.thang >> slash >> tg.nam;
    
    // Kiểm tra năm nhuận
    bool namNhuan = (tg.nam % 4 == 0 && (tg.nam % 100 != 0 || tg.nam % 400 == 0));
    
    // Xử lý tăng ngày
    if ((tg.thang == 1 || tg.thang == 3 || tg.thang == 5 || tg.thang == 7 || tg.thang == 8 || tg.thang == 10) && tg.ngay == 31) 
    {
        tg.ngay = 1;
        tg.thang++;
    } else if (tg.thang == 12 && tg.ngay == 31) 
    {
        tg.ngay = 1;
        tg.thang = 1;
        tg.nam++;
    } else if (tg.thang == 2) 
    {
        if ((namNhuan && tg.ngay == 29) || (!namNhuan && tg.ngay == 28)) 
        {
            tg.ngay = 1;
            tg.thang++;
        } else 
        {
            tg.ngay++;
        }
    } else if ((tg.thang == 4 || tg.thang == 6 || tg.thang == 9 || tg.thang == 11) && tg.ngay == 30) 
    {
        tg.ngay = 1;
        tg.thang++;
    } else 
    {
        tg.ngay++;
    }
    
    // In kết quả
    cout << tg.ngay << "/" << tg.thang << "/" << tg.nam;
    
    return 0;
}
/*
HƯỚNG GIẢI: 
- Xác định yêu cầu đề bài: Chỉ ra ngày/tháng/năm tiếp theo của ngày/tháng/năm được nhập vào.
- Input: Ngày/Tháng/Năm (với ngày, tháng, năm là các số kiểu nguyên).
- Output: Ngày/Tháng/Năm (với ngày, tháng, năm là các số kiểu nguyên).
- Xác định hướng giải: 
    + Những lưu ý khi xử lý bài toán về thời gian: 
        * Đầu vào có các dấu gạch chéo ('/').
        * Năm hoặc là năm nhuận, hoặc là năm không nhuận.
        * Tháng hoặc là tháng có 30 ngày, hoặc có 31 ngày, hoặc có 28/29 ngày (năm nhuận).
    + Dựa vào những lưu ý trên, xây dựng code xử lý để hoàn thành bài toán.
*/