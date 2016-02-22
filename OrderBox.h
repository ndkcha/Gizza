#if !defined(AFX_ORDERBOX_H__13674207_4E90_408B_81AF_3FAAA0E7462A__INCLUDED_)
#define AFX_ORDERBOX_H__13674207_4E90_408B_81AF_3FAAA0E7462A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// OrderBox.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// OrderBox dialog

class OrderBox : public CDialog
{
// Construction
public:
	void RadioUpdate();
	OrderBox(CWnd *pParent);
	//OrderBox(char* DialogName,CWnd* pParent) : CDialog(DialogName, pParent){}  // standard constructor

// Dialog Data
	//{{AFX_DATA(OrderBox)
	enum { IDD = IDD_DIALOG1 };
	BOOL	m_c1;
	BOOL	m_c2;
	BOOL	m_c3;
	int		m_PizzaType;
	int		m_PizzaSize;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(OrderBox)
	public:
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation


	// Generated message map functions
	//{{AFX_MSG(OrderBox)
	afx_msg void OnCheck1();
	afx_msg void OnCheck2();
	afx_msg void OnCheck3();
	afx_msg void OnRadio1();
	afx_msg void OnRadio2();
	afx_msg void OnRadio3();
	afx_msg void OnDeltaposSpin1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnButton3();
	//}}AFX_MSG

	public:
	virtual BOOL OnInitDialog();
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ORDERBOX_H__13674207_4E90_408B_81AF_3FAAA0E7462A__INCLUDED_)
