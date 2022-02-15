#include "EngineCore.h"
#include<iostream>
#include<windows.h>
namespace SoonMoom
{
	void SetColor(int fore = 7, int back = 0)
	{
		unsigned char m_color = fore;
		m_color += (back << 4);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), m_color);
		return;
	}
	//测试字体颜色-如果自己写log系统
#ifdef PreTestFontColor
	void TestFontColor()
	{

		using namespace std;

		SetColor();
		cout << "这是默认的颜色/This is default color config." << endl << endl;

		cout << "字体颜色 foreColor: ";
		for (int i = 0; i < 16; ++i) {
			if (i == 0) { SetColor(0, 7); cout << ' ' << 0 << ' '; continue; }

			SetColor(i, 0);
			cout << ' ' << i << ' ';
		}

		SetColor(); cout << endl << "背景颜色 backColor: ";
		for (int i = 0; i < 16; ++i) {
			if (i == 0) { SetColor(7, 0); cout << ' ' << 0 << ' '; continue; }

			SetColor(0, i);
			cout << ' ' << i << ' ';
		}
		// 以上代码输出颜色表
		cout << endl << endl;

		int foreColor = 7, backColor = 0;
		SetColor();
		cout << "请输入字体颜色、背景颜色" << endl;
		cin >> foreColor >> backColor;

		cout << "foreColor=" << foreColor << ", backColor=" << backColor << endl;

		SetColor(); system("pause");
	}
#endif

	EngineCore::EngineCore()
	{

	}

	EngineCore::~EngineCore()
	{

	}

	void EngineCore::Run()
	{
		//测试字体颜色-如果自己写log系统
#ifdef PreTestFontColor
		TestFontColor();
#endif



	}


}//SoonMoom
