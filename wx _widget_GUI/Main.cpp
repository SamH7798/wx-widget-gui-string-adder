#include "Main.h"


wxBEGIN_EVENT_TABLE(Main, wxFrame)
	EVT_BUTTON(10001, AddString)
	EVT_BUTTON(10002, ClearList)

wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "Text Adder", wxPoint(30,30), wxSize(800,600) ) {
	//constructing variables
	btn1_ = new wxButton(this, 10001, "Enter String", wxPoint(10, 10), wxSize(150, 50));
	btn1_ = new wxButton(this, 10002, "Clear List", wxPoint(200, 10), wxSize(150, 50));
	txt_ = new wxTextCtrl(this, wxID_ANY,"", wxPoint(10, 70), wxSize(300, 30));
	list_ = new wxListBox(this, wxID_ANY, wxPoint(10, 110), wxSize(300, 300));
	
}

Main::~Main() {
	
}
void Main::AddString(wxCommandEvent& evt)
{	//attaches string from the value inside the text box
	list_->AppendString(txt_->GetValue());
	evt.Skip();
}

void Main::ClearList(wxCommandEvent& evt) {
	
	list_->Clear();
	evt.Skip();
}
