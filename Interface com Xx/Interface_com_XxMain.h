/***************************************************************
 * Name:      Interface_com_XxMain.h
 * Purpose:   Defines Application Frame
 * Author:    anderson ()
 * Created:   2022-10-04
 * Copyright: anderson ()
 * License:
 **************************************************************/

#ifndef INTERFACE_COM_XXMAIN_H
#define INTERFACE_COM_XXMAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "Interface_com_XxApp.h"


#include <wx/button.h>
#include <wx/statline.h>
class Interface_com_XxDialog: public wxDialog
{
    public:
        Interface_com_XxDialog(wxDialog *dlg, const wxString& title);
        ~Interface_com_XxDialog();

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

#endif // INTERFACE_COM_XXMAIN_H
