; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=OrderBox
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Gizza.h"
ODLFile=Gizza.odl
LastPage=0

ClassCount=6
Class1=CGizzaApp
Class2=CGizzaDoc
Class3=CGizzaView
Class4=CMainFrame

ResourceCount=3
Resource1=IDR_MAINFRAME
Resource2=IDD_ABOUTBOX
Class5=CAboutDlg
Class6=OrderBox
Resource3=IDD_DIALOG1

[CLS:CGizzaApp]
Type=0
HeaderFile=Gizza.h
ImplementationFile=Gizza.cpp
Filter=N

[CLS:CGizzaDoc]
Type=0
HeaderFile=GizzaDoc.h
ImplementationFile=GizzaDoc.cpp
Filter=N

[CLS:CGizzaView]
Type=0
HeaderFile=GizzaView.h
ImplementationFile=GizzaView.cpp
Filter=C


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
BaseClass=CFrameWnd
VirtualFilter=fWC
LastObject=ID_APP_ABOUT




[CLS:CAboutDlg]
Type=0
HeaderFile=Gizza.cpp
ImplementationFile=Gizza.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_ORDER_NEWORDER
Command2=ID_APP_ABOUT
CommandCount=2

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_UNDO
Command5=ID_EDIT_CUT
Command6=ID_EDIT_COPY
Command7=ID_EDIT_PASTE
Command8=ID_EDIT_UNDO
Command9=ID_EDIT_CUT
Command10=ID_EDIT_COPY
Command11=ID_EDIT_PASTE
Command12=ID_NEXT_PANE
Command13=ID_PREV_PANE
CommandCount=13

[DLG:IDD_DIALOG1]
Type=1
Class=OrderBox
ControlCount=21
Control1=IDC_LIST1,listbox,1352728835
Control2=IDC_BUTTON1,button,1342242944
Control3=IDC_BUTTON2,button,1342242944
Control4=IDC_CHECK1,button,1342275587
Control5=IDC_CHECK2,button,1342275587
Control6=IDC_CHECK3,button,1342275587
Control7=IDC_STATIC,button,1342177287
Control8=IDC_SPIN1,msctls_updown32,1342177330
Control9=IDC_STATIC,button,1342177287
Control10=IDC_SLIDER1,msctls_trackbar32,1342177306
Control11=IDC_STATIC,button,1342177287
Control12=IDC_EDIT3,edit,1350631552
Control13=IDC_BUTTON3,button,1342242944
Control14=IDC_PROGRESS1,msctls_progress32,1350565888
Control15=IDC_STATIC,button,1342177287
Control16=IDC_RADIO1,button,1342308361
Control17=IDC_RADIO2,button,1342177289
Control18=IDC_RADIO3,button,1342177289
Control19=IDC_STATIC,static,1342177282
Control20=IDC_STATIC,static,1342308352
Control21=IDC_STATIC,static,1342308352

[CLS:OrderBox]
Type=0
HeaderFile=OrderBox.h
ImplementationFile=OrderBox.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_SLIDER1
VirtualFilter=dWC

