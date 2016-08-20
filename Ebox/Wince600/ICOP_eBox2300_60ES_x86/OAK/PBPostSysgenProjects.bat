setlocal
pushd
cd /d C:\WINCE600\OSDesigns\Ebox\Ebox\Initializer
build
if exist build.log type build.log >> %_WINCEROOT%\build.log
if exist build.wrn type build.wrn >> %_WINCEROOT%\build.wrn
if exist build.err type build.err >> %_WINCEROOT%\build.err
popd
endlocal
