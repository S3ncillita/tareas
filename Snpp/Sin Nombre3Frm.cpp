///-----------------------------------------------------------------
///
/// @file      Sin Nombre3Frm.cpp
/// @author    Rodrigo
/// Created:   6/3/2022 22:10:29
/// @section   DESCRIPTION
///            clase2 class implementation
///
///------------------------------------------------------------------

#include "Sin Nombre3Frm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// clase2
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(clase2,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(clase2::OnClose)
	EVT_ACTIVATE(clase2::clase2Activate)
END_EVENT_TABLE()
////Event Table End

clase2::clase2(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

clase2::~clase2()
{
}

void clase2::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	SetTitle(_("Sin Nombre3"));
	SetIcon(wxNullIcon);
	SetSize(21,31,320,334);
	Center();
	
	////GUI Items Creation End
}

void clase2::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * clase2Activate
 */
void clase2::clase2Activate(wxActivateEvent& event)
{
	// insert your code here
}
