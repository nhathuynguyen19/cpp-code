

//hàm đảo ngược vị trí của từ đầu và từ cuối
void DaoDauCuoiStr(char chuoi[], int dau, int cuoi){
    for (int i = cuoi+1; i<strlen(chuoi);++i){
        cout<<chuoi[i];
    }
    cout<<' ';
    for (int i = dau+1; i<cuoi;++i){
        cout<<chuoi[i];
    }
    cout << ' ';
    for (int i = 0; i<dau; ++i){
        cout<<chuoi[i];
    }
    cout<<endl;
}

//hàm vị trí tách tên và họ đệm
int ViTriTachHoDemVaTen(char chuoi_nhap[]){
    int j=0;
    for (int i = strlen(chuoi_nhap)-1; i >= 0; --i){
        if (*(chuoi_nhap+i)==' '){
            j=i;
            break;
        }
    }
    return j;
}

//hàm vị trí tách họ và tên đệm + tên
int ViTriTachHoVaTenDemTen(char chuoi_nhap[]){
    int j=0;
    for (int i = 0 ; i < strlen(chuoi_nhap); ++i){
        if (*(chuoi_nhap+i)==' '){
            j=i;
            break;
        }
    }
    return j;
}

//hàm tách tên khỏi họ và tên
void TachTen(char chuoi_nhap[], int vi_tri_tach){
    for(int i=vi_tri_tach+1;i<strlen(chuoi_nhap);++i){
        cout<<chuoi_nhap[i];
    }
    cout<<endl;
}

//hàm tách họ đệm khỏi họ và tên
void TachHoDem(char chuoi_nhap[], int vi_tri_tach){
    for(int i=0;i<vi_tri_tach;++i){
        cout<<chuoi_nhap[i];
    }
    cout<<endl;
}

//hàm tìm điểm bắt đầu của một chuỗi dư khoảng trắng ở đầu
int DiemBatDauStr(char chuoi[]){
    int j=0;
    for (int i=0;i<strlen(chuoi);++i){
        if(chuoi[i]!=' '){
            j=i;
            break;
        }
    }
    return j;
}

//hàm tìm điểm kết thúc của một chuỗi dư khoảng trắng ở cuối
int DiemKetThucStr(char chuoi[]){
    int j=0;
    for (int i=strlen(chuoi)-1;i>=0;--i){
        if(chuoi[i]!=' '){
            j=i;
            break;
        }
    }
    return j;
}

//hàm loại bỏ khoảng trắng thừa ở đầu và cuối của str
void BoDuDauCuoiStr(char chuoi[], int diemdau,int diemcuoi){
    for (int i=diemdau;i<=diemcuoi;++i){
        cout<<chuoi[i];
    }
    cout<<endl;
}

//hàm loại bỏ khoảng trắng thừa trong chuỗi
void BoKhoangTrangThuaStr(char chuoi[], int diemdau, int diemcuoi){
    for (int i=diemdau; i<=diemcuoi;++i){
        if(chuoi[i]==' '){
            if((chuoi[i]==' ')&&(chuoi[i+1]!=' ')){
                cout<<chuoi[i];
            }
        }
        if(chuoi[i]!=' '){
            cout<<chuoi[i];
        }
    }
    cout<<endl;
}
//hàm liệt kê số lần xuất hiện của mỗi ký tự trong chuỗi
void ListSoLanXuatHienKyTuTrongStr(int * ar_dem_slxhkt){
    for(int i = 0; i < 128; ++i){
        if(*(ar_dem_slxhkt + i) > 0){
            cout<<"'"<<char(i)<<"'"<<": "<< *(ar_dem_slxhkt + i)<<endl;
        }
    }
}
//hàm lưu số lần xuất hiện của ký tự trong chuỗi
int* SaveSoLanXuatHienKyTuTrongStr(char chuoi[]){
    int *ar_dem_slxhkt = (int *)malloc(128 * sizeof(int));
    int temp;

    memset(ar_dem_slxhkt, 0,128 * sizeof(int));
    for (int i = 0; i < strlen(chuoi); ++i){
        temp=chuoi[i];
        ++*(ar_dem_slxhkt + temp);
    }
    return ar_dem_slxhkt;
}
//hàm tìm ký tự xuất hiện nhiều nhất trong chuỗi
void KyTuXHNhieuNhatStr(int* ar_dem_slxhkt){
    int t = 0;
    for (int i = 0; i < 128 ; i ++){
        if (*(ar_dem_slxhkt + i) > t){
            t = *(ar_dem_slxhkt + i);
        }
    }
    for (int i = 0; i < 128; i++){
        if (*(ar_dem_slxhkt + i) == t){
            cout<<"'"<<char(i)<<"'"<<endl;
        }
    }
}
//-----------------------------------------------------------------------------------------------//
void DiemMocChiaHam(){}
//hàm tổng tách họ đệm khỏi họ và tên
void splitMiddleLastName(char ho_va_ten[]){
    TachHoDem(ho_va_ten,ViTriTachHoDemVaTen(ho_va_ten));
}
//hàm tổng tách tên
void splitName(char ho_va_ten[]){
    TachTen(ho_va_ten,ViTriTachHoDemVaTen(ho_va_ten));
}
//hàm tổng bỏ khoảng trắng dư ở đầu và cuối
void trimLeadingAndTrailingWhiteSpace(char chuoi_du_dau_cuoi[]){
    BoDuDauCuoiStr(chuoi_du_dau_cuoi,DiemBatDauStr(chuoi_du_dau_cuoi),DiemKetThucStr(chuoi_du_dau_cuoi));
}
//hàm tổng bỏ khoảng trắng thừa trong chuỗi (in)
void trimExcessWhiteSpace(char chuoi_thua_khoang_trang_all[]){
    BoKhoangTrangThuaStr(chuoi_thua_khoang_trang_all, DiemBatDauStr(chuoi_thua_khoang_trang_all),DiemKetThucStr(chuoi_thua_khoang_trang_all));
}
//hàm tổng đổi vị trí từ đầu và từ cuối trong 1 chuỗi (in)
void reverseStringHeadTail(char chuoi_nhap[]){
    DaoDauCuoiStr(chuoi_nhap, ViTriTachHoVaTenDemTen(chuoi_nhap),ViTriTachHoDemVaTen(chuoi_nhap));
}
//hàm tổng xóa ký tự trong chuỗi
void RemoveCharacter(char chuoi[], char ky_tu_muon_xoa){
    for(int i = 0; i < strlen(chuoi); ++i){
        if(chuoi[i]!=ky_tu_muon_xoa){
            cout<<chuoi[i];
        }
    }
    cout<<endl;
}
//hàm tổng đảo ngược thứ tự các từ có trong chuỗi
void ReverseOrderOfWords(char chuoi[]){
    int moc=strlen(chuoi);
    int dem=0;
    for (int i=moc; i>=0; --i){
        if(chuoi[i]==' '&&dem==0){
            for (int j=i+1; j < moc; ++j){
                cout << chuoi[j];
            }
            moc=i;
            ++i;
            ++dem;
        }
        if(chuoi[i]==' '&&dem>0){
            for(int j = i; j <moc; ++j){
                cout << chuoi[j];
            }
            moc=i;
        }
        if(i==0){
            cout << ' ';
            for(int j = 0; j < moc; ++j){
                cout << chuoi[j];
            }
        }
    }
    cout << endl;
}
//hàm tổng in ký tự xuất hiện nhiều nhất trong chuỗi
void MostFrequentCharInString(char chuoi_nhap[]){
    KyTuXHNhieuNhatStr(SaveSoLanXuatHienKyTuTrongStr(chuoi_nhap));
}
//hàm tổng in danh sách số lần xuất hiện của các ký tự trong chuỗi
void ListCharFrequencyInString(char chuoi_nhap[]){
    ListSoLanXuatHienKyTuTrongStr(SaveSoLanXuatHienKyTuTrongStr(chuoi_nhap));
}


