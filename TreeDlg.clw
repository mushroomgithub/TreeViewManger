; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CTreeDlgDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "TreeDlg.h"

ClassCount=3
Class1=CTreeDlgApp
Class2=CTreeDlgDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_TREEDLG_DIALOG

[CLS:CTreeDlgApp]
Type=0
HeaderFile=TreeDlg.h
ImplementationFile=TreeDlg.cpp
Filter=N

[CLS:CAboutDlg]
Type=0
HeaderFile=TreeDlgDlg.h
ImplementationFile=TreeDlgDlg.cpp
Filter=D
LastObject=IDOK

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_TREEDLG_DIALOG]
Type=1
Class=CTreeDlgDlg
ControlCount=2
Control1=IDOK,button,1342242817
Control2=IDC_TREE1,SysTreeView32,1350631424

[CLS:CTreeDlgDlg]
Type=0
HeaderFile=treedlgdlg.h
ImplementationFile=treedlgdlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_TREE1

