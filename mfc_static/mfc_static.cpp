// mfc_static.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include "mfc_static.h"

#include "..\include\TemplateArgument.h"
#include "..\include\Print.h"

#include <limits>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 唯一のアプリケーション オブジェクトです。

CWinApp theApp;

using namespace std;

int main()
{
    int nRetCode = 0;

    HMODULE hModule = ::GetModuleHandle(nullptr);

    if (hModule != nullptr)
    {
        // MFC を初期化して、エラーの場合は結果を印刷します。
        if (!AfxWinInit(hModule, nullptr, ::GetCommandLine(), 0))
        {
            // TODO: 必要に応じてエラー コードを変更してください。
            wprintf(L"致命的なエラー: MFC の初期化ができませんでした。\n");
            nRetCode = 1;
        }
        else
        {
            std::wstring wstr(L"wstring");
            std::string str("string");
            CStringW cstringw(L"cstringW");
            CStringA cstringa("cstringA");
            wchar_t wbuf[] = L"wbuf";
            char chBuf[] = "chbuf";
            int intmax = (std::numeric_limits< int >::max)();

            Print("%d\t%s\t%s\t%s\n", intmax, str, chBuf, cstringa);
            Print(L"%d\t%s\t%s\t%s\n", intmax, wstr, wbuf, cstringw);
        }
    }
    else
    {
        // TODO: 必要に応じてエラー コードを変更してください。
        wprintf(L"致命的なエラー: GetModuleHandle が失敗しました\n");
        nRetCode = 1;
    }

    return nRetCode;
}
