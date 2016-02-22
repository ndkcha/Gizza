// OrderBox.cpp : implementation file
//

#include "stdafx.h"
#include <windows.h> 
#include "Gizza.h"
#include "OrderBox.h"
#include "MainFrm.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// OrderBox dialog


OrderBox::OrderBox(CWnd* pParent)
	: CDialog(OrderBox::IDD, pParent)
{
	//{{AFX_DATA_INIT(OrderBox)
	m_c1 = FALSE;
	m_c2 = FALSE;
	m_c3 = FALSE;
	m_PizzaType = 0;
	m_PizzaSize = 0;
	//}}AFX_DATA_INIT
}


void OrderBox::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(OrderBox)
	DDX_Check(pDX, IDC_CHECK1, m_c1);
	DDX_Check(pDX, IDC_CHECK2, m_c2);
	DDX_Check(pDX, IDC_CHECK3, m_c3);
	DDX_Radio(pDX, IDC_RADIO1, m_PizzaType);
	DDX_Slider(pDX, IDC_SLIDER1, m_PizzaSize);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(OrderBox, CDialog)
	//{{AFX_MSG_MAP(OrderBox)
	ON_BN_CLICKED(IDC_CHECK1, OnCheck1)
	ON_BN_CLICKED(IDC_CHECK2, OnCheck2)
	ON_BN_CLICKED(IDC_CHECK3, OnCheck3)
	ON_BN_CLICKED(IDC_RADIO1, OnRadio1)
	ON_BN_CLICKED(IDC_RADIO2, OnRadio2)
	ON_BN_CLICKED(IDC_RADIO3, OnRadio3)
	ON_NOTIFY(UDN_DELTAPOS, IDC_SPIN1, OnDeltaposSpin1)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// OrderBox message handlers

void OrderBox::OnCheck1() 
{
	CProgressCtrl  *progress=(CProgressCtrl *)GetDlgItem(IDC_PROGRESS1);
//	CProgressCtrl  *progress=(CProgressCtrl *)GetDlgItem(IDC_PROGRESS1);
	if(progress->GetPos()==1)
		progress->StepIt();
	//CProgressCtrl  *progress=(CProgressCtrl *)GetDlgItem(IDC_PROGRESS1);
	m_c1=(m_c1+1)%2;
	//CButton* pCheckBox = (CButton*)GetDlgItem(IDC_CHECK1);
	//pCheckBox->SetCheck((m_c1+1)%2);
	
	//AfxMessageBox((m_c1==1)?"1":"0");
	
}

void OrderBox::OnCheck2() 
{
	CProgressCtrl  *progress=(CProgressCtrl *)GetDlgItem(IDC_PROGRESS1);
//	CProgressCtrl  *progress=(CProgressCtrl *)GetDlgItem(IDC_PROGRESS1);
	if(progress->GetPos()==1)
		progress->StepIt();
	//CProgressCtrl  *progress=(CProgressCtrl *)GetDlgItem(IDC_PROGRESS1);
	// TODO: Add your control notification handler code here
	m_c2=(m_c2+1)%2;
	//CButton* pCheckBox = (CButton*)GetDlgItem(IDC_CHECK2);
	//pCheckBox->SetCheck((m_c2+1)%2);
	//AfxMessageBox(((char)m_c1+49));
}

void OrderBox::OnCheck3() 
{
	CProgressCtrl  *progress=(CProgressCtrl *)GetDlgItem(IDC_PROGRESS1);
//	CProgressCtrl  *progress=(CProgressCtrl *)GetDlgItem(IDC_PROGRESS1);
	if(progress->GetPos()==1)
		progress->StepIt();
	//CProgressCtrl  *progress=(CProgressCtrl *)GetDlgItem(IDC_PROGRESS1);
	// TODO: Add your control notification handler code here
	m_c3=(m_c3+1)%2;
	//CButton* pCheckBox = (CButton*)GetDlgItem(IDC_CHECK3);
	//pCheckBox->SetCheck((m_c3+1)%2);
	//AfxMessageBox(((char)m_c1+49));
}

//DEL void OrderBox::OnRadio1() 
//DEL {
//DEL 	// TODO: Add your control notification handler code here
//DEL 	
//DEL }

void OrderBox::RadioUpdate()
{
	
}

void OrderBox::OnRadio1() 
{
	CProgressCtrl  *progress=(CProgressCtrl *)GetDlgItem(IDC_PROGRESS1);
	progress->SetPos(1);
	m_PizzaType=0;
	//CProgressCtrl  *progress=(CProgressCtrl *)GetDlgItem(IDC_PROGRESS1);
	// TODO: Add your control notification handler code here
//	AfxMessageBox((m_PizzaType==0)?"r1":(m_PizzaType==1)?"r2":"r3");
}

void OrderBox::OnRadio2() 
{
	CProgressCtrl  *progress=(CProgressCtrl *)GetDlgItem(IDC_PROGRESS1);
	progress->SetPos(1);
	m_PizzaType=1;
	//CProgressCtrl  *progress=(CProgressCtrl *)GetDlgItem(IDC_PROGRESS1);
//AfxMessageBox((m_PizzaType==0)?"r1":(m_PizzaType==1)?"r2":"r3");	
}

void OrderBox::OnRadio3() 
{
	CProgressCtrl  *progress=(CProgressCtrl *)GetDlgItem(IDC_PROGRESS1);
	progress->SetPos(1);
	m_PizzaType=2;
	//CProgressCtrl  *progress=(CProgressCtrl *)GetDlgItem(IDC_PROGRESS1);
//AfxMessageBox((m_PizzaType==0)?"r1":(m_PizzaType==1)?"r2":"r3");	
}


BOOL OrderBox::OnInitDialog()
{
	CDialog::OnInitDialog();

	// TODO:  Add extra initialization here
	CButton* pBtn= (CButton*)GetDlgItem(IDC_BUTTON1);

	CProgressCtrl  *progress=(CProgressCtrl *)GetDlgItem(IDC_PROGRESS1);
	progress->SetPos(1);
	progress->SetRange(0,4);
	progress->SetStep(1);
	pBtn->ModifyStyle( 0, BS_BITMAP );

	HBITMAP  hBit= (HBITMAP )LoadImage(
        AfxGetApp()->m_hInstance,
  MAKEINTRESOURCE(IDB_BITMAP2),
        IMAGE_BITMAP,
        20,20, // use actual size
        LR_DEFAULTCOLOR
    );
    pBtn->SetBitmap( hBit );


	pBtn= (CButton*)GetDlgItem(IDC_BUTTON2);

   
	pBtn->ModifyStyle( 0, BS_BITMAP );

	hBit= (HBITMAP )LoadImage(
        AfxGetApp()->m_hInstance,
  MAKEINTRESOURCE(IDB_BITMAP3),
        IMAGE_BITMAP,
        20,20, // use actual size
        LR_DEFAULTCOLOR
    );
    pBtn->SetBitmap( hBit );


	pBtn= (CButton*)GetDlgItem(IDC_BUTTON3);

   
	pBtn->ModifyStyle( 0, BS_BITMAP );

	hBit= (HBITMAP )LoadImage(
        AfxGetApp()->m_hInstance,
  MAKEINTRESOURCE(IDB_BITMAP1),
        IMAGE_BITMAP,
        20,20, // use actual size
        LR_DEFAULTCOLOR
    );
    pBtn->SetBitmap( hBit );

	CSpinButtonCtrl *SpinCtrl = (CSpinButtonCtrl*)GetDlgItem(IDC_SPIN1);
	SpinCtrl->SetBase(0);
	SpinCtrl->SetRange(0, 1244);
	CEdit *buddy = (CEdit*)GetDlgItem(IDC_EDIT3);
	SpinCtrl->SetBuddy(buddy);
	

	CSliderCtrl *slider = (CSliderCtrl* )GetDlgItem(IDC_SLIDER1);

	slider->SetRangeMin(0);
    slider->SetRangeMax(2);

	CEdit *buddy2 = (CEdit*)GetDlgItem(IDC_EDIT1);
	slider->SetBuddy(buddy2);

	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE

}

void OrderBox::OnDeltaposSpin1(NMHDR* pNMHDR, LRESULT* pResult) 
{
//	CProgressCtrl  *progress=(CProgressCtrl *)GetDlgItem(IDC_PROGRESS1);
	CProgressCtrl  *progress=(CProgressCtrl *)GetDlgItem(IDC_PROGRESS1);
	if(progress->GetPos()==2)
		progress->StepIt();
	//NM_UPDOWN* pNMUpDown = (NM_UPDOWN*)pNMHDR;
	LPNMUPDOWN pNMUpDown = reinterpret_cast<LPNMUPDOWN>(pNMHDR);
	UpdateData();
	int Value;
	UpdateData(FALSE);
	*pResult = 0;
}

void OrderBox::OnButton1() 
{
	CProgressCtrl  *progress=(CProgressCtrl *)GetDlgItem(IDC_PROGRESS1);
//	CProgressCtrl  *progress=(CProgressCtrl *)GetDlgItem(IDC_PROGRESS1);
	if(progress->GetPos()==3)
		progress->StepIt();
	CSpinButtonCtrl *SpinCtrl = (CSpinButtonCtrl*)GetDlgItem(IDC_SPIN1);
	CSliderCtrl *slider = (CSliderCtrl* )GetDlgItem(IDC_SLIDER1);

	if(SpinCtrl->GetPos()!=0){
		CString str;
		str=((char)(SpinCtrl->GetPos())+48);
		str+=" ";
		str+=(slider->GetPos()==0)?"Small":(slider->GetPos()==1)?"Medium":"Large";
		str+=" ";
		str+=(m_PizzaType==0)?"Margaritha":(m_PizzaType==1)?"Italian":"XL-Veganza";
		str+=" ";
		str+="with";
		str+=" ";
		if(m_c1+m_c2+m_c3==0)
			str+=" no toppings";
		if(m_c1==1)
			str+=" Extra Cheese ";
		if(m_c2==1)
			str+= " Extra Jalapeneos ";
		if(m_c3==1)
			str+=" Extra Tomatoes ";

		CListBox *list = (CListBox *)GetDlgItem(IDC_LIST1);
		list->AddString(str);
		//UpdateData();
		//AfxMessageBox();
	}
	else
		AfxMessageBox("Enter Quantity");
	m_c1=0;
	m_c2=0;
	m_c3=0;
	CButton* pCheckBox = (CButton*)GetDlgItem(IDC_CHECK2);
	pCheckBox->SetCheck(0);
	pCheckBox = (CButton*)GetDlgItem(IDC_CHECK1);
	pCheckBox->SetCheck(0);
	pCheckBox = (CButton*)GetDlgItem(IDC_CHECK3);
	pCheckBox->SetCheck(0);
	m_PizzaType=0;
	slider->SetPos(0);
	SpinCtrl->SetPos(0);
	m_PizzaSize=0;
	Sleep(10);
	progress->SetPos(1);

	UpdateData();
}

void OrderBox::OnButton2() 
{
	CProgressCtrl  *progress=(CProgressCtrl *)GetDlgItem(IDC_PROGRESS1);
//	CProgressCtrl  *progress=(CProgressCtrl *)GetDlgItem(IDC_PROGRESS1);
	if(progress->GetPos()==3)
		progress->StepIt();
	CListBox *list = (CListBox *)GetDlgItem(IDC_LIST1);
	list->DeleteString(list->GetCurSel());
}

void OrderBox::OnButton3() 
{
	CProgressCtrl  *progress=(CProgressCtrl *)GetDlgItem(IDC_PROGRESS1);
	if(progress->GetPos()==3)
		progress->StepIt();
	int response=AfxMessageBox("Your Total Amount Is = ",MB_OKCANCEL);
	if(response==IDOK||response==IDCANCEL)
		SendMessage(WM_CLOSE);

	
}
