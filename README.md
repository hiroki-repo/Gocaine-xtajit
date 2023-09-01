# Gocaine-xtajit
is a x86 code emulator for AArch64 Wine!

# Requirement to make use of the softwore
Wine 8.0 or more

# How to use it
1, Copy and/or implement the Wine i386 Wow64 modules for i386 apps compatibility to SysWOW64 folder in Windows folder,  also if lacked SysWOW64 folder in Windows folder on the Wine for AArch64, you have to make the folder or you may need to build the Wine library for i386(IA-32, 32Bit x86) and 'Wow64.dll' and 'Wow64win.dll' for AArch64 in building wine.

2, Copy 3 dlls in this repository named xtajit.dll, np21w_emu.dll and ULDllLoader.dll to System32 and/or '/usr/local/lib/wine/aarch64-windows' on AArch64 wine.

3, Open the x86(i386 or IA-32 ABI) apps on the wine which installed Gocaine-xtajit.

4, You'll see the 32bit x86 apps works on Wine for AArch64!
