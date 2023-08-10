/*
 Gocaine xtajit Codename:Kanako Yasaka!
 And The code is basically unlicensed and some code(only FPU Emulation modules for dealing with fpu register for the
 emulator library) is licensed under other oss license, But We can say that you can use only this code freely!
 This program is made by Gocaine Project!

NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNXXK000000KKKKKKKKKKXXNWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWNXXK0OOkxdollllcclllooodddddddxkkOOO0KXNWMMMMMMMMMMMMMMMWWWWWWWWWWWWWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWNNXXXXXNNNXK000Okxddddddddddddxxxdddddxkkkkkkkkkkxxxxxxkk0KNWMMWWNXKKKXXKK0000000000OO00KXNWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNNXXKKKK000OOOkkkkkkxxocccclloddooddddxxxxkkkkkkkkkkkkkkkkkkkkkkkkkkxxxk0KKOdl::codkkOOOOOOOOOOOkkOOOOO00XNWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWNNXK0OOkkkkkkkkkOOOOOkkkkkxoc:;,,;:lodxddooodxkkkkkkkkkkkkkkkkkkkkkkkkkxxxxxdoool:,'...';codxkOOOOOOOOOOkkkOOOOkOOKXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWNX0OkxxxdddxkkkkkkOOkOOOOOOOOOOkxdl::;;;;:coddddddddxxkkkkkkkkkkkkkkkkkkxxxxddoooooollc;'......';:ldxkkOOOOOOOOkkOOOOkkkO0XWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWNX0OxdlccclooooooodxxxxxxxkkkOOOOOOOOOkkdlc::;;,;;;:lodddoooddxxkkkkkkxxxxxxxxxxddoollcclcc:cc;'.. ....',;cldxkOOOOOOOkkkOOkkkkkk0KNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNX0kdlc:;,,,;;:clllllooddddddxxxkkkOOOOOOOkkxxdl:;;;;,,',,;:clllcccclloddxxxxddooooooddoollcc:::;;;;;'..   ...',:codxkOOOOOOkkkkkkkkkkkkOKNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXOdc;,''''''',,;;;:::clooddoddxxxxkkkkkkkkkkkxxddol:;;;;,''..',;;::;;;;::ccllllllllcc:cccllllcc:;;;,'',,,..    ..',;:lodxkOOOOkkkkkkkkkkkkkk0XWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKd:'.............'''',,,;:cllooooooddxxxxxkkxxxxddoolc:;,,''.......',,,'''',,;;;;;;;;;;;,,,,,;:cc::;,,'...','.    ....';clooxkkkkkkkkkkkkkkxxxkk0NWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNk:........................'',;;::cccccllloodddddoooollc::;,'..........''''......',,,,,''''......',;:;,,'.........    ...',::clodkkxxxxxxkkkxddddxxkO00KXNNWWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXd,...........................'',;;::cccccccclllccccllllcc::;'......    .....'..........'.............',,'..........      ..,;;;:coxxxdoodddxddoolloolcccldkOOO0KKNWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWN0o;'................       ......'',,;::::clllcccc::::cccc:::;,'..           ...'....    ......................  ....        .',,,,;coddollooodolccccclc;,,:oxkkkkkOO0KXWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWNX0koccc:;;,''.............      ........',,,,;:clllllllloollcc:;;,''..             ......       ..................    ..         ..','',:ldollllllllc::;;:::,'';lxkkkkkkkkkOKXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNXK00OOkkxxxxxxxddolcc:::;;;:::;,'...     ........'',,;;::cccllloolc:;,,'.....                ....        ......     .....               ..',''';clllcccclcc:;,,,;;;'..;oxkkkkkkkkkkO0XNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNX0OkkkkkkOkkkkkkkkkkkkkkxxxxddddddoolc:;,'..       .......',,,;;::cc:;;,,'.......                                ...                         ..',''',:cc:::c::::;''.',;,'.';lxkkkkkkkkkkkkOKNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNXOkxxxkkkkkkkkkkkkkkkkkkkkkxxxxxxxdddoollcc::;,'...       .............''''.....                                                                 ...'''.',;;;::::;;,'....,;,''':oxkkkkkkkkkkkkkOKNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWN0xoooddxxxxxxxkkkkkkkkkxxdddoollllllllclccc:::;;;;;,'...                                       ..''..                                                .......',,;;;;;,''.....,;,'',cdxkkkkkkkkkkkkkk0XWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXOdlcclloooooddxxkkkkkkkxxdddoooooolllllcc:::::::::;;,,''...  ....                            .;oxOKKOddo;.                                              ........'',,,,''......',,'.';lodxkkkkkkkkkkkkkOXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWN0xl:,,;;;:cloodxkkkkkkkkkxxxxxxddddooollcc::::::::::;;,''......;lodkxc;...                 ..;lkKNWMMN0doxKXOl:,.                                            ........'''''....   .''...';cloxkkkkkkkkkkkxxkOXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNKxl;'....',:clodxxkkkkkkxxxxdddoooooollllccc::::::::;;,,,,'.....'o0OxxKWWNK0kxocc:::::::::cclxOKNWMMMMWXOdodxONMWWX0xl;..                         ....             ..............   .......,:ccodxkkkkkkkkxxdoldOKXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXOl;'.....';:cloodddxxxxddddddooooollllllllllllcccc:;;,,''''...  .,xNXkdxkXWMMMMMWWWWWWWWWWWWWWWMMMMMMMWX0kxdxxkOKWMMMMMWNKOdc;'..            ..';codkOOxl;.                .......     ......',;;:lddddxxkkxxddoc::cok0XNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXx:'......',,;;::cclloooooooddddoooooooooollllllccc::;,,'.....     .dNW0xddxOXWMMMMMMMMMMMMMMMMMMMMMMMMWX0kxxxkkOO00NWMMMMMMMMMWNXK0kdl;'...',:ok0XNWMMMMWKOOx;                 .....     ......',,,;:llllodxxxdoooc;,,;ldkOKNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXk:..    .........',,;:clllloodddddooooooollllcc::;;,''......       .lKWXkdddxk0NMMMMMMMMMMMMMMMMMMMMMWNXOkxxkkkO00000XWMMMMMMMMMMMMMMMMWNNXKKXNWMMMMMMMMMMN0kkOx,                 ...       .....',,,',:ccclodddooool:,'';lxkkOKNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMNOc.           ........,;::cclllooooooolllcc::;,,'..........         .lKWN0xdxxxxkKWMMMMMMMMMMMMMMMMMMMWXOkxxxkkOO00KKKKKXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNOxxk0x,                           .....',''',;::cloooollll:,'',cdkkkkOKNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMWKo'.            ............'',,,,,,,,,,,''..............            .oXWN0xxxkkkkkOXWMMMMMMMMMMMMMMMMMMWXOkkkkOO00KKKKKKXKXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXOxxxOKk,                          .....','..',;;:lloolllll:,''';ldkkkkkOXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMNk:.  ..................                                             .cONMN0xxxkkkkkkO0XWMMMMMMMMMMMMMMMMMMN0OOOO0KKKXXXXXKXXXXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKkxxxk0Xk;                         ......''...',;:cllllcccc;'..',:odxxxxxxOXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMWXx;'.',;;;;;;;,,''.....                                            .,oONWMN0kxxkkkkOkO0KKNWMMMMMMMMMMMMMMMMMWX000KKXXXXNNXXXKXXXXNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNOxkkkOOKN0c.                           ........',;ccccc::::,'...';:lodddoodxKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMWNKkdlllodxxxxxxxxddollc:;'....                                      .ckXWMMWN0kxxkkkOOO00KXNXNMMMMMMMMMMMMMMMMMWNKKKXXXXNNWNNXXXXXXXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXOxkkOO00XNXx,                          ........'';::::;;;;;,....'',;cooolllld0NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMWXKOxdddxkkkkkkkkkkxxxxxxxxdolcc:,,'....                      .....';:lxKNMMMMWN0kkkkkOOO000KXNNXNMMMMMMMMMMMMMMMMMWNKKXXNNNNWMWWNXXXXXXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKkkkOO0KKKNWW0l.                        .........',;;;;,'',,'......'';cllccc::lONMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMWXOxdoddxkkkkkkkkkkkxxxxdddoolcccc::;;,,'......          .:clodxkOO0XXNNWMMMMMMMWX0kkkkOO00KKKXXXXNMMMMMMMMMMMMMMMMMMMNXKXNNNNWMMMWWNXXXXNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNOkOOO0KKKXXWMMN0o'.                     ..........',,,,'..'''........';ccc:::;:o0WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMWXOolllldxxxxxxxkkkkkkkkkkxxxdolllccc::;;,,'......       .,o0WMMMMMMMMMMMMMMMMMMMMMWWX0OOO0KXNXXXXXNWMMMMMMMMMMMMMMMMMMMWXXNNNNWWMMMWWNXNNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKOOO000KXXXXNWMMMWXko;..                  ..........'''.....'..........,;:c:;;;;:xXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMWXOdc:::cllooodxkkkkkkkkkkkxxxddoollllccc::;;,,'...        ,odkXWMMMMMMMMMMMMMMMMMMMMMMMWX0O0XNNNNNXXWMMMMWWMMMMMMMMMMWWWNNXKXNNWWMMMMMWNNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXOkOO0KKXXXNNXNMMMMMMWNX0ko:,..            .............................',;::;,,,,lKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMW0dc:;;;::ccloodxkkkkkkkkkkkkxxxxdoollllccc:::;,'..        .:oodONMMMMMMMMMMMMMMMMMMMMMMMMWNKKXNWWWNXKKKK0Ok0NMWNKXNXOkxddddddxkOKXNNNNNXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN0OOO0KXXXNNNNNWMMMMMMMMMMMMWXKkdc:'.        .............................',;:;,'',cONMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMWXkc;,,,;:cccclloddxxkkkkkkkkkxxxddooollllcccc::;'.          .coooxKWMMMMMMMMMMMMMMMMMMMMMMMMWNKXNWNKkoc::;;,,cONXd::c,.....'',;;;coxk0000O0KXXNWWWMMMMMMMMMMMMMMMMMMMMMMMMMWXOO000KXNNNNNNWMMMMMMMMMMMMMMMMMMWXx'          ..................   .......,;;,''',ckNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMWKx:''',;;::::clllloodxxddddddddoolccc::::;;;;;,'..          .:ooodxOXMMMMMMMMMMMMMMMMMMMMMMMMMWXXX0xc;,'',,''',lOx;.....      .....';ldO00Okk00KXNNNWWMMMMMMMMMMMMMMMMMMMMMMX00000KKNNNWWNNWMMMMMMMMMMMMMMMMMMMXo.                 ..........    .......';;,'..':xXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMXd;'..'',;;;::::cccllllllllccccc::;;;,,,,''''....           .cxdoddkOKWMMMMMMMMMMMMMMMMMMMMMMMMMNKkl:,'..'','''',:;........        .....,:oxxkO00XNWWNNWWMMMMMMMMMMMMMMMMMMMMX00KKKKXNWWWNNWMMMMMMMMMMMMMMMMMMMMKc.                  .    ..      .......',,'...':dXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMNk:'.....',,,,,,,,;;;,,,'''''.'...............             .,dOxoodxk0KXWMMMMMMMMMMMMMMMMMMMMMMMMW0xc,.......''...........'..    ...........;cclodk0XNWWNNNWMMMMMMMMMMMMMMMMMMWX00KKXNWWWWNNWMMMMMMMMMMMMMMMMMMMW0:                               ........',,'...':dXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMKo,.....................................                ..cxKXkooodkOKXXNWMMMMMMMMMMMMMMMMMMMMMMWKo,..     ...................  .;looolodoloxxl:;;:cloxOKXNNNWMMMMMMMMMMMMMMMMMNK0KKXNWWWNNWMMMMMMMMMMMMMMMMMMMMWO;                              ..........''....';dXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMNk;.........................    ....                  .'ckKWWN0xoddxOKXNXXNWMMMMMMMMMWNNMMMMMMMMWXo'...     ........ ...  ......':ldxkOkolllcldxoccclolccdxkk0XWMMMMMMMMMMMMMMMMWK00KNWWWNNWMMMMMMMMMMMMMMMMMMMMMNk:.                             ..........''....';dXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMKl'...............'''......                     ..,:ldOXWMMMMXkdddxkOKXNNNNWMMMMMMMMWXxkNMMMMNXKKd;...        .........     ..........''........','..';::loc:lkXWMMMMMMMMMMMMMMMWX0KXNWMWNWMMMMMMMMMMMMMMMMMMMMMWXkl'                            ...........''....';l0WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMM0:.....  ...,:cccccc:;,,'...             .'codxk0KXNWMMMMMMMMWKkdxkOKXNNNXWMMMMMMMMMNk::xXNXXOl::;'.   ...          .........                          ...'..,lONWMMMMMMMMMMMMMMMNKKXWMWNNWMMMMMMMMMMMMMMMMMMMMMN0kd:.                          ............'.....';lONMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMNx,......';cloollllcc::;;,'...           .ckXWMMMMMMMMMMMMMMMMMWKkkO0XNWNXNWMMMMMMMMMXd;':oocc:,''...  .......      .....,;;,...                               .,l0NMMMMMMMMMMMMMMWXKXWWWNWMMMMMMMMMMMMMMMMMMMMMWXOkdl,                         ..................',;lxKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMWKl'..';:lodddooooolllcc:::;,'....        :OK0NWMMMMMMMMMMMMMMMMMWK00XNWWNNWMMMWWMMMMMXo,'''''''''...    ...,,'.......',;:cllc:;..              ........          .,d0XNWWMMMMMMMMMMNKXWWNNWMMMMMMMMMMMMMMMMMMMMMN0kxdoc,.                      ...............'...',;clxKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMW0l;:ldxxxxdddddddddoooollcc:;,'....     .:O0kKWMMMMMMMMMMMMMMMMMMWXKXNNNNWMMMNKOkO0KK0o,''''.''....   ....,:cc:;;;;::cccccclcc:;,...           ..............      ..,:lx0XWMMMMMMMWXXNWNWMMMMMMMMMMMMMMMMMMMMMWXOkxxddl:'.                    ..............''...',;:::dKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMWOddkkkxxxxxdddddddddddddddoolc:;'....   .cOOxkKNMMMMMMMMMMMMMMMMMMWXXNNNWMMMMWN0xl;;;;,'.'''.............',:llllcc:cllccllccllcc:;'...   ...........'''''..''......    ..;lx0XWMMMMMWXNNNWMMMMMMMMMMMMMMMMMMMMWN0OOkkxxxkxo'                  ...............'.....,;;,,:xXWMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMWXkxkkkkkxxxxxxxxxxxdddddddddddol:;,'...  .oOOxkOKWMMMMMMMMMMMMMMMMMMNXXXNMMMMMMMMWKo,......................';cloolcccloollllcllllc:;'... ......'.',,;;::c:;;,;;;....'...  ..;lx0NWMMMMNXXWMMMMMMMMMMMMMMMMMMMMMNK0OOOOOOO00KOl'                ....  ...............,;,,',lONMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMN0kkkkkkkxxxxxxkkxxxxxdddddddddoc:;,'.....:kOxxkkOKWMMMMMMMMMMMMMMMMMWXKXWMMMMMMMMWKo,......................',coddoloodxxxddollllllc:,......',,,:cc:::cclllllc::::,,,:c;'....':ldOXWMMMWKKWMMMMMMMMMMMMMMMMMMMMWX00OO0000KKXXNN0l.               .    ........    ..',,''.':dKWMMMMMMMMMMMMMMMMMMMMMMMMMMM
WX0kkkkkkkkkkkkkkkkkkxxxxxdddddoolcc:;,'...,xKOxxkOO0XNWMMMMMMMMMMMMMMMWXKNMMMMMMMMMWXkl::;..............',;;::loxkxdddxkO0Okxxdlllllc:;'.....;:::clooollloddddollllccclooc;'...,ldx0NMMMWXKNMMMMMMMMMMMMMMMMMMMMNK00O000KKKXNWNXNXk;.                  ...         ..,,,....;lONMMMMMMMMMMMMMMMMMMMMMMMMMMM
KOkkkkkkkkkkkkkkkkkkkkxxxxxddoooollc:;,,'';xXXOxxkO0KXXNWMMMMMMMMMMMMMMMWXWMMMMMMMMMMMWNXk;........... ...;ldxkkO0K0Okkk0KKKOOkxdollllc,.....,:cc:clodxxxddxkOkxdddddddddxoc:;'',coxkKWMMWXKNWMMMMMMMMMMMMMMMMMMMWK0O00KKXXXNWWWNXWWXo.                ...         ..',,'....,cxXMMMMMMMMMMMMMMMMMMMMMMMMMMM
kkkkkkkkkkkkkkkkkkkkkxxxxddoooooollc:;,'';xNWXkxkkO0KXNNNNWMMMMMMMMMMMMMNXWMMMMMMMMMMMMNO:...'....;:;,.....:x0KKXNNNK00KXNNNK00Oxolllc:,.....,cllccllddxxxxxkO000O00K0Okkkxocc:::coxk0NMMNXXXWMMMMMMMMMMMMMMMMMMMWX00KKKXXXNNWWNNWMMMWOc.              .           .',,,.....,:dKMMMMMMMMMMMMMMMMMMMMMMMMMMM
kkkkxkkkkkkkkkkkkkkkkxxddoooooolllc:;,''ckNMWKkkkkO0KXNWNNWMMMMMMMMMMMMNK0NMMMMMMMMMMMNO:,,clooc':xKKko:'.:xKXNWWWMMWNXNWMWWNNXKkollcc:,......:loollloddxxxxkO0KKKKNWWNXKK0kollodddO00XWMNXNNNWMMMMMMMMMMMMMMMMMMMN00KKKXXNWWWNNWMMMMMWXx'                       ..',;,'.....,:o0WMMMMMMMMMMMMMMMMMMMMMMMMMM
kxxxxxxkkkkkkkkkkkkkxxdoooooolcccc:;,,;o0WMMWKkkOOO0KNNNNWMMMMMMMMMMMMMNKKNMMMMMMMMWNKkdddxkO0K0OOXWWNX0kxOXNNWMMMMMMMMMMMMMWWNKkollc:;'... ..,codoooddxxxxxkO0KKKXNWMWWWNXOdloxkOO0XXXNWXXNNNNWMMMMMMMMMMMMMMMMMMNKKXXXXXNWWNNWMMMMMMMMXo.                     ..',;;,......';lONMMMMMMMMMMMMMMMMMMMMMMMMMM
xxddddxxkkkkkkkkkkxxddoooolcccc::;;,,:xXWMMMWKOO000KXNNNWMMMMMMMMMMMMMWNNNNWMMMMMMWXOxk0KXXXNWWWWWWMMMWWWWWWWWWMMMMMMMMMMMMMMMNKxolc:;'....  ..;coddddddxxkkO0KKXXNWWMMMMMNKxooxOKNNWNXKKKXNNNXNMMMMMMMMMMMMMMMMMMWXKXXXXNWWNNWMMMMMMMMMXd.                   ..';:::;'.......,ckXMMMMMMMMMMMMMMMMMMMMMMMMMM
dddddddxkkkkkkkkxxdddooollc:::::;,'..,xXWMMMN0O0KKKXXXNWMMMMMMMMMMMMMMWNWWNWMMMMMWX000KNWMMMMWWWMMMMMMMMWWNNNWMMWWWWWWMMMMMMMWN0dlcc:,....    .';codddxxxkkkO0XNNWWMMMMMMMWKkdoxOXNWMWX00KXXXXXNWMMMMMMMMMMMMMMMMMWNXXNNNWNNNWMMMMMMMMMMNd.                 ..,;::c:;,........,:xXMMMMMMMMMMMMMMMMMMMMMMMMMM
doooddxxkkkxxxxxddoooollcc:::;;,'..  .'oKWMMNKO0KKXXXNWMMMMMMMMMMMMMMNNWWNXNMMMMWX000KNWWWWMWNNNWMMMMMMWNXNNNNNNXXXXNNNWWMMMWNKkocc:;....      .';lddxxxxxkkkOKNWMMMMMMMMMWXOxddkKNWWWX00KXXXXXXNWMMMMMMMMMMMMMMMMWNXXNNNWNNWMMMMMMMMMMMNx.               ..,;::cc:;,'........,:dXMMMMMMMMMMMMMMMMMMMMMMMMMM
oooooddxxxxdddddooooolcc::;;;,..       .cONWWX00KXXXXWMMMMMMMMMMMMMMWNWMWWNNMMMWX00OOO0KXNNWNXXXWMMMMWNXXXXXXXK00KKXK00KXNNNXKOdlc:;'....      ..':odddddddddxOXWMMMMMMMMMMNKkddxOXNWWX0O0KXXXXXXNWMMMMMMMMMMMMMMMMWXXWWNNNWMMMMMMMMMMMMWk'             .';cccllc:;,'''.......':xXMMMMMMMMMMMMMMMMMMMMMMMMMM
oooooddddddoooooooollc::;;,,'.         .':dKWWK0KXXXWMMMMMMMMMMMMMMWNWMMWNNNWMMN0OOOkkkO0XNNK00KNWMMWXKKKKKKK0OOO0Okddxk000OOkdlc:;'.... ...    ..,:ccccclllcclkXWWMMMMMMMMWX0xddx0XNNX0OkkOKKXXXXWMMMMMMMMMMMMMMMMWNNWWNNWMMMMMMMMMMMMMW0;           .,cddddddol:;,,,,'.....',:kWMMMMMMMMMMMMMMMMMMMMMMMMMM
looooooooooooollcc:;;;;,,'..         ..';:ld0NXKXXXNWMMMMMMMMMMMMMWNNWMMWNXXNMWXOkkkkxxxk0XKkxxOXNNXK0OO00OOkkxdolc::clodxxxdoc::;'..   .;lc'     ............';oOXXNWWMMMMMWXOxodx0XXK0kxxxxk0KKXNMMMMMMMMMMMMMMMMMNNWNNWMMMMMMMMMMMMMMMXl.        .,lxkkkkkxxoc::;;;;'.....',lKMMMMMMMMMMMMMMMMMMMMMMMMMMM
lllllllllccc:;,''.'''''...       ....';:cclod0NNXXXWMMMMMMMMMMMMMMWNWMMMWNNXNMWKkxxxxdddxkOkdodxkOOOxxxxxxddool:;,,,,'''';cc:;;;,...   .;okkl.     ....'........'cxO0XNWWWWWMWXOdoodkOOkdooooddxk0NWMMMMMMMMMMMMMMMMNXNNNWMMMMMMMMMMMMMMMWk,       .cdkkkkkkkxddolccc:,......';xXMMMMMMMMMMMMMMMMMMMMMMMMMMM
cccc:::;;,'.... .................',;:ccllllloxKNNXNWMMMMMMMMMMMMMWNNWMMMWNNXXWWKxddddoooodddolloodxxdooooollccccc:c:;.....,'......    .;okOkd;.     ......     ...,cxk0KK0KXNNNXkollodxddlcccllooxOXWMMMMMMMMMMMMMMWNXXNWMMMMMMMMMMMMMMMMMXo.     'cdkkkkkkkkkkkxdolc,.......'l0WMMMMMMMMMMMMMMMMMMMMMMMMMMM
;:;;,,'...      ............',::clllllllllllod0NXKNWMMMMMMMMMMMMMNNWMMMWWNNXXNWXkolllllllllollccclooolccccc::;;;;,,'.....'......     .:oxOOkxc.        ..         ..:ldkkxdxkOKXKkolcclllccc:::cllodk0XWMMMMMMMMMMMMNXXNWMMMMMMMMMMMMMMMMMWKl.  .'cdxkkkkkkkkkkkkxoc,.....''';kNMMMMMMMMMMMMMMMMMMMMMMMMMMMM
'''....        ...'..''',,;cllooddddoooollllodkXXKXWMMMMMMMMMMMMMNXWMMMWWNXXKXWNOl:;,,;;;:ccccc::cccc;,,;;,'...............        .,cdkOOOOx:.                    ..',:c::;:coxOkoccccclc:::::::ccccldOKNMMMMMMMMMMWXKNMMMMMMMMMMMMMMMMMMMMKl'.,codkkkkkkkkkkkkkdl;'.....'.'lKWMMMMMMMMMMMMMMMMMMMMMMMMMMMM
....         ..',,,,,,;;:cloooddxxxxdddollllodxKK0KWMMMMMMMMMMMMMNXWWMMWNXXXXXNNKo,.......'',;;;,,,,'..''.........     ..        .'cdk0000Okl'   ...,,;,...          ........'';:::::clccc:::;;;;;:cccccox0NWMMMMMMMMNKXWMMMMMMMMMMMMMMMMMMMWKl,:ldxkkkkkkkkkkkxdl:,'.......;kNMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
           ..';;;;;;;;::cloddddxxxxxxddooollodxO000XWMMMMMMMMMMMMNXXNNWNXXXK0OOOkl'...........'............         ......   ..,:ok0KKKXK0x:. .,cxOKXNNX0kxl,.            .........':llc::::::;,;;;;::ccccldk0NWMMMMMWXXNMMMMMMMMMMMMMMMMMMMW0l;:oxkkkkkkkkkkkxol:;''.......lXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
          .',;:::;;::::clodxxxxxkkxxdddoolloodxkOOO0XWMMMMMMMMMMMWNNWNXX0kdl;'..''...        .......   .       ..,coxkOOkxl;:dO0KXXXXXK0kl;'':dKNWNXXXXNWWWN0o.            .........,:cc::::::::;;;;;;;::ccccldk0XWWWNXXNNMMMMMMMMMMMMMMMMMNOc,,cdxxxxxkkkkkxol::;''........:OWMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
        ..';;:::;;;;;:clodxxxxxxkkxxxddooooodxxkOOOO0XWMMMMMMMMMMMMMWKxc,.............                       ..'lONWWNKkxdkOKNWNXXXXXXK0kxkO0KNWNK000xddkXWWNKo.                  ..';:cc::;;::::::;;;;;;::ccllodxkO0KXNXXWMMMMMMMMMMMMMMMNk:'';lododdxxkkxdl:;,,'....    ..,oKWMMMMMMMMMMMMMMMMMMMMMMMMMMMM
       ..',;;;;;;;;;:cooxkkkxxxxkkxxxddoooddxxxkOOO0KXNWMMMMMMMMMWXOo;...........'''....                    ..'cONWWKkkOo'.:kNWWNNNXXXNNNNNWWWWN0x0X0l;''oKWWN0l..                ..',:ccc:::::::cc::::;,;:cloxxxxxxkOKXXXXWMMMMMMMMMMMMMNk;...;cllllodddolc;,''....     ..';lkNMMMMMMMMMMMMMMMMMMMMMMMMMMMM
       .',;;;;;;;;;:loodxkkxxxxkkxxxxddddddxxxdxO00KXXNNWMMMMMMWXkc'.....'''.''',,,,,,......                 .'oKWWXxlxOl. .:0WWWWWWNNWWWWWWWMMNx;;:'. ..;kNWNk;.                ...',:cllccccllcllllloollodk0XNXK00O0XNNXKNWMMMMMMMMMMMNO:....,:cc::clllc:;,'....      ..',;cxXMMMMMMMMMMMMMMMMMMMMMMMMMMMM
      .',,;;;,,,;;:loddxkkkxxkkkxxxxdddddxxkxxdkO00KXNWNNWMMMWXko;'..',:::;:::::::;:::;,,;;,'.......          ,xNWWKl.......,kWMMMMMWWMMMWMMMMMNO, ......;kNXkc.               .....,:clllllclodoooooodxkOO0XNWMWWWWNNWWMWNNNWMMMMMMMMMWKc.  ..,;;,,;;:::;''....      ...',,,;dXMMMMMMMMMMMMMMMMMMMMMMMMMMMM
;.    .',;;,,,,;;:lodddxkkkkkkkkkxxxddddxxkkdddkO00KXNWWWNWWN0xl::;;;:cllllllllllloooolc:cooolc::;'..         'dXWWNd. ..'..;OWMMMMWWWWMMMMMMMWWXo'......,kNNXk:.            .....';cllloolllodxkkkxkkkkkO0XNWMMMMMMMMMMMMMWNNWMMMMMMMMNk'   ...''''',,,'.....      .....''..,oXMMMMMMMMMMMMMMMMMMMMMMMMMMMM
Xx;.  .',,,,,;;;:codddxkkkkkkkkkkxxxdddxkkkxooxkO00XNWMMMWX0kdllllcccllooooooodooodxkxdddoddxxdoll:,..         'dXWWKl.....,xNWMMMWWNNWWMMMMMWWWNKxc;,,;:o0XNNO:.        .......';:cllllooooodxkO00KXXKK000KNWMMMMMMMMMMMMMMWNXNMMMMMMMNk'    ......''......      ...........,dXMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MWXx;..',,,,;;;:cloddxxkkkkkkkkkkkxxddxkkkxo:cxOO0KXNWMMWN0xddoddolloddddddddxxxddxkkkxxkxxxxddolll:;'..        .cOXNKOxddx0NMMMMMNK0XWMMMWMMMMMWWNXKK0KKXXXXXOc.       ......';:cllloddddddddxk0KKXNWWWNNNNWMMMMMMMMMMMMMWWXK0KNMMMMMMWk'     .......        ....'''..'''...;dXMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMNd,'',,,,,;::loddxxkkkkkkkkkkkkxddxkkkkd:':dOO0XNWWMWXK00O0KKOdddkOkxdxkO00OkxxkOOkkkkkxxxdolllcc:,....   ..';ckXNWWWWWWMMMMMMMN0OXWMMMMMMMMMMMWWWWWWNNNNNXOl.       ....',;cloolloxxxxxxxxk0XNNXXNNWMMMMMMMMWWWWMMMMMWWNKOkx0NMMMMMWk'        .         ..'''''''''''...':kNMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMWKl''''''',;:lodddxxkkkkkkkkkkkkxxxkkkkx:..cxOOKXNWMWXKKXXXNWX0kk0XKOkk0XNWWNXK0KKKKKK0Okxxxdolcc::;'..... .':ld0XNWWWWMMMMWMMMMWNNWWMMMMMWWMMMMMWWWWWWNNNXKk:.      ...',,,:cloooodkOOOOOOOKXWMWXKKKXWWWNWWWNXXXNNNNNNNNKOxood0WMMMMWk'                ..',,'''''''''....'l0WMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMWO:......',;cldddxxkkxxxkkkkkkkkkkkkkkxc. .cxO0KNWWNXKXXXNWMWXKKXWWNK0KXWMMMMWWNNNWWWWNX0Okxxdoolc:;,,'...  .,lx0XNWWMMMMMMMMMMMMMMMMMMWWWNNWWMWMMMMWWWWNXKOo'       ...'',;:clodddkOKXNXXXNWWMMWX0OO0XXK0KXKK0000KKKK000OkdlclkNMMMMWO'               ..,,,,;;,,,'''.....,xNMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMNx,......',;coddxxkkkxxxxkkkkkkkkkkkkxl'  .;xO0XWWNKKXNNNWMMWNXNWMMWWNWWMMMMMMMWWWMWWMWWNKOkxxdddlc:;,'...   .cxOKNWWWWWMMMMMMWWWWWWWWNNXK0KNWMMMMWWWWWNXK0d;.       ....',;:cldxO0XNWWWWWWMMWWWWXOxxk00OOOO0OOkxxxkO0Okxxdlc;:dXWMMMW0;              ..,::ccc:;,,''......cKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMXo'.......,;codxxxxkxdddxxkkkkkkkkkxxo,.   'oOKNWNNKKXXXNWMMWNNNWWMMMMMMMMMMMMMMMWWNNNNNXK0kxxdddoc::;,'..   .,ok0KXNNNWWWWMMMWXKKXXNNNNNNNWWMMMMMWWWWNXKOd;.        .....',:ldk0XWWMMMWWWWWWNXKKOxolokOkkkkOOkkxdoloxkxdolc;,;oXWMMMMXo.            .';cloolcc:;,'.... .,kWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMKl........',:ldxxxxxxddddxxkkkkkkxxxdc.    .:kKNNNNKKKXXXNNWNNXKXNWMMWWWWMWWWWWWWNXKKKK000Okxxxxdolc::;,'..   .cxO0KXXNNNNWWWMWWNWWWWWWWMMMMMMMMWWWWNNK0xc'           .....':dxkOXNWWWWNXKXXXK0Okxoc;:ldxxxxkkkkxoc;;:odolc:,',dNMMMMMWO,           .,:loddollc;'.....  .oXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MW0:..  .....';cdxkkkxddoddxxxxkkxxxddc'      .oKXXWWX00KKXXXXXXK00KXNWWNNNNXXKXXNWN0OkOOkkkkxxxxxdlc:::::;'..   .:xOKKKXXXXNNWWWWWMMMMMMMMMMMMMMWWWNXK0kl,.              ....:dxxxOKKKKKK0OO0OOkxddl;'',:loddxxddol;'.';::::,'';kNMMMMMMNx'         .:oxxxdoll:,.....   .:0WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MW0:.    .....,coxkxxdoooodddddxxxdol;'..     .;xKNWMN0O0KKKK00KKK000KXXXXK0OOO0KXNN0xolodxxxxxxxdo:;;::::;;'..    .cx0XXXXXXXNNNWWWWWWWMMMMMMWWWNNX0kdl,.                 ...,loloxOOOOOkkkkkxxdoolc,...';:loooollc,.....','..'lKWMMMMMMMNx,       .:dkkxdol:,.....     ,xNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMXc.    .....':odxdddollodddddddol:,'''........:xKNMWX0OOO00OkkO0OkkkOOkOOkdddkO0KXOo;,;cododdxdoc,'.,;;;;,,...     .;lxOKKXXXXNNNNWWWWWWWWWNNXX0Od:'..                   ...,::;;codxxxdddxxdolccc,......';:cccc:;'..........;kWMMMMMMMMMW0o,.  .'cdkkxdlc;....       'dXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMNo.     .....;coooollllooooooll:,''',,'......':ldkKNWXOkxxdxxddddollll::cccclodxkOkl,..',:cloool;'....',,''....       ..;coxkO0KKKXXXXXXKKKKOkdc,.                       ...''''',;coooooooolc::;,.. ......''',;,'..    ....,xNMMMMMMMMMMMMNOc',:oxkkxoc;'....       .dXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMNd.        ..';cllccccclolllc:;'''',:::;'',,;:looodkXWXOdlcclooc:;,,,'....';:::clll:'.....',;:c:,.............             ..,:loodxxkkOOkxdol:,.                        .........';::cllllc:;,'..        .........       .'dXMMMMMMMMMMMMNOdcloxkkxdl:,......     .;xNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMNk'         ..,:c:;,,;:ccc::;'..'',;cllc::ccloooddookXWN0o:,',;:;,'..........'''''....   ...........    ....                  .',;::ccloooollll:.                         ..........',,;;;,''...                         .,xXMMMMMMMMMMMWXkolloddolc:,......      'oKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMWO;          ..,,'...,;::;;,...',;;:cloooooodddddddookNWW0o;...........     ..........       .......                          .,:cccclooddxxxxo,.  ...                         ...............                          .:ONMMMMMMMMMMMN0dlcc:::;;,,.....        ;OWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMNo.          ........',,,'...';::;:looddddddddddddood0WMWXx;....                                                             .;:cccllodkkkdl:,.  .....                           ..........                           'oKWMMMMMMMMMMWXkl:;;;,'''''.....        .:0MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMWO;               ....'.....',;:::coddxxxxxxxxxxdddodkXMMMN0o,.                                                       ...   ..',,;:clloxkd:'..  .....;;'....      ..;odc'.                ..;;.            ..       .,xXMMMMMMMMMMMWXx:,''''''''......          .oXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMNx'               .........';:::clddxxkkxxxxxxxxxdddxKWMMMMWKkl;.            .''.           ..,,..         .,,.  ..,::,......''..,:ccc::;'.....'....oKKK00l..;llok0NWMWKdc,.....   ....,:lxKX0dc,......,:okxl;....,lOKNWMMMMMMMMMMXd'...............           .cKMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMXd.               ........,;ccllddxxxkkkxxxxxkxxxdodONMMMMMMMWN0dl;'......,:d0KOdl:,,,,;:ldOKNNKkdlc:::coxO0o.  .'''.............;cc,.....  ....   'cdxxo,.:OXXXNWWWMMMWWNKOkkkxdoodxxkO0KWMMWWNK0OO0KXWWMMWXxlcok0XNNNWMMMMMMMMWk'      .........            .:KMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMXd.               .......';cloddxxxxkkkkkkkkkkxxxocl0WMMMMMMMMMMWNXKOdodxkO0KNWWWNNXXNNWWMMMMMMMMWNXK0Okkd:.  .;,....     ......',,'..            ......  ..,;:clodxO0KKXWWMMMMWX0OOO0XWWMMMMMMMMMMMMMMMMMN0kxxk0KNWNNNWMMMMMMMNo.       .......             .:0MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMXd'                  ...';codddxxkkkkkkkkkkkkxxxo;.:0WMMMMMMMMMMMMW0kkkO0KNWNNNWMMMMMMMMMMMMWNXOdl;,...     .:do;.....       .......          .....''..   ..........'',;coxOKNWWX0KNWMMMMMMMMMMMMMMMMMMMWKOkkO0KNWMWNNWMMMMMMMXl.    ...........            .cKMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMNk,                  ...;codddxxkkkkkkkkkkkkxkkd;. ,d0NWMMMMMMMMMN0kOO0XNWMWNXNWMMMMMMWWX0ko:,..           .':ll:'......                   ...'';::,..,:cc,...............',cdOKXWMMMMMMMMMMMMMMMMMMMMWKOkkOKXNWMMWWNNWMMMMMMNd.  .......''....            .dNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMWO:                  ..,:loddxkkkkkkkkkkkkkkkkl.  ..,lkKWMMMMMMWX0O0KXWWWWNNWMMMMMWXOdl;'................   .':lc;,'......       .     ..',:cllc:'..,ldl;...................',:ok0NWMMMMMMMMMMMMMMMMWK0OO00XNWMMMMWNNWMMMMMMW0:..',,;;;,'.......          ;0MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMWKl.                 .';coodxxkkkkkkkkkkkkkkd;.   ...;lk0XNWMMNK0KXNWWWNNWMMMMWN0d;........................ ..';:clc,''..............',:llllc:,....;c:..    ..'............'''',:oOXWMMMMMMMMMMMMWNK0000KXXNWMMMMNNWMMMMWWX0d:;:cccc:;,'.......         .oXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMNk;                 .':loodxkkkkkkkkkkkkkd:.    ...,cooxOKNWWXKXNWWNNWMMMMWXOo;...................';cooc,..   ..;ccclolccc;;::cllcclloc;'....   .,;..    ...''''......'''''''',,;o0NMMMMMMMMMMMWXKKKKXXXNWWMWWWNXNNXXK0Oxolloollc:;,'......           ;0WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMWKo'                .':lodxkkkkkkkxxkkkd:.    ...,:clodxxkKNNXXNNNWMMMWNKxc,'..................';codxkxo;.      ..,:cc:clcccllc::::;'...       .....   ....''''''''''''''',,,,,,,:xXWMMMMMMMMMMWNNXKXXXXXKK00OOOOOkkkkkkkxxddollc:,'....            ,kWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMWKx:..             .,:lodxxxxxxddxkxl,.  ....';:clooddxxkOXNXXNWMMWXOo:,''''''''''''''.....'.',;:::ldxl'.       .............  .... ..',,,;,'...........'''''''''''''',,,,,;;,,,;lONMMMMMMMMMMMMWNX0Okkxxxxxxxxxxxxxxxdddoolc:;,'...             ,kWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMNKkl'.           .,:lolllloodddo:'.......';cllodxxxxxxkOXXNWWNKxc;,''',,,,,,''''''''''''''......';cc;....';::::,.              .'cdxxxxdl:,........'''','''''''''',,,,,::;;;,,,:xXWMMMMMMMMMMWN0kxxxxxddoolllcccccccccc::::;'...            .;kWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMNOl,.         ..';:::;:loool;,,,,'''',:looooxkkxkxxxk0NWXOd:,,,,,,,,,,,,,,,,'''''''.........  ..''...,ldxxxko,.   ..       ..;dkdol:'..........'',,,,,,''''''',,,,'''',::;,,,:dKWMMMMMMMMWXkollllllllllllcc::;;;,,;;;;;,'...            'oO00NWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMWXxooo'          ..'''';clllc:;:::;;,,:ldddddxkkkkxxdxkK0d:,,,,,,,,,,,,,,,,,,'''''............. .......'';clol:......      ...'c:,'..    ......''',,,,,,,'''''',,'....':lddddoc:o0WMMMMMMWNkl:;;;,,,;,,,,;;,;,,,,''''''....           .'o0NWKxx0NWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMWXxloOKd.          ......;cllc:ccccc::codxxxxxxkkkxddddddc,,,,,,,,,,,,;;;,'',,'''''...........................''....           ...       .....'''',,,,,,,,,'''''''... ...';lxKNKkllONMMWX0kxlc::;,,'''...................           .'lkKWMMMNkoox0NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMWXxlcd0NXo.             ..':cccclloolllodkkkkkkkkkkxdolc;,,,,,,,,,,;:ll:,'...''''''........................   ......''''.......         .......'''',,,,,,,,,'''''............'l0NN0ocxKKkdooolcc:::;,,'......                    ..;lkXWMMMMMMMKollokXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMWKkoloxXWMNx,              .,:cccloooooodxkkkkkkkkkxdoc;,',,,,,,:ldkOOOd:..   .....'''...'''''''...'...........',;:ldxxxkxxxxol:,..     .......''',',,,,,,,,,,'''...............:kXNOl;:c::ldxxdolccc:;,....                  .':dOKNWMMMMMMMMMMKdllloxOXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMWN0xolloONMMMW0l.             .,;:coodddddxxkkkkkkkkxdl:,,,,,,,;cx0KOxol:'...........''''''''''''''.........';:::cox0KXNWWWWWWWNNKOd:'..    .......',,,,,,,,,,,,'''....'''..''.....;d00d;''..':oxxxolc::;'..                .'cx0XNMMMMMMMMMMMMMMMXxccloox0NWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMWXOxdooldONMMMMMNOl.            ..,:lodddddxkkkkkkkkxxo:,',,,,,:d0N0d:,'......'''..''''''''''''''''''.......,clcldkKNWWWMMWWWMWWMMMMWXkc;'    .......',,,,,,,,,,''''...'',,'',''.....:dkd:,'....';ccc:;,...                .;xKNWMMMMMMMMMMMMMMMMMMWOocloox0XNNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMNKOxddooodONMMMMMMMNKd,.           .':ldxxxxkkkkkkkkkdl;''',,,,;dKNKo;'.............''',,'''''''''''''......;cc:cx0NWWWWMMWWWWMMMMMMMMMWKko.    ......'',,,,,,,,'''''...'',,,,,''.....,lxo:,''.  ....'....                .,dXWMMMMMMMMMMMMMMMMMMMMMMKdllodx0XNXNWWMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMWX0kxxddolookXMMMMMMMMMWXkc'.         .'coxxxkkkkxxxxxdl:''''',,,cx00o;'....'''.......',,,,,,,,,,,,,,','.....,::;lkKWWMMMWWWWMMMMMMMMMMMMMNXk:.   ..'....',,,,,,,,'''''....'',,,,,''....,ldl,....                         .,dKWMMMMMMMMMMMMMMMMMMMMMMMMXxolodx0XNNNNNWMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMNKOkkxxdooooox0WMMMMMMMMMMMWXOxl;..     .':odxxxxdooodol:,'''..'';lxxo;,'...'',,'... ..'',,,,,,,,,''''',;;'...',,cxKWMMMWWWWMMMMMMMMMMMMMMMWN0l'.   .;;'. ..'''',,''''''.....'',,,,''....;odc...                        .':xXWMMMMMMMMMMMMMMMMMMMMMMMMMMNOdoddk0XNNWWNNWMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMWNK0OkkkxddooodxONMMMMMMMMMMMMMMMWNKko;.   ..;coddolllllc:,.......';lxdc,'....''','..   .'',,,,,,,''.....':;.   .',cONWWWWWWMMMMMMMMMMMMMMMMWWNKd;.   ...    .....''''''''..  ..',''......,clcol:,.                 ..,:ldOXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMW0xddxk0KXNWWWWNNMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMWNX0OkkkkxddooodxONMMMMMMMMMMMMMMMMMMMWXk;    .,cllcccc:;;,......  .':ooc'.......'',:;. ..'',,,,,,,'''......     ...;xXNNWWMMMMMMMMMMMMMMMMMMWWNKdc,.        ....'''''''''...   .......',;;:l;,:c;'..........,;cllodk0KXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKxddxk0KKXNNWWWWWWMMMMMMMMMMMMMMMMMMMMMMM
MMMMMWNNXK0OkkkkxxdddddkONMMMMMMMMMMMMMMMMMMMMMWKo.   ..,;:::;'.........,;,..;cc,.   ...'';kXx;..'',,,,,,,,,,,''...       .,d0KKXWWMMMMMMWMMMMWWWWWWWNXKxo:.  ..   ..''',,,,''''....     ...',:c:'.......''''''.....':kNWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKkdxxkO0KKXXNWMWWNWMMMMMMMMMMMMMMMMMMMMMM
MMMWNNNNX0OOkkkkkxxdddxOKWMMMMMMMMMMMMMMMMMMMMMMMNOc.   .........''''...,okdc;,,,.    ....,kWNk;..',,,,,,,,,,,,,''..  ..,:dkOkkOKNWWMMMMMMMMWWWMMWWWNXKOxdc.  ... ..'',,,,,''''.....      ......    ....'''''.....  .:ONMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKkxxxk00KKKXNWWMMWNWMMMMMMMMMMMMMMMMMMMMM
MMWNNWNXKOOOkkkkkOOO0KNWMMMMMMMMMMMMMMMMMMMMMMMMMMWN0o,.   ..'',,,''...  .,:;,'.',,,,'..  ,kNN0l'.',,,,,,,,,,,,,,''',coxOOOOkkO0KKXNWMMMMWWWWWWWWWWNKOkxdl'. ......',,,,,,,'''.......     .....      ....'';,.     .c0WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN0kkOO0K00KKKXNWMMMWNNWMMMMMMMMMMMMMMMMMMM
WNNWWNXK0OOkkkO0XNWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXOl'.'',,,,''...... ..','',,,cdxo:'':ONNOl'.',,,,,,,,,,,,;codxO000O0KKKKOxxkKWWMMWWWWWWWWWNXKOxdddl,. .......',,,,,,''''.......    ..''...    ......;ldc. .:ok0NWMMMWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWX0KNWWWWNNXKKKXNWMMMWNNWMMMMMMMMMMMMMMMMMM
NWWWNXK0OOkO0XNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNOl,'......''''''..  .',,,,''...'..'c0NXk:...',,,,,,,,:lxO0KK000KKXX0Odc;'':d0XNNNWWWWNNXKOxooooo:.. .......',,,,,,,'''........    ..',,;;;,,'',;;,;lOKkcckXWWWXXXNNNWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWMMMMMMMMWNXKXNWWMWWNNWMMMMMMMMMMMMMMMMM
NNNNXK0OO0XWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMW0c'..........'',,'....',,,,,,'..   .:0NKx;...',,,,,;lxOKK00O0KXXXKOdl;'..  ..';:loddddolcc:;;;,.............',,,,,,,'''........  ..':coddddddddxxdc::::lOXWWWNNK00XWWWNXXNNNNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXXXNWWWNXWMMMMMMMMMMMMMMMMM
NNXXK00XNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXd,..........'',,''....',;;;;,,..  .oKX0o'. .',,;cdO0K0OOO0XNXKOdl;'.......    ............................',,,,,,,,'''..........,:oxkkkxxoodddl;..  .:kNWWWNX0OkOXWWWNK0XNWNXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNXNNNNXXWMMMMMMMMMMMMMMMM
NXXXKXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNOdol,.....';:;,''''',;:ccccl:,. .;kXXOo'  .':ok0K00OO0KXXX0kxl;..  ................   .. ................',,,,,,,'''.........;cldkOkxoc;,'....    'oKNNNNX0kdokXWWNNKO0XWWWNKXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNXXXNXXNMMMMMMMMMMMMMMMM
XXXNNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWXx,....;:ccc;,,,;ccllooooc;'.;xXNX0d;..,oOKK0000KXNNX0OOO00kc.....'',,'''....,,.. ...................',,,,,,,'''.........':clll:,...         .:kXNNXX0ko;':ONWNNKxlONWWNX0OKXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXKKKKNMMMMMMMMMMMMMMMM
XNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWN0kxlclllllllllodddddddxdoloOXWNXK0xdd0XXKK0KXNNNXKKXXXXXXXOc..',,,,,,,,,,'...   .................'',,,,,,,''................              .o0XXXXKko;...dXNNNKd;:ONWWNKOk0XXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKKKKNMMMMMMMMMMMMMMMM
WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNOdddxxxxxxxkkOO00000OkOKNWWWNNXXNNNNNXXNNNXXXXXKK0OkxxkOo,',,,,,,,''....''..................''',,,,,,'''........                     .;xKNXK0Oo,.  .c0NNX0x;.:0NNNXOocoOKXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNK0KNMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKkxkkkOOO0000KKKXXXXKKXNNNWWWWWWWWWWWWWNNXXXXK0kxxxkkxoodd:'',,,,,'.....,:,.    ............',,,,,,,'''.......                       'o0XXK0kd;.   .;kXXK0x:..c0XXK0x,..cx0KNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWX0KNMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMW0kOOO0000KKKKKKKKXK0KXNWWWNNNNWWWWWWWWWNNXXK0kxxk0KKXKOdlc;',,,,,,,,''....    ............''',,,'''''......                        .,xKK0Oxo:..   .;xKKKOx:. .l0XKKOl.  .,okKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN0XWMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWX0O00KKKKKKXXXXK00K0KNWWWWWWWWWWWWWWWWWWWNXK0OO0000OkOKKkc'.',,,,,,,,,,,''...........'...'''''''''......                            .lOOxoc,.     .:xKK0ko,.  .d0KK0d,    .'lkXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNXNMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNK00KKXXXXXXXXXXKK00KNNWWWNNWWWWWNNNWWWWWNXKKK000Oxl:cdOKOl..',,,,,,,,,,,,,'......''''''''''''''......                               .:lc,..      .;k00kdc'.   ,xKK0kc.      .:OWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXKNMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXKKKKXXXXXKKXXXXK0OKNWWWWNWWWNNWWWWWWNNNXXXKK0Okdlcclok0KKx;.',,,,,,,,,,,,,'.....''''''''''''......                                   ...         .:dxo:'.     ,x00Oo'        'dNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN00NMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNKKXXXXNNNKOO0K00OxkKNWWNNWWWWWWWWWNNNXXXKK00Oko:'.,lxkkkkxl,'',,,,,,,,,,,,,,'''''',,'''''''....                                                    .,,..       'lxxo,.        .;OWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNKOKNMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNKKXXNNNNNNKOkxk0K0kxOXNWNWWWWNNNNNNXXXKK000OOxc.   ..',,''...''',,,,,,,,,,,,,,,,,,,,''''......                                                                  .'::'.          .c0WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNKOOKWMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNKKXNNNWWWNKOOxolOXKkdxOXNNNNNNNXXXXKKKK00OOOxo;.     ............''',,,,,,,,,,,,,,,''''.....                                                                                      .cKMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNKOOO0NMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNKKXNNWWWNNK0OOd:;okkkdodk0KXXXXKKKKKK000OOkxoc'.     ....................''''''''''.......                                                                                          .lXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNK0OOOOXWMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNKKXNWWWWWNK00K0kxxkxxxdlcldkOO00000000OOkxdo:,''.     ..................................                                                                                              .oXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWX0OOOOOKNMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNKKXNNWWWWNK00XX00XXXXK0Okddooodxxxkkkxxdoodxxo::ol;................   .................                                                                                                 'kWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNKK000000NMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXXNNNWWWWNXK0XX0OOOO0XXNNX0kxxxxxxxxdddodxk0XNXOdloc;;lc;';ll:,;clc;,...............                                                                                                     .cKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKKKKKKKXKXWMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNKNWWWWWWWNK0KXXOOkxoddxkOkoc:lkKKKKXX0xldk0Kko:,'.''.';c:;;clc;;coolcc:,'...........                                                                                                      .dXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNKKKXXXXNNXNMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNXNWWWWWWNX00XX0OOOdooooloodoc:lk0OKX0o;,,;c:.          ...........''..'''......                                                                                                           .;OWMMMMMMMMMMMMMMMMMMMMMMMMMMMWXKKKKXXNWWNNNMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNXNWWWWWWNK0XNXOO0Oxdoooooool::cc;;ldc'',,:lc'                                                                                                 ...                                          .oXMMMMMMMMMMMMMMMMMMMMMMMMMMWXKKKKXXNNWWWNXXXWMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNXNWWWWWNXKKNNKOOK0kddddooooool:,'';:;.';codd:.                                                                                               ............                                  .;0MMMMMMMMMMMMMMMMMMMMMMMMMMWK0KXXXNNWWWWWNXXWMMMMMMMMMMM
WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNKXWWWWWNXKXNN0O0K0Oxxxxxxdddoool:,,:;,:oxxdxd;.                                                                                              ............                                   .dNMMMMMMMMMMMMMMMMMMMMMMMMWXKKKKKXNWWWWWNXNWMMMMMMMMMMMM
XWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXkOKNWWWNXKXNN0O0KK0kxxkkkOOkxxxdc,,:ccldxxxkx:.                                                                                            ............      .                              .;OWMMMMMMMMMMMMMMMMMMMMMMMWX00KKKXNWWWWNNNWMMMMMMMMMMMMM
KWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKxxkKNWWNXXNNN0OOKKKOkxkOOKKK00Oxdlcodooxkkkkx:.                                                                                           .............      ..                              .lKWMMMMMMMMMMMMMMMMMMMMMMWX0KKKXNNWWNNNWMMMMMMMMMMMMMMM
KWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN0kkkOKNWWWWWWNKOOKXXK0kxkOKXXNNNNKxxkkdxOOOkOkc.                                                                                          .............       ...                              ,OWMMMMMMMMMMMMMMMMMMMMMMWXKKKXXNNWNNNWMMMMMMMMMMMMMMMM
KWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN0Okkk0KNNWWWWNXKKKXXNNX0KXNNNNWWNOookxdxkOOOOx:.                                                                                          .............      ....                              .oXMMMMMMMMMMMMMMMMMMMMMMMNKKXXNNNNNNWMMMMMMMMMMMMMMMMM
XWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN0OOOO0XNWWWWWWNNXXXXNNWWWWWWWWWWXkodkOxxkOOOOd,                                                                                          ..............  ........                              .;OWMMMMMMMMMMMMMMMMMMMMMMWKKXXNNNXNWMMMMMMMMMMMMMMMMMM
XWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNKOOO0KXNWWWWWWWNNXXXNNNWWWWWWWWWNOxkKKkxO0OOkc.                                                                                         .............  .........                                .oXMMMMMMMMMMMMMMMMMMMMMMWK0XNNNNWMMMMMMMMMMMMMMMMMMMM
XWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXOOO0KXNWWWWWWWWNNNXXNWWWWWWWWWWN0k0NN0xkOOkd;.                                                                                         .............   .. ....        .                        .:0WMMMMMMMMMMMMMMMMMMMMMWXKXNXXNMMMMMMMMMMMMMMMMMMMMM
XWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXOkO0KXNNWWWWWWWWNNNNNWWWWWWWWWWWKxx0KOxkkkxl.                                                                                          ............    ....''.  .                              .,kNMMMMMMMMMMMMMMMMMMMMMWXKXXXNWMMMMMMMMMMMMMMMMMMMMM
XWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXOkO0KKXNWWWWWWWWWWWWWWWWWWWWWWWWXkdxkkxxkxd;.                                                                                          ..........      ....,,..                                 'dNMMMMMMMMMMMMMMMMMMMMMMNXKXNWMMMMMMMMMMMMMMMMMMMMMM
XWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKOOO0KKXNWWWWWWWWWWWWWWWWWWWWWWWNOxk0kxxkxc.                                                                                           ..........   .   ..,,,,..                                .oXMMMMMMMMMMMMMMMMMMMMMMWX0XWMMMMMMMMMMMMMMMMMMMMMMM
KNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN0kO00KKXNNWWWNWWWWWWWWWWWWWWWWWN0kO0Okkko'                                                                                          ............      .'::;,'...                               .lKMMMMMMMMMMMMMMMMMMMMMMMX0XWMMMMMMMMMMMMMMMMMMMMMMM
KXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWNKOo;;dOO00KXXNNNNNNWWWWWWWWWWWWWNNXKO00kkkd;.                                                                                               ......  .   .':c;'.......                             .cKMMMMMMMMMMMMMMMMMMMMMMMXKXWMMMMMMMMMMMMMMMMMMMMMMM
KXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNKkdc;..   'okOO0KKKXXXXXXNNNNNNNNNXXXKKK0Okkkxdc.                                                                                      .         ..''..    ..,;;,,;,........                           .;OWMMMMMMMMMMMMMMMMMMMMMMX0KWMMMMMMMMMMMMMMMMMMMMMMM
XXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNKkl;..         .;dkOO00000000KKKKKKKKK00000Okkxxddc.                                                                                           .......,cc'.   ...',,;::;.....,,..''..    ..                 'xNMMMMMMMMMMMMMMMMMMMMMMN00XWMMMMMMMMMMMMMMMMMMMMMM
KKNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWN0d:'.              ..,coxkkkkOOOO00000OOOOOOOkkxdddoc'                                                                                     ........,,,'.',;;,,'....'',:c;,.....';cc:,''.............           .lXMMMMMMMMMMMMMMMMMMMMMMNKKKKXWMMMMMMMMMMMMMMMMMMMM
KKXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNKkl;.                      .';coxkkkkkkkkkkkkkkkxdolc;,..                                                                                 .......'',;::;,''''''';:;,...',cc,........',;;,'.''',,;;......           .cKMMMMMMMMMMMMMMMMMMMMMMNKKXKKXWMMMMMMMMMMMMMMMMMMM
NK0NMMMMMMMMMMMMMMMMMMMMMMMMMMMMWX0d:'.                             .':ccllloollccccc:,..                                                                                      .,:;''''',;;;;,''''''',;,,''.',:;........,:c:;,'..'',;,,'......          .:0MMMMMMMMMMMMMMMMMMMMMMNKKXXXXXWMMMMMMMMMMMMMMMMMM
MNKXWMMMMMMMMMMMMMMMMMMMMMMMMWXkl;..                                     ......                                                                                                .;lc;''''''',;:,'''',,;::;,'''.'.........,;;;;;,''',;:,'........          ,OMMMMMMMMMMMMMMMMMMMMMWX0KKKXNXNWMMMMMMMMMMMMMMMMM
MWXKNMMMMMMMMMMMMMMMMMMMMMWXko,..                                                                                                                             ....             .';;''..''';::,',;;,;c;,''''''............',:c:,;:;';::,...........       .xWMMMMMMMMMMMMMMMMMMMMXKKKKXNWNXNWMMMMMMMMMMMMMMMM
MMWXNMMMMMMMMMMMMMMMMMMMW0d;..                                                                                                                                 ....             ..........',''',::,,;:;'''''...''........',;,'';:;'''''......  .....     .oXMMMMMMMMMMMMMMMMMMMNK00KXXNWWNXNMMMMMMMMMMMMMMMM
MMMWXNMMMMMMMMMMMMMMMMW0o,.    .. ..                                                                                                                           ..''...          ..........'''''',,,''','''''.'',;'....'''.'''..''''''.......  .....      .cKMMMMMMMMMMMMMMMMMMWX00KKXNNWWWNXWMMMMMMMMMMMMMMM
MMMWXKNWMMMMMMMMMMMMWKo,...... .......                                                                                                                         ..',,;,.         ..........'''''''''',;;,,,,',;::;,,,,;:;,''''''....''................    .;OWMMMMMMMMMMMMMMMMWX00KKXXNWWWWNXNMMMMMMMMMMMMMMM
MMMMN00KNWMMMMMMMMWKd,................                                                                                                                        ...'',;:;.        .............'.'''',:lollllllcc:;,,,,;:c;,''''''''.''.';;'.............. .;OWMMMMMMMMMMMMMMMWX000KXXNWWWWWNNNMMMMMMMMMMMMMMM
MMMMWX000KXNWMMMMNO:.  ................                                                                                                                       ..''',,,,'.    .. ........,;;'.',;:::;;;cooddoolc:;,,,,,;;,'''''''''''.',;;,...............':xXWMMMMMMMMMMMMMWX000KXNNWWWWWNXNWMMMMMMMMMMMMMMM
MMMMMNKKKXXXXWMMXd'. ..................                                                                                                                       ..',:c::,'.. ............;clc,,:clooooc;,:odoolc;;,,,,''...'''''''''''',;:;,..... .....',,,;:lOWMMMMMMMMMMMMWX000KKXNWWWWWNNNWMMMMMMMMMMMMMMMM
MMMMMNXXXXNXXNNKo..  ..................     ....                                                                                                              ..'',,,;,,'.............,cll:,;cooooodol:,:cc:;,''...'....'''''''''',;:cc:;'..........',;:ccloONMMMMMMMMMMMWX000KKKXWWWWWNNNWMMMMMMMMMMMMMMMMM
MMMMMMNXNNNNNXk:.   ............................. ... .                                                                                                       ..''',:c:,''''''........':ll;';lddoooodol:,,;:::;;,'......''''''''',;;;;,'............',;::cllxKWMMMMMMMMMWX0000KXXNWWWWNNNWMMMMMMMMMMMMMMMMMM
MMMMMMNXNWWNXk;.    .....................................                                                                                                     .',,,;:;'';:,'','........,:c;';lolc::::::;,,cllc:;,,''....',;,'',,'''''............ ..',;::clloONMMMMMMMMWXK000KKKXNWWWWNNWMMMMMMMMMMMMMMMMMMM
MMMMMMWXNWWNO:.     .........................................                                                                                                .':c;,'''.';:,............';;;'';;;;;::cccc:;;;::;'........,:l:;:c:''''''........... ...',;;:::;l0WMMMMMWXKKKKKKKXXNNWWWNXNWMMMMMMMMMMMMMMMMMMM
MMMMMMMWNNWXo.      ...............................................                                                                                          ..:c:,'.''''''...........,:cllc;,,:looloddoolc;'........,,,,;c::cc;',,,'........      .......''':xNMMMMMWNNNXKKKXXNNNWWWNXNMMMMMMMMMMMMMMMMMMMM
MMMMMMMWXNNk,.      ...................................................                                                                                      .';:c;''''''............';:llll:;:lllllooodddl:'........,:cc;,'',,,;::,'.......      ..........';o0WMMMMMMMMWNXKXNNNWWWWNNWMMMMMMMMMMMMMMMMMMMM
MMMMMMMWNN0c.      .   ....................................................   ..                                                                             .';cl:,'''''............';:ccc:;;:::cccllloool;...............    ............. ..   ..........';co0WMMMMMMMMMNXXXNNWWWNXNMMMMMMMMMMMMMMMMMMMMM
MMMMMMWNNXx,            ................................................................    ..                                                               .',::;''''''............';::;::::clllooooooool;'.........               .......  . .............'',lKWMMMMMMMMNKXNNNWWNNXWMMMMMMMMMMMMMMMMMMMMM
MMMMMMWXNKl.            ......   ...............................................................        ..                           .                       .';;,''''''..............,;;;;cllooooooooddooolc:,.....                      ...   ......''........;xNMMMMMMMMWXXXNNWNNNWMMMMMMMMMMMMMMMMMMMMMM
MMMMMWNNNO;.      .               .......   ........................................................                             ......                      ..''''''''''..............',;:looooooddddddddddddc.                          ...............',,'...'c0WMMMMMMMMNKXNWWNNWMMMMMMMMMMMMMMMMMMMMMMM
MMMWWNNWXd.                           .      ........................................................       .  .              ...........                   ...'''''''''............'',,;:looooddddddddddddddo;.                          ..............';;,''...,xNMMMMMMMMNKXNWNXNWMMMMMMMMMMMMMMMMMMMMMMM
MMWNNNWW0c.                                     ..  ...........................................     .                      .. .............              .....'',,''',,;'.............,;:loooddxxxxxxxxxxxxxdc.                            .............''''''...'oXMMMMMMMMNXNWNNWMMMMMMMMMMMMMMMMMMMMMMMMM
MWXXXNWXx,                                              ..............'''.......................       ..............         ...............       ..........',:cc,',cc,..............,:ooddxxkkxxxkkkkkkkkd;.                             ............',::;'....:OWMMMMMMMNXNNXNMMMMMMMMMMMMMMMMMMMMMMMMMM
MMWWWNN0c.                                                   ......';;,,'',;,...  .................   ................        ...............       ..........'',:lc,,;,................,lddxkkkkkkOOOOOOOOko'                               ..........',,,'''....;xXMMMMMMMWNNNNWMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMWk,                                                       ..;looll:;;::;'....       .........   .....'''',,,'....          . . ..'...         ........',;;,'''..     .............'cdkkOOOkOO0000000Oxc.                                  ....'',;::;'......,dXMMMMMMMNXXNWMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMXd.                                                     ...;ooddddoc;,:clllc;'..       ..  ... ........''''..'...             ...','..        .........','..           ............:xOOOOOO00KKKK000Oo'                                      .....',,''',,,',oKWMMMMMMNKXWMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMWO;.                                                    ...'cooooool::cooddddool:'....,,..      ..'........'';:,'..            ....',...        ........                      ....,:okOOOO00KKKKKKKK0k:.                                             ....,:::cd0NMMMMMMXKNWMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMW0c.                                                    .....;cloool:;codddddddddoc;,;cooc,.     ...'........,;,'''.           ...........          ....                        .'ldkOO0000KKXXKKKKKKKd'                                           .,:lodxk0KXXNNWMMMMMMXKNMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMWKl.                                                    .......;:looc;:ldoooodddddol:;cooool;.    ................''.          ............          .......                     .;dkOO000KKXXXXXKKKKK0c.                                          ,xXWWMMMMMMMMMMMMMMMMMNXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMWKl.                                                     ...''...',::;,;cllloooddooooc;:oddol:'..  .....................        ..............             ....  ....             .cxOO00KKKKXXXXXXXKXKk,                           .....         .;kNMMMMMMMMMMMMMMMMMMMNNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MWKc.         .                                               ..''........,;;:clooooool;;:ccc:,'.......................'....      ....'''..''....              ...........          'okO00KKKXXXXXXXXXXXKo.                       .'cdO00k:.    .'cdOXWMMMMMMMMMMMMMMMMMMMMWNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
Nk:.       .....                     ....                        ............',::cllc:,,:c:,,;;,'.............''''...,;;:::;'..    ...',;;',;;'.....            .............       ;dO00KKKKXXNXXXNXXXXO:                      .ckKWMMMMNx;,;cdOXWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
d,.  ...........             ...     ......                            ...  ....'''''',;ccc:,;cc:;,,,,,,,,,''''''...,;;:cccc:,.......'',:c;,::,',,'..          ................    .ck0KKKKXXNNXXXXXXXNKx'                    'l0NMMMMMMMMWNNNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
,''.............  .......'.......    ........                  ....    ..............,;:::c:,',:ccccccclc:;,''''...',,,;;;:::;'....'.''',;;,,,,,,'.......    ....................  .o0KKKKXXXXXXXXXXXXX0c.                  .l0NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
,,'...... ....'.........,,,''''......................       .........................''',,,,'..,:::cccc:;,'''......''....'',;,..',,,,,,;;,''''';:;,'...................  ..........:kKKKKKXXXXXXXXXXXNXx'                 .cONMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
.............','........,,'''''....''''...............     ........................................',;;'.',;:::;'..............':clllc:;;;,'..';;;,'..............................,d0KKKKXXXXXXXXXXNNN0c.                .oXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
........................''''',,,'..',,,''................ ..............................................';:ccccc:'.''...........,:cclll:,,,,''',;;,'..............................:xO0KKKXXXXNNXNNNNNXd.                .oXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
'.........................'',,,;,...',,,,,'''...................................... ........  ...........,,;;;;;'..''.............';;:cc:;:;,;::cll:,.........''..................:dxkkkkxddk0KXNWWWNO;      .;:'      .cKMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
'.........,;;,'.............''''...''..''''''...,;;;;,'........................... .........   .  ..  ....'''''..       ............',;:;,;:codooodol:;;,,''''''..         .   ..'';:lolc::ldxxk0KNN0c.   .;o0NN0o,..  .lXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
.'.....,:clllc;'.................',;;,,,,,,;;;'.',;;;,'..........................  ...............    ........            ...........'',,:looddddxxkkkkkxxxddoc;..             'ox:......',cloolodkko.  .ckXWMMMMWX0kdllxXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
.....';cloollc:;,................';;;;;;:::cc:,,;,'''..''''...''......'''..................................               .............'cooooodddxxkkOOOOO0000OOkdl:,..       .lO0x:'.......',;coxxdo;'cONMMMMMMMMMMMMWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
..',;:loooollc::,................',;;;;;:ccll:,,;,'''..';::,';:;'..'''''..'..........................                      ............'coooooddxxxkOOOOOOOOO00000KK0Oxo:'.  .ck00OOxoc:;'....':loodddx0NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
..,;:loooolcc:::;'..........''....',;:::cllc:,''''''''''';:;,::;',:::,'''''.............. .......                          ............'coooooddxxxkkkOOOOOO000000KKKKKKKOdccokOOO00000K0kl:;,''',;cokOXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
..,cloooolllllcc:;'........',,......,,;:::;,',,,''''',;::;,,',,,:c:;,''''''.............. ..                               .............,coooddddxxkkkkkOOOO00000KKKKKKKKK00OOOOOO00KKKKKKKK0Okdoodk0XWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
;;;:lollcc:::cclc;,...,:c:,',;'.',,,'.'''''',::,'''''',;:;,''''',;;;,''''''..............                                   .'''''.......;looodddxxkkkkkkOOOO0000KKK0OdooxkOOOOOO00KKKKKXXXXNNNNNXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
ool:;:clllllcc::;''''',;:c;,''.';:;'''''''',cooc;'..''',:::,'',,;::cc;'................                                     ..','''''....;looooddddxxkkkkkOOOO0000K0xc,,cxOOOkOOO0KKXXXNNNNNNNWWNXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
oooc::oddddoool;'.'''',,,,''..'',;:::;''''',:lool:;,,',:c:;;::;;:;,',,''''...........                                         ..'''...,;cloooooodddddxxxxkkkOOO000Okl'.:xOOOOOO00KXXXNNWWWWWWWWWNXXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
ccc:;;clooodol:,'''',:ccc:,''''',:::;,''''''';clooolc;,''',:c;',::;''''''...',,,'..                                              .. ...';coooooodddddddddxkkkkkkOkxo:''lkOOOOOO0KXXNNWWWWWWWNNWWNXKKXXXXNNNNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
;::::::;;:lool:'''''',,,,;;,'',,;:;,'''''''''';cooool:'''',;,'''',''''''.''',:;'.                                                       'oO0Okxdddddddddddxxxxxxkxdl;',okOOkOO0KXXNNWWWWWWWWWNWWNKkxxxxkkxolxKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
'',,,;;;,',:ll:''''''''';cc;,;:;,:c:,''''''''',coooooc,''''''''''''''''''''''..                                                        .oXMMMWNXK0Okxddddddddxxxxxdl;''ckOOOO0KXXNNWWWWWWWNNWWWNX0xoooloooc''lKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
           ..........'',::;',:c:'',;,,;,,,'''';lollccc;'''''''''''''''''....                                                          .c0WMMMMMMMMWWNXKK0Okkxxxxxxxo:'.:xOkO0KXXNNNWWWWWWWWWWWWNXOdoooc:;,,..;dOKXNWWWMMMWNXKKXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
                    .........,;,'.';:lllllc;,;:c::cc::;,''''''''''''''...                                                        .:lllxXWMMMMMMMMMMMMMMMMWWWNXKKK0koc,.;dOO00KXXNNNWWNNWWWWWWWNNXklcloc:;,,,:ldddxkO00KKKOxoolodkKNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
                              ......',;::clc:,,;cllool:,'''''.........                                                        .;o0NMMWMMMMMMMMMMMMMMMMMMMMMMMMMMMWXxl:';dkO0KXXNNNWWNNWWWWWWNWNNKdc;;:lc;;,;cdxxxxkkkkkkxxddolc:clxKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
                                         .....................                                                              .cOXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKkd:',oO00KXXNNWWWWWWWWWWWWWNXOocc;';cl::ldxkkkkkOOOOOOOOOkkxdl::o0WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
                                                                                                                          .:ONMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXOd:''lk0KXXNNNWWWWWWWWWWWWWNXOc;:c;'.',cdxkkOOOOO000000OOOOOOkl;:dKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
                                                                                                                         .oKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXx:.'lO0KXXNNNWWWWWWWWWWNWWWNO:..',,..'cdkOOO000000000000000Okd:,:xXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
                                                                                                                        .:0WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKo,.,oO0KXXNNNWWWWWWWWWWWNWWNk:'.....'cdxkO00000000000000000OOd:',lONMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
                                                                                                                     ..;xXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXd;'.;d0KKXXNNWWWWWWWWWWWNWWWXd'......:oxxkOO0000000000K000000Od:.':kNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
                                   ..';::::ccc:'.                          ..,:cc:,..            .cddc,'...     ..':lx0NWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNk:'.'ck0KKXNNNWWWWWWWWWWWWWWN0c.   ..;oxxxkOO0000KKKKKKKKK0000Od;..;xNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
                               .':ok0XNNWWNWWWNKo.                       .ckKNWWWNXOd,.        .c0NWWWNX0Okdooodk0XNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNk:..';dO00KXNNNWWWWWWWWWWWWNWNKd;'';lxOkxxkkO00KKKXXXXXXXXK00000x:..,dXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
o;'.....................'',;:cokKWMMMMMMMMMMMMMW0;                     .c0WMMMMMMMMNk;      .,lkXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMKl'.';ok00KXXNNWWWNWWWWWWWWWWWNXXXXXNWMWXOkkOO0KXXXXXNNNNXXXK0000Ol'..lONWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
WNXKKKKKKK000000OOOO00KKXXXNWWWMMMMMMMMMMMMMMMMMNd.                   .oKWMMMMMMMMMWXkoccldkOXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKd;',;cdO00KXXNWWWWWWWWWWWWWWWNNXNWMMMMMMWN0kO0KXXXXNNNNWWNNNXKK000x:..'ckKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXd,.             ..,o0NMMMMMMMMMMMMMMMWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXx;'';ccok00KXXNWWNWWWWWWWWWNWWNXNWMMMMMMMMMNKOOKXXNNNNWWWWWWNXXKK00Od;..,cxXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXOdlc:;,'',;:cdk0XWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKd;'.';cloxO0KKXNWWWWWWWWWWWWWWNNXNMMMMMMMMMMMWK0KXNNNNWWWWWWWWNXXK000Od;'';lkXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWWWWNNXNNWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNx;....,:cldk0KXXNWWWWWWWNWWNNWNNXNMMMMMMMMMMMMMWNKKNNNNWWWWWWWWWNXKKKK0Oxc;,:lxKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWOc.....'coddk0KKXNNWWWWNWWNNNX0O0NMMMMMMMMMMMMMMMWNXXNWNNWWWWWWWWWNXKKK000ko:::cxXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNOc...,c:,;cloxOKKXXNNNNXK0OOxxl:;oKWMMMMMMMMMMMMMMMMNXXNWWWNWWWWWWWWNXXKKK00xc;;;o0WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKx;...:ddc,,lddxO0KKK0Okdooc;,,'',;dKWMMMMMMMMMMMMMMMMMNXXNWWWNWWWWWWWNNXXXK0koc,..;kNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKo,..'lOOxl,',cldxOOkdol:,',;ccldk0XNWMMMMMMMMMMMMMMMMMMWNXNNWWNNWWWWWWWNNNXXOdl:...;kNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNK0kl,..'oKNKOd:...;cool:,'',:ok0KXXNMMMMMMMMMMMMMMMMMMMMMMMMWNXNWWWWWWWWWWWWWNNKxc;;:c;;oKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNOl:,...;xXWWNKx:....',;;:cldO0kk0XNWMMMMMMMMMMMMMMMMMMMMMMMMMMWNXNWWWWWWWWWWWNNX0dc;;okdc:o0NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKo,'...cONWNNNKx;..,looxkkOKX0dcxXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKO0KXNNNNNNWWNNNX0d:,':dOxc:lkXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWk:''..,xNWWNNK0x;.;kXNWN0doddlokNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNOlloodxddxkkOkkkkxl;'':xOOxl:cdKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMKd:,,',lOXXXKOd:..ckKXX0o;;cx0XWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXOo:;::,',;;:;;::;;;''lk00Oxl;l0WMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXkdl;',:lddlc;,,;;:clllokKNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXxdkxoodxdlcloxdl,.'oO0OOOo;;xNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWX0dccoxxddoodxddodkO0XWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKxddodkO0KXXKXXXx;.;dO00kl,cOWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWNKKNWWWNNNNNNXXNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN0dc;;;;:dOkocldl,...:oxo:lOWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWN0xl;,..'........';lOKKKNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWX0OkxddxxkkxkO0KNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
*/

#include "pch.h"
#include "windows.h"
#include "winternl.h"
#include <stdio.h>
#include "stdlib.h"
#include "cpu.h"
#include "ntstatus.h"

typedef struct
{
	ULONG   version;
	ULONG   unknown1[3];
	ULONG64 unknown2;
	ULONG64 pLdrInitializeThunk;
	ULONG64 pKiUserExceptionDispatcher;
	ULONG64 pKiUserApcDispatcher;
	ULONG64 pKiUserCallbackDispatcher;
	ULONG64 pRtlUserThreadStart;
	ULONG64 pRtlpQueryProcessDebugInformationRemote;
	ULONG64 ntdll_handle;
	ULONG64 pLdrSystemDllInitBlock;
	ULONG64 pRtlpFreezeTimeBias;
} SYSTEM_DLL_INIT_BLOCK;

SYSTEM_DLL_INIT_BLOCK* pLdrSystemDllInitBlock = NULL;

typedef NTSYSAPI PVOID t_RtlAllocateHeap(PVOID,ULONG,SIZE_T);
t_RtlAllocateHeap* RtlAllocateHeap = 0;
typedef NTSYSCALLAPI NTSTATUS t_NtSetInformationThread(HANDLE,THREADINFOCLASS,PVOID,ULONG);
t_NtSetInformationThread* NtSetInformationThread_alternative = 0;
typedef NTSTATUS WINAPI t_RtlWow64GetCurrentCpuArea(USHORT, void**, void**);
t_RtlWow64GetCurrentCpuArea* RtlWow64GetCurrentCpuArea = 0;
typedef __kernel_entry NTSTATUS t_NtQueryInformationThread(HANDLE,THREADINFOCLASS,PVOID,ULONG,PULONG);
t_NtQueryInformationThread* NtQueryInformationThread_alternative = 0;

typedef NTSTATUS WINAPI t_Wow64SystemServiceEx(UINT, UINT*);
t_Wow64SystemServiceEx* Wow64SystemServiceEx = 0;

typedef void* t_ULLoadLibraryA(char*);
t_ULLoadLibraryA* ULLoadLibraryA = 0;
typedef void* t_ULGetProcAddress(void*, const char*);
t_ULGetProcAddress* ULGetProcAddress = 0;
typedef BOOL t_ULExecDllMain(void*, UINT32);
t_ULExecDllMain* ULExecDllMain = 0;
typedef BOOL t_ULFreeLibrary(void*);
t_ULFreeLibrary* ULFreeLibrary = 0;

typedef void* t_CPU_GET_REGPTR(int);
typedef int t_CPU_EXECUTE_CC(int);
typedef void t_CPU_SET_MACTLFC(UINT32(*)(int, int, int));
typedef void t_CPU_INIT();
typedef void t_CPU_RESET();
typedef void t_CPU_BUS_SIZE_CHANGE(int);
typedef void t_CPU_SWITCH_PM(bool);

HMODULE hmhm4dll;

typedef NTSYSAPI NTSTATUS  WINAPI t_LdrDisableThreadCalloutsForDll(HMODULE);
t_LdrDisableThreadCalloutsForDll* LdrDisableThreadCalloutsForDll;

static NTSTATUS(WINAPI* p__wine_unix_call)(UINT64, unsigned int, void*);
typedef NTSTATUS WINAPI t__wine_unix_call(UINT64, unsigned int, void*);

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
	HMODULE hofntdll = 0;
	HMODULE HM = 0;
	HMODULE HM2 = 0;
	HMODULE HMHM = 0;
	t_CPU_INIT* CPU_INIT = 0;
	t_CPU_RESET* CPU_RESET = 0;
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
		hmhm4dll = hModule;
		hofntdll = LoadLibraryA("C:\\Windows\\System32\\ntdll.dll");
		if (hofntdll == 0) { return false; }
		LdrDisableThreadCalloutsForDll = (t_LdrDisableThreadCalloutsForDll*)GetProcAddress(hofntdll,"LdrDisableThreadCalloutsForDll");
		if (LdrDisableThreadCalloutsForDll == 0) { return false; }
		RtlAllocateHeap = (t_RtlAllocateHeap*)GetProcAddress(hofntdll, "RtlAllocateHeap");
		NtSetInformationThread_alternative = (t_NtSetInformationThread*)GetProcAddress(hofntdll, "NtSetInformationThread");
		NtQueryInformationThread_alternative = (t_NtQueryInformationThread*)GetProcAddress(hofntdll, "NtQueryInformationThread");
		RtlWow64GetCurrentCpuArea = (t_RtlWow64GetCurrentCpuArea*)GetProcAddress(hofntdll, "RtlWow64GetCurrentCpuArea");
		LdrDisableThreadCalloutsForDll(hModule);
		pLdrSystemDllInitBlock = (SYSTEM_DLL_INIT_BLOCK*)GetProcAddress(hofntdll,"LdrSystemDllInitBlock");
		if (pLdrSystemDllInitBlock != 0) {
			if (pLdrSystemDllInitBlock->ntdll_handle == 0) { pLdrSystemDllInitBlock->ntdll_handle = (ULONG64)hofntdll; }
		}
		HM = LoadLibraryA("C:\\Windows\\Sysnative\\ULDllLoader.dll");
		if (HM == 0) { HM = LoadLibraryA("C:\\Windows\\System32\\ULDllLoader.dll"); }
		if (HM == 0) { return false; }
		ULLoadLibraryA = (t_ULLoadLibraryA*)GetProcAddress(HM, "ULLoadLibraryA");
		ULGetProcAddress = (t_ULGetProcAddress*)GetProcAddress(HM, "ULGetProcAddress");
		ULExecDllMain = (t_ULExecDllMain*)GetProcAddress(HM, "ULExecDllMain");
		ULFreeLibrary = (t_ULFreeLibrary*)GetProcAddress(HM, "ULFreeLibrary");
		HM2 = LoadLibraryA("C:\\Windows\\Sysnative\\Wow64.dll");
		if (HM2 == 0) { HM2 = LoadLibraryA("C:\\Windows\\System32\\Wow64.dll"); }
		if (HM2 == 0) { return false; }
		Wow64SystemServiceEx = (t_Wow64SystemServiceEx*)GetProcAddress(HM2, "Wow64SystemServiceEx");
		if (!p__wine_unix_call) {
			p__wine_unix_call = (t__wine_unix_call*)GetProcAddress(hofntdll, "__wine_unix_call");
		}
	case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

#if 0
typedef struct DECLSPEC_ALIGN(16) _M128A {
	ULONGLONG Low;
	LONGLONG High;
} M128A, * PM128A;

typedef struct _XSAVE_FORMAT {
	WORD ControlWord;        /* 000 */
	WORD StatusWord;         /* 002 */
	BYTE TagWord;            /* 004 */
	BYTE Reserved1;          /* 005 */
	WORD ErrorOpcode;        /* 006 */
	DWORD ErrorOffset;       /* 008 */
	WORD ErrorSelector;      /* 00c */
	WORD Reserved2;          /* 00e */
	DWORD DataOffset;        /* 010 */
	WORD DataSelector;       /* 014 */
	WORD Reserved3;          /* 016 */
	DWORD MxCsr;             /* 018 */
	DWORD MxCsr_Mask;        /* 01c */
	M128A FloatRegisters[8]; /* 020 */
	M128A XmmRegisters[16];  /* 0a0 */
	BYTE Reserved4[96];      /* 1a0 */
} XSAVE_FORMAT, * PXSAVE_FORMAT;
#endif


struct I386_FLOATING_SAVE_AREA {
	DWORD ControlWord;
	DWORD StatusWord;
	DWORD TagWord;
	DWORD ErrorOffset;
	DWORD ErrorSelector;
	DWORD DataOffset;
	DWORD DataSelector;
	BYTE RegisterArea[80];
	DWORD Cr0NpxState;
};

struct I386_CONTEXT {
	DWORD ContextFlags;

	DWORD Dr0;
	DWORD Dr1;
	DWORD Dr2;
	DWORD Dr3;
	DWORD Dr6;
	DWORD Dr7;

	I386_FLOATING_SAVE_AREA FloatSave;

	DWORD SegGs;
	DWORD SegFs;
	DWORD SegEs;
	DWORD SegDs;

	DWORD Edi;
	DWORD Esi;
	DWORD Ebx;
	DWORD Edx;
	DWORD Ecx;
	DWORD Eax;

	DWORD Ebp;
	DWORD Eip;
	DWORD SegCs;
	DWORD EFlags;
	DWORD Esp;
	DWORD SegSs;

	BYTE ExtendedRegisters[512];
};

char bopcode[] = {0xe5,0x00,0xc3};
char unixbopcode[] = { 0xe5,0x04,0xc2,0x10,0x00 };
#ifndef ThreadWow64Context
#define ThreadWow64Context (THREADINFOCLASS)0x1d
#endif

#ifndef STATUS_INVALID_ADDRESS
#define STATUS_INVALID_ADDRESS -1073741503
#endif

#ifndef STATUS_SUCCESS
#define STATUS_SUCCESS 0
#endif

typedef struct _GDI_TEB_BATCH
{
	ULONG  Offset;
	HANDLE HDC;
	ULONG  Buffer[0x136];
} GDI_TEB_BATCH;

typedef struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME
{
	struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME* Previous;
	struct _ACTIVATION_CONTEXT* ActivationContext;
	ULONG                                       Flags;
} RTL_ACTIVATION_CONTEXT_STACK_FRAME, * PRTL_ACTIVATION_CONTEXT_STACK_FRAME;

typedef struct _ACTIVATION_CONTEXT_STACK
{
	RTL_ACTIVATION_CONTEXT_STACK_FRAME* ActiveFrame;
	LIST_ENTRY                          FrameListCache;
	ULONG                               Flags;
	ULONG                               NextCookieSequenceNumber;
	ULONG_PTR                           StackId;
} ACTIVATION_CONTEXT_STACK, * PACTIVATION_CONTEXT_STACK;

typedef struct _TEB_ACTIVE_FRAME_CONTEXT
{
	ULONG       Flags;
	const char* FrameName;
} TEB_ACTIVE_FRAME_CONTEXT, * PTEB_ACTIVE_FRAME_CONTEXT;

typedef struct _TEB_ACTIVE_FRAME_CONTEXT_EX
{
	TEB_ACTIVE_FRAME_CONTEXT BasicContext;
	const char* SourceLocation;
} TEB_ACTIVE_FRAME_CONTEXT_EX, * PTEB_ACTIVE_FRAME_CONTEXT_EX;

typedef struct _TEB_ACTIVE_FRAME
{
	ULONG                     Flags;
	struct _TEB_ACTIVE_FRAME* Previous;
	TEB_ACTIVE_FRAME_CONTEXT* Context;
} TEB_ACTIVE_FRAME, * PTEB_ACTIVE_FRAME;

typedef struct _TEB_ACTIVE_FRAME_EX
{
	TEB_ACTIVE_FRAME BasicFrame;
	void* ExtensionIdentifier;
} TEB_ACTIVE_FRAME_EX, * PTEB_ACTIVE_FRAME_EX;

typedef struct _TEB_FLS_DATA
{
	LIST_ENTRY      fls_list_entry;
	void** fls_data_chunks[8];
} TEB_FLS_DATA, * PTEB_FLS_DATA;

typedef struct ___TEB
{                                                                 /* win32/win64 */
	NT_TIB                       Tib;                               /* 000/0000 */
	PVOID                        EnvironmentPointer;                /* 01c/0038 */
	CLIENT_ID                    ClientId;                          /* 020/0040 */
	PVOID                        ActiveRpcHandle;                   /* 028/0050 */
	PVOID                        ThreadLocalStoragePointer;         /* 02c/0058 */
	PPEB                         Peb;                               /* 030/0060 */
	ULONG                        LastErrorValue;                    /* 034/0068 */
	ULONG                        CountOfOwnedCriticalSections;      /* 038/006c */
	PVOID                        CsrClientThread;                   /* 03c/0070 */
	PVOID                        Win32ThreadInfo;                   /* 040/0078 */
	ULONG                        User32Reserved[26];                /* 044/0080 */
	ULONG                        UserReserved[5];                   /* 0ac/00e8 */
	PVOID                        WOW32Reserved;                     /* 0c0/0100 */
	ULONG                        CurrentLocale;                     /* 0c4/0108 */
	ULONG                        FpSoftwareStatusRegister;          /* 0c8/010c */
	PVOID                        ReservedForDebuggerInstrumentation[16]; /* 0cc/0110 */
#ifdef _WIN64
	PVOID                        SystemReserved1[30];               /*    /0190 */
#else
	PVOID                        SystemReserved1[26];               /* 10c/     used for krnl386 private data in Wine */
#endif
	char                         PlaceholderCompatibilityMode;      /* 174/0280 */
	char                         PlaceholderReserved[11];           /* 175/0281 */
	DWORD                        ProxiedProcessId;                  /* 180/028c */
	ACTIVATION_CONTEXT_STACK     ActivationContextStack;            /* 184/0290 */
	UCHAR                        WorkingOnBehalfOfTicket[8];        /* 19c/02b8 */
	LONG                         ExceptionCode;                     /* 1a4/02c0 */
	ACTIVATION_CONTEXT_STACK* ActivationContextStackPointer;     /* 1a8/02c8 */
	ULONG_PTR                    InstrumentationCallbackSp;         /* 1ac/02d0 */
	ULONG_PTR                    InstrumentationCallbackPreviousPc; /* 1b0/02d8 */
	ULONG_PTR                    InstrumentationCallbackPreviousSp; /* 1b4/02e0 */
#ifdef _WIN64
	ULONG                        TxFsContext;                       /*    /02e8 */
	BOOLEAN                      InstrumentationCallbackDisabled;   /*    /02ec */
#else
	BOOLEAN                      InstrumentationCallbackDisabled;   /* 1b8/     */
	BYTE                         SpareBytes1[23];                   /* 1b9/     */
	ULONG                        TxFsContext;                       /* 1d0/     */
#endif
	GDI_TEB_BATCH                GdiTebBatch;                       /* 1d4/02f0 used for ntdll private data in Wine */
	CLIENT_ID                    RealClientId;                      /* 6b4/07d8 */
	HANDLE                       GdiCachedProcessHandle;            /* 6bc/07e8 */
	ULONG                        GdiClientPID;                      /* 6c0/07f0 */
	ULONG                        GdiClientTID;                      /* 6c4/07f4 */
	PVOID                        GdiThreadLocaleInfo;               /* 6c8/07f8 */
	ULONG_PTR                    Win32ClientInfo[62];               /* 6cc/0800 used for user32 private data in Wine */
	PVOID                        glDispatchTable[233];              /* 7c4/09f0 */
	PVOID                        glReserved1[29];                   /* b68/1138 */
	PVOID                        glReserved2;                       /* bdc/1220 */
	PVOID                        glSectionInfo;                     /* be0/1228 */
	PVOID                        glSection;                         /* be4/1230 */
	PVOID                        glTable;                           /* be8/1238 */
	PVOID                        glCurrentRC;                       /* bec/1240 */
	PVOID                        glContext;                         /* bf0/1248 */
	ULONG                        LastStatusValue;                   /* bf4/1250 */
	UNICODE_STRING               StaticUnicodeString;               /* bf8/1258 */
	WCHAR                        StaticUnicodeBuffer[261];          /* c00/1268 */
	PVOID                        DeallocationStack;                 /* e0c/1478 */
	PVOID                        TlsSlots[64];                      /* e10/1480 */
	LIST_ENTRY                   TlsLinks;                          /* f10/1680 */
	PVOID                        Vdm;                               /* f18/1690 */
	PVOID                        ReservedForNtRpc;                  /* f1c/1698 */
	PVOID                        DbgSsReserved[2];                  /* f20/16a0 */
	ULONG                        HardErrorDisabled;                 /* f28/16b0 */
	PVOID                        Instrumentation[16];               /* f2c/16b8 */
	PVOID                        WinSockData;                       /* f6c/1738 */
	ULONG                        GdiBatchCount;                     /* f70/1740 */
	ULONG                        Spare2;                            /* f74/1744 */
	ULONG                        GuaranteedStackBytes;              /* f78/1748 */
	PVOID                        ReservedForPerf;                   /* f7c/1750 */
	PVOID                        ReservedForOle;                    /* f80/1758 */
	ULONG                        WaitingOnLoaderLock;               /* f84/1760 */
	PVOID                        Reserved5[3];                      /* f88/1768 */
	PVOID* TlsExpansionSlots;                 /* f94/1780 */
#ifdef _WIN64
	PVOID                        DeallocationBStore;                /*    /1788 */
	PVOID                        BStoreLimit;                       /*    /1790 */
#endif
	ULONG                        ImpersonationLocale;               /* f98/1798 */
	ULONG                        IsImpersonating;                   /* f9c/179c */
	PVOID                        NlsCache;                          /* fa0/17a0 */
	PVOID                        ShimData;                          /* fa4/17a8 */
	ULONG                        HeapVirtualAffinity;               /* fa8/17b0 */
	PVOID                        CurrentTransactionHandle;          /* fac/17b8 */
	TEB_ACTIVE_FRAME* ActiveFrame;                       /* fb0/17c0 */
	TEB_FLS_DATA* FlsSlots;                          /* fb4/17c8 */
	PVOID                        PreferredLanguages;                /* fb8/17d0 */
	PVOID                        UserPrefLanguages;                 /* fbc/17d8 */
	PVOID                        MergedPrefLanguages;               /* fc0/17e0 */
	ULONG                        MuiImpersonation;                  /* fc4/17e8 */
	USHORT                       CrossTebFlags;                     /* fc8/17ec */
	USHORT                       SameTebFlags;                      /* fca/17ee */
	PVOID                        TxnScopeEnterCallback;             /* fcc/17f0 */
	PVOID                        TxnScopeExitCallback;              /* fd0/17f8 */
	PVOID                        TxnScopeContext;                   /* fd4/1800 */
	ULONG                        LockCount;                         /* fd8/1808 */
	LONG                         WowTebOffset;                      /* fdc/180c */
	PVOID                        ResourceRetValue;                  /* fe0/1810 */
	PVOID                        ReservedForWdf;                    /* fe4/1818 */
	ULONGLONG                    ReservedForCrt;                    /* fe8/1820 */
	GUID                         EffectiveContainerId;              /* ff0/1828 */
} __TEB, * __PTEB;

typedef struct _WOW64INFO
{
	ULONG   NativeSystemPageSize;
	ULONG   CpuFlags;
	ULONG   Wow64ExecuteFlags;
	ULONG   unknown[5];
	USHORT  NativeMachineType;
	USHORT  EmulatedMachineType;
} WOW64INFO;

char gdt[1024*9],* idt, * ldt;

static inline void* get_wow_teb(__TEB* teb) { return teb->WowTebOffset ? (void*)((char*)teb + teb->WowTebOffset) : NULL; }

class memaccessandpt{
public:
	I386CORE* i386core;
	I386_CONTEXT* i386_context;
	bool i386finish = false;
	void setctn(I386_CONTEXT* ctx, int firsttime) {
		__TEB* teb = (__TEB*)NtCurrentTeb();
		void* wowteb = get_wow_teb(teb);
		this->i386core->s.cpu_regs.reg[CPU_EAX_INDEX].d = ctx->Eax;
		this->i386core->s.cpu_regs.reg[CPU_EBX_INDEX].d = ctx->Ebx;
		this->i386core->s.cpu_regs.reg[CPU_ECX_INDEX].d = ctx->Ecx;
		this->i386core->s.cpu_regs.reg[CPU_EDX_INDEX].d = ctx->Edx;
		this->i386core->s.cpu_regs.reg[CPU_ESI_INDEX].d = ctx->Esi;
		this->i386core->s.cpu_regs.reg[CPU_EDI_INDEX].d = ctx->Edi;
		this->i386core->s.cpu_regs.reg[CPU_EBP_INDEX].d = ctx->Ebp;
		this->i386core->s.cpu_regs.reg[CPU_ESP_INDEX].d = ctx->Esp;
		this->i386core->s.cpu_regs.prev_esp.d = ctx->Esp;

		this->i386core->s.cpu_regs.eip.d = ctx->Eip;
		this->i386core->s.cpu_regs.prev_eip.d = ctx->Eip;
		this->i386core->s.cpu_regs.eflags.d = ctx->EFlags;

		this->i386core->s.cpu_regs.sreg[CPU_ES_INDEX] = ctx->SegEs;
		this->i386core->s.cpu_regs.sreg[CPU_CS_INDEX] = ctx->SegCs;
		this->i386core->s.cpu_regs.sreg[CPU_SS_INDEX] = ctx->SegSs;
		this->i386core->s.cpu_regs.sreg[CPU_DS_INDEX] = ctx->SegDs;
		this->i386core->s.cpu_regs.sreg[CPU_FS_INDEX] = ctx->SegFs;
		this->i386core->s.cpu_regs.sreg[CPU_GS_INDEX] = ctx->SegGs;

		if (firsttime) {
			firsttime = 0;
			this->i386core->s.cpu_stat.sreg[CPU_ES_INDEX].u.seg.segbase = 0;
			this->i386core->s.cpu_stat.sreg[CPU_CS_INDEX].u.seg.segbase = 0;
			this->i386core->s.cpu_stat.sreg[CPU_SS_INDEX].u.seg.segbase = 0;
			this->i386core->s.cpu_stat.sreg[CPU_DS_INDEX].u.seg.segbase = 0;
			this->i386core->s.cpu_stat.sreg[CPU_FS_INDEX].u.seg.segbase = PtrToUlong(wowteb);
			this->i386core->s.cpu_stat.sreg[CPU_GS_INDEX].u.seg.segbase = 0;

			this->i386core->s.cpu_stat.sreg[CPU_ES_INDEX].u.seg.limit = 0xffffffff;
			this->i386core->s.cpu_stat.sreg[CPU_CS_INDEX].u.seg.limit = 0xffffffff;
			this->i386core->s.cpu_stat.sreg[CPU_SS_INDEX].u.seg.limit = 0xffffffff;
			this->i386core->s.cpu_stat.sreg[CPU_DS_INDEX].u.seg.limit = 0xffffffff;
			this->i386core->s.cpu_stat.sreg[CPU_FS_INDEX].u.seg.limit = 0xffffffff;
			this->i386core->s.cpu_stat.sreg[CPU_GS_INDEX].u.seg.limit = 0xffffffff;

			this->i386core->s.cpu_stat.protected_mode = 1;
			this->i386core->s.cpu_stat.ss_32 = 1;
			this->i386core->s.cpu_inst.op_32 = 1;
			this->i386core->s.cpu_inst.as_32 = 1;
			this->i386core->s.cpu_inst_default.op_32 = 1;
			this->i386core->s.cpu_inst_default.as_32 = 1;

			this->i386core->s.cpu_sysregs.gdtr_base = (UINT32)&gdt;
			this->i386core->s.cpu_sysregs.gdtr_limit = 71;
			this->i386core->s.cpu_sysregs.idtr_base = (UINT32)idt;
			this->i386core->s.cpu_sysregs.idtr_limit = 255;
			this->i386core->s.cpu_sysregs.ldtr = (UINT32)ldt;
		}

		this->i386core->s.fpu_regs.status = ctx->FloatSave.StatusWord;
		this->i386core->s.fpu_regs.control = ctx->FloatSave.ControlWord;
		for (int i = 0; i < 8; i++) {
			this->i386core->s.fpu_stat.tag[i] = ((FP_TAG)((ctx->FloatSave.TagWord >> (2 * i)) & 3));
			/*if ((ctx->FloatSave.TagWord >> (2 * i)) & 3) this->i386core->s.fpu_stat.tag[i] = TAG_Zero;
			else this->i386core->s.fpu_stat.tag[i] = TAG_Valid;*/
		}
		this->i386core->s.fpu_regs.tag = ctx->FloatSave.TagWord;
		for (int i = 0; i < 8; i++) {
			memcpy(((void*)((this->i386core->s.fpu_stat.reg) + (sizeof(this->i386core->s.fpu_stat.reg[0]) * i))), (void*)(ctx->FloatSave.RegisterArea + (10 * i)), 10);
		}

		this->i386core->s.cpu_regs.dr[0] = ctx->Dr0;
		this->i386core->s.cpu_regs.dr[1] = ctx->Dr1;
		this->i386core->s.cpu_regs.dr[2] = ctx->Dr2;
		this->i386core->s.cpu_regs.dr[3] = ctx->Dr3;
		this->i386core->s.cpu_regs.dr[6] = ctx->Dr6;
		this->i386core->s.cpu_regs.dr[7] = ctx->Dr7;

		for (int i = 0; i < 8; i++) {
			(this->i386core->s.fpu_stat.xmm_reg[i].ul64[0]) = (*(XSAVE_FORMAT*)(ctx->ExtendedRegisters)).XmmRegisters[i].Low;
			(this->i386core->s.fpu_stat.xmm_reg[i].ul64[1]) = (*(XSAVE_FORMAT*)(ctx->ExtendedRegisters)).XmmRegisters[i].High;
		}
	}
	void setntc(I386_CONTEXT* ctx) {
		ctx->Eax = this->i386core->s.cpu_regs.reg[CPU_EAX_INDEX].d;
		ctx->Ebx = this->i386core->s.cpu_regs.reg[CPU_EBX_INDEX].d;
		ctx->Ecx = this->i386core->s.cpu_regs.reg[CPU_ECX_INDEX].d;
		ctx->Edx = this->i386core->s.cpu_regs.reg[CPU_EDX_INDEX].d;
		ctx->Esi = this->i386core->s.cpu_regs.reg[CPU_ESI_INDEX].d;
		ctx->Edi = this->i386core->s.cpu_regs.reg[CPU_EDI_INDEX].d;
		ctx->Ebp = this->i386core->s.cpu_regs.reg[CPU_EBP_INDEX].d;
		ctx->Esp = this->i386core->s.cpu_regs.reg[CPU_ESP_INDEX].d;

		ctx->Eip = this->i386core->s.cpu_regs.eip.d;
		ctx->EFlags = this->i386core->s.cpu_regs.eflags.d;

		ctx->SegEs = this->i386core->s.cpu_regs.sreg[CPU_ES_INDEX];
		ctx->SegCs = this->i386core->s.cpu_regs.sreg[CPU_CS_INDEX];
		ctx->SegSs = this->i386core->s.cpu_regs.sreg[CPU_SS_INDEX];
		ctx->SegDs = this->i386core->s.cpu_regs.sreg[CPU_DS_INDEX];
		ctx->SegFs = this->i386core->s.cpu_regs.sreg[CPU_FS_INDEX];
		ctx->SegGs = this->i386core->s.cpu_regs.sreg[CPU_GS_INDEX];

		ctx->FloatSave.StatusWord = this->i386core->s.fpu_regs.status;
		ctx->FloatSave.ControlWord = this->i386core->s.fpu_regs.control;
		ctx->FloatSave.TagWord = 0;
		for (int i = 0; i < 8; i++) {
			//ctx->FloatSave.TagWord |= (((this->i386core->s.fpu_stat.tag[i] == 0) ? TAG_Empty : TAG_Valid) << (2 * i));
			ctx->FloatSave.TagWord |= ((this->i386core->s.fpu_stat.tag[i] & 3) << (2 * i));
		}
		for (int i = 0; i < 8; i++) {
			memcpy((void *)(ctx->FloatSave.RegisterArea + (10 * i)), ((void *)((this->i386core->s.fpu_stat.reg)+(sizeof(this->i386core->s.fpu_stat.reg[0]) * i))), 10);
		}

		ctx->Dr0 = this->i386core->s.cpu_regs.dr[0];
		ctx->Dr1 = this->i386core->s.cpu_regs.dr[1];
		ctx->Dr2 = this->i386core->s.cpu_regs.dr[2];
		ctx->Dr3 = this->i386core->s.cpu_regs.dr[3];
		ctx->Dr6 = this->i386core->s.cpu_regs.dr[6];
		ctx->Dr7 = this->i386core->s.cpu_regs.dr[7];

		for (int i = 0; i < 8; i++) {
			(*(XSAVE_FORMAT*)(ctx->ExtendedRegisters)).XmmRegisters[i].Low = (this->i386core->s.fpu_stat.xmm_reg[i].ul64[0]);
			(*(XSAVE_FORMAT*)(ctx->ExtendedRegisters)).XmmRegisters[i].High = (this->i386core->s.fpu_stat.xmm_reg[i].ul64[1]);
		}
	}
	static UINT32 i386memaccess(memaccessandpt * _this,int prm_0, int prm_1, int prm_2) {
		switch (prm_2 & 3) {
		case 0:
			(*(UINT8*)(prm_0)) = prm_1;
			break;
		case 1:
			return (*(UINT8*)(prm_0));
			break;
		case 3:
			UINT32 ret = 0;
			_this->setntc(_this->i386_context);
			if (prm_0 == 0) {
				if (Wow64SystemServiceEx != 0) {
					ret = Wow64SystemServiceEx(_this->i386_context->Eax, (UINT*)ULongToPtr(_this->i386_context->Esp + 8));
					_this->i386finish = true;
					_this->i386core->s.remainclock = 0;
				}
			}
			else if (prm_0 == 4) {
				UINT32* p = (UINT32*)ULongToPtr(_this->i386_context->Esp);
				if (p__wine_unix_call != 0) {
					ret = p__wine_unix_call((*(UINT64*)((void*)&p[1])), (UINT32)p[3], ULongToPtr(p[4]));
					_this->i386finish = true;
					_this->i386core->s.remainclock = 0;
				}
			}
			_this->i386_context->Eax = ret;
			_this->setctn(_this->i386_context,0);
			return ret;
			break;
		}
		return 0;
	}
};

#ifdef __cplusplus
extern "C" {
#endif

	__declspec(dllexport) void* WINAPI BTCpuGetBopCode(void) { return (UINT32*)&bopcode; }
	__declspec(dllexport) NTSTATUS WINAPI BTCpuGetContext(HANDLE thread, HANDLE process, void* unknown, I386_CONTEXT* ctx) { return NtQueryInformationThread(thread,ThreadWow64Context,ctx,sizeof(*ctx),NULL); }
	__declspec(dllexport) NTSTATUS WINAPI BTCpuProcessInit(void) { if ((ULONG_PTR)BTCpuProcessInit >> 32) { return STATUS_INVALID_ADDRESS; }
	/*HMODULE HM = LoadLibraryA("C:\\Windows\\Sysnative\\ULDllLoader.dll");
	if (HM == 0) { HM = LoadLibraryA("C:\\Windows\\System32\\ULDllLoader.dll"); }
	if (HM == 0) { return STATUS_INVALID_ADDRESS; }
	ULLoadLibraryA = (t_ULLoadLibraryA*)GetProcAddress(HM, "ULLoadLibraryA");
	ULGetProcAddress = (t_ULGetProcAddress*)GetProcAddress(HM, "ULGetProcAddress");
	ULExecDllMain = (t_ULExecDllMain*)GetProcAddress(HM, "ULExecDllMain");
	ULFreeLibrary= (t_ULFreeLibrary*)GetProcAddress(HM, "ULFreeLibrary");
	HMODULE HM2 = LoadLibraryA("C:\\Windows\\Sysnative\\Wow64.dll");
	if (HM2 == 0) { HM2 = LoadLibraryA("C:\\Windows\\System32\\Wow64.dll"); }
	if (HM2 == 0) { return STATUS_INVALID_ADDRESS; }
	Wow64SystemServiceEx = (t_Wow64SystemServiceEx*)GetProcAddress(HM2,"Wow64SystemServiceEx");
	HMODULE HM3 = LoadLibraryA("C:\\Windows\\Sysnative\\ntdll.dll");
	if (HM3 == 0) { HM3 = LoadLibraryA("C:\\Windows\\System32\\ntdll.dll"); }
	if (HM3 == 0) { return STATUS_INVALID_ADDRESS; }
	RtlAllocateHeap = (t_RtlAllocateHeap*)GetProcAddress(HM3, "RtlAllocateHeap");
	NtSetInformationThread_alternative = (t_NtSetInformationThread*)GetProcAddress(HM3, "NtSetInformationThread");
	NtQueryInformationThread_alternative = (t_NtQueryInformationThread*)GetProcAddress(HM3, "NtQueryInformationThread");
	RtlWow64GetCurrentCpuArea = (t_RtlWow64GetCurrentCpuArea*)GetProcAddress(HM3, "RtlWow64GetCurrentCpuArea");*/

	/*WOW64INFO* wow64info = (WOW64INFO*)NtCurrentTeb()->TlsSlots[10];
	wow64info->CpuFlags |= 1;*/
	return STATUS_SUCCESS; }
	__declspec(dllexport) NTSTATUS WINAPI BTCpuThreadInit(void) { idt = (char*)RtlAllocateHeap(GetProcessHeap(),HEAP_ZERO_MEMORY,255*8); ldt = (char*)RtlAllocateHeap(GetProcessHeap(), HEAP_ZERO_MEMORY, 256 * 8); return STATUS_SUCCESS; }
	__declspec(dllexport) NTSTATUS WINAPI BTCpuResetToConsistentState(EXCEPTION_POINTERS* ptrs) { return STATUS_SUCCESS; }
	__declspec(dllexport) NTSTATUS WINAPI BTCpuSetContext(HANDLE thread, HANDLE process, void* unknown, I386_CONTEXT* ctx) { return NtSetInformationThread(thread, ThreadWow64Context, ctx, sizeof(*ctx)); }
	__declspec(dllexport) void WINAPI BTCpuSimulate(void) {
		t_CPU_GET_REGPTR* CPU_GET_REGPTR = 0;
		t_CPU_EXECUTE_CC* CPU_EXECUTE_CC = 0;
		t_CPU_SET_MACTLFC* CPU_SET_MACTLFC = 0;
		t_CPU_INIT* CPU_INIT = 0;
		t_CPU_RESET* CPU_RESET = 0;
		t_CPU_BUS_SIZE_CHANGE* CPU_BUS_SIZE_CHANGE = 0;
		t_CPU_SWITCH_PM* CPU_SWITCH_PM = 0;

		char retptx[] = {0xf4,0xeb,0xfd,0x00};
		I386_CONTEXT* wow_context;
		NTSTATUS ret;
		RtlWow64GetCurrentCpuArea(NULL,(void**)&wow_context,NULL);
		PVOID oldvalue4wd;
		//Wow64DisableWow64FsRedirection(&oldvalue4wd);
		void* HM = ULLoadLibraryA((char *)"C:\\Windows\\Sysnative\\np21w_emu.dll");
		if (HM == 0) { HM = ULLoadLibraryA((char *)"C:\\Windows\\System32\\np21w_emu.dll"); }
		//Wow64RevertWow64FsRedirection(oldvalue4wd);
		if (HM == 0) { return; }
		//ULExecDllMain(HM, 1);
		CPU_GET_REGPTR = (t_CPU_GET_REGPTR*)ULGetProcAddress(HM, "CPU_GET_REGPTR");
		CPU_EXECUTE_CC = (t_CPU_EXECUTE_CC*)ULGetProcAddress(HM, "CPU_EXECUTE_CC_V2");
		CPU_SET_MACTLFC = (t_CPU_SET_MACTLFC*)ULGetProcAddress(HM, "CPU_SET_MACTLFC");
		CPU_INIT = (t_CPU_INIT*)ULGetProcAddress(HM, "CPU_INIT");
		CPU_RESET = (t_CPU_RESET*)ULGetProcAddress(HM, "CPU_RESET");
		CPU_BUS_SIZE_CHANGE = (t_CPU_BUS_SIZE_CHANGE*)ULGetProcAddress(HM, "CPU_BUS_SIZE_CHANGE");
		CPU_SWITCH_PM = (t_CPU_SWITCH_PM*)ULGetProcAddress(HM, "CPU_SWITCH_PM");
		if (CPU_INIT == 0 || CPU_RESET == 0) { return; }
		CPU_INIT();
		CPU_RESET();
		CPU_BUS_SIZE_CHANGE(0x200);
		memaccessandpt* memtmp = new memaccessandpt;
		memtmp->i386core = (I386CORE*)CPU_GET_REGPTR(5);
		memtmp->i386_context = wow_context;
		CPU_SWITCH_PM(1);
		memtmp->setctn(wow_context,1);
#ifdef _ARM64_
		/*
		cmp w2,#0
		beq writemem
		cmp w2,#1
		beq readmem
		mov x3,x2
		mov x2,x1
		mov x1,x0
		ldr x4,testvalue+0
		ldr x0,testvalue+8
		br x4
		writemem:
		mov w0,w0
		strb w1,[x0]
		ret
		readmem:
		mov w0,w0
		ldrb w1,[x0]
		ret
		testvalue:
		0x0000000000000000
		0x0000000000000000
		*/
		char memaccess[] = {0x5F,0x00,0x00,0x71,0x20,0x01,0x00,0x54,0x5F,0x04,0x00,0x71,0x40,0x01,0x00,0x54,0xE3,0x03,0x02,0xAA,0xE2,0x03,0x01,0xAA,0xE1,0x03,0x00,0xAA,0x24,0x01,0x00,0x58,0x40,0x01,0x00,0x58,0x80,0x00,0x1F,0xD6,0xE0,0x03,0x00,0x2A,0x01,0x00,0x00,0x39,0xC0,0x03,0x5F,0xD6,0xE0,0x03,0x00,0x2A,0x01,0x00,0x40,0x39,0xC0,0x03,0x5F,0xD6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 };
		(*(UINT64*)(&memaccess[64 + (8 * 0)])) = (UINT64)memtmp->i386memaccess;
		(*(UINT64*)(&memaccess[64 + (8 * 1)])) = (UINT64)memtmp;
#else
#ifdef _X86_
		/*
		pop eax
		push 0x12345678
		push eax
		mov eax,0
		jmp eax
		*/
		char memaccess[] = { 0x58 ,0x68 ,0x78 ,0x56 ,0x34 ,0x12 ,0x50 ,0xB8 ,0x00 ,0x00 ,0x00 ,0x00 ,0xFF ,0xE0 };
		(*(UINT32*)(&memaccess[0x08])) = (UINT32)memtmp->i386memaccess;
		(*(UINT32*)(&memaccess[0x02])) = (UINT32)memtmp;
#else
		/*
		mov r9,r8
		mov r8,rdx
		mov rdx,rcx
		mov rcx,0x123456789abcdef
		mov rax,0x123456789abcdef
		jmp rax
		*/
		char memaccess[] = { 0x4D ,0x89 ,0xC1 ,0x49 ,0x89 ,0xD0 ,0x48 ,0x89 ,0xCA ,0x48 ,0xB9 ,0xEF ,0xCD ,0xAB ,0x89 ,0x67 ,0x45 ,0x23 ,0x01 ,0x48 ,0xB8 ,0xEF ,0xCD ,0xAB ,0x89 ,0x67 ,0x45 ,0x23 ,0x01 ,0xFF ,0xE0 };
		(*(UINT64*)(&memaccess[0x15])) = (UINT64)memtmp->i386memaccess;
		(*(UINT64*)(&memaccess[0x0b])) = (UINT64)memtmp;
#endif
#endif
		DWORD tmp;
		char* funcofmemaccess = (char*)VirtualAlloc(0, sizeof(memaccess), 0x3000, 0x40);
		if (funcofmemaccess != 0) {
			memcpy(funcofmemaccess, memaccess, sizeof(memaccess));
		}
		else { return; }
		VirtualProtect(funcofmemaccess,sizeof(memaccess),0x20,&tmp);
		FlushInstructionCache(GetCurrentProcess(),funcofmemaccess,sizeof(memaccess));
		CPU_SET_MACTLFC((UINT32(*)(int,int,int))funcofmemaccess);
		memtmp->i386finish = false;
		while (memtmp->i386finish == false) { CPU_EXECUTE_CC(0x7fffffff); }
		memtmp->setntc(wow_context);
		delete(memtmp);
		ULFreeLibrary(HM);
		VirtualFree(funcofmemaccess,0,0x8000);
	}
	__declspec(dllexport) void* WINAPI __wine_get_unix_opcode(void) { return (UINT32*)&unixbopcode; }
	__declspec(dllexport) BOOLEAN WINAPI BTCpuIsProcessorFeaturePresent(UINT feature) { if (feature == 1 || feature == 2 || feature == 3 || feature == 6 || feature == 7 || feature == 8 || feature == 10 || feature == 13) { return true; }return false; }
	__declspec(dllexport) NTSTATUS WINAPI BTCpuTurboThunkControl(ULONG enable) { if (enable) { return STATUS_NOT_SUPPORTED; } return STATUS_SUCCESS; }

#ifdef __cplusplus
}
#endif
