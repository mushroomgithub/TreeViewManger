//Download by http://www.NewXing.com
// TreeDlg.h : main header file for the TREEDLG application
//

#if !defined(AFX_TREEDLG_H__222399E3_E3C3_4DFC_BEC1_DC106DBCFBBF__INCLUDED_)
#define AFX_TREEDLG_H__222399E3_E3C3_4DFC_BEC1_DC106DBCFBBF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTreeDlgApp:
// See TreeDlg.cpp for the implementation of this class
//

class CTreeDlgApp : public CWinApp
{
public:
	CTreeDlgApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTreeDlgApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CTreeDlgApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TREEDLG_H__222399E3_E3C3_4DFC_BEC1_DC106DBCFBBF__INCLUDED_)
