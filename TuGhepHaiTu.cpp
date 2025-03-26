#include <iostream>
#include <string.h>
using namespace std;

void HamSoSanh(char dict[100][120][46], char kh1[], char kh2[], int, int);
void TimCapTuGhep(char dict[100][120][46], char kh1[], char kh2[], int, int);

    int A = 100;
    int B = 120;
    char dict[100][120][46];
    char kh1[46];
    char kh2[46];

int main()
{
    for (int i = 0; i < A ; i++){
        for (int j = 0; j < B ; j++){
            cin >> dict[i][j];
        }
    }
    TimCapTuGhep(dict, kh1, kh2, A, B); 
    return 0;
}
//hàm so sánh hai cặp từ ghép có là từ ở trong từ điển không
void HamSoSanh(char dict[100][120][46], char kh1[], char kh2[], int A, int B){
    for (int i = 0; i < A ; i++){
        for (int j = 0; j < B ; j++){
            if (!strcmp(dict[i][j], kh1)){
                puts(kh1);
            }
            if (!strcmp(dict[i][j], kh2)){
                puts(kh2);
            }
        }
    }
}
//hàm tìm 2 cặp từ ghép của 1 từ đối với các từ còn lại trong danh sách để truyền vào HamSoSanh để so sánh hai từ ghép đó có nằm trong từ điển không
void TimCapTuGhep(char dict[100][120][46], char kh1[], char kh2[], int A, int B){
    char t1[46];
    char t2[46];
    for (int i = 0; i < A; ++i){
        for (int j = 0; j <B; ++j){
            strcpy(t1, dict[i][j]);
                for (int n = i; n < A; ++n){
                    if (n == i){
                        for (int m = j+1; m < B; ++m){
                            strcpy(t2, dict[n][m]);
                            strcpy(kh1,strcat(t1,t2));
                            strcpy(t1, dict[i][j]);
                            strcpy(kh2,strcat(t2,t1));
                            //cout << kh1  << ' ' << kh2 << endl;
                            HamSoSanh(dict, kh1, kh2, A, B);
                        }
                    }
                    else{
                        for (int m = 0; m < B; ++m){
                            strcpy(t2, dict[n][m]);
                            strcpy(kh1,strcat(t1,t2));
                            strcpy(t1, dict[i][j]);
                            strcpy(kh2,strcat(t2,t1));
                            //cout << kh1  << ' ' << kh2 << endl;
                            HamSoSanh(dict, kh1, kh2, A, B);
                        }
                    }
                }
        }
    }
}