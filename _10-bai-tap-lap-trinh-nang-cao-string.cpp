#include <iostream>
#include <string.h>
using namespace std;
#include "mylib.h"


//lời giải
char ho_ten[]="Nguyen Dinh Nhat Huy";
char chuoi_du_dau_cuoi[]="     ngay mai troi dep      ";
char chuoi_thua_khoang_trang[]="   ngay   mai    em  di   ";

int main(){
    //1. 
    splitName(ho_ten);
    splitMiddleLastName(ho_ten);
    //2. 
    trimLeadingAndTrailingWhiteSpace(chuoi_du_dau_cuoi);
    //3. 
    trimExcessWhiteSpace(chuoi_thua_khoang_trang);
    //4. 
    reverseStringHeadTail(ho_ten);
    //5. 
    puts(strstr(ho_ten,"Nhat"));
    //6.
    RemoveCharacter(ho_ten,'e');
    //7.
    ReverseOrderOfWords(ho_ten);
    //8.
    ListCharFrequencyInString(ho_ten);
    //9.
    MostFrequentCharInString(ho_ten);
}   
/*câu hỏi
1. viết chương trình cắt chuỗi họ tên thành chuỗi họ đệm và tên.
2. xóa toàn bộ khoảng trắng đầu và cuối chuỗi.
3. loại bỏ những khoảng trắng thừa trong chuỗi.
4. đảo ngược vị trí của từ đầu và từ cuối. vd 'toi thich ban', 'ban thich toi'.
5. tách chuỗi bắt đầu từ một chuỗi yêu cầu trở về sau. vd 'truong dai hoc khoa hoc' tách từ chuỗi khoa đc 'khoa học'.
6. nhập một chuỗi bất kỳ, yêu cầu nhập một ký tự muốn xóa. thực hiện xóa tất cả những ký tự đó trong chuỗi.
7. đảo ngược thứ tự các từ có trong chuỗi ví dụ 'mua xuan that dep' 'dep that xuan mua'.
8. nhập một chuỗi bất kỳ, liệt kê xem mỗi ký tự xuất hiện mấy lần.
9. viết chương trình tìm xem ký tự nào xuất hiện nhiều nhất trong chuỗi.*/
