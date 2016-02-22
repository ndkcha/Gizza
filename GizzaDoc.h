// GizzaDoc.h : interface of the CGizzaDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_GIZZADOC_H__D2870C21_3D44_4584_9F17_9CFE9BF1D72C__INCLUDED_)
#define AFX_GIZZADOC_H__D2870C21_3D44_4584_9F17_9CFE9BF1D72C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CGizzaDoc : public CDocument
{
protected: // create from serialization only
	CGizzaDoc();
	DECLARE_DYNCREATE(CGizzaDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGizzaDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CGizzaDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CGizzaDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

	// Generated OLE dispatch map functions
	//{{AFX_DISPATCH(CGizzaDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_DISPATCH
	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GIZZADOC_H__D2870C21_3D44_4584_9F17_9CFE9BF1D72C__INCLUDED_)
