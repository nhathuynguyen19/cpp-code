#include <iostream>
#include <string>

using namespace std;

struct person {
    string ht;
};

int lastSP(string *ht) {
    int temp = ht->length() - 1;
    while (temp >= 0) {
        if ((*ht)[temp] == ' ') {
            cout << temp << endl;
            return temp;
        }
        temp--;
    }
}

void ten(person *ps, int n) {

    char c1, c2;
    string t;
    bool dk;
    int space;
    for (int h = 0; h > -1; ++h) {
        dk = false;
        for (int i = 0; i < n - 1; ++i) {
            int j = ps[i].ht.length() - 1;
            while (j >= 0) {
                if (ps[i].ht[j] == ' ') {
                    c1 = ps[i].ht[j + 1];
                    break;
                }
                j--;
            }

            j = ps[i + 1].ht.length() - 1;
            while (j >= 0) {
                if (ps[i + 1].ht[j] == ' ') {
                    c2 = ps[i + 1].ht[j + 1];
                    break;
                }
                j--;
            }

            if (c2 < c1) {
                t = ps[i + 1].ht;
                ps[i + 1].ht = ps[i].ht;
                ps[i].ht = t;
                dk = true;
            }
        }
        if (!dk)
            break;
    }

    for (int i = 0; i < n; ++i) {
        space = lastSP(&ps[i].ht);
        int lht = ps[i].ht.length();
        for(int i = space; i <; --i){

        }
    }
}

int main() {
    freopen("index.csv", "r", stdin);
    int n;
    cin >> n;
    cin.ignore();

    if (n == 0) {
        cout << "No person records found." << endl;
        return 0;
    }

    person ps[n];

    for (int i = 0; i < n; ++i) {
        getline(cin, ps[i].ht);
    }
    ten(ps, n);
    return 0;
}
