#pragma once

#define _WIN32_WINNT 0x0A00
#define WINVER 0x0A00 
#define VC_EXTRALEAN		               // Exclude rarely-used stuff from Windows headers
#define _CRT_SECURE_NO_WARNINGS
#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS // some CString constructors will be explicit
#define _CRT_NON_CONFORMING_SWPRINTFS      //use traditional swprintf()


#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#include <afxdisp.h>        // MFC Automation classes
#include <afxdtctl.h>	    // MFC support for Internet Explorer 4 Common Controls
#include <afxcmn.h>         // MFC support for Windows Common Controls


// ConsoleMfcSandbox.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>

int main()
{
    //std::cout << "Hello World!\n";

    //CString msg = _T("Hello world");
    //CString title = _T("MFC Programming");
    //::MessageBox(NULL, msg, title, MB_OK);

    for (size_t i = 0; i < 1000; i++)
    {
        new CString(_T("foobar"));
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


