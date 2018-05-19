Ionian OS Installation Manual
=============================

Ionian OS is a collection of different Linux Distribution media with ionomy ioncoin software ready installed. It is broken down into 5 different sets of images available at https://github.com/cevap/ionian/releases

1) Ionian ISO -- this is an install-to computer iso image that will install Ubuntu Ionian to a local computer. Available in both i386 and amd64 versions - updated automatically from the master ionomy ppa https://github.com/cevap/ionian/releases/tag/Ionian-iso

2) Ionian USB -- this is meant as a complete copy-and-run solution. With this image you can run directly from the usb medium, also available in i386 and amd64 versions - updated automatically from the master ionomy ppa https://github.com/cevap/ionian/releases/tag/Ionian-usb

3) Ionian VDI -- These images are meant for use in Oracle VIrtualBox environments. Again, i386 and amd64 versions are available - updated automatically from the master ionomy ppa https://github.com/cevap/ionian/releases/tag/Ionian-vdi

4) Ionian Raspian -- Ready-to-run disk image for Raspberry Pi 3 https://github.com/cevap/ionian/releases/tag/Ionian-Raspian

5) Ionian OS -- based on Gitian deterministic building https://github.com/cevap/ionian/releases/tag/v8.10


Virtualbox VDI installation
---------------------------
amd64 and i386 follow the same installation process.  
1) Download the current Ionian vdi (32 or 64 bit) from https://github.com/cevap/ionian/releases/tag/Ionian-vdi
2) Unzip the vdi file that you have just downloaded  
3) Create a new 32 or 64 bit Virtual Machine in Oracle Virtualbox as documented at https://www.virtualbox.org/manual   
4) Select "Use an existing disk file" and select your downloaded VDI as shown below  
  
32 Bit  

![](ionian-doc-images/create_32_bit.png)  
  
  64 Bit  

![](ionian-doc-images/create_64_bit.png)
  
 5) Start and run your new Ionian OS
  
Ionian USB Installation
-----------------------
Download the current USB image (i386 or amd64) from https://github.com/cevap/ionian/releases/tag/Ionian-usb

1) Windows Install

A) Download rufus (or similar SD writing software) rufus can be downloaded from
  https://rufus.akeo.ie/

B) insert your USB Flash Drive (16 GB or Larger, USB 3.0 Recommended) into an
  unused usb slot

C) double click on your chosen USB writing tool and follow the instructions to install Ionian-&lt;amd64|i386&gt;-&lt;version&gt;.img.xz to your USB Flash Drive.  
(Rufus shown below)    

![](ionian-doc-images/rufus.png)
  
  
  

D) remove the USB Flash Drive replace in your chosen system and reboot (note: first boot will take a short time to configure the ionian user home directory, please be patient).  
 

2) Linux/OSX Install   
 
A) mkusb  

&nbsp;i) install mkusb for your system using the appropriate package manager.

&nbsp;ii) insert your USB Flash Drive (16 GB or Larger, USB3.0 Recommended)) into an
  unused USB slot.  
  
&nbsp;iii) start mkusb and select the Ionian-<amd64|i386\>-<version\>-img.xz file that you downloaded and follow the instructions.

&nbsp;iv) once mkusb has finished you can remove the USB Flash Drive replace in your system and reboot (note: first boot will take a short time to configure the ionian user home directory, please be patient).  
   
B) Using DD from the CLI  

&nbsp;i) insert your USB Flash Drive (16 GB or Larger, USB3.0 Recommended)) into an
  unused USB slot.  
&nbsp;ii) Enter the following command at the CLI prompt in the directory you downloaded the USB image into 
 
"sudo xzcat Ionian-<amd64|i386\>-<version\>.img.xz  | sudo dd of=/dev/sdX bs=4096 status=progress"  

(where X is the letter of your USB Flash Drive  

&nbsp;iii) once dd has finished you can remove the USB Flash Drive replace in your chosen system and reboot (note: first boot will take a short time to configure the ionian user home directory, please be patient).  

Ionian ISO Installation
---------------------- 

Download the current ISO image (i386 or amd64) from https://github.com/cevap/ionian/releases/tag/Ionian-iso and burn the image to a DVD using the appropriate tools (far too many burning tools to mention here)    

Put the DVD that you have created into the DVD drive of the system and select try or install.  
-- note: if "Try Ionian without installing" is selected, ALL changes you make to the system will be lost on reboot.  This is due to the installation being on DVD with no write capabilities.  If needed, you can create a casper-rw usb flash drive to save your changes - this is beyond the scope of this document. 


Ionian for Raspberry Pi 3
-------------------------

Download all parts of Ionian Raspian (either named with bchain-XXXXXXX or no-bchain) from https://github.com/cevap/ionian/tags/Ionian-raspi and unzip them to a directory on the computer you will be writing the images with.

1) Windows Install

    Download rufus (or similar SD writing software) rufus can be downloaded from
    https://rufus.akeo.ie/

    insert your Raspberry Pi 3 SD card (16 GB or Larger) into an
    unused sd card slot or usb slot if using an adapter

    double click on rufus from the download folder you downloaded it to
    and follow the instructions to install ionian-....xz

![](ionian-doc-images/rufus.png)

    remove the SD replace in your Raspberry Pi and reboot your pi

2) Linux/OSX install

    install mkusb for your system using the appropriate package manager

    insert your Raspberry Pi 3 SD card (16 GB or Larger) into an
    unused SD card slot or usb slot if using an adapter

    start mkusb and select the ionian-....xz file that you downloaded
    and follow the instructions

    once mkusb has finished you can remove the SD card, replace it in your
    Raspberry Pi and reboot your pi

Running Ionian

    Login as user ionian password ionian (sudo is unlocked)

    first run iond from the commandline to get an rpc username and password

    enter these into .ioncoin/ioncoin.conf

    you can now run either "systemctl start iond" (headless) or click on the
    icon on the desktop or in the application menu


Ionian OS GNU/Linux 8
```
|-----------------------------------------------------------------|
|   Copyright (c) 2016-2017 ionomy                                |
|   Copyright (c) 2017 CEVAP Community Edition Ioncoin Developers |
|-----------------------------------------------------------------|
|   Project Homepage: https://ioncore.xyz/                        |
|   Core wallet:      https://github.com/cevap/ion                |
|   Sources:          https://github.com/cevap/ionian             |
|   Documentation:    https://github.com/cevap/docs               |
|-----------------------------------------------------------------|
|                     `/:`                                        |
|                  -odN:                                          |
|               `+mMMN-                                           |
|               +MMMM/.--`               ..                       |
|              +NMMMh/MMMMh            .dMMm+                     |
|            -mMMMMM/NMMMMM`          .NMMMMMd                    |
|           oMMMMMMM.sMMMMm.          .MMMMMMs                    |
|          /MMMMMMMMo `/N/             /mMMdyd-                   |
|          dMMMMMMMMM-  `                -+ :Mm                   |
|         .MMMMMMMMMMy                      -MM-                  |
|         :MMMMMMMMMM:                      `MM+                  |
|         /MMMMMMMMMm       `      `         dMh                  |
|         :MMMMMMMMMd    `+mM-    /MNy:      yMM.                 |
|         .MMMMMMMMMN`  -NMMy     `hMMMd`    dMMs                 |
|          +MMMMMMMMM/  `ydo        /dy:    -MMMM:                |
|           /MMMMMMMMm`                    `mMMMMN.               |
|            oMMMMMMMMm/    `ydmmNy     .+yNMMMMMMm`              |
|            .MMMMMMMMMMmo.  `:oo-    /dMMMMMMMMMMMd              |
|             NMMMMMMMMMMMMms:    .:sNMMMMMMMMMMMMMMo             |
|         hmmm sMMMMMMMMMMMMMMMMNNNhmm mMMMMMMMMMMMMMN            |
|         ,NMMMmymMMMMMMMMMMMMMMMd/,     dMMMMMMMMMMMMs           |
|         hMMMMMMMMMMMMMMMMMMMMy-        dMMMMMMMMMMMm,           |
|        ,yNMMMMMMMMMMMMMMMMMMo    .h-.-oMMMMMMMMMMMM:            |
|           ,.:::sMMMMMMMMMMMMMs  -NMMMMMMMMMMMMMMMMh             |
|                :MMMMMMMMMMMMMM+ .////NMMMMMMMMMMMd,             |
|                 +hdNNMMMMNNmdy/       .-://+++/:.               |
|-----------------------------------------------------------------|
|   Credentials (defaults):                                       |
|    Username: root      Username: gitianuser                     |
|    password: cevap     Password: cevap                          |
|-----------------------------------------------------------------|
```

Gitian deterministic building
----------------------------------
 - Ionian_OS_8.10_64-bit_gitian_offline
   - Includes all inputs MacOS SDK
   - Has prebuilt dependencies
   - Full offline deterministic building
     For now, we do not include _non public_ source of 🗺️Ion Core 👛 3 CE ©️ - 👒 RELEASE 👒
     After connecting over ssh to the machine, copy/download ion (_or any other coin source code_). Then run available gitian scripts (linux, windows, macos) which are locally available. You might want to change/mark out `git pull` and `git push` parts of that code. More description will come soon.

   - If you get following error, simply rerun your build process, this is known error which you get on first time running build scripts
     ```
     ./bin/gbuild:21:in `system!': failed to run make-clean-vm --suite trusty --arch amd64 (RuntimeError)
     	from ./bin/gbuild:57:in `build_one_configuration'
     	from ./bin/gbuild:300:in `block (2 levels) in <main>'
     	from ./bin/gbuild:295:in `each'
     	from ./bin/gbuild:295:in `block in <main>'
     	from ./bin/gbuild:293:in `each'
     	from ./bin/gbuild:293:in `<main>'
     ./bin/gsign:70:in `<main>': result/ion-win-3.1-res.yml does not exist (RuntimeError)
     mv: cannot stat ‘build/out/ion-*-win-unsigned.tar.gz’: No such file or directory
     mv: cannot stat ‘build/out/ion-*.zip’: No such file or directory
     mv: cannot stat ‘build/out/ion-*.exe’: No such file or directory
     mv: cannot stat ‘build/out’: No such file or directory
     cp: cannot stat ‘var/build.log’: No such file or directory
     cp: cannot stat ‘var/install.log’: No such file or directory
     ```

 - Ionian_OS_8.10_64-bit_gitian_baseos
   - This is a base image for further work on it. More info comming soon
     - baseos does not have prebuilt packages
       - you will need to create base vm, it is not included in this version
       ```
       cd ./gitian-builder
       bin/make-base-vm --lxc --arch amd64 --suite trusty
       cd ..
       ```
       - you will need to download mac-osx-sdk for compiling macos builds.
       ```
       cd ./gitian-builder
       wget -P inputs https://github.com/cevap/MacOSX-SDKs/releases/download/MacOSX10.11.sdk-trusty/MacOSX10.11.sdk.tar.gz
       cd ..
       ```
       - you need to setup lxc and profile.
       ```
       # switch to superuser/root
       sudo -s
       ```
       ```
       # the version of lxc-start in Debian needs to run as root, so make sure
       # that the build script can execute it without providing a password
       echo "%sudo ALL=NOPASSWD: /usr/bin/lxc-start" > /etc/sudoers.d/gitian-lxc
       echo "%sudo ALL=NOPASSWD: /usr/bin/lxc-execute" >> /etc/sudoers.d/gitian-lxc
       # make /etc/rc.local script that sets up bridge between guest and host
       echo '#!/bin/sh -e' > /etc/rc.local
       echo 'brctl addbr br0' >> /etc/rc.local
       echo 'ip addr add 10.0.3.2/24 broadcast 10.0.3.255 dev br0' >> /etc/rc.local
       echo 'ip link set br0 up' >> /etc/rc.local
       echo 'firewall-cmd --zone=trusted --add-interface=br0' >> /etc/rc.local
       echo 'exit 0' >> /etc/rc.local
       # make sure that USE_LXC is always set when logging in as gitianuser,
       # and configure LXC IP addresses
       echo 'export USE_LXC=1' >> /home/gitianuser/.profile
       echo 'export GITIAN_HOST_IP=10.0.3.2' >> /home/gitianuser/.profile
       echo 'export LXC_GUEST_IP=10.0.3.5' >> /home/gitianuser/.profile
       reboot
       ```
     - There are two version, with and without EULA. (_EULA has to be rewritten, it is just our MIT license for now_)

How to install
--------
This version can be installed on different kind of virtualization sofware. We will describe VMware and Virtualbox. Both are free and avialable on cross platforms.

_Some newer PC's have some issues with running virtualbox on encrypted LVM with encrypted home folder and using secure bios with addition to very new pc hardware, virtualbox freezes pc and only hard shutdown/reset helps. For me it does not matter which OS, if disks are encrypted and secured bios switched on, then virtualbox becomes unusable for me._

VMware (free edition) - for desktop users
----------------------------------------------------
_This guide is written on Linux Mint with cinnamon desktop_.

  1. - Open VMWare Workstation Player
![image](https://user-images.githubusercontent.com/24996551/37815913-36b00fb2-2e71-11e8-96d7-d5aae75d8027.png)
  1. - Click on "Open Virtual Machine" to open virtual machine (or _Press `CTRL+O_`) (or _click on "File" -> "Open virtual machine"_)
![image](https://user-images.githubusercontent.com/24996551/37816115-07c3df0c-2e72-11e8-8a95-5a5d226f6168.png)
  1. - Choose OVA or OVF file for import
   Some explanation of abbreviations, please look up by yourself.
      - _[OVA](https://en.wikipedia.org/wiki/Open_Virtualization_Format) - Open Virtualization format archive (**one single `*.ova` file**)_
      - _[OVF](https://en.wikipedia.org/wiki/Open_Virtualization_Format) - Open Virtualization format archive (**multiple files**)_
![image](https://user-images.githubusercontent.com/24996551/37816985-5dd0abfc-2e75-11e8-8346-7cdab262d804.png)
  1. - Wait until import has finished
![image](https://user-images.githubusercontent.com/24996551/37817014-7c90d03a-2e75-11e8-90a4-da188db812a0.png) 
![image](https://user-images.githubusercontent.com/24996551/37817023-8397f746-2e75-11e8-8e87-f1a44f64a625.png)
  1. - By default your imported virtual machines are placed in
      - Linux: `~/vmware`
      - Windows: `description comming soon`
      - MacOS: `description comming soon`

      navigate to the folder where you imported your virtual machine, you will find a `*.vmx` file. For users running windows/linux/macos simply double clicking on `vmx` file will startup your virtual machine.
![image](https://user-images.githubusercontent.com/24996551/37817328-bb835500-2e76-11e8-9548-ffa7244e21fb.png)

      If you get warning that you do not have enough free space, please make some space free and this error will not appear: 
![image](https://user-images.githubusercontent.com/24996551/37817394-ecd6e784-2e76-11e8-846b-7f2aaff9e385.png)
![image](https://user-images.githubusercontent.com/24996551/37817511-52f09ea2-2e77-11e8-9d27-e3d44af37155.png)
![image](https://user-images.githubusercontent.com/24996551/37817531-5b33ce18-2e77-11e8-839e-30f28a28d802.png)
  1. - Finished

Virtualbox
-------------
_This guide is written on Linux Mint with cinnamon desktop_.

  1. - Right click on `OVA` file and open with virtualbox (_or click `CTRL+I' or "File" -> "Import appliance..."_) 
  1. - By simply clicking import it will import it with settings which it shows. (_You can edit here name of your VM, Hardware, add port forwarding, etc ..._)
  1. - Wait until import finishes
![image](https://user-images.githubusercontent.com/24996551/37817669-dd9b525e-2e77-11e8-9bcb-a33caa8c3518.png)
  1. Click now on start and wait until your ionion vm boots
![image](https://user-images.githubusercontent.com/24996551/37817712-fc67a034-2e77-11e8-8615-31fc7ae9b1cb.png)



