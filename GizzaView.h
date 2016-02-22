// GizzaView.h : interface of the CGizzaView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_GIZZAVIEW_H__130A161E_D15F_4662_93A1_DF49DA215508__INCLUDED_)
#define AFX_GIZZAVIEW_H__130A161E_D15F_4662_93A1_DF49DA215508__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CGizzaView : public CView
{
protected: // create from serialization only
	CGizzaView();
	DECLARE_DYNCREATE(CGizzaView)

// Attributes
public:
	CGizzaDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGizzaView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CGizzaView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CGizzaView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in GizzaView.cpp
inline CGizzaDoc* CGizzaView::GetDocument()
   { return (CGizzaDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GIZZAVIEW_H__130A161E_D15F_4662_93A1_DF49DA215508__INCLUDED_)
