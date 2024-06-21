#include <iostream>
#include <windows.h>
#include <tchar.h>
#include <string>
#include <filesystem>
#include <io.h>
#include <direct.h>
#pragma comment(lib,"urlmon.lib")
#pragma comment(lib,"ws2_32.lib")
using namespace std;
#define PYTHON_ORG "https://www.python.org/ftp/python/"
#define MIRROR_NPMMIRROR "https://registry.npmmirror.com/-/binary/python/"

int GetHttpFile(string url,string SavePath,string SaveName) {
	size_t len = url.length();//获取字符串长度
	int nmlen = MultiByteToWideChar(CP_ACP, 0, url.c_str(), len + 1, NULL, 0);//如果函数运行成功，并且cchWideChar为零，
	//返回值是接收到待转换字符串的缓冲区所需求的宽字符数大小。
	wchar_t* buffer = new wchar_t[nmlen];
	MultiByteToWideChar(CP_ACP, 0, url.c_str(), len + 1, buffer, nmlen);
	HRESULT hr = URLDownloadToFile(NULL, _T(SaveName.c_str()), _T(SavePath.c_str()), 0, NULL);
	if (hr == S_OK)
	{
		return 0;
	}
	return 1;
}

int main(int argc, char* argv[]) {
	if (argc == 1) cout << "No Argument!" << endl; return 1;
	cout << "Finding Temp Directory.....";
	if (0 != access("./tmp", 0)) {
		cout << "No Temp Directory! Creating......";
		mkdir("./tmp");
		cout << "Create success." << endl;
	}
	....
}