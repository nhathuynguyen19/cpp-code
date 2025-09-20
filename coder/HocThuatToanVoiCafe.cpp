#include <iostream>
using namespace std;
int n;
void LanNangSuat(char*, int);

int main() {
    //input
    cin >> n;
    cin.ignore();  // Clear the buffer
    char* chars = new char[n+1];
    cin.getline(chars, n+1);
    //output
    LanNangSuat(chars, n);
    //free
    delete[] chars;  // Don't forget to free the allocated memory
    return 0;
}

/*
    Trường Đại học Khoa học có n phòng Lab, 
    trong đó có một số phòng trang bị máy pha cafe miễn phí. 
    Thuận rất thích học thuật toán và buổi nào có sử dụng cafe thì hiệu suất học tập nâng lên thấy rõ, 
    mỗi khi rời khỏi phòng Lab có máy cafe Thuận liền tranh thủ pha liền một lúc hai cốc dành cho buổi học ở Lab tiếp theo.
    Hỏi sau n buổi học trên n Lab khác nhau đó số lần hiệu suất học thuật toán tốt nhất của Thuận là bao nhiêu?
    INPUT
    - n
    - chuỗi n ký tự 0 và 1 đại diện phòng không và có máy pha cafe free
    OUTPUT
    - số buổi học thuận thấy hiệu quả
    */

void LanNangSuat(char* chuoi, int n){
    int max = 0;
    int lan_nang_suat = 0;
    for (int i = 0; i < n; ++i) {
        if (chuoi[i] == '0') {
            if (max > 0) {
                --max;
                lan_nang_suat++;
            }
        }
        else {
            max = 2;
            lan_nang_suat++;
        }
    }
    cout << lan_nang_suat;
}