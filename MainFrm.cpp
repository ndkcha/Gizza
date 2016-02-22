// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "Gizza.h"
#include "OrderBox.h"
#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMainFrame

IMPLEMENT_DYNCREATE(CMainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	//{{AFX_MSG_MAP(CMainFrame)
	ON_COMMAND(ID_ORDER_NEWORDER, OnOrderNeworder)
	//}}AFX_MSG_MAP
	//ON_COMMAND(ID_ORDER_NEWORDER, CMainFrame::OnNewOrder)

END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	// TODO: add member initialization code here
	
}

CMainFrame::~CMainFrame()
{
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// CMainFrame diagnostics

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CFrameWnd::Dump(dc);
}

#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMainFrame message handlers

//afx_msg void CMainFrame::OnNewOrder()
//{
//	OrderBox dialogObject("Order Panel", this);
//
//	dialogObject.DoModal();
//}

void CMainFrame::OnOrderNeworder() 
{
	// TODO: Add your command handler code here
	OrderBox dialogObject(this);

	dialogObject.DoModal();
}
