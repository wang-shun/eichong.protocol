
// EpGateMaintDlg.h : ͷ�ļ�
//


#pragma once


#include <list>
#include "afxwin.h"

#include "QueryDialog.h"
#include "Clear.h"
#include "TestEpGate.h"
#include "TestEpDialog.h"
#include "TestEpDialog.h"
#include "UpdateHexDialog.h"
#include "Other.h"

#include "afxcmn.h"


using namespace std;

typedef list<CString> STRLIST;
typedef struct server
{
	CString ip;
	CString port;
	CString name;
}SERVER;

// CEpGateMaintDlg �Ի���
class CEpGateMaintDlg : public CDialog
{
// ����
public:
	CEpGateMaintDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_EPGATEMAINT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;
    
	virtual void OnOK();

	BOOL PreTranslateMessage(MSG* pMsg);

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
//	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT nIDEvent);

	afx_msg void OnBnClickedButton_getBom();
	afx_msg void OnBnClickedButton_startCharge();
	afx_msg void OnBnClickedButton_startBesp();
	afx_msg void OnBnClickedButton_cleanGun();
	afx_msg void OnBnClickedButton_connetMonitor();
	afx_msg void OnBnClickedButton_cleanUser();
	afx_msg void OnBnClickedButton_endCharge();
	afx_msg void OnBnClickedButton_endBesp();
	afx_msg void OnBnClickedButton_callEp();
	afx_msg void OnBnClickedButton_dropClock();
	afx_msg void OnBnClickedButton_sendRate();
	afx_msg void OnBnClickedButton_sendUpdate();
	afx_msg void OnBnClickedButton_getVer();
	afx_msg void OnBnClickedButton_getGun();
	afx_msg void OnBnClickedButton_getUser();
    afx_msg void OnBnClickedButton_cleanBesp();
	afx_msg void OnBnClickedButton_stat();
	afx_msg void OnBnClickedButton_queryVer();
	afx_msg void OnBnClickedButton_restoreGun();
	afx_msg void OnBnClickedButton_startCharge_ep();
	afx_msg void OnBnClickedButton_endCharge_ep();
	afx_msg void OnBnClickedButton_besp_ep();
	afx_msg void OnBnClickedButton_endBesp_ep();
	afx_msg void OnCbnSelchangeCombo2();
	afx_msg void OnEnChangeEdit5();
	afx_msg void OnBnClickedButton_monitorStat();
	afx_msg void OnBnClickedButton_getEp();
	afx_msg void OnBnClickedButton_queryCommSignal();
	afx_msg void OnBnClickedButton_queryConsumeRecord();
	afx_msg void OnTcnSelchangeTab1(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedButton_getStation();
	afx_msg void OnBnClickedButtonEp();	
	afx_msg void OnCbnSelchangeCombo3();
	

  
public:
	CString Sign(STRLIST paramList);
	bool comp(const CString str1, const CString str2);
	void setUrl(STRLIST paramList,CString cmd);

	void getEpParam();

public:
    CString epCode;
    CString gunNo;
	CString key;
	CString account;
	
	
	CString   urlValue;
	CString user;

	CComboBox m_CcomBoBox2;
	int serverNum;
	SERVER * m_server;

	CQueryDialog * m_queryDialog;
	CClear* m_clearDialog;
	CTestEpGate* m_testEpGateDialog;
	CTestEpDialog* m_testEpDialog;
	CUpdateHexDialog* m_updateDialog;
	COther* m_otherDialog;

	CString curIp;
	CString curPort;
	
	CTabCtrl m_tabCtrl;
	

	void OnBnClickedButton_getReal();
	void OnBnClickedButton_createIdentyCode();
	void OnBnClickedButton_addWhite();
	void OnBnClickedButton_removeWhite();
	void OnBnClickedButton_setWhite();
	void OnBnClickedButton_getLastConsumeRecord();
	void OnBnClickedButton_setStopCarOrgan();
	void OnBnClickedButton_queryStationEp();
	void OnBnClickedButton_queryRate();
	void OnBnClickedButton_getChNum();
	void OnBnClickedButton_stationSetEpCode();
	void OnBnClickedButton_queryflashRam();
	void OnBnClickedButton_repeatSend();

	CString cmdstr;

	CComboBox m_epCodeComboBox;
	
	 CFrameWnd *m_pMyWnd;  
    CSplitterWnd m_SplitterWnd;  
};