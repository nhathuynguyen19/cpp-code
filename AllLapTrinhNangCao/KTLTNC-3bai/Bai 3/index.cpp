#include <bits/stdc++.h>
using namespace std;

int main()
{
	/*phan khai bao bien*/
	int n;
	string in;
	int t;
	int nhan;
	int chia;
	int cong;
	int tru;

	/*phan khai bao bien*/

#ifndef ONLINE_JUGDE
	freopen("test.inp", "r", stdin);
#endif

	/*chuong trinh*/
	cin >> n;
	for (int i = 0; i <= n; ++i)
	{
		getline(cin, in);
		nhan = in.find("multi");
		chia = in.find("div");
		cong = in.find("add");
		tru = in.find("sub");

		if (nhan >= 0)
		{
			for (int i = 0; i < in.length(); ++i)
			{
				if (in[i] != ' ')
				{
					cout << in[i];
				}
				else
				{
					cout << ' ';
					t = i + 1;
					break;
				}
			}
			for (int i = t; i < in.length(); ++i)
			{
				if (in[t] == 'm')
				{
					cout << "* ";
					break;
				}
			}
			for (int i = in.length() - 1; i >= 0; --i)
			{
				if (in[i] == ' ')
				{
					t = i + 1;
					break;
				}
			}
			for (int i = t; i < in.length(); ++i)
			{
				cout << in[i];
			}
			cout << endl;
		}
		else if (cong >= 0)
		{
			for (int i = 0; i < in.length(); ++i)
			{
				if (in[i] != ' ')
				{
					cout << in[i];
				}
				else
				{
					cout << ' ';
					t = i + 1;
					break;
				}
			}
			for (int i = t; i < in.length(); ++i)
			{
				if (in[t] == 'a')
				{
					cout << "+ ";
					break;
				}
			}
			for (int i = in.length() - 1; i >= 0; --i)
			{
				if (in[i] == ' ')
				{
					t = i + 1;
					break;
				}
			}
			for (int i = t; i < in.length(); ++i)
			{
				cout << in[i];
			}
			cout << endl;
		}
		else if (tru >= 0)
		{
			for (int i = 0; i < in.length(); ++i)
			{
				if (in[i] != ' ')
				{
					cout << in[i];
				}
				else
				{
					cout << ' ';
					t = i + 1;
					break;
				}
			}
			for (int i = t; i < in.length(); ++i)
			{
				if (in[t] == 's')
				{
					cout << "- ";
					break;
				}
			}
			for (int i = in.length() - 1; i >= 0; --i)
			{
				if (in[i] == ' ')
				{
					t = i + 1;
					break;
				}
			}
			for (int i = t; i < in.length(); ++i)
			{
				cout << in[i];
			}
			cout << endl;
		}
		else if (chia >= 0)
		{
			for (int i = 0; i < in.length(); ++i)
			{
				if (in[i] != ' ')
				{
					cout << in[i];
				}
				else
				{
					cout << ' ';
					t = i + 1;
					break;
				}
			}
			for (int i = t; i < in.length(); ++i)
			{
				if (in[t] == 'd')
				{
					cout << "/ ";
					break;
				}
			}
			for (int i = in.length() - 1; i >= 0; --i)
			{
				if (in[i] == ' ')
				{
					t = i + 1;
					break;
				}
			}
			for (int i = t; i < in.length(); ++i)
			{
				cout << in[i];
			}
			cout << endl;
		}
	}

	/*chuong trinh*/
	return 0;
}
