@REM
@REM Copyright (c) Microsoft Corporation.  All rights reserved.
@REM
@REM
@REM Use of this sample source code is subject to the terms of the Microsoft
@REM license agreement under which you licensed this sample source code. If
@REM you did not accept the terms of the license agreement, you are not
@REM authorized to use this sample source code. For the terms of the license,
@REM please see the license agreement between you and Microsoft or, if applicable,
@REM see the LICENSE.RTF on your install media or the root of your tools installation.
@REM THE SAMPLE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES.
@REM

@if not defined _echoon echo off

REM
REM   PREROMIMAGE.BAT
REM   This batch file gets called by romimage.exe before creating
REM   the image.
REM   
REM   This batch file is the "meta" batch file, it will call
REM   a batch file for each entry in the _DEPTREES variable
REM   named <_depttree entry>-preri.bat
REM   Plus the batch file %_TGTPLAT%-preri.bat gets called last.
REM   

echo.
echo PREROMIMAGE processing...
echo.

pushd %_FLATRELEASEDIR%


for %%f in (%_DEPTREES%) do (
   if exist %%f-preri.bat (
      echo PREROMIMAGE calling %%f-preri.bat
      call %%f-preri.bat
   )
)

if exist %_TGTPLAT%-preri.bat (
   echo PREROMIMAGE calling %_TGTPLAT%-preri.bat
   call %_TGTPLAT%-preri.bat
)


@REM this line makes sure we're running as part of makeimg before closing the cmd window 
@REM (makeimg actually spawns a new cmd window when it calls preromimage)
if "%MAKEIMG_NEXT_CMD%" NEQ "" exit %ERRORLEVEL%

echo.
popd
