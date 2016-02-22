// Gizza.h : main header file for the GIZZA application
//

#if !defined(AFX_GIZZA_H__694F1CEE_386D_4532_A21D_2C6D0698C02C__INCLUDED_)
#define AFX_GIZZA_H__694F1CEE_386D_4532_A21D_2C6D0698C02C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CGizzaApp:
// See Gizza.cpp for the implementation of this class
//



class CGizzaApp : public CWinApp
{
public:
	CGizzaApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGizzaApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	COleTemplateServer m_server;
		// Server object for document creation
	//{{AFX_MSG(CGizzaApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GIZZA_H__694F1CEE_386D_4532_A21D_2C6D0698C02C__INCLUDED_)
