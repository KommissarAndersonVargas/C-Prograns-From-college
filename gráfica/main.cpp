#include <windows.h>
#include <commctrl.h>
#include <stdio.h>
#include "resource.h"
#include <iostream>
HINSTANCE hInst;
using namespace std;
BOOL CALLBACK DlgMain(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch(uMsg)
    {
    case WM_INITDIALOG:
    {
    }
    return TRUE;

    case WM_CLOSE:
    {
        EndDialog(hwndDlg, 0);
    }
    return TRUE;

    case WM_COMMAND: //ONDE BOTAMOS OS COMANDOS DOS BOTOES
    {
        switch(LOWORD(wParam))
        {
        case BT_1:
            {
                cout <<"Ola usuario\n";
            }
             return TRUE;

        }
    }
    return TRUE;
    }
    return FALSE;
}


int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    hInst=hInstance;
    InitCommonControls();
    return DialogBox(hInst, MAKEINTRESOURCE(DLG_MAIN), NULL, (DLGPROC)DlgMain);
}
