// TortoiseGit - a Windows shell extension for easy version control

// Copyright (C) 2009-2013 - TortoiseGit

// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//
#pragma once

#include "SettingsPropPage.h"
#include "RegexEdit.h"
// CSettingsBugtraqConfig dialog

class CSettingsBugtraqConfig : public ISettingsPropPage
{
	DECLARE_DYNAMIC(CSettingsBugtraqConfig)

public:
	CSettingsBugtraqConfig(CString cmdPath);
	virtual ~CSettingsBugtraqConfig();

// Dialog Data
	enum { IDD = IDD_SETTINGSBUGTRAQ_CONFIG };
	UINT GetIconID() {return IDI_BUGTRAQ;}

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	virtual BOOL OnInitDialog();
	virtual BOOL OnApply();

	int m_ChangeMask;

	enum
	{
		BUG_URL=0x1,
		BUG_MESSAGE=0x2,
		BUG_APPEND=0x4,
		BUG_LABEL=0x8,
		BUG_NUMBER=0x10,
		BUG_LOGREGEX=0x20,
		BUG_WARNING=0x40,
	};

	DECLARE_MESSAGE_MAP()

	afx_msg void OnEnChangeBugtraqUrl();
	afx_msg void OnBnClickedBugtraqWarningifnoissueTrue();
	afx_msg void OnBnClickedBugtraqWarningifnoissueFalse();
	afx_msg void OnEnChangeBugtraqMessage();
	afx_msg void OnBnClickedBugtraqAppendTrue();
	afx_msg void OnBnClickedBugtraqAppendFalse();
	afx_msg void OnEnChangeBugtraqLabel();
	afx_msg void OnBnClickedBugtraqNumberTrue();
	afx_msg void OnBnClickedBugtraqNumberFalse();
	afx_msg void OnEnChangeBugtraqLogregex();

	CRegexEdit	m_BugtraqRegex1;

	CString	m_URL;
	BOOL	m_bNWarningifnoissue;
	CString	m_Message;
	BOOL	m_bNAppend;
	CString	m_Label;
	BOOL	m_bNNumber;
	CString	m_Logregex;
};
