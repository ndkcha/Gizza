// GizzaDoc.cpp : implementation of the CGizzaDoc class
//

#include "stdafx.h"
#include "Gizza.h"

#include "GizzaDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CGizzaDoc

IMPLEMENT_DYNCREATE(CGizzaDoc, CDocument)

BEGIN_MESSAGE_MAP(CGizzaDoc, CDocument)
	//{{AFX_MSG_MAP(CGizzaDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CGizzaDoc, CDocument)
	//{{AFX_DISPATCH_MAP(CGizzaDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//      DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_DISPATCH_MAP
END_DISPATCH_MAP()

// Note: we add support for IID_IGizza to support typesafe binding
//  from VBA.  This IID must match the GUID that is attached to the 
//  dispinterface in the .ODL file.

// {C02885D5-4429-4D6F-89F8-9A80906799F5}
static const IID IID_IGizza =
{ 0xc02885d5, 0x4429, 0x4d6f, { 0x89, 0xf8, 0x9a, 0x80, 0x90, 0x67, 0x99, 0xf5 } };

BEGIN_INTERFACE_MAP(CGizzaDoc, CDocument)
	INTERFACE_PART(CGizzaDoc, IID_IGizza, Dispatch)
END_INTERFACE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGizzaDoc construction/destruction

CGizzaDoc::CGizzaDoc()
{
	// TODO: add one-time construction code here

	EnableAutomation();

	AfxOleLockApp();
}

CGizzaDoc::~CGizzaDoc()
{
	AfxOleUnlockApp();
}

BOOL CGizzaDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CGizzaDoc serialization

void CGizzaDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CGizzaDoc diagnostics

#ifdef _DEBUG
void CGizzaDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CGizzaDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CGizzaDoc commands
