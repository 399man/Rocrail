/* Rocrail - Model Railroad Software Copyright (C) 2002-2012 Rob Versluis, Rocrail.net Without an official permission commercial use is not permitted. Forking this project is not permitted. This program is free software; you can redistribute it and/or as published by the Free Software Foundation; either version 2 modify it under the terms of the GNU General Public License of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program; if not, write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.*/#ifndef __issuedlg__#define __issuedlg__#include "issuedlggen.h"#include "rocs/public/node.h"//// end generated include/** Implementing IssueDlgGen */class IssueDlg : public IssueDlgGen{  iONode m_Issue;	protected:		// Handlers for IssueDlgGen events.		void onCancel( wxCommandEvent& event );		void onOK( wxCommandEvent& event );	public:		/** Constructor */		IssueDlg( wxWindow* parent );		iONode getIssue() {return m_Issue;}	//// end generated class members	};#endif // __issuedlg__