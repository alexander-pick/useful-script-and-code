#!/bin/bash
# setup a Corellium VM for pentesting (iOS 13.x/14.x)
apt update
apt upgrade
wget https://github.com/karajanyp/iOS-ProxyTool/releases/download/1.0/com.zy.proxytool_0.0.1-2+debug_iphoneos-arm.deb
wget https://github.com/nabla-c0d3/ssl-kill-switch2/releases/download/0.14/com.nablac0d3.sslkillswitch2_0.14.deb
wget https://cydia.akemi.ai/debs/nodelete-net.angelxwind.appsyncunified.deb
apt install preferenceloader
dpkg -i com.zy.proxytool_0.0.1-2+debug_iphoneos-arm.deb
dpkg -i com.nablac0d3.sslkillswitch2_0.14.deb
dpkg -i nodelete-net.angelxwind.appsyncunified.deb
#now click the appsync message and 
#killall -9 SpringBoard