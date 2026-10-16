/***************************************************************
 * Name:      interface_wx2Main.h
 * Purpose:   Defines Application Frame
 * Author:    anderson ()
 * Created:   2022-10-04
 * Copyright: anderson ()
 * License:
 **************************************************************/

#ifndef INTERFACE_WX2MAIN_H
#define INTERFACE_WX2MAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "interface_wx2App.h"


#include <wx/button.h>
#include <wx/statline.h>
class interface_wx2Dialog: public wxDialog
{
    public:
        interface_wx2Dialog(wxDialog *dlg, const wxString& title);
        ~interface_wx2Dialog();

    protected:
        enum
        {
            idBtnQuit = 1000,
            idBtnAbout
        };
        wxStaticText* m_staticText1;
        wxButton* BtnAbout;
        wxStaticLine* m_staticline1;
        wxButton* BtnQuit;

    private:
        void OnClose(wxCloseEvent& event);
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        DECLARE_EVENT_TABLE()
};

#endif // INTERFACE_WX2MAIN_H
