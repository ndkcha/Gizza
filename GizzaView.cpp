// GizzaView.cpp : implementation of the CGizzaView class
//

#include "stdafx.h"
#include "Gizza.h"

#include "GizzaDoc.h"
#include "GizzaView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CGizzaView

IMPLEMENT_DYNCREATE(CGizzaView, CView)

BEGIN_MESSAGE_MAP(CGizzaView, CView)
	//{{AFX_MSG_MAP(CGizzaView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGizzaView construction/destruction

CGizzaView::CGizzaView()
{
	// TODO: add construction code here

}

CGizzaView::~CGizzaView()
{
}

BOOL CGizzaView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CGizzaView drawing

void CGizzaView::OnDraw(CDC* pDC)
{
	CGizzaDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CGizzaView diagnostics

#ifdef _DEBUG
void CGizzaView::AssertValid() const
{
	CView::AssertValid();
}

void CGizzaView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CGizzaDoc* CGizzaView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CGizzaDoc)));
	return (CGizzaDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CGizzaView message handlers
