// atl_static.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"

#include "..\include\TemplateArgument.h"
#include "..\include\Print.h"

#include <limits>


int main()
{
	std::wstring wstr(L"wstring");
	std::string str("string");
	ATL::CStringW cstringw(L"cstringW");
	ATL::CStringA cstringa("cstringA");
	wchar_t wbuf[] = L"wbuf";
	char chBuf[] = "chbuf";
	int intmax = (std::numeric_limits< int >::max)();

	Print("%d\t%s\t%s\t%s\n", intmax, str, chBuf, cstringa);
	Print(L"%d\t%s\t%s\t%s\n", intmax, wstr, wbuf, cstringw);

    return 0;
}

