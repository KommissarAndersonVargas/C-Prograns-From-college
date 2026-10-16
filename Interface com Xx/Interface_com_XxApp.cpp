/***************************************************************
 * Name:      Interface_com_XxApp.cpp
 * Purpose:   Code for Application Class
 * Author:    anderson ()
 * Created:   2022-10-04
 * Copyright: anderson ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "Interface_com_XxApp.h"
#include "Interface_com_XxMain.h"

IMPLEMENT_APP(Interface_com_XxApp);

bool Interface_com_XxApp::OnInit()
{
    
    Interface_com_XxDialog* dlg = new Interface_com_XxDialog(0L, _("wxWidgets Application Template"));
    dlg->SetIcon(wxICON(aaaa)); // To Set App Icon
    dlg->Show();
    return true;
}
