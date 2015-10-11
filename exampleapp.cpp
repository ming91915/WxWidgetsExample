#include "wx/wxprec.h"

#ifndef WX_PRECOMP
#	include "wx/wx.h"
#endif

#include "exampleapp.h"

IMPLEMENT_APP(exampleApp);

bool exampleApp::OnInit()
{
    wxLog::SetActiveTarget(new wxLogStderr());

    wxFrame *frame = new wxFrame(nullptr, wxID_ANY, wxT("Hello wxWidgets World!"));
    wxButton *button = new wxButton(frame, wxID_EXIT, wxT("?"));

    Bind(wxEVT_COMMAND_BUTTON_CLICKED, [](wxCommandEvent &)->void { wxLogMessage("HELLO!"); }, wxID_EXIT);

    frame->CreateStatusBar();
    frame->SetStatusText(wxT("Hello World!"));

    frame->Show(true);
    frame->CenterOnScreen();

    button->SetFocus();

    SetTopWindow(frame);
    return true;
}