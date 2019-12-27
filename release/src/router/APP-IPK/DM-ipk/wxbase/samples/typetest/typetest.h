/////////////////////////////////////////////////////////////////////////////
// Name:        typetest.h
// Purpose:     Types wxWidgets sample
// Author:      Julian Smart
// Modified by:
// Created:     04/01/98
// RCS-ID:      $Id: typetest.h 35650 2005-09-23 12:56:45Z MR $
// Copyright:   (c) Julian Smart
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_TYPETEST_H_
#define _WX_TYPETEST_H_

// Define a new application type
class MyApp: public wxApp
{
public:
    MyApp() { m_textCtrl = NULL; m_mimeDatabase = NULL; }

    bool OnInit();
    int OnExit() { delete m_mimeDatabase; return wxApp::OnExit(); }

    void DoVariantDemo(wxCommandEvent& event);
    void DoByteOrderDemo(wxCommandEvent& event);
    void DoStreamDemo(wxCommandEvent& event);
    void DoStreamDemo2(wxCommandEvent& event);
    void DoStreamDemo3(wxCommandEvent& event);
    void DoStreamDemo4(wxCommandEvent& event);
    void DoStreamDemo5(wxCommandEvent& event);
    void DoStreamDemo6(wxCommandEvent& event);
    void DoStreamDemo7(wxCommandEvent& event);
#if wxUSE_UNICODE
    void DoUnicodeDemo(wxCommandEvent& event);
#endif // wxUSE_UNICODE
    void DoMIMEDemo(wxCommandEvent& event);

    wxTextCtrl* GetTextCtrl() const { return m_textCtrl; }

private:
    wxTextCtrl* m_textCtrl;
    wxMimeTypesManager *m_mimeDatabase;

    DECLARE_DYNAMIC_CLASS(MyApp)
    DECLARE_EVENT_TABLE()
};

DECLARE_APP(MyApp)

// Define a new frame type
class MyFrame: public wxFrame
{
public:
    MyFrame(wxFrame *parent, const wxString& title,
            const wxPoint& pos, const wxSize& size);

public:
    void OnQuit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);

    DECLARE_EVENT_TABLE()
};

// ID for the menu commands
enum
{
    TYPES_QUIT = wxID_EXIT,
    TYPES_TEXT = 101,
    TYPES_ABOUT = wxID_ABOUT,

    TYPES_DATE = 102,
    TYPES_TIME,
    TYPES_VARIANT,
    TYPES_BYTEORDER,
    TYPES_UNICODE,
    TYPES_STREAM,
    TYPES_STREAM2,
    TYPES_STREAM3,
    TYPES_STREAM4,
    TYPES_STREAM5,
    TYPES_STREAM6,
    TYPES_STREAM7,
    TYPES_MIME
};

#endif
    // _WX_TYPETEST_H_
