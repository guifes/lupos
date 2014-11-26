@echo off

mkdir ..\..\build
pushd ..\..\build
cl -Zi ..\lupos\code\win32_lupos.cpp user32.lib Gdi32.lib
popd