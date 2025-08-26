This is a project of RTL8852BU driver for the NAS device RS3617xs-72806 of synology.

1. For Ubuntu 24.04, install dependency packages as below:
sudo apt update
sudo apt install build-essential clang flex bison g++ gawk \
gcc-multilib g++-multilib gettext git libncurses5-dev libssl-dev \
python3-setuptools rsync swig unzip zlib1g-dev file wget

2. download the corresponding source of your NAS device according your device mode from the link as below:
https://archive.synology.cn/download/ToolChain/Synology%20NAS%20GPL%20Source

3. download the corresponding gcc according your device mode from the link as below:
https://archive.synology.cn/download/ToolChain/toolchain

4. copy the source of the path:
    /drivers/net/wireless/rtl8852bu 
to same path of your source that your download.

5. add:
obj-$(CONFIG_RTL8852BU) += rtl8852bu/
to the file: 
/drivers/net/wireless/Makefile

6.  add:
source "drivers/net/wireless/rtl8852bu/Kconfig"
to the file:
/drivers/net/wireless/Kconfig

7. login your NAS with SSH and check the linux version of your NAS device
   open the file:
/Makefile
and modify the SUBLEVEL according your NAS device. My device is 4.4.302+, so I modified to:
SUBLEVEL = 302+

8. unzip your source code and gcc that you downloaded. and set the environment:
export TOOLCHAIN_PATH=/your gcc path/x86_64-pc-linux-gnu
export PATH=$TOOLCHAIN_PATH/bin:$PATH
export CROSS_COMPILE=x86_64-pc-linux-gnu-
export ARCH=x86_64
export KSRC=/your source code path/linux-4.4.x

9. run comand to select modules:
make menuconfig
select:
Networking support->(M)RF switch subsystem support
Networking support->Wireless->(M)cfg80211
select all other options that belong to cfg80211 excluding debug options below cfg80211  
select:
Device Drivers->Network device support->Wireless LAN->(M)Realtek 8852B USB WiFi 

10. run make

Note: some source code need to modify but the details I can't recall, I will add it if I recall it in the future.
































