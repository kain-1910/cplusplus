#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cout << "Nhap hang, cot cua mang: ";
	cin >> n >> m;
	int a[n][m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "a[" << i << "]" << "[" << j << "]: ";
			cin >> a[i][j]; 
		}
		
	}
	cout << "Ma tran vua nhap la: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	int maxValue = -INT_MAX;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if(maxValue < a[i][j]) maxValue = a[i][j];
		}
		
	}
	cout << "Gia tri lon nhat cua mang la: " << maxValue << endl;
	if(n != m) cout << "Ma tran khong co duong cheo !!!" << endl;
	int sum1 = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if(i == j) sum1 += a[i][j];
		}
		
	}
	cout << "Tong duong cheo chinh cua ma tran la: " << sum1 << endl;
	
	int sum2 = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if(i + j == n-1) sum2 += a[i][j];
		}
		
	}
	cout << "Tong duong cheo phu cua ma tran la: " << sum2 << endl;

	return 0;
}