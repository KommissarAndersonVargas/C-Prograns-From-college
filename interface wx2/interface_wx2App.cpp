/***************************************************************
 * Name:      interface_wx2App.cpp
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

#include "interface_wx2App.h"
#include "interface_wx2Main.h"

IMPLEMENT_APP(interface_wx2App);

bool interface_wx2App::OnInit()
{
    
    interface_wx2Dialog* dlg = new interface_wx2Dialog(0L, _("wxWidgets Application Template"));
    dlg->SetIcon(wxICON(aaaa)); // To Set App Icon
    dlg->Show();
    return true;
}
