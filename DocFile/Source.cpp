
#include <stdio.h>
#include <string>
#include <cstdio>
#include <fstream>
#include <iostream>
using namespace std;
void main()
{

	fstream f ("ab.txt");
	if (!f.is_open()) cout << "Khong the mow file.\n";
	string s;
	getline(f, s);
	string line;
	while (!f.eof())
	{
		getline(f, line);
		s += line;
	}
	f.close();
	cout << s << endl;

}

//#include <string>
//
//// 1. Thêm thư viện fstream xử lý file vào
//#include <fstream>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	// 2. Mở file
//	 fstream f("D:\ab.txt");
//	//f.open("ab.txt", ios::in);
//
//	// 3. Đọc dữ liệu từ file vào string data
//	string data;
//	getline(f, data);
//
//	// 4. Đóng file
//	f.close();
//
//	// Thể hiện data ra màn hình
//	cout << data;
//	system("pause");
//}