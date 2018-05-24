SET program="%1"
if %program% == "traingle.exe" goto err

echo Test1
triangle.exe 3 3 3
if ERRORLEVEL 1 goto testFailed

echo Test3
triangle.exe 4 5 6
if ERRORLEVEL 1 goto testFailed

echo Test4
triangle.exe 5 5 7
if ERRORLEVEL 1 goto testFailed

echo Test5
triangle.exe 0 0 0
if ERRORLEVEL 1 goto testFailed

echo Test6
triangle.exe 4 3 10
if ERRORLEVEL 1 goto testFailed

echo Test7
triangle.exe 0.99 1.1 0.55
if ERRORLEVEL 1 goto testFailed

echo Programm testing succeeded
exit 0

:testFailed
echo Testing failed
exit 1;