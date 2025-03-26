#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//bien hoc sinh
struct student
{
    char fullName[25];
    float mark1, mark2, mark3, sum;
};

//nhap n
void nhapn(int &n)
{
	cout << "nhap n: ";
	cin >> n;
}

//ham nhap
void input(student thisinh[], int n)
{
    for (int i = 0; i < n; ++i)
    {
    	cout << "ten thi sinh " << i + 1 << ": ";
        cin.ignore();
        cin.get(thisinh[i].fullName, 25);
        cout << "nhap diem: ";
        cin >> thisinh[i].mark1 >> thisinh[i].mark2 >> thisinh[i].mark3;
        thisinh[i].sum = thisinh[i].mark1 + thisinh[i].mark2 + thisinh[i].mark3;
    }
}

//ham sap xep
void sapxep(student thisinh[], int n)
{
	for (int  i = 0; i < n - 1; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if(thisinh[i].sum < thisinh[j].sum)
			{
				student temp;
				temp = thisinh[i];
				thisinh[i] = thisinh[j];
				thisinh[j] = temp;
			}
		}
	}
}

//ham xuat
void output(student thisinh[], int n)
{ 
	cout << "Danh sach sau khi sap xep : "<< endl;
	for (int i = 0; i < n; ++i)
		cout << setw(30) << thisinh[i].fullName << setw(5) << thisinh[i].sum << endl;
}

int main()
{
	student thisinh[100];
	int n;
	nhapn(n);
	input(thisinh, n);
	sapxep(thisinh, n);
	output(thisinh, n);
	return 0;
}
