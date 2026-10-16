/***************************************************************
 * Name:      Interface_grafica_betaMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2022-10-25
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef INTERFACE_GRAFICA_BETAMAIN_H
#define INTERFACE_GRAFICA_BETAMAIN_H

//(*Headers(Interface_grafica_betaFrame)
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
//*)

class Interface_grafica_betaFrame: public wxFrame
{
    public:

        Interface_grafica_betaFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~Interface_grafica_betaFrame();

    private:

        //(*Handlers(Interface_grafica_betaFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(Interface_grafica_betaFrame)
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(Interface_grafica_betaFrame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // INTERFACE_GRAFICA_BETAMAIN_H
