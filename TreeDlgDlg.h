//Download by http://www.NewXing.com
// TreeDlgDlg.h : header file
//

#if !defined(AFX_TREEDLGDLG_H__7EE7CE8E_2B22_4A5B_BEC3_AB44EC458C46__INCLUDED_)
#define AFX_TREEDLGDLG_H__7EE7CE8E_2B22_4A5B_BEC3_AB44EC458C46__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CTreeDlgDlg dialog

class CTreeDlgDlg : public CDialog
{
// Construction
public:
	CTreeDlgDlg(CWnd* pParent = NULL);	// standard constructor
    HTREEITEM m_hRoot;
	void AddSubDir(HTREEITEM hParent);
	CString GetFullPath(HTREEITEM hCurrent);
	
	void GetDriveDir(HTREEITEM hParent);
	void GetLogicalDrives(HTREEITEM hParent);
// Dialog Data
	//{{AFX_DATA(CTreeDlgDlg)
	enum { IDD = IDD_TREEDLG_DIALOG };
	CTreeCtrl	m_tree;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTreeDlgDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTreeDlgDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnItemexpandedTree1(NMHDR* pNMHDR, LRESULT* pResult);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TREEDLGDLG_H__7EE7CE8E_2B22_4A5B_BEC3_AB44EC458C46__INCLUDED_)
