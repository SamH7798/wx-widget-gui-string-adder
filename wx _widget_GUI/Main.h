#pragma once
#include "wx/wx.h"

class Main: public wxFrame
{
public:
	Main();
	~Main();

public:
	
	wxButton* btn1_;
	wxButton* btn2_;
	wxTextCtrl* txt_;
	wxListBox* list_;
	

	void AddString(wxCommandEvent& evt);

	void ClearList(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};

