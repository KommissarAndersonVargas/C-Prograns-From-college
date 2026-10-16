/***************************************************************
 * Name:      interface_wx2App.h
 * Purpose:   Defines Application Class
 * Author:    anderson ()
 * Created:   2022-10-04
 * Copyright: anderson ()
 * License:
 **************************************************************/

#ifndef INTERFACE_WX2APP_H
#define INTERFACE_WX2APP_H

#include <wx/app.h>

class interface_wx2App : public wxApp
{
    public:
        virtual bool OnInit();
};

#endif // INTERFACE_WX2APP_H
