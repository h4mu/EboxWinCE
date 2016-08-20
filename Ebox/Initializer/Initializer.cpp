// Initializer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#define DEFAULT_USER        L"hamu"
#define DEFAULT_NEW_PASS    L"aabb"

int _tmain(int argc, TCHAR *argv[], TCHAR *envp[])
{
    _tprintf(_T("Starting init!\n"));
	BOOL bRet = NTLMSetUserInfo(DEFAULT_USER, DEFAULT_NEW_PASS);  
	if (bRet == FALSE)
		_tprintf(_T("Failed to set user info"));
	else
		_tprintf(_T("User info updated"));


    return 0;
}

void SetupRas()
{
/*	long lRtn=0;
	DWORD dwBytesReturned=0;

	RASCNTL_SERVERLINE sl;
	RASCNTL_SERVERSTATUS ss;
	RASCNTL_SERVERUSERCREDENTIALS uc;

	sl.rasDevInfo.dwSize = sizeof(RASDEVINFO);
	wcscpy(sl.rasDevInfo.szDeviceName, L"Hayes Compatible on COM2:");
	wcscpy(sl.rasDevInfo.szDeviceType, L"modem");
	sl.bEnable = TRUE;
	sl.bmFlags = 0;
	sl.DisconnectIdleSeconds = 120;
	sl.dwDevConfigSize = 0;

	lRtn = RasIOControl(NULL, RASCNTL_SERVER_LINE_ADD, (LPBYTE) &sl,
	sizeof(sl), NULL, 0, &dwBytesReturned);
	if( lRtn != 0 )
	{
			//failed
	}

	for(jj=0;jj<strlen(g_strUsername);jj++)
	{
			uc.tszUserName[jj] = MAKEWORD(g_strUsername[jj],0);
	}

	uc.tszUserName[jj] = 0;

	//wcscpy(uc.tszUserName, L"username");
	uc.tszDomainName[0] = 0;
	strcpy((char*)uc.password, g_strPassword);
	uc.cbPassword=strlen(g_strPassword);

	lRtn = RasIOControl(NULL, RASCNTL_SERVER_USER_SET_CREDENTIALS, (LPBYTE)
	&uc, sizeof(uc), NULL, 0, &dwBytesReturned);
	if( lRtn != 0 )
	{
			//failed
	}

	lRtn = RasIOControl(NULL, RASCNTL_SERVER_GET_PARAMETERS, NULL, 0,
	(LPBYTE) &ss, sizeof(ss), &dwBytesReturned);
	if( lRtn != 0 )
	{
			//failed
	}

	//This is optional. Should default to 19200.
	LineConfigUnimodemSpeed( sl.rasDevInfo.szDeviceName,
	sl.rasDevInfo.szDeviceType, dwPortBaud);

	ss.bEnable = TRUE;
	ss.bmFlags = 0;
	ss.bUseDhcpAddresses = FALSE;
	ss.bUseAutoIpAddresses = FALSE;
	ss.dwStaticIpAddrStart = MAKELONG( MAKEWORD(HIBYTE(HIWORD(dwIP)),
	LOBYTE(HIWORD(dwIP))), MAKEWORD(HIBYTE(LOWORD(dwIP)),
	LOBYTE(LOWORD(dwIP))) );
	ss.dwStaticIpAddrCount = 2;
	ss.dwNumLines = 1;

	lRtn = RasIOControl(NULL, RASCNTL_SERVER_SET_PARAMETERS, (LPBYTE) &ss,
	sizeof(ss), NULL, 0, &dwBytesReturned);
	if( lRtn != 0 )
	{
			//failed
	}

	lRtn = RasIOControl(NULL, RASCNTL_SERVER_LINE_ENABLE, (LPBYTE) &sl,
	sizeof(sl), NULL, 0, &dwBytesReturned);
	if( lRtn != 0 )
	{
			//failed
	}*/
}