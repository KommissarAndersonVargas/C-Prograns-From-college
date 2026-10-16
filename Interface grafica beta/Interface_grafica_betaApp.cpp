/***************************************************************
 * Name:      Interface_grafica_betaApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2022-10-25
 * Copyright:  ()
 * License:
 **************************************************************/

#include "Interface_grafica_betaApp.h"

//(*AppHeaders
#include "Interface_grafica_betaMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(Interface_grafica_betaApp);

bool Interface_grafica_betaApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	Interface_grafica_betaFrame* Frame = new Interface_grafica_betaFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
