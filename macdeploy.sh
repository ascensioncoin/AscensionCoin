#!/bin/sh

#copy qt dependencies  
otool -L ascension-Qt.app/Contents/MacOS/ascension-Qt
sudo /Users/user/Qt/5.10.1/clang_64/bin/macdeployqt ascension-Qt.app

#set rpath to frameworks
sudo install_name_tool -add_rpath @executable_path/../Frameworks ascension-Qt.app/Contents/MacOS/ascension-Qt
otool -L ascension-Qt.app/Contents/MacOS/ascension-Qt

#not sure why this is required
sudo chown -R $(whoami) ascension-Qt.app/Contents/Frameworks/*

#copy somewhere
mkdir -p ascension-Qt
[ -d ascension-Qt/ascension-Qt.app ] &&  rm -rf ascension-Qt/ascension-Qt.app
cp -r ascension-Qt.app ascension-Qt/

#build dmg
rm tmp_ascension-Qt.dmg
hdiutil create tmp_ascension-Qt.dmg -srcfolder ascension-Qt/
mkdir -p output
rm -rf output/*
hdiutil convert -format UDZO -o output/ascension-Qt.dmg tmp_ascension-Qt.dmg
