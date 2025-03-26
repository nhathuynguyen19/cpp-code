#include <iostream>
#include <vector>
using namespace std;

//vi du ve ham them phan tu vao vector
void ThemPhanTuVaoVector(vector<int> v1){
    //test
    cout << "v1 cu: ";
    for (int i : v1){
        cout << i << ' ';
    }
    cout << endl;

    //them vao vector
    v1.push_back(6);
    v1.push_back(7);

    //test
    cout << "v1 moi: ";
    for (int i : v1){
        cout << i << ' ';
    }
    cout << endl;

    //pp2
    v1.emplace_back(8);

    //test
    cout << "v1 moi: ";
    for (int i : v1){
        cout << i << ' ';
    }
    cout << endl;

}
//vi du ve khoi tao vector
void KhoiTaoVector(vector<int> v1){
    
    //duyet qua v1
    cout << "v1: ";
    for (int i : v1){
        cout << i << ' ';
    }
    cout << endl;
}
//tru cap cac phan tu trong vector
void TruyCapPhanTu(vector<int> v1){
    cout << "vi tri 4: " <<v1.at(4) << endl;
    cout << "vi tri 4: " << v1[4] << endl;
}
//thay doi phan tu vector
void ThayDoiPhanTu(vector<int> v1){
    v1.at(0) = 10;

    //test
    cout << "v1 sau thay doi: ";
    for (int i : v1){
        cout << i << ' ';
    }
    cout << endl;
}
//xoa phan tu cuoi cung khoi vector
void XoaPhanTuKhoiVector(vector<int> v1){
    v1.pop_back();
    //test
    cout << "xoa: ";
    for (int i : v1){
        cout << i << ' ';
    }
    cout << endl;
}
//ham cua thu vien vector
void HamVector(vector<int> v1){
    cout << "ham vt:";
    cout << endl;
    //trả về số phần tử có trong vector
    cout << "so pt v1: " << size(v1) << endl;
    //trả về 1 (đúng) nếu vectơ trống
    cout << "vector v1 trong?: " << empty(v1) << endl;
    //trả về phần tử cuối cùng của vectơ
    
    //trả về phần tử đầu tiên của vectơ

    //kiểm tra kích thước tổng thể của một vectơ

    //loại bỏ tất cả các phần tử của vector
}
//trinh vong lap vector iterator
void TrinhVongLapVT(vector<int> v1){
    vector<int>::iterator loopv1;
    loopv1 = v1.begin();
    cout << "v1[0]: "<< *loopv1 << endl ;
    loopv1 = v1.end() - 1;
    cout << "v1[4]: "<< *loopv1 << endl ;
    loopv1 = v1.begin() + 2;
    cout << "v1[2]: "<< *loopv1 << endl ;
}
//lap qua vector bang iterator
void LapQuaVTuseIterator(vector<int> v1){
    vector<int>::iterator i;
    
    for (i = v1.begin(); i < v1.end(); ++i ){
        cout << *i << ' ';
    }
}

int main(){
    vector<int> v1 = {1, 2, 3, 4, 5};
    //KhoiTaoVector(v1);
    //ThemPhanTuVaoVector(v1);
    //TruyCapPhanTu(v1);
    //ThayDoiPhanTu(v1);
    //XoaPhanTuKhoiVector(v1);
    //HamVector(v1);
    //TrinhVongLapVT(v1);
    //LapQuaVTuseIterator(v1);
    return 0;
}
