// mfc_static.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"
#include "mfc_static.h"

#include "..\include\TemplateArgument.h"
#include "..\include\Print.h"

#include <limits>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// �B��̃A�v���P�[�V���� �I�u�W�F�N�g�ł��B

CWinApp theApp;

using namespace std;

int main()
{
    int nRetCode = 0;

    HMODULE hModule = ::GetModuleHandle(nullptr);

    if (hModule != nullptr)
    {
        // MFC �����������āA�G���[�̏ꍇ�͌��ʂ�������܂��B
        if (!AfxWinInit(hModule, nullptr, ::GetCommandLine(), 0))
        {
            // TODO: �K�v�ɉ����ăG���[ �R�[�h��ύX���Ă��������B
            wprintf(L"�v���I�ȃG���[: MFC �̏��������ł��܂���ł����B\n");
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
        // TODO: �K�v�ɉ����ăG���[ �R�[�h��ύX���Ă��������B
        wprintf(L"�v���I�ȃG���[: GetModuleHandle �����s���܂���\n");
        nRetCode = 1;
    }

    return nRetCode;
}
