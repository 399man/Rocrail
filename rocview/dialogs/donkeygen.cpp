///////////////////////////////////////////////////////////////////////////// C++ code generated with wxFormBuilder (version Apr 15 2008)// http://www.wxformbuilder.org///// PLEASE DO "NOT" EDIT THIS FILE!///////////////////////////////////////////////////////////////////////////#include "donkeygen.h"///////////////////////////////////////////////////////////////////////////DonKeyGen::DonKeyGen( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style ){	this->SetSizeHints( wxDefaultSize, wxDefaultSize );		wxBoxSizer* bSizer1;	bSizer1 = new wxBoxSizer( wxVERTICAL );		m_Splash = new wxBitmapButton( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );	bSizer1->Add( m_Splash, 0, wxALL|wxEXPAND, 5 );		m_DonateText = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,100 ), wxTE_MULTILINE|wxTE_READONLY );	m_DonateText->Enable( false );		bSizer1->Add( m_DonateText, 0, wxALL|wxEXPAND, 5 );		wxBoxSizer* bSizer3;	bSizer3 = new wxBoxSizer( wxHORIZONTAL );		m_labEmail = new wxStaticText( this, wxID_ANY, wxT("Email:"), wxDefaultPosition, wxDefaultSize, 0 );	m_labEmail->Wrap( -1 );	bSizer3->Add( m_labEmail, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );		m_Email = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );	m_Email->Enable( false );		bSizer3->Add( m_Email, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );		bSizer1->Add( bSizer3, 1, wxEXPAND, 5 );		wxBoxSizer* bSizer2;	bSizer2 = new wxBoxSizer( wxHORIZONTAL );		m_LoadKey = new wxButton( this, wxID_ANY, wxT("Load Key..."), wxDefaultPosition, wxDefaultSize, 0 );	m_LoadKey->SetDefault(); 	bSizer2->Add( m_LoadKey, 0, wxALL, 5 );		m_Donate = new wxButton( this, wxID_ANY, wxT("Donate now..."), wxDefaultPosition, wxDefaultSize, 0 );	bSizer2->Add( m_Donate, 0, wxALL, 5 );		m_stdButton = new wxStdDialogButtonSizer();	m_stdButtonOK = new wxButton( this, wxID_OK );	m_stdButton->AddButton( m_stdButtonOK );	m_stdButton->Realize();	bSizer2->Add( m_stdButton, 1, wxEXPAND, 5 );		bSizer1->Add( bSizer2, 1, wxEXPAND, 5 );		this->SetSizer( bSizer1 );	this->Layout();	bSizer1->Fit( this );		this->Centre( wxBOTH );		// Connect Events	m_Splash->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DonKeyGen::OnSplash ), NULL, this );	m_LoadKey->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DonKeyGen::OnLoadKey ), NULL, this );	m_Donate->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DonKeyGen::OnDonateNow ), NULL, this );	m_stdButtonOK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DonKeyGen::OnOK ), NULL, this );}DonKeyGen::~DonKeyGen(){	// Disconnect Events	m_Splash->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DonKeyGen::OnSplash ), NULL, this );	m_LoadKey->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DonKeyGen::OnLoadKey ), NULL, this );	m_Donate->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DonKeyGen::OnDonateNow ), NULL, this );	m_stdButtonOK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DonKeyGen::OnOK ), NULL, this );}