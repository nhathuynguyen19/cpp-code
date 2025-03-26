#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

// Kiểm tra xem có thể chuyển đổi thành đồ thị có hướng, liên thông mạnh hay không
bool coTheChuyenDoThiHuongManh(int N, int M, vector<pair<int, int>>& canh) {
    vector<vector<int>> ke(N + 1);   // Danh sách kề để lưu đồ thị
    vector<int> bacVao(N + 1, 0);    // Mảng lưu bậc vào của mỗi đỉnh

    // Xây dựng danh sách kề và tính bậc vào
    for (const auto& c : canh) {
        ke[c.first].push_back(c.second);
        bacVao[c.second]++;
    }

    queue<int> dinhBacVaoKhong;   // Hàng đợi chứa các đỉnh có bậc vào bằng 0

    // Khởi tạo hàng đợi với các đỉnh có bậc vào bằng 0
    for (int i = 1; i <= N; ++i)
        if (bacVao[i] == 0) dinhBacVaoKhong.push(i);

    vector<pair<int, int>> canhHuong;   // Danh sách lưu các cạnh hướng mới

    // Duyệt qua các đỉnh có bậc vào bằng 0 và loại bỏ các cạnh
    while (!dinhBacVaoKhong.empty()) {
        int u = dinhBacVaoKhong.front();
        dinhBacVaoKhong.pop();

        for (int v : ke[u]) {
            canhHuong.emplace_back(u, v);
            if (--bacVao[v] == 0) dinhBacVaoKhong.push(v);
        }
    }

    // Trả về true nếu số lượng cạnh hướng mới bằng số cạnh của đồ thị vô hướng
    return canhHuong.size() == M;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        vector<pair<int, int>> canh;

        // Đọc thông tin về cạnh
        for (int i = 0; i < M; ++i) {
            int X, Y;
            cin >> X >> Y;
            canh.emplace_back(X, Y);
        }

        // Kiểm tra và xuất kết quả
        if (coTheChuyenDoThiHuongManh(N, M, canh)) {
            cout << "YES" << endl;
            for (const auto& c : canh) cout << c.first << " " << c.second << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
