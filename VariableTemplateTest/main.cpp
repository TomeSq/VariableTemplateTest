// VariableTemplateTest.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"

#include "..\include\TemplateArgument.h"
#include "..\include\Print.h"

#include <stdio.h>
#include <limits>

int main()
{
	std::wstring wstr(L"wstring");
	std::string str("string");
	wchar_t wbuf[] = L"wbuf";
	char chBuf[] = "chbuf";
	int intmax = std::numeric_limits< int >::max();

	Print("%d\t%s\t%s\n", intmax, str, chBuf);
	Print(L"%d\t%s\t%s\n", intmax, wstr, wbuf);

	return 0;
}

