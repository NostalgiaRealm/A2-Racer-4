; Ghidra listing for A2Racer4.exe (x86:LE:32:default). Labels and types are tool-generated unless they came from the binary.
00400000  IMAGE_DOS_HEADER 
00400080  IMAGE_RICH_HEADER 
; undefined 24 bytes at 004000d8
004000f0  IMAGE_NT_HEADERS32 
004001e8  IMAGE_SECTION_HEADER 
00400210  IMAGE_SECTION_HEADER 
00400238  IMAGE_SECTION_HEADER 
00400260  IMAGE_SECTION_HEADER 
; undefined 3448 bytes at 00400288

; ==== FUNCTION IniGetInt entry=00401000 sig=undefined __cdecl IniGetInt(LPCSTR param_1, LPCSTR param_2)
00401000  8b442408             MOV EAX,dword ptr [ESP + 0x8]
00401004  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
00401008  68107e4000           PUSH 0x407e10
0040100d  6a00                 PUSH 0x0
0040100f  50                   PUSH EAX
00401010  51                   PUSH ECX
00401011  ff1588604000         CALL dword ptr [0x00406088]
00401017  c3                   RET
; undefined 8 bytes at 00401018

; ==== FUNCTION BuildIniPath entry=00401020 sig=undefined __cdecl BuildIniPath(char * param_1)
00401020  56                   PUSH ESI
00401021  57                   PUSH EDI
00401022  6818010000           PUSH 0x118
00401027  68107e4000           PUSH 0x407e10
0040102c  e805400000           CALL 0x00405036
00401031  bf107e4000           MOV EDI,0x407e10
00401036  83c9ff               OR ECX,0xffffffff
00401039  33c0                 XOR EAX,EAX
0040103b  83c408               ADD ESP,0x8
0040103e  f2ae                 SCASB.REPNE ES:EDI
00401040  f7d1                 NOT ECX
00401042  49                   DEC ECX
00401043  80b90f7e40005c       CMP byte ptr [ECX + 0x407e0f],0x5c
0040104a  742d                 JZ 0x00401079
0040104c  bf30704000           MOV EDI,0x407030
00401051  83c9ff               OR ECX,0xffffffff
00401054  33c0                 XOR EAX,EAX
00401056  f2ae                 SCASB.REPNE ES:EDI
00401058  f7d1                 NOT ECX
0040105a  2bf9                 SUB EDI,ECX
0040105c  8bf7                 MOV ESI,EDI
0040105e  8bd1                 MOV EDX,ECX
00401060  bf107e4000           MOV EDI,0x407e10
00401065  83c9ff               OR ECX,0xffffffff
00401068  f2ae                 SCASB.REPNE ES:EDI
0040106a  8bca                 MOV ECX,EDX
0040106c  4f                   DEC EDI
0040106d  c1e902               SHR ECX,0x2
00401070  f3a5                 MOVSD.REP ES:EDI,ESI
00401072  8bca                 MOV ECX,EDX
00401074  83e103               AND ECX,0x3
00401077  f3a4                 MOVSB.REP ES:EDI,ESI
00401079  8b7c240c             MOV EDI,dword ptr [ESP + 0xc]
0040107d  83c9ff               OR ECX,0xffffffff
00401080  33c0                 XOR EAX,EAX
00401082  f2ae                 SCASB.REPNE ES:EDI
00401084  f7d1                 NOT ECX
00401086  2bf9                 SUB EDI,ECX
00401088  8bf7                 MOV ESI,EDI
0040108a  8bd1                 MOV EDX,ECX
0040108c  bf107e4000           MOV EDI,0x407e10
00401091  83c9ff               OR ECX,0xffffffff
00401094  f2ae                 SCASB.REPNE ES:EDI
00401096  8bca                 MOV ECX,EDX
00401098  4f                   DEC EDI
00401099  c1e902               SHR ECX,0x2
0040109c  f3a5                 MOVSD.REP ES:EDI,ESI
0040109e  8bca                 MOV ECX,EDX
004010a0  83e103               AND ECX,0x3
004010a3  f3a4                 MOVSB.REP ES:EDI,ESI
004010a5  5f                   POP EDI
004010a6  c7053c7f400001000000 MOV dword ptr [0x00407f3c],0x1
004010b0  5e                   POP ESI
004010b1  c3                   RET
; undefined 14 bytes at 004010b2

; ==== FUNCTION ReadMenuExitCode entry=004010c0 sig=int __stdcall ReadMenuExitCode(void)
004010c0  83ec40               SUB ESP,0x40
004010c3  56                   PUSH ESI
004010c4  68b4704000           PUSH 0x4070b4
004010c9  e852ffffff           CALL 0x00401020
004010ce  68a8704000           PUSH 0x4070a8
004010d3  68a0704000           PUSH 0x4070a0
004010d8  e823ffffff           CALL 0x00401000
004010dd  8bf0                 MOV ESI,EAX
004010df  83c40c               ADD ESP,0xc
004010e2  85f6                 TEST ESI,ESI
004010e4  7535                 JNZ 0x0040111b
004010e6  68a8704000           PUSH 0x4070a8
004010eb  68a0704000           PUSH 0x4070a0
004010f0  68b4704000           PUSH 0x4070b4
004010f5  6a67                 PUSH 0x67
004010f7  6888704000           PUSH 0x407088
004010fc  683c704000           PUSH 0x40703c
00401101  e8da030000           CALL 0x004014e0
00401106  83c418               ADD ESP,0x18
00401109  8d442404             LEA EAX,[ESP + 0x4]
0040110d  56                   PUSH ESI
0040110e  6834704000           PUSH 0x407034
00401113  50                   PUSH EAX
00401114  56                   PUSH ESI
00401115  ff15d0604000         CALL dword ptr [0x004060d0]
0040111b  8bc6                 MOV EAX,ESI
0040111d  5e                   POP ESI
0040111e  83c440               ADD ESP,0x40
00401121  c3                   RET
; undefined 14 bytes at 00401122

; ==== FUNCTION SpawnAndGetExit entry=00401130 sig=undefined __cdecl SpawnAndGetExit(uint * param_1, undefined4 param_2)
00401130  83ec50               SUB ESP,0x50
00401133  57                   PUSH EDI
00401134  b914000000           MOV ECX,0x14
00401139  33c0                 XOR EAX,EAX
0040113b  8d7c2404             LEA EDI,[ESP + 0x4]
0040113f  f3ab                 STOSD.REP ES:EDI
00401141  8b442458             MOV EAX,dword ptr [ESP + 0x58]
00401145  8b4c245c             MOV ECX,dword ptr [ESP + 0x5c]
00401149  8d542404             LEA EDX,[ESP + 0x4]
0040114d  89442404             MOV dword ptr [ESP + 0x4],EAX
00401151  52                   PUSH EDX
00401152  50                   PUSH EAX
00401153  6a00                 PUSH 0x0
00401155  894c2414             MOV dword ptr [ESP + 0x14],ECX
00401159  e8f33f0000           CALL 0x00405151
0040115e  83c40c               ADD ESP,0xc
00401161  83f8ff               CMP EAX,-0x1
00401164  5f                   POP EDI
00401165  0f85a8000000         JNZ 0x00401213
0040116b  a1447f4000           MOV EAX,[0x00407f44]
00401170  83c0fe               ADD EAX,-0x2
00401173  83f814               CMP EAX,0x14
00401176  0f8797000000         JA 0x00401213
0040117c  33c9                 XOR ECX,ECX
0040117e  8a8834124000         MOV CL,byte ptr [EAX + 0x401234]
switchD_00401184::switchD:
00401184  ff248d1c124000       JMP dword ptr [ECX*0x4 + 0x40121c]
switchD_00401184::caseD_7:
0040118b  6a00                 PUSH 0x0
0040118d  6834704000           PUSH 0x407034
00401192  6878714000           PUSH 0x407178
00401197  6a00                 PUSH 0x0
00401199  ff15d0604000         CALL dword ptr [0x004060d0]
0040119f  e81cffffff           CALL 0x004010c0
004011a4  83c450               ADD ESP,0x50
004011a7  c3                   RET
switchD_00401184::caseD_16:
004011a8  6a00                 PUSH 0x0
004011aa  6834704000           PUSH 0x407034
004011af  685c714000           PUSH 0x40715c
004011b4  6a00                 PUSH 0x0
004011b6  ff15d0604000         CALL dword ptr [0x004060d0]
004011bc  e8fffeffff           CALL 0x004010c0
004011c1  83c450               ADD ESP,0x50
004011c4  c3                   RET
switchD_00401184::caseD_2:
004011c5  6a00                 PUSH 0x0
004011c7  6834704000           PUSH 0x407034
004011cc  6840714000           PUSH 0x407140
004011d1  6a00                 PUSH 0x0
004011d3  ff15d0604000         CALL dword ptr [0x004060d0]
004011d9  e8e2feffff           CALL 0x004010c0
004011de  83c450               ADD ESP,0x50
004011e1  c3                   RET
switchD_00401184::caseD_8:
004011e2  6a00                 PUSH 0x0
004011e4  6834704000           PUSH 0x407034
004011e9  68f8704000           PUSH 0x4070f8
004011ee  6a00                 PUSH 0x0
004011f0  ff15d0604000         CALL dword ptr [0x004060d0]
004011f6  e8c5feffff           CALL 0x004010c0
004011fb  83c450               ADD ESP,0x50
004011fe  c3                   RET
switchD_00401184::caseD_c:
004011ff  6a00                 PUSH 0x0
00401201  6834704000           PUSH 0x407034
00401206  68c0704000           PUSH 0x4070c0
0040120b  6a00                 PUSH 0x0
0040120d  ff15d0604000         CALL dword ptr [0x004060d0]
switchD_00401184::caseD_3:
00401213  e8a8feffff           CALL 0x004010c0
00401218  83c450               ADD ESP,0x50
0040121b  c3                   RET
switchD_00401184::switchdataD_0040121c:
0040121c  addr 004011c5
00401220  addr 0040118b
00401224  addr 004011e2
00401228  addr 004011ff
0040122c  addr 004011a8
00401230  addr 00401213
switchD_00401184::switchdataD_00401234:
00401234  db 0h
00401235  db 5h
00401236  db 5h
00401237  db 5h
00401238  db 5h
00401239  db 1h
0040123a  db 2h
0040123b  db 5h
0040123c  db 5h
0040123d  db 5h
0040123e  db 3h
0040123f  db 5h
00401240  db 5h
00401241  db 5h
00401242  db 5h
00401243  db 5h
00401244  db 5h
00401245  db 5h
00401246  db 5h
00401247  db 5h
00401248  db 4h
; undefined 7 bytes at 00401249

; ==== FUNCTION WinMain entry=00401250 sig=undefined4 __stdcall WinMain(HINSTANCE param_1, int param_2, undefined4 param_3, int param_4)
00401250  8b442408             MOV EAX,dword ptr [ESP + 0x8]
00401254  81ecb0000000         SUB ESP,0xb0
0040125a  55                   PUSH EBP
0040125b  56                   PUSH ESI
0040125c  8bb424bc000000       MOV ESI,dword ptr [ESP + 0xbc]
00401263  33ed                 XOR EBP,EBP
00401265  3bc5                 CMP EAX,EBP
00401267  57                   PUSH EDI
00401268  8935b47a4000         MOV dword ptr [0x00407ab4],ESI
0040126e  0f8589000000         JNZ 0x004012fd
00401274  68007f0000           PUSH 0x7f00
00401279  55                   PUSH EBP
0040127a  c744241430000000     MOV dword ptr [ESP + 0x14],0x30
00401282  c744243c34704000     MOV dword ptr [ESP + 0x3c],0x407034
0040128a  89742428             MOV dword ptr [ESP + 0x28],ESI
0040128e  c744241c40144000     MOV dword ptr [ESP + 0x1c],0x401440
00401296  ff15f4604000         CALL dword ptr [0x004060f4]
0040129c  8b3df8604000         MOV EDI,dword ptr [0x004060f8]
004012a2  68007f0000           PUSH 0x7f00
004012a7  56                   PUSH ESI
004012a8  89442430             MOV dword ptr [ESP + 0x30],EAX
004012ac  ffd7                 CALL EDI
004012ae  68007f0000           PUSH 0x7f00
004012b3  56                   PUSH ESI
004012b4  8944242c             MOV dword ptr [ESP + 0x2c],EAX
004012b8  ffd7                 CALL EDI
004012ba  6a04                 PUSH 0x4
004012bc  896c2434             MOV dword ptr [ESP + 0x34],EBP
004012c0  8944243c             MOV dword ptr [ESP + 0x3c],EAX
004012c4  ff1500604000         CALL dword ptr [0x00406000]
004012ca  896c2410             MOV dword ptr [ESP + 0x10],EBP
004012ce  896c2418             MOV dword ptr [ESP + 0x18],EBP
004012d2  8944242c             MOV dword ptr [ESP + 0x2c],EAX
004012d6  8d44240c             LEA EAX,[ESP + 0xc]
004012da  50                   PUSH EAX
004012db  896c2420             MOV dword ptr [ESP + 0x20],EBP
004012df  ff15f0604000         CALL dword ptr [0x004060f0]
004012e5  6685c0               TEST AX,AX
004012e8  7521                 JNZ 0x0040130b
004012ea  6a30                 PUSH 0x30
004012ec  68f0714000           PUSH 0x4071f0
004012f1  68cc714000           PUSH 0x4071cc
004012f6  55                   PUSH EBP
004012f7  ff15d0604000         CALL dword ptr [0x004060d0]
004012fd  5f                   POP EDI
004012fe  5e                   POP ESI
004012ff  33c0                 XOR EAX,EAX
00401301  5d                   POP EBP
00401302  81c4b0000000         ADD ESP,0xb0
00401308  c21000               RET 0x10
0040130b  55                   PUSH EBP
0040130c  56                   PUSH ESI
0040130d  8b3500614000         MOV ESI,dword ptr [0x00406100]
00401313  55                   PUSH EBP
00401314  55                   PUSH EBP
00401315  6a01                 PUSH 0x1
00401317  ffd6                 CALL ESI
00401319  50                   PUSH EAX
0040131a  55                   PUSH EBP
0040131b  ffd6                 CALL ESI
0040131d  50                   PUSH EAX
0040131e  55                   PUSH EBP
0040131f  55                   PUSH EBP
00401320  6800000080           PUSH 0x80000000
00401325  68407f4000           PUSH 0x407f40
0040132a  6834704000           PUSH 0x407034
0040132f  6800000400           PUSH 0x40000
00401334  ff1504614000         CALL dword ptr [0x00406104]
0040133a  3bc5                 CMP EAX,EBP
0040133c  a3b07a4000           MOV [0x00407ab0],EAX
00401341  74ba                 JZ 0x004012fd
00401343  8b8c24cc000000       MOV ECX,dword ptr [ESP + 0xcc]
0040134a  53                   PUSH EBX
0040134b  51                   PUSH ECX
0040134c  50                   PUSH EAX
0040134d  ff15fc604000         CALL dword ptr [0x004060fc]
00401353  6a63                 PUSH 0x63
00401355  8d542460             LEA EDX,[ESP + 0x60]
00401359  68c0714000           PUSH 0x4071c0
0040135e  52                   PUSH EDX
0040135f  e8dc020000           CALL 0x00401640
00401364  8b1d0c614000         MOV EBX,dword ptr [0x0040610c]
0040136a  83c40c               ADD ESP,0xc
0040136d  6a01                 PUSH 0x1
0040136f  6a00                 PUSH 0x0
00401371  6a00                 PUSH 0x0
00401373  8d44244c             LEA EAX,[ESP + 0x4c]
00401377  6a00                 PUSH 0x0
00401379  50                   PUSH EAX
0040137a  ff1510614000         CALL dword ptr [0x00406110]
00401380  85c0                 TEST EAX,EAX
00401382  7423                 JZ 0x004013a7
00401384  837c244412           CMP dword ptr [ESP + 0x44],0x12
00401389  0f8498000000         JZ 0x00401427
0040138f  8d4c2440             LEA ECX,[ESP + 0x40]
00401393  51                   PUSH ECX
00401394  ff1508614000         CALL dword ptr [0x00406108]
0040139a  8d542440             LEA EDX,[ESP + 0x40]
0040139e  52                   PUSH EDX
0040139f  ff15d4604000         CALL dword ptr [0x004060d4]
004013a5  ebc6                 JMP 0x0040136d
004013a7  85ed                 TEST EBP,EBP
004013a9  75c2                 JNZ 0x0040136d
004013ab  8d44245c             LEA EAX,[ESP + 0x5c]
004013af  50                   PUSH EAX
004013b0  68b4714000           PUSH 0x4071b4
004013b5  e876fdffff           CALL 0x00401130
004013ba  83c408               ADD ESP,0x8
004013bd  83f828               CMP EAX,0x28
004013c0  743d                 JZ 0x004013ff
004013c2  bf407f4000           MOV EDI,0x407f40
004013c7  83c9ff               OR ECX,0xffffffff
004013ca  33c0                 XOR EAX,EAX
004013cc  8d54245c             LEA EDX,[ESP + 0x5c]
004013d0  f2ae                 SCASB.REPNE ES:EDI
004013d2  f7d1                 NOT ECX
004013d4  2bf9                 SUB EDI,ECX
004013d6  55                   PUSH EBP
004013d7  8bc1                 MOV EAX,ECX
004013d9  8bf7                 MOV ESI,EDI
004013db  8bfa                 MOV EDI,EDX
004013dd  55                   PUSH EBP
004013de  c1e902               SHR ECX,0x2
004013e1  f3a5                 MOVSD.REP ES:EDI,ESI
004013e3  8bc8                 MOV ECX,EAX
004013e5  6a10                 PUSH 0x10
004013e7  83e103               AND ECX,0x3
004013ea  f3a4                 MOVSB.REP ES:EDI,ESI
004013ec  8b0db07a4000         MOV ECX,dword ptr [0x00407ab0]
004013f2  51                   PUSH ECX
004013f3  ffd3                 CALL EBX
004013f5  bd01000000           MOV EBP,0x1
004013fa  e96effffff           JMP 0x0040136d
004013ff  68407f4000           PUSH 0x407f40
00401404  68a8714000           PUSH 0x4071a8
00401409  e822fdffff           CALL 0x00401130
0040140e  6a63                 PUSH 0x63
00401410  8d542468             LEA EDX,[ESP + 0x68]
00401414  689c714000           PUSH 0x40719c
00401419  52                   PUSH EDX
0040141a  e821020000           CALL 0x00401640
0040141f  83c414               ADD ESP,0x14
00401422  e946ffffff           JMP 0x0040136d
00401427  8b442448             MOV EAX,dword ptr [ESP + 0x48]
0040142b  5b                   POP EBX
0040142c  5f                   POP EDI
0040142d  5e                   POP ESI
0040142e  5d                   POP EBP
0040142f  81c4b0000000         ADD ESP,0xb0
00401435  c21000               RET 0x10
; undefined 8 bytes at 00401438

; ==== FUNCTION FUN_00401440 entry=00401440 sig=LRESULT __stdcall FUN_00401440(HWND param_1, uint param_2, WPARAM param_3, LPARAM param_4)
00401440  8b442408             MOV EAX,dword ptr [ESP + 0x8]
00401444  83ec40               SUB ESP,0x40
00401447  83f80f               CMP EAX,0xf
0040144a  7740                 JA 0x0040148c
0040144c  7418                 JZ 0x00401466
0040144e  8bc8                 MOV ECX,EAX
00401450  49                   DEC ECX
00401451  747c                 JZ 0x004014cf
00401453  49                   DEC ECX
00401454  7542                 JNZ 0x00401498
00401456  6a00                 PUSH 0x0
00401458  ff15dc604000         CALL dword ptr [0x004060dc]
0040145e  33c0                 XOR EAX,EAX
00401460  83c440               ADD ESP,0x40
00401463  c21000               RET 0x10
00401466  56                   PUSH ESI
00401467  8b742448             MOV ESI,dword ptr [ESP + 0x48]
0040146b  8d442404             LEA EAX,[ESP + 0x4]
0040146f  50                   PUSH EAX
00401470  56                   PUSH ESI
00401471  ff15e0604000         CALL dword ptr [0x004060e0]
00401477  8d4c2404             LEA ECX,[ESP + 0x4]
0040147b  51                   PUSH ECX
0040147c  56                   PUSH ESI
0040147d  ff15d8604000         CALL dword ptr [0x004060d8]
00401483  5e                   POP ESI
00401484  33c0                 XOR EAX,EAX
00401486  83c440               ADD ESP,0x40
00401489  c21000               RET 0x10
0040148c  83f810               CMP EAX,0x10
0040148f  7433                 JZ 0x004014c4
00401491  3d00020000           CMP EAX,0x200
00401496  741c                 JZ 0x004014b4
00401498  8b542450             MOV EDX,dword ptr [ESP + 0x50]
0040149c  8b4c244c             MOV ECX,dword ptr [ESP + 0x4c]
004014a0  52                   PUSH EDX
004014a1  8b542448             MOV EDX,dword ptr [ESP + 0x48]
004014a5  51                   PUSH ECX
004014a6  50                   PUSH EAX
004014a7  52                   PUSH EDX
004014a8  ff15e8604000         CALL dword ptr [0x004060e8]
004014ae  83c440               ADD ESP,0x40
004014b1  c21000               RET 0x10
004014b4  6a00                 PUSH 0x0
004014b6  ff15ec604000         CALL dword ptr [0x004060ec]
004014bc  33c0                 XOR EAX,EAX
004014be  83c440               ADD ESP,0x40
004014c1  c21000               RET 0x10
004014c4  8b442444             MOV EAX,dword ptr [ESP + 0x44]
004014c8  50                   PUSH EAX
004014c9  ff15e4604000         CALL dword ptr [0x004060e4]
004014cf  33c0                 XOR EAX,EAX
004014d1  83c440               ADD ESP,0x40
004014d4  c21000               RET 0x10
; undefined 9 bytes at 004014d7

; ==== FUNCTION FUN_004014e0 entry=004014e0 sig=int __cdecl FUN_004014e0(undefined1 * param_1, byte * param_2)
004014e0  55                   PUSH EBP
004014e1  8bec                 MOV EBP,ESP
004014e3  83ec20               SUB ESP,0x20
004014e6  8b4508               MOV EAX,dword ptr [EBP + 0x8]
004014e9  56                   PUSH ESI
004014ea  8945e8               MOV dword ptr [EBP + -0x18],EAX
004014ed  8945e0               MOV dword ptr [EBP + -0x20],EAX
004014f0  8d4510               LEA EAX,[EBP + 0x10]
004014f3  c745ec42000000       MOV dword ptr [EBP + -0x14],0x42
004014fa  50                   PUSH EAX
004014fb  8d45e0               LEA EAX,[EBP + -0x20]
004014fe  ff750c               PUSH dword ptr [EBP + 0xc]
00401501  c745e4ffffff7f       MOV dword ptr [EBP + -0x1c],0x7fffffff
00401508  50                   PUSH EAX
00401509  e884040000           CALL 0x00401992
0040150e  83c40c               ADD ESP,0xc
00401511  ff4de4               DEC dword ptr [EBP + -0x1c]
00401514  8bf0                 MOV ESI,EAX
00401516  7808                 JS 0x00401520
00401518  8b45e0               MOV EAX,dword ptr [EBP + -0x20]
0040151b  802000               AND byte ptr [EAX],0x0
0040151e  eb0d                 JMP 0x0040152d
00401520  8d45e0               LEA EAX,[EBP + -0x20]
00401523  50                   PUSH EAX
00401524  6a00                 PUSH 0x0
00401526  e852030000           CALL 0x0040187d
0040152b  59                   POP ECX
0040152c  59                   POP ECX
0040152d  8bc6                 MOV EAX,ESI
0040152f  5e                   POP ESI
00401530  c9                   LEAVE
00401531  c3                   RET

; ==== FUNCTION FUN_00401532 entry=00401532 sig=undefined __stdcall FUN_00401532(void)
00401532  a178944000           MOV EAX,[0x00409478]
00401537  85c0                 TEST EAX,EAX
00401539  7402                 JZ 0x0040153d
0040153b  ffd0                 CALL EAX
0040153d  6814704000           PUSH 0x407014
00401542  6808704000           PUSH 0x407008
00401547  e8ce000000           CALL 0x0040161a
0040154c  6804704000           PUSH 0x407004
00401551  6800704000           PUSH 0x407000
00401556  e8bf000000           CALL 0x0040161a
0040155b  83c410               ADD ESP,0x10
0040155e  c3                   RET

; ==== FUNCTION FUN_0040155f entry=0040155f sig=undefined __cdecl FUN_0040155f(UINT param_1)
0040155f  6a00                 PUSH 0x0
00401561  6a00                 PUSH 0x0
00401563  ff74240c             PUSH dword ptr [ESP + 0xc]
00401567  e815000000           CALL 0x00401581
0040156c  83c40c               ADD ESP,0xc
0040156f  c3                   RET

; ==== FUNCTION __exit entry=00401570 sig=noreturn void __cdecl __exit(int _Code)
00401570  6a00                 PUSH 0x0
00401572  6a01                 PUSH 0x1
00401574  ff74240c             PUSH dword ptr [ESP + 0xc]
00401578  e804000000           CALL 0x00401581
0040157d  83c40c               ADD ESP,0xc
00401580  c3                   RET

; ==== FUNCTION FUN_00401581 entry=00401581 sig=undefined __cdecl FUN_00401581(UINT param_1, int param_2, int param_3)
00401581  57                   PUSH EDI
00401582  6a01                 PUSH 0x1
00401584  5f                   POP EDI
00401585  393d8c7f4000         CMP dword ptr [0x00407f8c],EDI
0040158b  7511                 JNZ 0x0040159e
0040158d  ff742408             PUSH dword ptr [ESP + 0x8]
00401591  ff155c604000         CALL dword ptr [0x0040605c]
00401597  50                   PUSH EAX
00401598  ff1558604000         CALL dword ptr [0x00406058]
0040159e  837c240c00           CMP dword ptr [ESP + 0xc],0x0
004015a3  53                   PUSH EBX
004015a4  8b5c2414             MOV EBX,dword ptr [ESP + 0x14]
004015a8  893d887f4000         MOV dword ptr [0x00407f88],EDI
004015ae  881d847f4000         MOV byte ptr [0x00407f84],BL
004015b4  753c                 JNZ 0x004015f2
004015b6  a174944000           MOV EAX,[0x00409474]
004015bb  85c0                 TEST EAX,EAX
004015bd  7422                 JZ 0x004015e1
004015bf  8b0d70944000         MOV ECX,dword ptr [0x00409470]
004015c5  56                   PUSH ESI
004015c6  8d71fc               LEA ESI,[ECX + -0x4]
004015c9  3bf0                 CMP ESI,EAX
004015cb  7213                 JC 0x004015e0
004015cd  8b06                 MOV EAX,dword ptr [ESI]
004015cf  85c0                 TEST EAX,EAX
004015d1  7402                 JZ 0x004015d5
004015d3  ffd0                 CALL EAX
004015d5  83ee04               SUB ESI,0x4
004015d8  3b3574944000         CMP ESI,dword ptr [0x00409474]
004015de  73ed                 JNC 0x004015cd
004015e0  5e                   POP ESI
004015e1  6820704000           PUSH 0x407020
004015e6  6818704000           PUSH 0x407018
004015eb  e82a000000           CALL 0x0040161a
004015f0  59                   POP ECX
004015f1  59                   POP ECX
004015f2  6828704000           PUSH 0x407028
004015f7  6824704000           PUSH 0x407024
004015fc  e819000000           CALL 0x0040161a
00401601  59                   POP ECX
00401602  59                   POP ECX
00401603  85db                 TEST EBX,EBX
00401605  5b                   POP EBX
00401606  7510                 JNZ 0x00401618
00401608  ff742408             PUSH dword ptr [ESP + 0x8]
0040160c  893d8c7f4000         MOV dword ptr [0x00407f8c],EDI
00401612  ff1554604000         CALL dword ptr [0x00406054]
00401618  5f                   POP EDI
00401619  c3                   RET

; ==== FUNCTION FUN_0040161a entry=0040161a sig=undefined __cdecl FUN_0040161a(undefined4 * param_1, undefined4 * param_2)
0040161a  56                   PUSH ESI
0040161b  8b742408             MOV ESI,dword ptr [ESP + 0x8]
0040161f  3b74240c             CMP ESI,dword ptr [ESP + 0xc]
00401623  730d                 JNC 0x00401632
00401625  8b06                 MOV EAX,dword ptr [ESI]
00401627  85c0                 TEST EAX,EAX
00401629  7402                 JZ 0x0040162d
0040162b  ffd0                 CALL EAX
0040162d  83c604               ADD ESI,0x4
00401630  ebed                 JMP 0x0040161f
00401632  5e                   POP ESI
00401633  c3                   RET
; undefined 12 bytes at 00401634

; ==== FUNCTION _strncpy entry=00401640 sig=char * __cdecl _strncpy(char * _Dest, char * _Source, size_t _Count)
00401640  8b4c240c             MOV ECX,dword ptr [ESP + 0xc]
00401644  57                   PUSH EDI
00401645  85c9                 TEST ECX,ECX
00401647  747a                 JZ 0x004016c3
00401649  56                   PUSH ESI
0040164a  53                   PUSH EBX
0040164b  8bd9                 MOV EBX,ECX
0040164d  8b742414             MOV ESI,dword ptr [ESP + 0x14]
00401651  f7c603000000         TEST ESI,0x3
00401657  8b7c2410             MOV EDI,dword ptr [ESP + 0x10]
0040165b  7507                 JNZ 0x00401664
0040165d  c1e902               SHR ECX,0x2
00401660  756f                 JNZ 0x004016d1
00401662  eb21                 JMP 0x00401685
00401664  8a06                 MOV AL,byte ptr [ESI]
00401666  46                   INC ESI
00401667  8807                 MOV byte ptr [EDI],AL
00401669  47                   INC EDI
0040166a  49                   DEC ECX
0040166b  7425                 JZ 0x00401692
0040166d  84c0                 TEST AL,AL
0040166f  7429                 JZ 0x0040169a
00401671  f7c603000000         TEST ESI,0x3
00401677  75eb                 JNZ 0x00401664
00401679  8bd9                 MOV EBX,ECX
0040167b  c1e902               SHR ECX,0x2
0040167e  7551                 JNZ 0x004016d1
00401680  83e303               AND EBX,0x3
00401683  740d                 JZ 0x00401692
00401685  8a06                 MOV AL,byte ptr [ESI]
00401687  46                   INC ESI
00401688  8807                 MOV byte ptr [EDI],AL
0040168a  47                   INC EDI
0040168b  84c0                 TEST AL,AL
0040168d  742f                 JZ 0x004016be
0040168f  4b                   DEC EBX
00401690  75f3                 JNZ 0x00401685
00401692  8b442410             MOV EAX,dword ptr [ESP + 0x10]
00401696  5b                   POP EBX
00401697  5e                   POP ESI
00401698  5f                   POP EDI
00401699  c3                   RET
0040169a  f7c703000000         TEST EDI,0x3
004016a0  7412                 JZ 0x004016b4
004016a2  8807                 MOV byte ptr [EDI],AL
004016a4  47                   INC EDI
004016a5  49                   DEC ECX
004016a6  0f848a000000         JZ 0x00401736
004016ac  f7c703000000         TEST EDI,0x3
004016b2  75ee                 JNZ 0x004016a2
004016b4  8bd9                 MOV EBX,ECX
004016b6  c1e902               SHR ECX,0x2
004016b9  756c                 JNZ 0x00401727
004016bb  8807                 MOV byte ptr [EDI],AL
004016bd  47                   INC EDI
004016be  4b                   DEC EBX
004016bf  75fa                 JNZ 0x004016bb
004016c1  5b                   POP EBX
004016c2  5e                   POP ESI
004016c3  8b442408             MOV EAX,dword ptr [ESP + 0x8]
004016c7  5f                   POP EDI
004016c8  c3                   RET
004016c9  8917                 MOV dword ptr [EDI],EDX
004016cb  83c704               ADD EDI,0x4
004016ce  49                   DEC ECX
004016cf  74af                 JZ 0x00401680
004016d1  bafffefe7e           MOV EDX,0x7efefeff
004016d6  8b06                 MOV EAX,dword ptr [ESI]
004016d8  03d0                 ADD EDX,EAX
004016da  83f0ff               XOR EAX,0xffffffff
004016dd  33c2                 XOR EAX,EDX
004016df  8b16                 MOV EDX,dword ptr [ESI]
004016e1  83c604               ADD ESI,0x4
004016e4  a900010181           TEST EAX,0x81010100
004016e9  74de                 JZ 0x004016c9
004016eb  84d2                 TEST DL,DL
004016ed  742c                 JZ 0x0040171b
004016ef  84f6                 TEST DH,DH
004016f1  741e                 JZ 0x00401711
004016f3  f7c20000ff00         TEST EDX,0xff0000
004016f9  740c                 JZ 0x00401707
004016fb  f7c2000000ff         TEST EDX,0xff000000
00401701  75c6                 JNZ 0x004016c9
00401703  8917                 MOV dword ptr [EDI],EDX
00401705  eb18                 JMP 0x0040171f
00401707  81e2ffff0000         AND EDX,0xffff
0040170d  8917                 MOV dword ptr [EDI],EDX
0040170f  eb0e                 JMP 0x0040171f
00401711  81e2ff000000         AND EDX,0xff
00401717  8917                 MOV dword ptr [EDI],EDX
00401719  eb04                 JMP 0x0040171f
0040171b  33d2                 XOR EDX,EDX
0040171d  8917                 MOV dword ptr [EDI],EDX
0040171f  83c704               ADD EDI,0x4
00401722  33c0                 XOR EAX,EAX
00401724  49                   DEC ECX
00401725  740a                 JZ 0x00401731
00401727  33c0                 XOR EAX,EAX
00401729  8907                 MOV dword ptr [EDI],EAX
0040172b  83c704               ADD EDI,0x4
0040172e  49                   DEC ECX
0040172f  75f8                 JNZ 0x00401729
00401731  83e303               AND EBX,0x3
00401734  7585                 JNZ 0x004016bb
00401736  8b442410             MOV EAX,dword ptr [ESP + 0x10]
0040173a  5b                   POP EBX
0040173b  5e                   POP ESI
0040173c  5f                   POP EDI
0040173d  c3                   RET

; ==== FUNCTION entry entry=0040173e sig=undefined __stdcall entry(void)
0040173e  55                   PUSH EBP
0040173f  8bec                 MOV EBP,ESP
00401741  6aff                 PUSH -0x1
00401743  6818614000           PUSH 0x406118
00401748  68902a4000           PUSH 0x402a90
0040174d  64a100000000         MOV EAX,FS:[0x0]
00401753  50                   PUSH EAX
00401754  64892500000000       MOV dword ptr FS:[0x0],ESP
0040175b  83ec58               SUB ESP,0x58
0040175e  53                   PUSH EBX
0040175f  56                   PUSH ESI
00401760  57                   PUSH EDI
00401761  8965e8               MOV dword ptr [EBP + -0x18],ESP
00401764  ff156c604000         CALL dword ptr [0x0040606c]
0040176a  33d2                 XOR EDX,EDX
0040176c  8ad4                 MOV DL,AH
0040176e  89155c7f4000         MOV dword ptr [0x00407f5c],EDX
00401774  8bc8                 MOV ECX,EAX
00401776  81e1ff000000         AND ECX,0xff
0040177c  890d587f4000         MOV dword ptr [0x00407f58],ECX
00401782  c1e108               SHL ECX,0x8
00401785  03ca                 ADD ECX,EDX
00401787  890d547f4000         MOV dword ptr [0x00407f54],ECX
0040178d  c1e810               SHR EAX,0x10
00401790  a3507f4000           MOV [0x00407f50],EAX
00401795  33f6                 XOR ESI,ESI
00401797  56                   PUSH ESI
00401798  e8be110000           CALL 0x0040295b
0040179d  59                   POP ECX
0040179e  85c0                 TEST EAX,EAX
004017a0  7508                 JNZ 0x004017aa
004017a2  6a1c                 PUSH 0x1c
004017a4  e8b0000000           CALL 0x00401859
004017a9  59                   POP ECX
004017aa  8975fc               MOV dword ptr [EBP + -0x4],ESI
004017ad  e8fe0f0000           CALL 0x004027b0
004017b2  ff1568604000         CALL dword ptr [0x00406068]
004017b8  a364944000           MOV [0x00409464],EAX
004017bd  e8bc0e0000           CALL 0x0040267e
004017c2  a3907f4000           MOV [0x00407f90],EAX
004017c7  e8650c0000           CALL 0x00402431
004017cc  e8a70b0000           CALL 0x00402378
004017d1  e85cfdffff           CALL 0x00401532
004017d6  8975d0               MOV dword ptr [EBP + -0x30],ESI
004017d9  8d45a4               LEA EAX,[EBP + -0x5c]
004017dc  50                   PUSH EAX
004017dd  ff1564604000         CALL dword ptr [0x00406064]
004017e3  e8380b0000           CALL 0x00402320
004017e8  89459c               MOV dword ptr [EBP + -0x64],EAX
004017eb  f645d001             TEST byte ptr [EBP + -0x30],0x1
004017ef  7406                 JZ 0x004017f7
004017f1  0fb745d4             MOVZX EAX,word ptr [EBP + -0x2c]
004017f5  eb03                 JMP 0x004017fa
004017f7  6a0a                 PUSH 0xa
004017f9  58                   POP EAX
004017fa  50                   PUSH EAX
004017fb  ff759c               PUSH dword ptr [EBP + -0x64]
004017fe  56                   PUSH ESI
004017ff  56                   PUSH ESI
00401800  ff1560604000         CALL dword ptr [0x00406060]
00401806  50                   PUSH EAX
00401807  e844faffff           CALL 0x00401250
0040180c  8945a0               MOV dword ptr [EBP + -0x60],EAX
0040180f  50                   PUSH EAX
00401810  e84afdffff           CALL 0x0040155f
00401815  8b45ec               MOV EAX,dword ptr [EBP + -0x14]
00401818  8b08                 MOV ECX,dword ptr [EAX]
0040181a  8b09                 MOV ECX,dword ptr [ECX]
0040181c  894d98               MOV dword ptr [EBP + -0x68],ECX
0040181f  50                   PUSH EAX
00401820  51                   PUSH ECX
00401821  e876090000           CALL 0x0040219c
00401826  59                   POP ECX
00401827  59                   POP ECX
00401828  c3                   RET

; ==== FUNCTION FUN_00401829 entry=00401829 sig=undefined __stdcall FUN_00401829(void)
00401829  8b65e8               MOV ESP,dword ptr [EBP + -0x18]
0040182c  ff7598               PUSH dword ptr [EBP + -0x68]
0040182f  e83cfdffff           CALL 0x00401570

; ==== FUNCTION __amsg_exit entry=00401834 sig=void __cdecl __amsg_exit(int param_1)
00401834  833d987f400001       CMP dword ptr [0x00407f98],0x1
0040183b  7505                 JNZ 0x00401842
0040183d  e826130000           CALL 0x00402b68
00401842  ff742404             PUSH dword ptr [ESP + 0x4]
00401846  e856130000           CALL 0x00402ba1
0040184b  68ff000000           PUSH 0xff
00401850  ff1510724000         CALL dword ptr [0x00407210]
00401856  59                   POP ECX
00401857  59                   POP ECX
00401858  c3                   RET

; ==== FUNCTION FUN_00401859 entry=00401859 sig=undefined __cdecl FUN_00401859(DWORD param_1)
00401859  833d987f400001       CMP dword ptr [0x00407f98],0x1
00401860  7505                 JNZ 0x00401867
00401862  e801130000           CALL 0x00402b68
00401867  ff742404             PUSH dword ptr [ESP + 0x4]
0040186b  e831130000           CALL 0x00402ba1
00401870  59                   POP ECX
00401871  68ff000000           PUSH 0xff
00401876  ff1554604000         CALL dword ptr [0x00406054]
0040187c  c3                   RET

; ==== FUNCTION FUN_0040187d entry=0040187d sig=uint __cdecl FUN_0040187d(uint param_1, int * param_2)
0040187d  55                   PUSH EBP
0040187e  8bec                 MOV EBP,ESP
00401880  53                   PUSH EBX
00401881  56                   PUSH ESI
00401882  8b750c               MOV ESI,dword ptr [EBP + 0xc]
00401885  8b460c               MOV EAX,dword ptr [ESI + 0xc]
00401888  8b5e10               MOV EBX,dword ptr [ESI + 0x10]
0040188b  a882                 TEST AL,0x82
0040188d  0f84f3000000         JZ 0x00401986
00401893  a840                 TEST AL,0x40
00401895  0f85eb000000         JNZ 0x00401986
0040189b  a801                 TEST AL,0x1
0040189d  7416                 JZ 0x004018b5
0040189f  83660400             AND dword ptr [ESI + 0x4],0x0
004018a3  a810                 TEST AL,0x10
004018a5  0f84db000000         JZ 0x00401986
004018ab  8b4e08               MOV ECX,dword ptr [ESI + 0x8]
004018ae  24fe                 AND AL,0xfe
004018b0  890e                 MOV dword ptr [ESI],ECX
004018b2  89460c               MOV dword ptr [ESI + 0xc],EAX
004018b5  8b460c               MOV EAX,dword ptr [ESI + 0xc]
004018b8  83660400             AND dword ptr [ESI + 0x4],0x0
004018bc  83650c00             AND dword ptr [EBP + 0xc],0x0
004018c0  24ef                 AND AL,0xef
004018c2  0c02                 OR AL,0x2
004018c4  66a90c01             TEST AX,0x10c
004018c8  89460c               MOV dword ptr [ESI + 0xc],EAX
004018cb  7522                 JNZ 0x004018ef
004018cd  81fe78734000         CMP ESI,0x407378
004018d3  7408                 JZ 0x004018dd
004018d5  81fe98734000         CMP ESI,0x407398
004018db  750b                 JNZ 0x004018e8
004018dd  53                   PUSH EBX
004018de  e89c160000           CALL 0x00402f7f
004018e3  85c0                 TEST EAX,EAX
004018e5  59                   POP ECX
004018e6  7507                 JNZ 0x004018ef
004018e8  56                   PUSH ESI
004018e9  e84d160000           CALL 0x00402f3b
004018ee  59                   POP ECX
004018ef  66f7460c0801         TEST word ptr [ESI + 0xc],0x108
004018f5  57                   PUSH EDI
004018f6  7464                 JZ 0x0040195c
004018f8  8b4608               MOV EAX,dword ptr [ESI + 0x8]
004018fb  8b3e                 MOV EDI,dword ptr [ESI]
004018fd  2bf8                 SUB EDI,EAX
004018ff  8d4801               LEA ECX,[EAX + 0x1]
00401902  890e                 MOV dword ptr [ESI],ECX
00401904  8b4e18               MOV ECX,dword ptr [ESI + 0x18]
00401907  49                   DEC ECX
00401908  85ff                 TEST EDI,EDI
0040190a  894e04               MOV dword ptr [ESI + 0x4],ECX
0040190d  7e10                 JLE 0x0040191f
0040190f  57                   PUSH EDI
00401910  50                   PUSH EAX
00401911  53                   PUSH EBX
00401912  e877140000           CALL 0x00402d8e
00401917  83c40c               ADD ESP,0xc
0040191a  89450c               MOV dword ptr [EBP + 0xc],EAX
0040191d  eb33                 JMP 0x00401952
0040191f  83fbff               CMP EBX,-0x1
00401922  7416                 JZ 0x0040193a
00401924  8bc3                 MOV EAX,EBX
00401926  8bcb                 MOV ECX,EBX
00401928  c1f805               SAR EAX,0x5
0040192b  83e11f               AND ECX,0x1f
0040192e  8b048560934000       MOV EAX,dword ptr [EAX*0x4 + 0x409360]
00401935  8d04c8               LEA EAX,[EAX + ECX*0x8]
00401938  eb05                 JMP 0x0040193f
0040193a  b8a8724000           MOV EAX,0x4072a8
0040193f  f6400420             TEST byte ptr [EAX + 0x4],0x20
00401943  740d                 JZ 0x00401952
00401945  6a02                 PUSH 0x2
00401947  6a00                 PUSH 0x0
00401949  53                   PUSH EBX
0040194a  e8a5130000           CALL 0x00402cf4
0040194f  83c40c               ADD ESP,0xc
00401952  8b4608               MOV EAX,dword ptr [ESI + 0x8]
00401955  8a4d08               MOV CL,byte ptr [EBP + 0x8]
00401958  8808                 MOV byte ptr [EAX],CL
0040195a  eb14                 JMP 0x00401970
0040195c  6a01                 PUSH 0x1
0040195e  8d4508               LEA EAX,[EBP + 0x8]
00401961  5f                   POP EDI
00401962  57                   PUSH EDI
00401963  50                   PUSH EAX
00401964  53                   PUSH EBX
00401965  e824140000           CALL 0x00402d8e
0040196a  83c40c               ADD ESP,0xc
0040196d  89450c               MOV dword ptr [EBP + 0xc],EAX
00401970  397d0c               CMP dword ptr [EBP + 0xc],EDI
00401973  5f                   POP EDI
00401974  7406                 JZ 0x0040197c
00401976  834e0c20             OR dword ptr [ESI + 0xc],0x20
0040197a  eb0f                 JMP 0x0040198b
0040197c  8b4508               MOV EAX,dword ptr [EBP + 0x8]
0040197f  25ff000000           AND EAX,0xff
00401984  eb08                 JMP 0x0040198e
00401986  0c20                 OR AL,0x20
00401988  89460c               MOV dword ptr [ESI + 0xc],EAX
0040198b  83c8ff               OR EAX,0xffffffff
0040198e  5e                   POP ESI
0040198f  5b                   POP EBX
00401990  5d                   POP EBP
00401991  c3                   RET

; ==== FUNCTION FUN_00401992 entry=00401992 sig=int __cdecl FUN_00401992(int * param_1, byte * param_2, undefined4 * param_3)
00401992  55                   PUSH EBP
00401993  8bec                 MOV EBP,ESP
00401995  81ec48020000         SUB ESP,0x248
0040199b  53                   PUSH EBX
0040199c  56                   PUSH ESI
0040199d  57                   PUSH EDI
0040199e  8b7d0c               MOV EDI,dword ptr [EBP + 0xc]
004019a1  33f6                 XOR ESI,ESI
004019a3  8a1f                 MOV BL,byte ptr [EDI]
004019a5  47                   INC EDI
004019a6  84db                 TEST BL,BL
004019a8  8975f4               MOV dword ptr [EBP + -0xc],ESI
004019ab  8975ec               MOV dword ptr [EBP + -0x14],ESI
004019ae  897d0c               MOV dword ptr [EBP + 0xc],EDI
004019b1  0f84f4060000         JZ 0x004020ab
004019b7  8b4df0               MOV ECX,dword ptr [EBP + -0x10]
004019ba  33d2                 XOR EDX,EDX
004019bc  eb08                 JMP 0x004019c6
004019be  8b4df0               MOV ECX,dword ptr [EBP + -0x10]
004019c1  8b75d0               MOV ESI,dword ptr [EBP + -0x30]
004019c4  33d2                 XOR EDX,EDX
004019c6  3955ec               CMP dword ptr [EBP + -0x14],EDX
004019c9  0f8cdc060000         JL 0x004020ab
004019cf  80fb20               CMP BL,0x20
004019d2  7c13                 JL 0x004019e7
004019d4  80fb78               CMP BL,0x78
004019d7  7f0e                 JG 0x004019e7
004019d9  0fbec3               MOVSX EAX,BL
004019dc  8a8004614000         MOV AL,byte ptr [EAX + 0x406104]
004019e2  83e00f               AND EAX,0xf
004019e5  eb02                 JMP 0x004019e9
004019e7  33c0                 XOR EAX,EAX
004019e9  0fbe84c624614000     MOVSX EAX,byte ptr [ESI + EAX*0x8 + 0x406124]
004019f1  c1f804               SAR EAX,0x4
004019f4  83f807               CMP EAX,0x7
004019f7  8945d0               MOV dword ptr [EBP + -0x30],EAX
004019fa  0f879a060000         JA 0x0040209a
switchD_00401a00::switchD:
00401a00  ff2485b3204000       JMP dword ptr [EAX*0x4 + 0x4020b3]
switchD_00401a00::caseD_1:
00401a07  834df0ff             OR dword ptr [EBP + -0x10],0xffffffff
00401a0b  8955cc               MOV dword ptr [EBP + -0x34],EDX
00401a0e  8955d8               MOV dword ptr [EBP + -0x28],EDX
00401a11  8955e0               MOV dword ptr [EBP + -0x20],EDX
00401a14  8955e4               MOV dword ptr [EBP + -0x1c],EDX
00401a17  8955fc               MOV dword ptr [EBP + -0x4],EDX
00401a1a  8955dc               MOV dword ptr [EBP + -0x24],EDX
00401a1d  e978060000           JMP 0x0040209a
switchD_00401a00::caseD_2:
00401a22  0fbec3               MOVSX EAX,BL
00401a25  83e820               SUB EAX,0x20
00401a28  743b                 JZ 0x00401a65
00401a2a  83e803               SUB EAX,0x3
00401a2d  742d                 JZ 0x00401a5c
00401a2f  83e808               SUB EAX,0x8
00401a32  741f                 JZ 0x00401a53
00401a34  48                   DEC EAX
00401a35  48                   DEC EAX
00401a36  7412                 JZ 0x00401a4a
00401a38  83e803               SUB EAX,0x3
00401a3b  0f8559060000         JNZ 0x0040209a
00401a41  834dfc08             OR dword ptr [EBP + -0x4],0x8
00401a45  e950060000           JMP 0x0040209a
00401a4a  834dfc04             OR dword ptr [EBP + -0x4],0x4
00401a4e  e947060000           JMP 0x0040209a
00401a53  834dfc01             OR dword ptr [EBP + -0x4],0x1
00401a57  e93e060000           JMP 0x0040209a
00401a5c  804dfc80             OR byte ptr [EBP + -0x4],0x80
00401a60  e935060000           JMP 0x0040209a
00401a65  834dfc02             OR dword ptr [EBP + -0x4],0x2
00401a69  e92c060000           JMP 0x0040209a
switchD_00401a00::caseD_3:
00401a6e  80fb2a               CMP BL,0x2a
00401a71  7523                 JNZ 0x00401a96
00401a73  8d4510               LEA EAX,[EBP + 0x10]
00401a76  50                   PUSH EAX
00401a77  e8f5060000           CALL 0x00402171
00401a7c  85c0                 TEST EAX,EAX
00401a7e  59                   POP ECX
00401a7f  8945e0               MOV dword ptr [EBP + -0x20],EAX
00401a82  0f8d12060000         JGE 0x0040209a
00401a88  834dfc04             OR dword ptr [EBP + -0x4],0x4
00401a8c  f7d8                 NEG EAX
00401a8e  8945e0               MOV dword ptr [EBP + -0x20],EAX
00401a91  e904060000           JMP 0x0040209a
00401a96  8b45e0               MOV EAX,dword ptr [EBP + -0x20]
00401a99  0fbecb               MOVSX ECX,BL
00401a9c  8d0480               LEA EAX,[EAX + EAX*0x4]
00401a9f  8d4441d0             LEA EAX,[ECX + EAX*0x2 + -0x30]
00401aa3  ebe9                 JMP 0x00401a8e
switchD_00401a00::caseD_4:
00401aa5  8955f0               MOV dword ptr [EBP + -0x10],EDX
00401aa8  e9ed050000           JMP 0x0040209a
switchD_00401a00::caseD_5:
00401aad  80fb2a               CMP BL,0x2a
00401ab0  751e                 JNZ 0x00401ad0
00401ab2  8d4510               LEA EAX,[EBP + 0x10]
00401ab5  50                   PUSH EAX
00401ab6  e8b6060000           CALL 0x00402171
00401abb  85c0                 TEST EAX,EAX
00401abd  59                   POP ECX
00401abe  8945f0               MOV dword ptr [EBP + -0x10],EAX
00401ac1  0f8dd3050000         JGE 0x0040209a
00401ac7  834df0ff             OR dword ptr [EBP + -0x10],0xffffffff
00401acb  e9ca050000           JMP 0x0040209a
00401ad0  8d0489               LEA EAX,[ECX + ECX*0x4]
00401ad3  0fbecb               MOVSX ECX,BL
00401ad6  8d4441d0             LEA EAX,[ECX + EAX*0x2 + -0x30]
00401ada  8945f0               MOV dword ptr [EBP + -0x10],EAX
00401add  e9b8050000           JMP 0x0040209a
switchD_00401a00::caseD_6:
00401ae2  80fb49               CMP BL,0x49
00401ae5  742e                 JZ 0x00401b15
00401ae7  80fb68               CMP BL,0x68
00401aea  7420                 JZ 0x00401b0c
00401aec  80fb6c               CMP BL,0x6c
00401aef  7412                 JZ 0x00401b03
00401af1  80fb77               CMP BL,0x77
00401af4  0f85a0050000         JNZ 0x0040209a
00401afa  804dfd08             OR byte ptr [EBP + -0x3],0x8
00401afe  e997050000           JMP 0x0040209a
00401b03  834dfc10             OR dword ptr [EBP + -0x4],0x10
00401b07  e98e050000           JMP 0x0040209a
00401b0c  834dfc20             OR dword ptr [EBP + -0x4],0x20
00401b10  e985050000           JMP 0x0040209a
00401b15  803f36               CMP byte ptr [EDI],0x36
00401b18  7514                 JNZ 0x00401b2e
00401b1a  807f0134             CMP byte ptr [EDI + 0x1],0x34
00401b1e  750e                 JNZ 0x00401b2e
00401b20  47                   INC EDI
00401b21  47                   INC EDI
00401b22  804dfd80             OR byte ptr [EBP + -0x3],0x80
00401b26  897d0c               MOV dword ptr [EBP + 0xc],EDI
00401b29  e96c050000           JMP 0x0040209a
00401b2e  8955d0               MOV dword ptr [EBP + -0x30],EDX
switchD_00401a00::caseD_0:
00401b31  8b0df8754000         MOV ECX,dword ptr [0x004075f8]
00401b37  8955dc               MOV dword ptr [EBP + -0x24],EDX
00401b3a  0fb6c3               MOVZX EAX,BL
00401b3d  f644410180           TEST byte ptr [ECX + EAX*0x2 + 0x1],0x80
00401b42  7419                 JZ 0x00401b5d
00401b44  8d45ec               LEA EAX,[EBP + -0x14]
00401b47  50                   PUSH EAX
00401b48  ff7508               PUSH dword ptr [EBP + 0x8]
00401b4b  0fbec3               MOVSX EAX,BL
00401b4e  50                   PUSH EAX
00401b4f  e87f050000           CALL 0x004020d3
00401b54  8a1f                 MOV BL,byte ptr [EDI]
00401b56  83c40c               ADD ESP,0xc
00401b59  47                   INC EDI
00401b5a  897d0c               MOV dword ptr [EBP + 0xc],EDI
00401b5d  8d45ec               LEA EAX,[EBP + -0x14]
00401b60  50                   PUSH EAX
00401b61  ff7508               PUSH dword ptr [EBP + 0x8]
00401b64  0fbec3               MOVSX EAX,BL
00401b67  50                   PUSH EAX
00401b68  e866050000           CALL 0x004020d3
00401b6d  83c40c               ADD ESP,0xc
00401b70  e925050000           JMP 0x0040209a
switchD_00401a00::caseD_7:
00401b75  0fbec3               MOVSX EAX,BL
00401b78  83f867               CMP EAX,0x67
00401b7b  0f8f1c020000         JG 0x00401d9d
00401b81  83f865               CMP EAX,0x65
00401b84  0f8d96000000         JGE 0x00401c20
00401b8a  83f858               CMP EAX,0x58
00401b8d  0f8feb000000         JG 0x00401c7e
00401b93  0f8478020000         JZ 0x00401e11
00401b99  83e843               SUB EAX,0x43
00401b9c  0f849f000000         JZ 0x00401c41
00401ba2  48                   DEC EAX
00401ba3  48                   DEC EAX
00401ba4  7470                 JZ 0x00401c16
00401ba6  48                   DEC EAX
00401ba7  48                   DEC EAX
00401ba8  746c                 JZ 0x00401c16
00401baa  83e80c               SUB EAX,0xc
00401bad  0f85e9030000         JNZ 0x00401f9c
00401bb3  66f745fc3008         TEST word ptr [EBP + -0x4],0x830
00401bb9  7504                 JNZ 0x00401bbf
00401bbb  804dfd08             OR byte ptr [EBP + -0x3],0x8
00401bbf  8b75f0               MOV ESI,dword ptr [EBP + -0x10]
00401bc2  83feff               CMP ESI,-0x1
00401bc5  7505                 JNZ 0x00401bcc
00401bc7  beffffff7f           MOV ESI,0x7fffffff
00401bcc  8d4510               LEA EAX,[EBP + 0x10]
00401bcf  50                   PUSH EAX
00401bd0  e89c050000           CALL 0x00402171
00401bd5  66f745fc1008         TEST word ptr [EBP + -0x4],0x810
00401bdb  59                   POP ECX
00401bdc  8bc8                 MOV ECX,EAX
00401bde  894df8               MOV dword ptr [EBP + -0x8],ECX
00401be1  0f84fe010000         JZ 0x00401de5
00401be7  85c9                 TEST ECX,ECX
00401be9  7509                 JNZ 0x00401bf4
00401beb  8b0d1c724000         MOV ECX,dword ptr [0x0040721c]
00401bf1  894df8               MOV dword ptr [EBP + -0x8],ECX
00401bf4  c745dc01000000       MOV dword ptr [EBP + -0x24],0x1
00401bfb  8bc1                 MOV EAX,ECX
00401bfd  8bd6                 MOV EDX,ESI
00401bff  4e                   DEC ESI
00401c00  85d2                 TEST EDX,EDX
00401c02  0f84d4010000         JZ 0x00401ddc
00401c08  66833800             CMP word ptr [EAX],0x0
00401c0c  0f84ca010000         JZ 0x00401ddc
00401c12  40                   INC EAX
00401c13  40                   INC EAX
00401c14  ebe7                 JMP 0x00401bfd
00401c16  c745cc01000000       MOV dword ptr [EBP + -0x34],0x1
00401c1d  80c320               ADD BL,0x20
00401c20  834dfc40             OR dword ptr [EBP + -0x4],0x40
00401c24  8dbdb8fdffff         LEA EDI,[EBP + 0xfffffdb8]
00401c2a  3bca                 CMP ECX,EDX
00401c2c  897df8               MOV dword ptr [EBP + -0x8],EDI
00401c2f  0f8dcf000000         JGE 0x00401d04
00401c35  c745f006000000       MOV dword ptr [EBP + -0x10],0x6
00401c3c  e9d1000000           JMP 0x00401d12
00401c41  66f745fc3008         TEST word ptr [EBP + -0x4],0x830
00401c47  7504                 JNZ 0x00401c4d
00401c49  804dfd08             OR byte ptr [EBP + -0x3],0x8
00401c4d  66f745fc1008         TEST word ptr [EBP + -0x4],0x810
00401c53  8d4510               LEA EAX,[EBP + 0x10]
00401c56  50                   PUSH EAX
00401c57  743b                 JZ 0x00401c94
00401c59  e830050000           CALL 0x0040218e
00401c5e  50                   PUSH EAX
00401c5f  8d85b8fdffff         LEA EAX,[EBP + 0xfffffdb8]
00401c65  50                   PUSH EAX
00401c66  e870140000           CALL 0x004030db
00401c6b  83c40c               ADD ESP,0xc
00401c6e  8945f4               MOV dword ptr [EBP + -0xc],EAX
00401c71  85c0                 TEST EAX,EAX
00401c73  7d32                 JGE 0x00401ca7
00401c75  c745d801000000       MOV dword ptr [EBP + -0x28],0x1
00401c7c  eb29                 JMP 0x00401ca7
00401c7e  83e85a               SUB EAX,0x5a
00401c81  7432                 JZ 0x00401cb5
00401c83  83e809               SUB EAX,0x9
00401c86  74c5                 JZ 0x00401c4d
00401c88  48                   DEC EAX
00401c89  0f84e8010000         JZ 0x00401e77
00401c8f  e908030000           JMP 0x00401f9c
00401c94  e8d8040000           CALL 0x00402171
00401c99  59                   POP ECX
00401c9a  8885b8fdffff         MOV byte ptr [EBP + 0xfffffdb8],AL
00401ca0  c745f401000000       MOV dword ptr [EBP + -0xc],0x1
00401ca7  8d85b8fdffff         LEA EAX,[EBP + 0xfffffdb8]
00401cad  8945f8               MOV dword ptr [EBP + -0x8],EAX
00401cb0  e9e7020000           JMP 0x00401f9c
00401cb5  8d4510               LEA EAX,[EBP + 0x10]
00401cb8  50                   PUSH EAX
00401cb9  e8b3040000           CALL 0x00402171
00401cbe  85c0                 TEST EAX,EAX
00401cc0  59                   POP ECX
00401cc1  7433                 JZ 0x00401cf6
00401cc3  8b4804               MOV ECX,dword ptr [EAX + 0x4]
00401cc6  85c9                 TEST ECX,ECX
00401cc8  742c                 JZ 0x00401cf6
00401cca  f645fd08             TEST byte ptr [EBP + -0x3],0x8
00401cce  7417                 JZ 0x00401ce7
00401cd0  0fbf00               MOVSX EAX,word ptr [EAX]
00401cd3  d1e8                 SHR EAX,0x1
00401cd5  894df8               MOV dword ptr [EBP + -0x8],ECX
00401cd8  8945f4               MOV dword ptr [EBP + -0xc],EAX
00401cdb  c745dc01000000       MOV dword ptr [EBP + -0x24],0x1
00401ce2  e9b5020000           JMP 0x00401f9c
00401ce7  8365dc00             AND dword ptr [EBP + -0x24],0x0
00401ceb  894df8               MOV dword ptr [EBP + -0x8],ECX
00401cee  0fbf00               MOVSX EAX,word ptr [EAX]
00401cf1  e9a3020000           JMP 0x00401f99
00401cf6  a118724000           MOV EAX,[0x00407218]
00401cfb  8945f8               MOV dword ptr [EBP + -0x8],EAX
00401cfe  50                   PUSH EAX
00401cff  e98e000000           JMP 0x00401d92
00401d04  750c                 JNZ 0x00401d12
00401d06  80fb67               CMP BL,0x67
00401d09  7507                 JNZ 0x00401d12
00401d0b  c745f001000000       MOV dword ptr [EBP + -0x10],0x1
00401d12  8b4510               MOV EAX,dword ptr [EBP + 0x10]
00401d15  ff75cc               PUSH dword ptr [EBP + -0x34]
00401d18  83c008               ADD EAX,0x8
00401d1b  894510               MOV dword ptr [EBP + 0x10],EAX
00401d1e  ff75f0               PUSH dword ptr [EBP + -0x10]
00401d21  8b48f8               MOV ECX,dword ptr [EAX + -0x8]
00401d24  894db8               MOV dword ptr [EBP + -0x48],ECX
00401d27  8b40fc               MOV EAX,dword ptr [EAX + -0x4]
00401d2a  8945bc               MOV dword ptr [EBP + -0x44],EAX
00401d2d  0fbec3               MOVSX EAX,BL
00401d30  50                   PUSH EAX
00401d31  8d85b8fdffff         LEA EAX,[EBP + 0xfffffdb8]
00401d37  50                   PUSH EAX
00401d38  8d45b8               LEA EAX,[EBP + -0x48]
00401d3b  50                   PUSH EAX
00401d3c  ff15e0754000         CALL dword ptr [0x004075e0]
00401d42  8b75fc               MOV ESI,dword ptr [EBP + -0x4]
00401d45  83c414               ADD ESP,0x14
00401d48  81e680000000         AND ESI,0x80
00401d4e  7414                 JZ 0x00401d64
00401d50  837df000             CMP dword ptr [EBP + -0x10],0x0
00401d54  750e                 JNZ 0x00401d64
00401d56  8d85b8fdffff         LEA EAX,[EBP + 0xfffffdb8]
00401d5c  50                   PUSH EAX
00401d5d  ff15ec754000         CALL dword ptr [0x004075ec]
00401d63  59                   POP ECX
00401d64  80fb67               CMP BL,0x67
00401d67  7512                 JNZ 0x00401d7b
00401d69  85f6                 TEST ESI,ESI
00401d6b  750e                 JNZ 0x00401d7b
00401d6d  8d85b8fdffff         LEA EAX,[EBP + 0xfffffdb8]
00401d73  50                   PUSH EAX
00401d74  ff15e4754000         CALL dword ptr [0x004075e4]
00401d7a  59                   POP ECX
00401d7b  80bdb8fdffff2d       CMP byte ptr [EBP + 0xfffffdb8],0x2d
00401d82  750d                 JNZ 0x00401d91
00401d84  804dfd01             OR byte ptr [EBP + -0x3],0x1
00401d88  8dbdb9fdffff         LEA EDI,[EBP + 0xfffffdb9]
00401d8e  897df8               MOV dword ptr [EBP + -0x8],EDI
00401d91  57                   PUSH EDI
00401d92  e8c9120000           CALL 0x00403060
00401d97  59                   POP ECX
00401d98  e9fc010000           JMP 0x00401f99
00401d9d  83e869               SUB EAX,0x69
00401da0  0f84d1000000         JZ 0x00401e77
00401da6  83e805               SUB EAX,0x5
00401da9  0f849e000000         JZ 0x00401e4d
00401daf  48                   DEC EAX
00401db0  0f8484000000         JZ 0x00401e3a
00401db6  48                   DEC EAX
00401db7  7451                 JZ 0x00401e0a
00401db9  83e803               SUB EAX,0x3
00401dbc  0f84fdfdffff         JZ 0x00401bbf
00401dc2  48                   DEC EAX
00401dc3  48                   DEC EAX
00401dc4  0f84b1000000         JZ 0x00401e7b
00401dca  83e803               SUB EAX,0x3
00401dcd  0f85c9010000         JNZ 0x00401f9c
00401dd3  c745d427000000       MOV dword ptr [EBP + -0x2c],0x27
00401dda  eb3c                 JMP 0x00401e18
00401ddc  2bc1                 SUB EAX,ECX
00401dde  d1f8                 SAR EAX,0x1
00401de0  e9b4010000           JMP 0x00401f99
00401de5  85c9                 TEST ECX,ECX
00401de7  7509                 JNZ 0x00401df2
00401de9  8b0d18724000         MOV ECX,dword ptr [0x00407218]
00401def  894df8               MOV dword ptr [EBP + -0x8],ECX
00401df2  8bc1                 MOV EAX,ECX
00401df4  8bd6                 MOV EDX,ESI
00401df6  4e                   DEC ESI
00401df7  85d2                 TEST EDX,EDX
00401df9  7408                 JZ 0x00401e03
00401dfb  803800               CMP byte ptr [EAX],0x0
00401dfe  7403                 JZ 0x00401e03
00401e00  40                   INC EAX
00401e01  ebf1                 JMP 0x00401df4
00401e03  2bc1                 SUB EAX,ECX
00401e05  e98f010000           JMP 0x00401f99
00401e0a  c745f008000000       MOV dword ptr [EBP + -0x10],0x8
00401e11  c745d407000000       MOV dword ptr [EBP + -0x2c],0x7
00401e18  f645fc80             TEST byte ptr [EBP + -0x4],0x80
00401e1c  c745f410000000       MOV dword ptr [EBP + -0xc],0x10
00401e23  745d                 JZ 0x00401e82
00401e25  8a45d4               MOV AL,byte ptr [EBP + -0x2c]
00401e28  c645ea30             MOV byte ptr [EBP + -0x16],0x30
00401e2c  0451                 ADD AL,0x51
00401e2e  c745e402000000       MOV dword ptr [EBP + -0x1c],0x2
00401e35  8845eb               MOV byte ptr [EBP + -0x15],AL
00401e38  eb48                 JMP 0x00401e82
00401e3a  f645fc80             TEST byte ptr [EBP + -0x4],0x80
00401e3e  c745f408000000       MOV dword ptr [EBP + -0xc],0x8
00401e45  743b                 JZ 0x00401e82
00401e47  804dfd02             OR byte ptr [EBP + -0x3],0x2
00401e4b  eb35                 JMP 0x00401e82
00401e4d  8d4510               LEA EAX,[EBP + 0x10]
00401e50  50                   PUSH EAX
00401e51  e81b030000           CALL 0x00402171
00401e56  f645fc20             TEST byte ptr [EBP + -0x4],0x20
00401e5a  59                   POP ECX
00401e5b  7409                 JZ 0x00401e66
00401e5d  668b4dec             MOV CX,word ptr [EBP + -0x14]
00401e61  668908               MOV word ptr [EAX],CX
00401e64  eb05                 JMP 0x00401e6b
00401e66  8b4dec               MOV ECX,dword ptr [EBP + -0x14]
00401e69  8908                 MOV dword ptr [EAX],ECX
00401e6b  c745d801000000       MOV dword ptr [EBP + -0x28],0x1
00401e72  e923020000           JMP 0x0040209a
00401e77  834dfc40             OR dword ptr [EBP + -0x4],0x40
00401e7b  c745f40a000000       MOV dword ptr [EBP + -0xc],0xa
00401e82  f645fd80             TEST byte ptr [EBP + -0x3],0x80
00401e86  740c                 JZ 0x00401e94
00401e88  8d4510               LEA EAX,[EBP + 0x10]
00401e8b  50                   PUSH EAX
00401e8c  e8ed020000           CALL 0x0040217e
00401e91  59                   POP ECX
00401e92  eb41                 JMP 0x00401ed5
00401e94  f645fc20             TEST byte ptr [EBP + -0x4],0x20
00401e98  7421                 JZ 0x00401ebb
00401e9a  f645fc40             TEST byte ptr [EBP + -0x4],0x40
00401e9e  8d4510               LEA EAX,[EBP + 0x10]
00401ea1  50                   PUSH EAX
00401ea2  740c                 JZ 0x00401eb0
00401ea4  e8c8020000           CALL 0x00402171
00401ea9  59                   POP ECX
00401eaa  0fbfc0               MOVSX EAX,AX
00401ead  99                   CDQ
00401eae  eb25                 JMP 0x00401ed5
00401eb0  e8bc020000           CALL 0x00402171
00401eb5  59                   POP ECX
00401eb6  0fb7c0               MOVZX EAX,AX
00401eb9  ebf2                 JMP 0x00401ead
00401ebb  f645fc40             TEST byte ptr [EBP + -0x4],0x40
00401ebf  8d4510               LEA EAX,[EBP + 0x10]
00401ec2  50                   PUSH EAX
00401ec3  7408                 JZ 0x00401ecd
00401ec5  e8a7020000           CALL 0x00402171
00401eca  59                   POP ECX
00401ecb  ebe0                 JMP 0x00401ead
00401ecd  e89f020000           CALL 0x00402171
00401ed2  59                   POP ECX
00401ed3  33d2                 XOR EDX,EDX
00401ed5  f645fc40             TEST byte ptr [EBP + -0x4],0x40
00401ed9  741b                 JZ 0x00401ef6
00401edb  85d2                 TEST EDX,EDX
00401edd  7f17                 JG 0x00401ef6
00401edf  7c04                 JL 0x00401ee5
00401ee1  85c0                 TEST EAX,EAX
00401ee3  7311                 JNC 0x00401ef6
00401ee5  f7d8                 NEG EAX
00401ee7  83d200               ADC EDX,0x0
00401eea  8bf0                 MOV ESI,EAX
00401eec  f7da                 NEG EDX
00401eee  804dfd01             OR byte ptr [EBP + -0x3],0x1
00401ef2  8bfa                 MOV EDI,EDX
00401ef4  eb04                 JMP 0x00401efa
00401ef6  8bf0                 MOV ESI,EAX
00401ef8  8bfa                 MOV EDI,EDX
00401efa  f645fd80             TEST byte ptr [EBP + -0x3],0x80
00401efe  7503                 JNZ 0x00401f03
00401f00  83e700               AND EDI,0x0
00401f03  837df000             CMP dword ptr [EBP + -0x10],0x0
00401f07  7d09                 JGE 0x00401f12
00401f09  c745f001000000       MOV dword ptr [EBP + -0x10],0x1
00401f10  eb04                 JMP 0x00401f16
00401f12  8365fcf7             AND dword ptr [EBP + -0x4],0xfffffff7
00401f16  8bc6                 MOV EAX,ESI
00401f18  0bc7                 OR EAX,EDI
00401f1a  7504                 JNZ 0x00401f20
00401f1c  8365e400             AND dword ptr [EBP + -0x1c],0x0
00401f20  8d45b7               LEA EAX,[EBP + -0x49]
00401f23  8945f8               MOV dword ptr [EBP + -0x8],EAX
00401f26  8b45f0               MOV EAX,dword ptr [EBP + -0x10]
00401f29  ff4df0               DEC dword ptr [EBP + -0x10]
00401f2c  85c0                 TEST EAX,EAX
00401f2e  7f06                 JG 0x00401f36
00401f30  8bc6                 MOV EAX,ESI
00401f32  0bc7                 OR EAX,EDI
00401f34  743b                 JZ 0x00401f71
00401f36  8b45f4               MOV EAX,dword ptr [EBP + -0xc]
00401f39  99                   CDQ
00401f3a  52                   PUSH EDX
00401f3b  50                   PUSH EAX
00401f3c  57                   PUSH EDI
00401f3d  56                   PUSH ESI
00401f3e  8945c0               MOV dword ptr [EBP + -0x40],EAX
00401f41  8955c4               MOV dword ptr [EBP + -0x3c],EDX
00401f44  e877120000           CALL 0x004031c0
00401f49  ff75c4               PUSH dword ptr [EBP + -0x3c]
00401f4c  8bd8                 MOV EBX,EAX
00401f4e  83c330               ADD EBX,0x30
00401f51  ff75c0               PUSH dword ptr [EBP + -0x40]
00401f54  57                   PUSH EDI
00401f55  56                   PUSH ESI
00401f56  e8f5110000           CALL 0x00403150
00401f5b  83fb39               CMP EBX,0x39
00401f5e  8bf0                 MOV ESI,EAX
00401f60  8bfa                 MOV EDI,EDX
00401f62  7e03                 JLE 0x00401f67
00401f64  035dd4               ADD EBX,dword ptr [EBP + -0x2c]
00401f67  8b45f8               MOV EAX,dword ptr [EBP + -0x8]
00401f6a  ff4df8               DEC dword ptr [EBP + -0x8]
00401f6d  8818                 MOV byte ptr [EAX],BL
00401f6f  ebb5                 JMP 0x00401f26
00401f71  8d45b7               LEA EAX,[EBP + -0x49]
00401f74  2b45f8               SUB EAX,dword ptr [EBP + -0x8]
00401f77  ff45f8               INC dword ptr [EBP + -0x8]
00401f7a  f645fd02             TEST byte ptr [EBP + -0x3],0x2
00401f7e  8945f4               MOV dword ptr [EBP + -0xc],EAX
00401f81  7419                 JZ 0x00401f9c
00401f83  8b4df8               MOV ECX,dword ptr [EBP + -0x8]
00401f86  803930               CMP byte ptr [ECX],0x30
00401f89  7504                 JNZ 0x00401f8f
00401f8b  85c0                 TEST EAX,EAX
00401f8d  750d                 JNZ 0x00401f9c
00401f8f  ff4df8               DEC dword ptr [EBP + -0x8]
00401f92  40                   INC EAX
00401f93  8b4df8               MOV ECX,dword ptr [EBP + -0x8]
00401f96  c60130               MOV byte ptr [ECX],0x30
00401f99  8945f4               MOV dword ptr [EBP + -0xc],EAX
00401f9c  837dd800             CMP dword ptr [EBP + -0x28],0x0
00401fa0  0f85f4000000         JNZ 0x0040209a
00401fa6  8b5dfc               MOV EBX,dword ptr [EBP + -0x4]
00401fa9  f6c340               TEST BL,0x40
00401fac  7426                 JZ 0x00401fd4
00401fae  f6c701               TEST BH,0x1
00401fb1  7406                 JZ 0x00401fb9
00401fb3  c645ea2d             MOV byte ptr [EBP + -0x16],0x2d
00401fb7  eb14                 JMP 0x00401fcd
00401fb9  f6c301               TEST BL,0x1
00401fbc  7406                 JZ 0x00401fc4
00401fbe  c645ea2b             MOV byte ptr [EBP + -0x16],0x2b
00401fc2  eb09                 JMP 0x00401fcd
00401fc4  f6c302               TEST BL,0x2
00401fc7  740b                 JZ 0x00401fd4
00401fc9  c645ea20             MOV byte ptr [EBP + -0x16],0x20
00401fcd  c745e401000000       MOV dword ptr [EBP + -0x1c],0x1
00401fd4  8b75e0               MOV ESI,dword ptr [EBP + -0x20]
00401fd7  2b75e4               SUB ESI,dword ptr [EBP + -0x1c]
00401fda  2b75f4               SUB ESI,dword ptr [EBP + -0xc]
00401fdd  f6c30c               TEST BL,0xc
00401fe0  7512                 JNZ 0x00401ff4
00401fe2  8d45ec               LEA EAX,[EBP + -0x14]
00401fe5  50                   PUSH EAX
00401fe6  ff7508               PUSH dword ptr [EBP + 0x8]
00401fe9  56                   PUSH ESI
00401fea  6a20                 PUSH 0x20
00401fec  e817010000           CALL 0x00402108
00401ff1  83c410               ADD ESP,0x10
00401ff4  8d45ec               LEA EAX,[EBP + -0x14]
00401ff7  50                   PUSH EAX
00401ff8  8d45ea               LEA EAX,[EBP + -0x16]
00401ffb  ff7508               PUSH dword ptr [EBP + 0x8]
00401ffe  ff75e4               PUSH dword ptr [EBP + -0x1c]
00402001  50                   PUSH EAX
00402002  e832010000           CALL 0x00402139
00402007  83c410               ADD ESP,0x10
0040200a  f6c308               TEST BL,0x8
0040200d  7417                 JZ 0x00402026
0040200f  f6c304               TEST BL,0x4
00402012  7512                 JNZ 0x00402026
00402014  8d45ec               LEA EAX,[EBP + -0x14]
00402017  50                   PUSH EAX
00402018  ff7508               PUSH dword ptr [EBP + 0x8]
0040201b  56                   PUSH ESI
0040201c  6a30                 PUSH 0x30
0040201e  e8e5000000           CALL 0x00402108
00402023  83c410               ADD ESP,0x10
00402026  837ddc00             CMP dword ptr [EBP + -0x24],0x0
0040202a  7441                 JZ 0x0040206d
0040202c  837df400             CMP dword ptr [EBP + -0xc],0x0
00402030  7e3b                 JLE 0x0040206d
00402032  8b45f4               MOV EAX,dword ptr [EBP + -0xc]
00402035  8b5df8               MOV EBX,dword ptr [EBP + -0x8]
00402038  8d78ff               LEA EDI,[EAX + -0x1]
0040203b  668b03               MOV AX,word ptr [EBX]
0040203e  43                   INC EBX
0040203f  50                   PUSH EAX
00402040  8d45c8               LEA EAX,[EBP + -0x38]
00402043  50                   PUSH EAX
00402044  43                   INC EBX
00402045  e891100000           CALL 0x004030db
0040204a  59                   POP ECX
0040204b  85c0                 TEST EAX,EAX
0040204d  59                   POP ECX
0040204e  7e32                 JLE 0x00402082
00402050  8d4dec               LEA ECX,[EBP + -0x14]
00402053  51                   PUSH ECX
00402054  ff7508               PUSH dword ptr [EBP + 0x8]
00402057  50                   PUSH EAX
00402058  8d45c8               LEA EAX,[EBP + -0x38]
0040205b  50                   PUSH EAX
0040205c  e8d8000000           CALL 0x00402139
00402061  83c410               ADD ESP,0x10
00402064  8bc7                 MOV EAX,EDI
00402066  4f                   DEC EDI
00402067  85c0                 TEST EAX,EAX
00402069  75d0                 JNZ 0x0040203b
0040206b  eb15                 JMP 0x00402082
0040206d  8d45ec               LEA EAX,[EBP + -0x14]
00402070  50                   PUSH EAX
00402071  ff7508               PUSH dword ptr [EBP + 0x8]
00402074  ff75f4               PUSH dword ptr [EBP + -0xc]
00402077  ff75f8               PUSH dword ptr [EBP + -0x8]
0040207a  e8ba000000           CALL 0x00402139
0040207f  83c410               ADD ESP,0x10
00402082  f645fc04             TEST byte ptr [EBP + -0x4],0x4
00402086  7412                 JZ 0x0040209a
00402088  8d45ec               LEA EAX,[EBP + -0x14]
0040208b  50                   PUSH EAX
0040208c  ff7508               PUSH dword ptr [EBP + 0x8]
0040208f  56                   PUSH ESI
00402090  6a20                 PUSH 0x20
00402092  e871000000           CALL 0x00402108
00402097  83c410               ADD ESP,0x10
switchD_00401a00::default:
0040209a  8b7d0c               MOV EDI,dword ptr [EBP + 0xc]
0040209d  8a1f                 MOV BL,byte ptr [EDI]
0040209f  47                   INC EDI
004020a0  84db                 TEST BL,BL
004020a2  897d0c               MOV dword ptr [EBP + 0xc],EDI
004020a5  0f8513f9ffff         JNZ 0x004019be
004020ab  8b45ec               MOV EAX,dword ptr [EBP + -0x14]
004020ae  5f                   POP EDI
004020af  5e                   POP ESI
004020b0  5b                   POP EBX
004020b1  c9                   LEAVE
004020b2  c3                   RET
switchD_00401a00::switchdataD_004020b3:
004020b3  addr 00401b31
004020b7  addr 00401a07
004020bb  addr 00401a22
004020bf  addr 00401a6e
004020c3  addr 00401aa5
004020c7  addr 00401aad
004020cb  addr 00401ae2
004020cf  addr 00401b75

; ==== FUNCTION FUN_004020d3 entry=004020d3 sig=undefined __cdecl FUN_004020d3(uint param_1, int * param_2, int * param_3)
004020d3  55                   PUSH EBP
004020d4  8bec                 MOV EBP,ESP
004020d6  8b4d0c               MOV ECX,dword ptr [EBP + 0xc]
004020d9  ff4904               DEC dword ptr [ECX + 0x4]
004020dc  780e                 JS 0x004020ec
004020de  8b11                 MOV EDX,dword ptr [ECX]
004020e0  8a4508               MOV AL,byte ptr [EBP + 0x8]
004020e3  8802                 MOV byte ptr [EDX],AL
004020e5  ff01                 INC dword ptr [ECX]
004020e7  0fb6c0               MOVZX EAX,AL
004020ea  eb0b                 JMP 0x004020f7
004020ec  51                   PUSH ECX
004020ed  ff7508               PUSH dword ptr [EBP + 0x8]
004020f0  e888f7ffff           CALL 0x0040187d
004020f5  59                   POP ECX
004020f6  59                   POP ECX
004020f7  83f8ff               CMP EAX,-0x1
004020fa  8b4510               MOV EAX,dword ptr [EBP + 0x10]
004020fd  7505                 JNZ 0x00402104
004020ff  8308ff               OR dword ptr [EAX],0xffffffff
00402102  5d                   POP EBP
00402103  c3                   RET
00402104  ff00                 INC dword ptr [EAX]
00402106  5d                   POP EBP
00402107  c3                   RET

; ==== FUNCTION FUN_00402108 entry=00402108 sig=undefined __cdecl FUN_00402108(uint param_1, int param_2, int * param_3, int * param_4)
00402108  56                   PUSH ESI
00402109  57                   PUSH EDI
0040210a  8b7c2410             MOV EDI,dword ptr [ESP + 0x10]
0040210e  8bc7                 MOV EAX,EDI
00402110  4f                   DEC EDI
00402111  85c0                 TEST EAX,EAX
00402113  7e21                 JLE 0x00402136
00402115  8b742418             MOV ESI,dword ptr [ESP + 0x18]
00402119  56                   PUSH ESI
0040211a  ff742418             PUSH dword ptr [ESP + 0x18]
0040211e  ff742414             PUSH dword ptr [ESP + 0x14]
00402122  e8acffffff           CALL 0x004020d3
00402127  83c40c               ADD ESP,0xc
0040212a  833eff               CMP dword ptr [ESI],-0x1
0040212d  7407                 JZ 0x00402136
0040212f  8bc7                 MOV EAX,EDI
00402131  4f                   DEC EDI
00402132  85c0                 TEST EAX,EAX
00402134  7fe3                 JG 0x00402119
00402136  5f                   POP EDI
00402137  5e                   POP ESI
00402138  c3                   RET

; ==== FUNCTION FUN_00402139 entry=00402139 sig=undefined __cdecl FUN_00402139(char * param_1, int param_2, int * param_3, int * param_4)
00402139  53                   PUSH EBX
0040213a  8b5c240c             MOV EBX,dword ptr [ESP + 0xc]
0040213e  8bc3                 MOV EAX,EBX
00402140  4b                   DEC EBX
00402141  56                   PUSH ESI
00402142  57                   PUSH EDI
00402143  85c0                 TEST EAX,EAX
00402145  7e26                 JLE 0x0040216d
00402147  8b7c241c             MOV EDI,dword ptr [ESP + 0x1c]
0040214b  8b742410             MOV ESI,dword ptr [ESP + 0x10]
0040214f  0fbe06               MOVSX EAX,byte ptr [ESI]
00402152  57                   PUSH EDI
00402153  46                   INC ESI
00402154  ff74241c             PUSH dword ptr [ESP + 0x1c]
00402158  50                   PUSH EAX
00402159  e875ffffff           CALL 0x004020d3
0040215e  83c40c               ADD ESP,0xc
00402161  833fff               CMP dword ptr [EDI],-0x1
00402164  7407                 JZ 0x0040216d
00402166  8bc3                 MOV EAX,EBX
00402168  4b                   DEC EBX
00402169  85c0                 TEST EAX,EAX
0040216b  7fe2                 JG 0x0040214f
0040216d  5f                   POP EDI
0040216e  5e                   POP ESI
0040216f  5b                   POP EBX
00402170  c3                   RET

; ==== FUNCTION FUN_00402171 entry=00402171 sig=undefined4 __cdecl FUN_00402171(int * param_1)
00402171  8b442404             MOV EAX,dword ptr [ESP + 0x4]
00402175  830004               ADD dword ptr [EAX],0x4
00402178  8b00                 MOV EAX,dword ptr [EAX]
0040217a  8b40fc               MOV EAX,dword ptr [EAX + -0x4]
0040217d  c3                   RET

; ==== FUNCTION FUN_0040217e entry=0040217e sig=undefined8 __cdecl FUN_0040217e(int * param_1)
0040217e  8b442404             MOV EAX,dword ptr [ESP + 0x4]
00402182  830008               ADD dword ptr [EAX],0x8
00402185  8b08                 MOV ECX,dword ptr [EAX]
00402187  8b41f8               MOV EAX,dword ptr [ECX + -0x8]
0040218a  8b51fc               MOV EDX,dword ptr [ECX + -0x4]
0040218d  c3                   RET

; ==== FUNCTION FUN_0040218e entry=0040218e sig=undefined4 __cdecl FUN_0040218e(int * param_1)
0040218e  8b442404             MOV EAX,dword ptr [ESP + 0x4]
00402192  830004               ADD dword ptr [EAX],0x4
00402195  8b00                 MOV EAX,dword ptr [EAX]
00402197  668b40fc             MOV AX,word ptr [EAX + -0x4]
0040219b  c3                   RET

; ==== FUNCTION FUN_0040219c entry=0040219c sig=LONG __cdecl FUN_0040219c(int param_1, _EXCEPTION_POINTERS * param_2)
0040219c  55                   PUSH EBP
0040219d  8bec                 MOV EBP,ESP
0040219f  53                   PUSH EBX
004021a0  ff7508               PUSH dword ptr [EBP + 0x8]
004021a3  e835010000           CALL 0x004022dd
004021a8  85c0                 TEST EAX,EAX
004021aa  59                   POP ECX
004021ab  0f8420010000         JZ 0x004022d1
004021b1  8b5808               MOV EBX,dword ptr [EAX + 0x8]
004021b4  85db                 TEST EBX,EBX
004021b6  0f8415010000         JZ 0x004022d1
004021bc  83fb05               CMP EBX,0x5
004021bf  750c                 JNZ 0x004021cd
004021c1  83600800             AND dword ptr [EAX + 0x8],0x0
004021c5  6a01                 PUSH 0x1
004021c7  58                   POP EAX
004021c8  e90d010000           JMP 0x004022da
004021cd  83fb01               CMP EBX,0x1
004021d0  0f84f6000000         JZ 0x004022cc
004021d6  8b0d9c7f4000         MOV ECX,dword ptr [0x00407f9c]
004021dc  894d08               MOV dword ptr [EBP + 0x8],ECX
004021df  8b4d0c               MOV ECX,dword ptr [EBP + 0xc]
004021e2  890d9c7f4000         MOV dword ptr [0x00407f9c],ECX
004021e8  8b4804               MOV ECX,dword ptr [EAX + 0x4]
004021eb  83f908               CMP ECX,0x8
004021ee  0f85c8000000         JNZ 0x004022bc
004021f4  8b0d98724000         MOV ECX,dword ptr [0x00407298]
004021fa  8b159c724000         MOV EDX,dword ptr [0x0040729c]
00402200  03d1                 ADD EDX,ECX
00402202  56                   PUSH ESI
00402203  3bca                 CMP ECX,EDX
00402205  7d15                 JGE 0x0040221c
00402207  8d3449               LEA ESI,[ECX + ECX*0x2]
0040220a  2bd1                 SUB EDX,ECX
0040220c  8d34b528724000       LEA ESI,[ESI*0x4 + 0x407228]
00402213  832600               AND dword ptr [ESI],0x0
00402216  83c60c               ADD ESI,0xc
00402219  4a                   DEC EDX
0040221a  75f7                 JNZ 0x00402213
0040221c  8b00                 MOV EAX,dword ptr [EAX]
0040221e  8b35a4724000         MOV ESI,dword ptr [0x004072a4]
00402224  3d8e0000c0           CMP EAX,0xc000008e
00402229  750c                 JNZ 0x00402237
0040222b  c705a472400083000000 MOV dword ptr [0x004072a4],0x83
00402235  eb70                 JMP 0x004022a7
00402237  3d900000c0           CMP EAX,0xc0000090
0040223c  750c                 JNZ 0x0040224a
0040223e  c705a472400081000000 MOV dword ptr [0x004072a4],0x81
00402248  eb5d                 JMP 0x004022a7
0040224a  3d910000c0           CMP EAX,0xc0000091
0040224f  750c                 JNZ 0x0040225d
00402251  c705a472400084000000 MOV dword ptr [0x004072a4],0x84
0040225b  eb4a                 JMP 0x004022a7
0040225d  3d930000c0           CMP EAX,0xc0000093
00402262  750c                 JNZ 0x00402270
00402264  c705a472400085000000 MOV dword ptr [0x004072a4],0x85
0040226e  eb37                 JMP 0x004022a7
00402270  3d8d0000c0           CMP EAX,0xc000008d
00402275  750c                 JNZ 0x00402283
00402277  c705a472400082000000 MOV dword ptr [0x004072a4],0x82
00402281  eb24                 JMP 0x004022a7
00402283  3d8f0000c0           CMP EAX,0xc000008f
00402288  750c                 JNZ 0x00402296
0040228a  c705a472400086000000 MOV dword ptr [0x004072a4],0x86
00402294  eb11                 JMP 0x004022a7
00402296  3d920000c0           CMP EAX,0xc0000092
0040229b  750a                 JNZ 0x004022a7
0040229d  c705a47240008a000000 MOV dword ptr [0x004072a4],0x8a
004022a7  ff35a4724000         PUSH dword ptr [0x004072a4]
004022ad  6a08                 PUSH 0x8
004022af  ffd3                 CALL EBX
004022b1  59                   POP ECX
004022b2  8935a4724000         MOV dword ptr [0x004072a4],ESI
004022b8  59                   POP ECX
004022b9  5e                   POP ESI
004022ba  eb08                 JMP 0x004022c4
004022bc  83600800             AND dword ptr [EAX + 0x8],0x0
004022c0  51                   PUSH ECX
004022c1  ffd3                 CALL EBX
004022c3  59                   POP ECX
004022c4  8b4508               MOV EAX,dword ptr [EBP + 0x8]
004022c7  a39c7f4000           MOV [0x00407f9c],EAX
004022cc  83c8ff               OR EAX,0xffffffff
004022cf  eb09                 JMP 0x004022da
004022d1  ff750c               PUSH dword ptr [EBP + 0xc]
004022d4  ff1570604000         CALL dword ptr [0x00406070]
004022da  5b                   POP EBX
004022db  5d                   POP EBP
004022dc  c3                   RET

; ==== FUNCTION FUN_004022dd entry=004022dd sig=int * __cdecl FUN_004022dd(int param_1)
004022dd  8b542404             MOV EDX,dword ptr [ESP + 0x4]
004022e1  8b0da0724000         MOV ECX,dword ptr [0x004072a0]
004022e7  391520724000         CMP dword ptr [0x00407220],EDX
004022ed  56                   PUSH ESI
004022ee  b820724000           MOV EAX,0x407220
004022f3  7415                 JZ 0x0040230a
004022f5  8d3449               LEA ESI,[ECX + ECX*0x2]
004022f8  8d34b520724000       LEA ESI,[ESI*0x4 + 0x407220]
004022ff  83c00c               ADD EAX,0xc
00402302  3bc6                 CMP EAX,ESI
00402304  7304                 JNC 0x0040230a
00402306  3910                 CMP dword ptr [EAX],EDX
00402308  75f5                 JNZ 0x004022ff
0040230a  8d0c49               LEA ECX,[ECX + ECX*0x2]
0040230d  5e                   POP ESI
0040230e  8d0c8d20724000       LEA ECX,[ECX*0x4 + 0x407220]
00402315  3bc1                 CMP EAX,ECX
00402317  7304                 JNC 0x0040231d
00402319  3910                 CMP dword ptr [EAX],EDX
0040231b  7402                 JZ 0x0040231f
0040231d  33c0                 XOR EAX,EAX
0040231f  c3                   RET

; ==== FUNCTION FUN_00402320 entry=00402320 sig=byte * __stdcall FUN_00402320(void)
00402320  833d6c94400000       CMP dword ptr [0x0040946c],0x0
00402327  7505                 JNZ 0x0040232e
00402329  e80d130000           CALL 0x0040363b
0040232e  56                   PUSH ESI
0040232f  8b3564944000         MOV ESI,dword ptr [0x00409464]
00402335  8a06                 MOV AL,byte ptr [ESI]
00402337  3c22                 CMP AL,0x22
00402339  7525                 JNZ 0x00402360
0040233b  8a4601               MOV AL,byte ptr [ESI + 0x1]
0040233e  46                   INC ESI
0040233f  3c22                 CMP AL,0x22
00402341  7415                 JZ 0x00402358
00402343  84c0                 TEST AL,AL
00402345  7411                 JZ 0x00402358
00402347  0fb6c0               MOVZX EAX,AL
0040234a  50                   PUSH EAX
0040234b  e8e50e0000           CALL 0x00403235
00402350  85c0                 TEST EAX,EAX
00402352  59                   POP ECX
00402353  74e6                 JZ 0x0040233b
00402355  46                   INC ESI
00402356  ebe3                 JMP 0x0040233b
00402358  803e22               CMP byte ptr [ESI],0x22
0040235b  750d                 JNZ 0x0040236a
0040235d  46                   INC ESI
0040235e  eb0a                 JMP 0x0040236a
00402360  3c20                 CMP AL,0x20
00402362  7606                 JBE 0x0040236a
00402364  46                   INC ESI
00402365  803e20               CMP byte ptr [ESI],0x20
00402368  77fa                 JA 0x00402364
0040236a  8a06                 MOV AL,byte ptr [ESI]
0040236c  84c0                 TEST AL,AL
0040236e  7404                 JZ 0x00402374
00402370  3c20                 CMP AL,0x20
00402372  76e9                 JBE 0x0040235d
00402374  8bc6                 MOV EAX,ESI
00402376  5e                   POP ESI
00402377  c3                   RET

; ==== FUNCTION FUN_00402378 entry=00402378 sig=undefined __stdcall FUN_00402378(void)
00402378  53                   PUSH EBX
00402379  33db                 XOR EBX,EBX
0040237b  391d6c944000         CMP dword ptr [0x0040946c],EBX
00402381  56                   PUSH ESI
00402382  57                   PUSH EDI
00402383  7505                 JNZ 0x0040238a
00402385  e8b1120000           CALL 0x0040363b
0040238a  8b35907f4000         MOV ESI,dword ptr [0x00407f90]
00402390  33ff                 XOR EDI,EDI
00402392  8a06                 MOV AL,byte ptr [ESI]
00402394  3ac3                 CMP AL,BL
00402396  7412                 JZ 0x004023aa
00402398  3c3d                 CMP AL,0x3d
0040239a  7401                 JZ 0x0040239d
0040239c  47                   INC EDI
0040239d  56                   PUSH ESI
0040239e  e8bd0c0000           CALL 0x00403060
004023a3  59                   POP ECX
004023a4  8d740601             LEA ESI,[ESI + EAX*0x1 + 0x1]
004023a8  ebe8                 JMP 0x00402392
004023aa  8d04bd04000000       LEA EAX,[EDI*0x4 + 0x4]
004023b1  50                   PUSH EAX
004023b2  e8c9130000           CALL 0x00403780
004023b7  8bf0                 MOV ESI,EAX
004023b9  59                   POP ECX
004023ba  3bf3                 CMP ESI,EBX
004023bc  89356c7f4000         MOV dword ptr [0x00407f6c],ESI
004023c2  7508                 JNZ 0x004023cc
004023c4  6a09                 PUSH 0x9
004023c6  e869f4ffff           CALL 0x00401834
004023cb  59                   POP ECX
004023cc  8b3d907f4000         MOV EDI,dword ptr [0x00407f90]
004023d2  381f                 CMP byte ptr [EDI],BL
004023d4  7439                 JZ 0x0040240f
004023d6  55                   PUSH EBP
004023d7  57                   PUSH EDI
004023d8  e8830c0000           CALL 0x00403060
004023dd  8be8                 MOV EBP,EAX
004023df  59                   POP ECX
004023e0  45                   INC EBP
004023e1  803f3d               CMP byte ptr [EDI],0x3d
004023e4  7422                 JZ 0x00402408
004023e6  55                   PUSH EBP
004023e7  e894130000           CALL 0x00403780
004023ec  3bc3                 CMP EAX,EBX
004023ee  59                   POP ECX
004023ef  8906                 MOV dword ptr [ESI],EAX
004023f1  7508                 JNZ 0x004023fb
004023f3  6a09                 PUSH 0x9
004023f5  e83af4ffff           CALL 0x00401834
004023fa  59                   POP ECX
004023fb  57                   PUSH EDI
004023fc  ff36                 PUSH dword ptr [ESI]
004023fe  e88d120000           CALL 0x00403690
00402403  59                   POP ECX
00402404  83c604               ADD ESI,0x4
00402407  59                   POP ECX
00402408  03fd                 ADD EDI,EBP
0040240a  381f                 CMP byte ptr [EDI],BL
0040240c  75c9                 JNZ 0x004023d7
0040240e  5d                   POP EBP
0040240f  ff35907f4000         PUSH dword ptr [0x00407f90]
00402415  e83d120000           CALL 0x00403657
0040241a  59                   POP ECX
0040241b  891d907f4000         MOV dword ptr [0x00407f90],EBX
00402421  891e                 MOV dword ptr [ESI],EBX
00402423  5f                   POP EDI
00402424  5e                   POP ESI
00402425  c7056894400001000000 MOV dword ptr [0x00409468],0x1
0040242f  5b                   POP EBX
00402430  c3                   RET

; ==== FUNCTION FUN_00402431 entry=00402431 sig=undefined __stdcall FUN_00402431(void)
00402431  55                   PUSH EBP
00402432  8bec                 MOV EBP,ESP
00402434  51                   PUSH ECX
00402435  51                   PUSH ECX
00402436  53                   PUSH EBX
00402437  33db                 XOR EBX,EBX
00402439  391d6c944000         CMP dword ptr [0x0040946c],EBX
0040243f  56                   PUSH ESI
00402440  57                   PUSH EDI
00402441  7505                 JNZ 0x00402448
00402443  e8f3110000           CALL 0x0040363b
00402448  bea07f4000           MOV ESI,0x407fa0
0040244d  6804010000           PUSH 0x104
00402452  56                   PUSH ESI
00402453  53                   PUSH EBX
00402454  ff1574604000         CALL dword ptr [0x00406074]
0040245a  a164944000           MOV EAX,[0x00409464]
0040245f  89357c7f4000         MOV dword ptr [0x00407f7c],ESI
00402465  8bfe                 MOV EDI,ESI
00402467  3818                 CMP byte ptr [EAX],BL
00402469  7402                 JZ 0x0040246d
0040246b  8bf8                 MOV EDI,EAX
0040246d  8d45f8               LEA EAX,[EBP + -0x8]
00402470  50                   PUSH EAX
00402471  8d45fc               LEA EAX,[EBP + -0x4]
00402474  50                   PUSH EAX
00402475  53                   PUSH EBX
00402476  53                   PUSH EBX
00402477  57                   PUSH EDI
00402478  e84d000000           CALL 0x004024ca
0040247d  8b45f8               MOV EAX,dword ptr [EBP + -0x8]
00402480  8b4dfc               MOV ECX,dword ptr [EBP + -0x4]
00402483  8d0488               LEA EAX,[EAX + ECX*0x4]
00402486  50                   PUSH EAX
00402487  e8f4120000           CALL 0x00403780
0040248c  8bf0                 MOV ESI,EAX
0040248e  83c418               ADD ESP,0x18
00402491  3bf3                 CMP ESI,EBX
00402493  7508                 JNZ 0x0040249d
00402495  6a08                 PUSH 0x8
00402497  e898f3ffff           CALL 0x00401834
0040249c  59                   POP ECX
0040249d  8d45f8               LEA EAX,[EBP + -0x8]
004024a0  50                   PUSH EAX
004024a1  8d45fc               LEA EAX,[EBP + -0x4]
004024a4  50                   PUSH EAX
004024a5  8b45fc               MOV EAX,dword ptr [EBP + -0x4]
004024a8  8d0486               LEA EAX,[ESI + EAX*0x4]
004024ab  50                   PUSH EAX
004024ac  56                   PUSH ESI
004024ad  57                   PUSH EDI
004024ae  e817000000           CALL 0x004024ca
004024b3  8b45fc               MOV EAX,dword ptr [EBP + -0x4]
004024b6  83c414               ADD ESP,0x14
004024b9  48                   DEC EAX
004024ba  8935647f4000         MOV dword ptr [0x00407f64],ESI
004024c0  5f                   POP EDI
004024c1  5e                   POP ESI
004024c2  a3607f4000           MOV [0x00407f60],EAX
004024c7  5b                   POP EBX
004024c8  c9                   LEAVE
004024c9  c3                   RET

; ==== FUNCTION FUN_004024ca entry=004024ca sig=undefined __cdecl FUN_004024ca(byte * param_1, undefined4 * param_2, byte * param_3, int * param_4, int * param_5)
004024ca  55                   PUSH EBP
004024cb  8bec                 MOV EBP,ESP
004024cd  8b4d18               MOV ECX,dword ptr [EBP + 0x18]
004024d0  8b4514               MOV EAX,dword ptr [EBP + 0x14]
004024d3  53                   PUSH EBX
004024d4  56                   PUSH ESI
004024d5  832100               AND dword ptr [ECX],0x0
004024d8  8b7510               MOV ESI,dword ptr [EBP + 0x10]
004024db  57                   PUSH EDI
004024dc  8b7d0c               MOV EDI,dword ptr [EBP + 0xc]
004024df  c70001000000         MOV dword ptr [EAX],0x1
004024e5  8b4508               MOV EAX,dword ptr [EBP + 0x8]
004024e8  85ff                 TEST EDI,EDI
004024ea  7408                 JZ 0x004024f4
004024ec  8937                 MOV dword ptr [EDI],ESI
004024ee  83c704               ADD EDI,0x4
004024f1  897d0c               MOV dword ptr [EBP + 0xc],EDI
004024f4  803822               CMP byte ptr [EAX],0x22
004024f7  7544                 JNZ 0x0040253d
004024f9  8a5001               MOV DL,byte ptr [EAX + 0x1]
004024fc  40                   INC EAX
004024fd  80fa22               CMP DL,0x22
00402500  7429                 JZ 0x0040252b
00402502  84d2                 TEST DL,DL
00402504  7425                 JZ 0x0040252b
00402506  0fb6d2               MOVZX EDX,DL
00402509  f6822182400004       TEST byte ptr [EDX + 0x408221],0x4
00402510  740c                 JZ 0x0040251e
00402512  ff01                 INC dword ptr [ECX]
00402514  85f6                 TEST ESI,ESI
00402516  7406                 JZ 0x0040251e
00402518  8a10                 MOV DL,byte ptr [EAX]
0040251a  8816                 MOV byte ptr [ESI],DL
0040251c  46                   INC ESI
0040251d  40                   INC EAX
0040251e  ff01                 INC dword ptr [ECX]
00402520  85f6                 TEST ESI,ESI
00402522  74d5                 JZ 0x004024f9
00402524  8a10                 MOV DL,byte ptr [EAX]
00402526  8816                 MOV byte ptr [ESI],DL
00402528  46                   INC ESI
00402529  ebce                 JMP 0x004024f9
0040252b  ff01                 INC dword ptr [ECX]
0040252d  85f6                 TEST ESI,ESI
0040252f  7404                 JZ 0x00402535
00402531  802600               AND byte ptr [ESI],0x0
00402534  46                   INC ESI
00402535  803822               CMP byte ptr [EAX],0x22
00402538  7546                 JNZ 0x00402580
0040253a  40                   INC EAX
0040253b  eb43                 JMP 0x00402580
0040253d  ff01                 INC dword ptr [ECX]
0040253f  85f6                 TEST ESI,ESI
00402541  7405                 JZ 0x00402548
00402543  8a10                 MOV DL,byte ptr [EAX]
00402545  8816                 MOV byte ptr [ESI],DL
00402547  46                   INC ESI
00402548  8a10                 MOV DL,byte ptr [EAX]
0040254a  40                   INC EAX
0040254b  0fb6da               MOVZX EBX,DL
0040254e  f6832182400004       TEST byte ptr [EBX + 0x408221],0x4
00402555  740c                 JZ 0x00402563
00402557  ff01                 INC dword ptr [ECX]
00402559  85f6                 TEST ESI,ESI
0040255b  7405                 JZ 0x00402562
0040255d  8a18                 MOV BL,byte ptr [EAX]
0040255f  881e                 MOV byte ptr [ESI],BL
00402561  46                   INC ESI
00402562  40                   INC EAX
00402563  80fa20               CMP DL,0x20
00402566  7409                 JZ 0x00402571
00402568  84d2                 TEST DL,DL
0040256a  7409                 JZ 0x00402575
0040256c  80fa09               CMP DL,0x9
0040256f  75cc                 JNZ 0x0040253d
00402571  84d2                 TEST DL,DL
00402573  7503                 JNZ 0x00402578
00402575  48                   DEC EAX
00402576  eb08                 JMP 0x00402580
00402578  85f6                 TEST ESI,ESI
0040257a  7404                 JZ 0x00402580
0040257c  8066ff00             AND byte ptr [ESI + -0x1],0x0
00402580  83651800             AND dword ptr [EBP + 0x18],0x0
00402584  803800               CMP byte ptr [EAX],0x0
00402587  0f84e0000000         JZ 0x0040266d
0040258d  8a10                 MOV DL,byte ptr [EAX]
0040258f  80fa20               CMP DL,0x20
00402592  7405                 JZ 0x00402599
00402594  80fa09               CMP DL,0x9
00402597  7503                 JNZ 0x0040259c
00402599  40                   INC EAX
0040259a  ebf1                 JMP 0x0040258d
0040259c  803800               CMP byte ptr [EAX],0x0
0040259f  0f84c8000000         JZ 0x0040266d
004025a5  85ff                 TEST EDI,EDI
004025a7  7408                 JZ 0x004025b1
004025a9  8937                 MOV dword ptr [EDI],ESI
004025ab  83c704               ADD EDI,0x4
004025ae  897d0c               MOV dword ptr [EBP + 0xc],EDI
004025b1  8b5514               MOV EDX,dword ptr [EBP + 0x14]
004025b4  ff02                 INC dword ptr [EDX]
004025b6  c7450801000000       MOV dword ptr [EBP + 0x8],0x1
004025bd  33db                 XOR EBX,EBX
004025bf  80385c               CMP byte ptr [EAX],0x5c
004025c2  7504                 JNZ 0x004025c8
004025c4  40                   INC EAX
004025c5  43                   INC EBX
004025c6  ebf7                 JMP 0x004025bf
004025c8  803822               CMP byte ptr [EAX],0x22
004025cb  752c                 JNZ 0x004025f9
004025cd  f6c301               TEST BL,0x1
004025d0  7525                 JNZ 0x004025f7
004025d2  33ff                 XOR EDI,EDI
004025d4  397d18               CMP dword ptr [EBP + 0x18],EDI
004025d7  740d                 JZ 0x004025e6
004025d9  80780122             CMP byte ptr [EAX + 0x1],0x22
004025dd  8d5001               LEA EDX,[EAX + 0x1]
004025e0  7504                 JNZ 0x004025e6
004025e2  8bc2                 MOV EAX,EDX
004025e4  eb03                 JMP 0x004025e9
004025e6  897d08               MOV dword ptr [EBP + 0x8],EDI
004025e9  8b7d0c               MOV EDI,dword ptr [EBP + 0xc]
004025ec  33d2                 XOR EDX,EDX
004025ee  395518               CMP dword ptr [EBP + 0x18],EDX
004025f1  0f94c2               SETZ DL
004025f4  895518               MOV dword ptr [EBP + 0x18],EDX
004025f7  d1eb                 SHR EBX,0x1
004025f9  8bd3                 MOV EDX,EBX
004025fb  4b                   DEC EBX
004025fc  85d2                 TEST EDX,EDX
004025fe  740e                 JZ 0x0040260e
00402600  43                   INC EBX
00402601  85f6                 TEST ESI,ESI
00402603  7404                 JZ 0x00402609
00402605  c6065c               MOV byte ptr [ESI],0x5c
00402608  46                   INC ESI
00402609  ff01                 INC dword ptr [ECX]
0040260b  4b                   DEC EBX
0040260c  75f3                 JNZ 0x00402601
0040260e  8a10                 MOV DL,byte ptr [EAX]
00402610  84d2                 TEST DL,DL
00402612  744a                 JZ 0x0040265e
00402614  837d1800             CMP dword ptr [EBP + 0x18],0x0
00402618  750a                 JNZ 0x00402624
0040261a  80fa20               CMP DL,0x20
0040261d  743f                 JZ 0x0040265e
0040261f  80fa09               CMP DL,0x9
00402622  743a                 JZ 0x0040265e
00402624  837d0800             CMP dword ptr [EBP + 0x8],0x0
00402628  742e                 JZ 0x00402658
0040262a  85f6                 TEST ESI,ESI
0040262c  7419                 JZ 0x00402647
0040262e  0fb6da               MOVZX EBX,DL
00402631  f6832182400004       TEST byte ptr [EBX + 0x408221],0x4
00402638  7406                 JZ 0x00402640
0040263a  8816                 MOV byte ptr [ESI],DL
0040263c  46                   INC ESI
0040263d  40                   INC EAX
0040263e  ff01                 INC dword ptr [ECX]
00402640  8a10                 MOV DL,byte ptr [EAX]
00402642  8816                 MOV byte ptr [ESI],DL
00402644  46                   INC ESI
00402645  eb0f                 JMP 0x00402656
00402647  0fb6d2               MOVZX EDX,DL
0040264a  f6822182400004       TEST byte ptr [EDX + 0x408221],0x4
00402651  7403                 JZ 0x00402656
00402653  40                   INC EAX
00402654  ff01                 INC dword ptr [ECX]
00402656  ff01                 INC dword ptr [ECX]
00402658  40                   INC EAX
00402659  e958ffffff           JMP 0x004025b6
0040265e  85f6                 TEST ESI,ESI
00402660  7404                 JZ 0x00402666
00402662  802600               AND byte ptr [ESI],0x0
00402665  46                   INC ESI
00402666  ff01                 INC dword ptr [ECX]
00402668  e917ffffff           JMP 0x00402584
0040266d  85ff                 TEST EDI,EDI
0040266f  7403                 JZ 0x00402674
00402671  832700               AND dword ptr [EDI],0x0
00402674  8b4514               MOV EAX,dword ptr [EBP + 0x14]
00402677  5f                   POP EDI
00402678  5e                   POP ESI
00402679  5b                   POP EBX
0040267a  ff00                 INC dword ptr [EAX]
0040267c  5d                   POP EBP
0040267d  c3                   RET

; ==== FUNCTION FUN_0040267e entry=0040267e sig=LPSTR __stdcall FUN_0040267e(void)
0040267e  51                   PUSH ECX
0040267f  51                   PUSH ECX
00402680  a1a4804000           MOV EAX,[0x004080a4]
00402685  53                   PUSH EBX
00402686  55                   PUSH EBP
00402687  8b2d08604000         MOV EBP,dword ptr [0x00406008]
0040268d  56                   PUSH ESI
0040268e  57                   PUSH EDI
0040268f  33db                 XOR EBX,EBX
00402691  33f6                 XOR ESI,ESI
00402693  33ff                 XOR EDI,EDI
00402695  3bc3                 CMP EAX,EBX
00402697  7533                 JNZ 0x004026cc
00402699  ffd5                 CALL EBP
0040269b  8bf0                 MOV ESI,EAX
0040269d  3bf3                 CMP ESI,EBX
0040269f  740c                 JZ 0x004026ad
004026a1  c705a480400001000000 MOV dword ptr [0x004080a4],0x1
004026ab  eb28                 JMP 0x004026d5
004026ad  ff1584604000         CALL dword ptr [0x00406084]
004026b3  8bf8                 MOV EDI,EAX
004026b5  3bfb                 CMP EDI,EBX
004026b7  0f84ea000000         JZ 0x004027a7
004026bd  c705a480400002000000 MOV dword ptr [0x004080a4],0x2
004026c7  e98f000000           JMP 0x0040275b
004026cc  83f801               CMP EAX,0x1
004026cf  0f8581000000         JNZ 0x00402756
004026d5  3bf3                 CMP ESI,EBX
004026d7  750c                 JNZ 0x004026e5
004026d9  ffd5                 CALL EBP
004026db  8bf0                 MOV ESI,EAX
004026dd  3bf3                 CMP ESI,EBX
004026df  0f84c2000000         JZ 0x004027a7
004026e5  66391e               CMP word ptr [ESI],BX
004026e8  8bc6                 MOV EAX,ESI
004026ea  740e                 JZ 0x004026fa
004026ec  40                   INC EAX
004026ed  40                   INC EAX
004026ee  663918               CMP word ptr [EAX],BX
004026f1  75f9                 JNZ 0x004026ec
004026f3  40                   INC EAX
004026f4  40                   INC EAX
004026f5  663918               CMP word ptr [EAX],BX
004026f8  75f2                 JNZ 0x004026ec
004026fa  2bc6                 SUB EAX,ESI
004026fc  8b3d80604000         MOV EDI,dword ptr [0x00406080]
00402702  d1f8                 SAR EAX,0x1
00402704  53                   PUSH EBX
00402705  53                   PUSH EBX
00402706  40                   INC EAX
00402707  53                   PUSH EBX
00402708  53                   PUSH EBX
00402709  50                   PUSH EAX
0040270a  56                   PUSH ESI
0040270b  53                   PUSH EBX
0040270c  53                   PUSH EBX
0040270d  89442434             MOV dword ptr [ESP + 0x34],EAX
00402711  ffd7                 CALL EDI
00402713  8be8                 MOV EBP,EAX
00402715  3beb                 CMP EBP,EBX
00402717  7432                 JZ 0x0040274b
00402719  55                   PUSH EBP
0040271a  e861100000           CALL 0x00403780
0040271f  3bc3                 CMP EAX,EBX
00402721  59                   POP ECX
00402722  89442410             MOV dword ptr [ESP + 0x10],EAX
00402726  7423                 JZ 0x0040274b
00402728  53                   PUSH EBX
00402729  53                   PUSH EBX
0040272a  55                   PUSH EBP
0040272b  50                   PUSH EAX
0040272c  ff742424             PUSH dword ptr [ESP + 0x24]
00402730  56                   PUSH ESI
00402731  53                   PUSH EBX
00402732  53                   PUSH EBX
00402733  ffd7                 CALL EDI
00402735  85c0                 TEST EAX,EAX
00402737  750e                 JNZ 0x00402747
00402739  ff742410             PUSH dword ptr [ESP + 0x10]
0040273d  e8150f0000           CALL 0x00403657
00402742  59                   POP ECX
00402743  895c2410             MOV dword ptr [ESP + 0x10],EBX
00402747  8b5c2410             MOV EBX,dword ptr [ESP + 0x10]
0040274b  56                   PUSH ESI
0040274c  ff157c604000         CALL dword ptr [0x0040607c]
00402752  8bc3                 MOV EAX,EBX
00402754  eb53                 JMP 0x004027a9
00402756  83f802               CMP EAX,0x2
00402759  754c                 JNZ 0x004027a7
0040275b  3bfb                 CMP EDI,EBX
0040275d  750c                 JNZ 0x0040276b
0040275f  ff1584604000         CALL dword ptr [0x00406084]
00402765  8bf8                 MOV EDI,EAX
00402767  3bfb                 CMP EDI,EBX
00402769  743c                 JZ 0x004027a7
0040276b  381f                 CMP byte ptr [EDI],BL
0040276d  8bc7                 MOV EAX,EDI
0040276f  740a                 JZ 0x0040277b
00402771  40                   INC EAX
00402772  3818                 CMP byte ptr [EAX],BL
00402774  75fb                 JNZ 0x00402771
00402776  40                   INC EAX
00402777  3818                 CMP byte ptr [EAX],BL
00402779  75f6                 JNZ 0x00402771
0040277b  2bc7                 SUB EAX,EDI
0040277d  40                   INC EAX
0040277e  8be8                 MOV EBP,EAX
00402780  55                   PUSH EBP
00402781  e8fa0f0000           CALL 0x00403780
00402786  8bf0                 MOV ESI,EAX
00402788  59                   POP ECX
00402789  3bf3                 CMP ESI,EBX
0040278b  7504                 JNZ 0x00402791
0040278d  33f6                 XOR ESI,ESI
0040278f  eb0b                 JMP 0x0040279c
00402791  55                   PUSH EBP
00402792  57                   PUSH EDI
00402793  56                   PUSH ESI
00402794  e867100000           CALL 0x00403800
00402799  83c40c               ADD ESP,0xc
0040279c  57                   PUSH EDI
0040279d  ff1578604000         CALL dword ptr [0x00406078]
004027a3  8bc6                 MOV EAX,ESI
004027a5  eb02                 JMP 0x004027a9
004027a7  33c0                 XOR EAX,EAX
004027a9  5f                   POP EDI
004027aa  5e                   POP ESI
004027ab  5d                   POP EBP
004027ac  5b                   POP EBX
004027ad  59                   POP ECX
004027ae  59                   POP ECX
004027af  c3                   RET

; ==== FUNCTION FUN_004027b0 entry=004027b0 sig=undefined __stdcall FUN_004027b0(void)
004027b0  83ec44               SUB ESP,0x44
004027b3  53                   PUSH EBX
004027b4  55                   PUSH EBP
004027b5  56                   PUSH ESI
004027b6  57                   PUSH EDI
004027b7  6800010000           PUSH 0x100
004027bc  e8bf0f0000           CALL 0x00403780
004027c1  8bf0                 MOV ESI,EAX
004027c3  59                   POP ECX
004027c4  85f6                 TEST ESI,ESI
004027c6  7508                 JNZ 0x004027d0
004027c8  6a1b                 PUSH 0x1b
004027ca  e865f0ffff           CALL 0x00401834
004027cf  59                   POP ECX
004027d0  893560934000         MOV dword ptr [0x00409360],ESI
004027d6  c7056094400020000000 MOV dword ptr [0x00409460],0x20
004027e0  8d8600010000         LEA EAX,[ESI + 0x100]
004027e6  3bf0                 CMP ESI,EAX
004027e8  731a                 JNC 0x00402804
004027ea  80660400             AND byte ptr [ESI + 0x4],0x0
004027ee  830eff               OR dword ptr [ESI],0xffffffff
004027f1  c646050a             MOV byte ptr [ESI + 0x5],0xa
004027f5  a160934000           MOV EAX,[0x00409360]
004027fa  83c608               ADD ESI,0x8
004027fd  0500010000           ADD EAX,0x100
00402802  ebe2                 JMP 0x004027e6
00402804  8d442410             LEA EAX,[ESP + 0x10]
00402808  50                   PUSH EAX
00402809  ff1564604000         CALL dword ptr [0x00406064]
0040280f  66837c244200         CMP word ptr [ESP + 0x42],0x0
00402815  0f84c5000000         JZ 0x004028e0
0040281b  8b442444             MOV EAX,dword ptr [ESP + 0x44]
0040281f  85c0                 TEST EAX,EAX
00402821  0f84b9000000         JZ 0x004028e0
00402827  8b30                 MOV ESI,dword ptr [EAX]
00402829  8d6804               LEA EBP,[EAX + 0x4]
0040282c  b800080000           MOV EAX,0x800
00402831  3bf0                 CMP ESI,EAX
00402833  8d1c2e               LEA EBX,[ESI + EBP*0x1]
00402836  7c02                 JL 0x0040283a
00402838  8bf0                 MOV ESI,EAX
0040283a  393560944000         CMP dword ptr [0x00409460],ESI
00402840  7d52                 JGE 0x00402894
00402842  bf64934000           MOV EDI,0x409364
00402847  6800010000           PUSH 0x100
0040284c  e82f0f0000           CALL 0x00403780
00402851  85c0                 TEST EAX,EAX
00402853  59                   POP ECX
00402854  7438                 JZ 0x0040288e
00402856  83056094400020       ADD dword ptr [0x00409460],0x20
0040285d  8907                 MOV dword ptr [EDI],EAX
0040285f  8d8800010000         LEA ECX,[EAX + 0x100]
00402865  3bc1                 CMP EAX,ECX
00402867  7318                 JNC 0x00402881
00402869  80600400             AND byte ptr [EAX + 0x4],0x0
0040286d  8308ff               OR dword ptr [EAX],0xffffffff
00402870  c640050a             MOV byte ptr [EAX + 0x5],0xa
00402874  8b0f                 MOV ECX,dword ptr [EDI]
00402876  83c008               ADD EAX,0x8
00402879  81c100010000         ADD ECX,0x100
0040287f  ebe4                 JMP 0x00402865
00402881  83c704               ADD EDI,0x4
00402884  393560944000         CMP dword ptr [0x00409460],ESI
0040288a  7cbb                 JL 0x00402847
0040288c  eb06                 JMP 0x00402894
0040288e  8b3560944000         MOV ESI,dword ptr [0x00409460]
00402894  33ff                 XOR EDI,EDI
00402896  85f6                 TEST ESI,ESI
00402898  7e46                 JLE 0x004028e0
0040289a  8b03                 MOV EAX,dword ptr [EBX]
0040289c  83f8ff               CMP EAX,-0x1
0040289f  7436                 JZ 0x004028d7
004028a1  8a4d00               MOV CL,byte ptr [EBP]
004028a4  f6c101               TEST CL,0x1
004028a7  742e                 JZ 0x004028d7
004028a9  f6c108               TEST CL,0x8
004028ac  750b                 JNZ 0x004028b9
004028ae  50                   PUSH EAX
004028af  ff1510604000         CALL dword ptr [0x00406010]
004028b5  85c0                 TEST EAX,EAX
004028b7  741e                 JZ 0x004028d7
004028b9  8bc7                 MOV EAX,EDI
004028bb  8bcf                 MOV ECX,EDI
004028bd  c1f805               SAR EAX,0x5
004028c0  83e11f               AND ECX,0x1f
004028c3  8b048560934000       MOV EAX,dword ptr [EAX*0x4 + 0x409360]
004028ca  8d04c8               LEA EAX,[EAX + ECX*0x8]
004028cd  8b0b                 MOV ECX,dword ptr [EBX]
004028cf  8908                 MOV dword ptr [EAX],ECX
004028d1  8a4d00               MOV CL,byte ptr [EBP]
004028d4  884804               MOV byte ptr [EAX + 0x4],CL
004028d7  47                   INC EDI
004028d8  45                   INC EBP
004028d9  83c304               ADD EBX,0x4
004028dc  3bfe                 CMP EDI,ESI
004028de  7cba                 JL 0x0040289a
004028e0  33db                 XOR EBX,EBX
004028e2  a160934000           MOV EAX,[0x00409360]
004028e7  833cd8ff             CMP dword ptr [EAX + EBX*0x8],-0x1
004028eb  8d34d8               LEA ESI,[EAX + EBX*0x8]
004028ee  754d                 JNZ 0x0040293d
004028f0  85db                 TEST EBX,EBX
004028f2  c6460481             MOV byte ptr [ESI + 0x4],0x81
004028f6  7505                 JNZ 0x004028fd
004028f8  6af6                 PUSH -0xa
004028fa  58                   POP EAX
004028fb  eb0a                 JMP 0x00402907
004028fd  8bc3                 MOV EAX,EBX
004028ff  48                   DEC EAX
00402900  f7d8                 NEG EAX
00402902  1bc0                 SBB EAX,EAX
00402904  83c0f5               ADD EAX,-0xb
00402907  50                   PUSH EAX
00402908  ff150c604000         CALL dword ptr [0x0040600c]
0040290e  8bf8                 MOV EDI,EAX
00402910  83ffff               CMP EDI,-0x1
00402913  7417                 JZ 0x0040292c
00402915  57                   PUSH EDI
00402916  ff1510604000         CALL dword ptr [0x00406010]
0040291c  85c0                 TEST EAX,EAX
0040291e  740c                 JZ 0x0040292c
00402920  25ff000000           AND EAX,0xff
00402925  893e                 MOV dword ptr [ESI],EDI
00402927  83f802               CMP EAX,0x2
0040292a  7506                 JNZ 0x00402932
0040292c  804e0440             OR byte ptr [ESI + 0x4],0x40
00402930  eb0f                 JMP 0x00402941
00402932  83f803               CMP EAX,0x3
00402935  750a                 JNZ 0x00402941
00402937  804e0408             OR byte ptr [ESI + 0x4],0x8
0040293b  eb04                 JMP 0x00402941
0040293d  804e0480             OR byte ptr [ESI + 0x4],0x80
00402941  43                   INC EBX
00402942  83fb03               CMP EBX,0x3
00402945  7c9b                 JL 0x004028e2
00402947  ff3560944000         PUSH dword ptr [0x00409460]
0040294d  ff158c604000         CALL dword ptr [0x0040608c]
00402953  5f                   POP EDI
00402954  5e                   POP ESI
00402955  5d                   POP EBP
00402956  5b                   POP EBX
00402957  83c444               ADD ESP,0x44
0040295a  c3                   RET

; ==== FUNCTION FUN_0040295b entry=0040295b sig=undefined4 __cdecl FUN_0040295b(int param_1)
0040295b  33c0                 XOR EAX,EAX
0040295d  6a00                 PUSH 0x0
0040295f  39442408             CMP dword ptr [ESP + 0x8],EAX
00402963  6800100000           PUSH 0x1000
00402968  0f94c0               SETZ AL
0040296b  50                   PUSH EAX
0040296c  ff1598604000         CALL dword ptr [0x00406098]
00402972  85c0                 TEST EAX,EAX
00402974  a344934000           MOV [0x00409344],EAX
00402979  7415                 JZ 0x00402990
0040297b  e8b5110000           CALL 0x00403b35
00402980  85c0                 TEST EAX,EAX
00402982  750f                 JNZ 0x00402993
00402984  ff3544934000         PUSH dword ptr [0x00409344]
0040298a  ff1594604000         CALL dword ptr [0x00406094]
00402990  33c0                 XOR EAX,EAX
00402992  c3                   RET
00402993  6a01                 PUSH 0x1
00402995  58                   POP EAX
00402996  c3                   RET
; undefined 1 bytes at 00402997

; ==== FUNCTION __global_unwind2 entry=00402998 sig=undefined __cdecl __global_unwind2(PVOID param_1)
00402998  55                   PUSH EBP
00402999  8bec                 MOV EBP,ESP
0040299b  53                   PUSH EBX
0040299c  56                   PUSH ESI
0040299d  57                   PUSH EDI
0040299e  55                   PUSH EBP
0040299f  6a00                 PUSH 0x0
004029a1  6a00                 PUSH 0x0
004029a3  68b0294000           PUSH 0x4029b0
004029a8  ff7508               PUSH dword ptr [EBP + 0x8]
004029ab  e880260000           CALL 0x00405030
004029b0  5d                   POP EBP
004029b1  5f                   POP EDI
004029b2  5e                   POP ESI
004029b3  5b                   POP EBX
004029b4  8be5                 MOV ESP,EBP
004029b6  5d                   POP EBP
004029b7  c3                   RET

; ==== FUNCTION FUN_004029b8 entry=004029b8 sig=undefined4 __cdecl FUN_004029b8(int param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
004029b8  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
004029bc  f7410406000000       TEST dword ptr [ECX + 0x4],0x6
004029c3  b801000000           MOV EAX,0x1
004029c8  740f                 JZ 0x004029d9
004029ca  8b442408             MOV EAX,dword ptr [ESP + 0x8]
004029ce  8b542410             MOV EDX,dword ptr [ESP + 0x10]
004029d2  8902                 MOV dword ptr [EDX],EAX
004029d4  b803000000           MOV EAX,0x3
004029d9  c3                   RET

; ==== FUNCTION __local_unwind2 entry=004029da sig=undefined __cdecl __local_unwind2(int param_1, int param_2)
004029da  53                   PUSH EBX
004029db  56                   PUSH ESI
004029dc  57                   PUSH EDI
004029dd  8b442410             MOV EAX,dword ptr [ESP + 0x10]
004029e1  50                   PUSH EAX
004029e2  6afe                 PUSH -0x2
004029e4  68b8294000           PUSH 0x4029b8
004029e9  64ff3500000000       PUSH dword ptr FS:[0x0]
004029f0  64892500000000       MOV dword ptr FS:[0x0],ESP
004029f7  8b442420             MOV EAX,dword ptr [ESP + 0x20]
004029fb  8b5808               MOV EBX,dword ptr [EAX + 0x8]
004029fe  8b700c               MOV ESI,dword ptr [EAX + 0xc]
00402a01  83feff               CMP ESI,-0x1
00402a04  742e                 JZ 0x00402a34
00402a06  3b742424             CMP ESI,dword ptr [ESP + 0x24]
00402a0a  7428                 JZ 0x00402a34
00402a0c  8d3476               LEA ESI,[ESI + ESI*0x2]
00402a0f  8b0cb3               MOV ECX,dword ptr [EBX + ESI*0x4]
00402a12  894c2408             MOV dword ptr [ESP + 0x8],ECX
00402a16  89480c               MOV dword ptr [EAX + 0xc],ECX
00402a19  837cb30400           CMP dword ptr [EBX + ESI*0x4 + 0x4],0x0
00402a1e  7512                 JNZ 0x00402a32
00402a20  6801010000           PUSH 0x101
00402a25  8b44b308             MOV EAX,dword ptr [EBX + ESI*0x4 + 0x8]
00402a29  e840000000           CALL 0x00402a6e
00402a2e  ff54b308             CALL dword ptr [EBX + ESI*0x4 + 0x8]
00402a32  ebc3                 JMP 0x004029f7
00402a34  648f0500000000       POP dword ptr FS:[0x0]
00402a3b  83c40c               ADD ESP,0xc
00402a3e  5f                   POP EDI
00402a3f  5e                   POP ESI
00402a40  5b                   POP EBX
00402a41  c3                   RET

; ==== FUNCTION FUN_00402a42 entry=00402a42 sig=undefined4 __stdcall FUN_00402a42(void)
00402a42  33c0                 XOR EAX,EAX
00402a44  648b0d00000000       MOV ECX,dword ptr FS:[0x0]
00402a4b  817904b8294000       CMP dword ptr [ECX + 0x4],0x4029b8
00402a52  7510                 JNZ 0x00402a64
00402a54  8b510c               MOV EDX,dword ptr [ECX + 0xc]
00402a57  8b520c               MOV EDX,dword ptr [EDX + 0xc]
00402a5a  395108               CMP dword ptr [ECX + 0x8],EDX
00402a5d  7505                 JNZ 0x00402a64
00402a5f  b801000000           MOV EAX,0x1
00402a64  c3                   RET

; ==== FUNCTION FUN_00402a65 entry=00402a65 sig=undefined __fastcall FUN_00402a65(undefined4 param_1)
00402a65  53                   PUSH EBX
00402a66  51                   PUSH ECX
00402a67  bbb4724000           MOV EBX,0x4072b4
00402a6c  eb0a                 JMP 0x00402a78

; ==== FUNCTION FUN_00402a6e entry=00402a6e sig=undefined __stdcall FUN_00402a6e(void)
00402a6e  53                   PUSH EBX
00402a6f  51                   PUSH ECX
00402a70  bbb4724000           MOV EBX,0x4072b4
00402a75  8b4d08               MOV ECX,dword ptr [EBP + 0x8]
00402a78  894b08               MOV dword ptr [EBX + 0x8],ECX
00402a7b  894304               MOV dword ptr [EBX + 0x4],EAX
00402a7e  896b0c               MOV dword ptr [EBX + 0xc],EBP
00402a81  59                   POP ECX
00402a82  5b                   POP EBX
00402a83  c20400               RET 0x4
; undefined 10 bytes at 00402a86

; ==== FUNCTION FUN_00402a90 entry=00402a90 sig=undefined4 __cdecl FUN_00402a90(int param_1, PVOID param_2, undefined4 param_3)
00402a90  55                   PUSH EBP
00402a91  8bec                 MOV EBP,ESP
00402a93  83ec08               SUB ESP,0x8
00402a96  53                   PUSH EBX
00402a97  56                   PUSH ESI
00402a98  57                   PUSH EDI
00402a99  55                   PUSH EBP
00402a9a  fc                   CLD
00402a9b  8b5d0c               MOV EBX,dword ptr [EBP + 0xc]
00402a9e  8b4508               MOV EAX,dword ptr [EBP + 0x8]
00402aa1  f7400406000000       TEST dword ptr [EAX + 0x4],0x6
00402aa8  0f8582000000         JNZ 0x00402b30
00402aae  8945f8               MOV dword ptr [EBP + -0x8],EAX
00402ab1  8b4510               MOV EAX,dword ptr [EBP + 0x10]
00402ab4  8945fc               MOV dword ptr [EBP + -0x4],EAX
00402ab7  8d45f8               LEA EAX,[EBP + -0x8]
00402aba  8943fc               MOV dword ptr [EBX + -0x4],EAX
00402abd  8b730c               MOV ESI,dword ptr [EBX + 0xc]
00402ac0  8b7b08               MOV EDI,dword ptr [EBX + 0x8]
00402ac3  83feff               CMP ESI,-0x1
00402ac6  7461                 JZ 0x00402b29
00402ac8  8d0c76               LEA ECX,[ESI + ESI*0x2]
00402acb  837c8f0400           CMP dword ptr [EDI + ECX*0x4 + 0x4],0x0
00402ad0  7445                 JZ 0x00402b17
00402ad2  56                   PUSH ESI
00402ad3  55                   PUSH EBP
00402ad4  8d6b10               LEA EBP,[EBX + 0x10]
00402ad7  ff548f04             CALL dword ptr [EDI + ECX*0x4 + 0x4]
00402adb  5d                   POP EBP
00402adc  5e                   POP ESI
00402add  8b5d0c               MOV EBX,dword ptr [EBP + 0xc]
00402ae0  0bc0                 OR EAX,EAX
00402ae2  7433                 JZ 0x00402b17
00402ae4  783c                 JS 0x00402b22
00402ae6  8b7b08               MOV EDI,dword ptr [EBX + 0x8]
00402ae9  53                   PUSH EBX
00402aea  e8a9feffff           CALL 0x00402998
00402aef  83c404               ADD ESP,0x4
00402af2  8d6b10               LEA EBP,[EBX + 0x10]
00402af5  56                   PUSH ESI
00402af6  53                   PUSH EBX
00402af7  e8defeffff           CALL 0x004029da
00402afc  83c408               ADD ESP,0x8
00402aff  8d0c76               LEA ECX,[ESI + ESI*0x2]
00402b02  6a01                 PUSH 0x1
00402b04  8b448f08             MOV EAX,dword ptr [EDI + ECX*0x4 + 0x8]
00402b08  e861ffffff           CALL 0x00402a6e
00402b0d  8b048f               MOV EAX,dword ptr [EDI + ECX*0x4]
00402b10  89430c               MOV dword ptr [EBX + 0xc],EAX
00402b13  ff548f08             CALL dword ptr [EDI + ECX*0x4 + 0x8]
00402b17  8b7b08               MOV EDI,dword ptr [EBX + 0x8]
00402b1a  8d0c76               LEA ECX,[ESI + ESI*0x2]
00402b1d  8b348f               MOV ESI,dword ptr [EDI + ECX*0x4]
00402b20  eba1                 JMP 0x00402ac3
00402b22  b800000000           MOV EAX,0x0
00402b27  eb1c                 JMP 0x00402b45
00402b29  b801000000           MOV EAX,0x1
00402b2e  eb15                 JMP 0x00402b45
00402b30  55                   PUSH EBP
00402b31  8d6b10               LEA EBP,[EBX + 0x10]
00402b34  6aff                 PUSH -0x1
00402b36  53                   PUSH EBX
00402b37  e89efeffff           CALL 0x004029da
00402b3c  83c408               ADD ESP,0x8
00402b3f  5d                   POP EBP
00402b40  b801000000           MOV EAX,0x1
00402b45  5d                   POP EBP
00402b46  5f                   POP EDI
00402b47  5e                   POP ESI
00402b48  5b                   POP EBX
00402b49  8be5                 MOV ESP,EBP
00402b4b  5d                   POP EBP
00402b4c  c3                   RET

; ==== FUNCTION FUN_00402b4d entry=00402b4d sig=undefined __stdcall FUN_00402b4d(int param_1)
00402b4d  55                   PUSH EBP
00402b4e  8b4c2408             MOV ECX,dword ptr [ESP + 0x8]
00402b52  8b29                 MOV EBP,dword ptr [ECX]
00402b54  8b411c               MOV EAX,dword ptr [ECX + 0x1c]
00402b57  50                   PUSH EAX
00402b58  8b4118               MOV EAX,dword ptr [ECX + 0x18]
00402b5b  50                   PUSH EAX
00402b5c  e879feffff           CALL 0x004029da
00402b61  83c408               ADD ESP,0x8
00402b64  5d                   POP EBP
00402b65  c20400               RET 0x4

; ==== FUNCTION FUN_00402b68 entry=00402b68 sig=undefined __stdcall FUN_00402b68(void)
00402b68  a1987f4000           MOV EAX,[0x00407f98]
00402b6d  83f801               CMP EAX,0x1
00402b70  740d                 JZ 0x00402b7f
00402b72  85c0                 TEST EAX,EAX
00402b74  752a                 JNZ 0x00402ba0
00402b76  833d1472400001       CMP dword ptr [0x00407214],0x1
00402b7d  7521                 JNZ 0x00402ba0
00402b7f  68fc000000           PUSH 0xfc
00402b84  e818000000           CALL 0x00402ba1
00402b89  a1a8804000           MOV EAX,[0x004080a8]
00402b8e  59                   POP ECX
00402b8f  85c0                 TEST EAX,EAX
00402b91  7402                 JZ 0x00402b95
00402b93  ffd0                 CALL EAX
00402b95  68ff000000           PUSH 0xff
00402b9a  e802000000           CALL 0x00402ba1
00402b9f  59                   POP ECX
00402ba0  c3                   RET

; ==== FUNCTION FUN_00402ba1 entry=00402ba1 sig=undefined __cdecl FUN_00402ba1(DWORD param_1)
00402ba1  55                   PUSH EBP
00402ba2  8bec                 MOV EBP,ESP
00402ba4  81eca4010000         SUB ESP,0x1a4
00402baa  8b5508               MOV EDX,dword ptr [EBP + 0x8]
00402bad  33c9                 XOR ECX,ECX
00402baf  b8c8724000           MOV EAX,0x4072c8
00402bb4  3b10                 CMP EDX,dword ptr [EAX]
00402bb6  740b                 JZ 0x00402bc3
00402bb8  83c008               ADD EAX,0x8
00402bbb  41                   INC ECX
00402bbc  3d58734000           CMP EAX,0x407358
00402bc1  7cf1                 JL 0x00402bb4
00402bc3  56                   PUSH ESI
00402bc4  8bf1                 MOV ESI,ECX
00402bc6  c1e603               SHL ESI,0x3
00402bc9  3b96c8724000         CMP EDX,dword ptr [ESI + 0x4072c8]
00402bcf  0f851c010000         JNZ 0x00402cf1
00402bd5  a1987f4000           MOV EAX,[0x00407f98]
00402bda  83f801               CMP EAX,0x1
00402bdd  0f84e8000000         JZ 0x00402ccb
00402be3  85c0                 TEST EAX,EAX
00402be5  750d                 JNZ 0x00402bf4
00402be7  833d1472400001       CMP dword ptr [0x00407214],0x1
00402bee  0f84d7000000         JZ 0x00402ccb
00402bf4  81fafc000000         CMP EDX,0xfc
00402bfa  0f84f1000000         JZ 0x00402cf1
00402c00  8d855cfeffff         LEA EAX,[EBP + 0xfffffe5c]
00402c06  6804010000           PUSH 0x104
00402c0b  50                   PUSH EAX
00402c0c  6a00                 PUSH 0x0
00402c0e  ff1574604000         CALL dword ptr [0x00406074]
00402c14  85c0                 TEST EAX,EAX
00402c16  7513                 JNZ 0x00402c2b
00402c18  8d855cfeffff         LEA EAX,[EBP + 0xfffffe5c]
00402c1e  6870644000           PUSH 0x406470
00402c23  50                   PUSH EAX
00402c24  e8670a0000           CALL 0x00403690
00402c29  59                   POP ECX
00402c2a  59                   POP ECX
00402c2b  8d855cfeffff         LEA EAX,[EBP + 0xfffffe5c]
00402c31  57                   PUSH EDI
00402c32  50                   PUSH EAX
00402c33  8dbd5cfeffff         LEA EDI,[EBP + 0xfffffe5c]
00402c39  e822040000           CALL 0x00403060
00402c3e  40                   INC EAX
00402c3f  59                   POP ECX
00402c40  83f83c               CMP EAX,0x3c
00402c43  7629                 JBE 0x00402c6e
00402c45  8d855cfeffff         LEA EAX,[EBP + 0xfffffe5c]
00402c4b  50                   PUSH EAX
00402c4c  e80f040000           CALL 0x00403060
00402c51  8bf8                 MOV EDI,EAX
00402c53  8d855cfeffff         LEA EAX,[EBP + 0xfffffe5c]
00402c59  83e83b               SUB EAX,0x3b
00402c5c  6a03                 PUSH 0x3
00402c5e  03f8                 ADD EDI,EAX
00402c60  686c644000           PUSH 0x40646c
00402c65  57                   PUSH EDI
00402c66  e8d5e9ffff           CALL 0x00401640
00402c6b  83c410               ADD ESP,0x10
00402c6e  8d8560ffffff         LEA EAX,[EBP + 0xffffff60]
00402c74  6850644000           PUSH 0x406450
00402c79  50                   PUSH EAX
00402c7a  e8110a0000           CALL 0x00403690
00402c7f  8d8560ffffff         LEA EAX,[EBP + 0xffffff60]
00402c85  57                   PUSH EDI
00402c86  50                   PUSH EAX
00402c87  e8140a0000           CALL 0x004036a0
00402c8c  8d8560ffffff         LEA EAX,[EBP + 0xffffff60]
00402c92  684c644000           PUSH 0x40644c
00402c97  50                   PUSH EAX
00402c98  e8030a0000           CALL 0x004036a0
00402c9d  ffb6cc724000         PUSH dword ptr [ESI + 0x4072cc]
00402ca3  8d8560ffffff         LEA EAX,[EBP + 0xffffff60]
00402ca9  50                   PUSH EAX
00402caa  e8f1090000           CALL 0x004036a0
00402caf  6810200100           PUSH 0x12010
00402cb4  8d8560ffffff         LEA EAX,[EBP + 0xffffff60]
00402cba  6824644000           PUSH 0x406424
00402cbf  50                   PUSH EAX
00402cc0  e8b9160000           CALL 0x0040437e
00402cc5  83c42c               ADD ESP,0x2c
00402cc8  5f                   POP EDI
00402cc9  eb26                 JMP 0x00402cf1
00402ccb  8d4508               LEA EAX,[EBP + 0x8]
00402cce  8db6cc724000         LEA ESI,[ESI + 0x4072cc]
00402cd4  6a00                 PUSH 0x0
00402cd6  50                   PUSH EAX
00402cd7  ff36                 PUSH dword ptr [ESI]
00402cd9  e882030000           CALL 0x00403060
00402cde  59                   POP ECX
00402cdf  50                   PUSH EAX
00402ce0  ff36                 PUSH dword ptr [ESI]
00402ce2  6af4                 PUSH -0xc
00402ce4  ff150c604000         CALL dword ptr [0x0040600c]
00402cea  50                   PUSH EAX
00402ceb  ff15a8604000         CALL dword ptr [0x004060a8]
00402cf1  5e                   POP ESI
00402cf2  c9                   LEAVE
00402cf3  c3                   RET

; ==== FUNCTION FUN_00402cf4 entry=00402cf4 sig=DWORD __cdecl FUN_00402cf4(uint param_1, LONG param_2, DWORD param_3)
00402cf4  8b442404             MOV EAX,dword ptr [ESP + 0x4]
00402cf8  53                   PUSH EBX
00402cf9  3b0560944000         CMP EAX,dword ptr [0x00409460]
00402cff  56                   PUSH ESI
00402d00  57                   PUSH EDI
00402d01  7373                 JNC 0x00402d76
00402d03  8bc8                 MOV ECX,EAX
00402d05  8bf0                 MOV ESI,EAX
00402d07  c1f905               SAR ECX,0x5
00402d0a  83e61f               AND ESI,0x1f
00402d0d  8d3c8d60934000       LEA EDI,[ECX*0x4 + 0x409360]
00402d14  c1e603               SHL ESI,0x3
00402d17  8b0f                 MOV ECX,dword ptr [EDI]
00402d19  f644310401           TEST byte ptr [ECX + ESI*0x1 + 0x4],0x1
00402d1e  7456                 JZ 0x00402d76
00402d20  50                   PUSH EAX
00402d21  e8c2170000           CALL 0x004044e8
00402d26  83f8ff               CMP EAX,-0x1
00402d29  59                   POP ECX
00402d2a  750c                 JNZ 0x00402d38
00402d2c  c705447f400009000000 MOV dword ptr [0x00407f44],0x9
00402d36  eb4f                 JMP 0x00402d87
00402d38  ff742418             PUSH dword ptr [ESP + 0x18]
00402d3c  6a00                 PUSH 0x0
00402d3e  ff74241c             PUSH dword ptr [ESP + 0x1c]
00402d42  50                   PUSH EAX
00402d43  ff15b0604000         CALL dword ptr [0x004060b0]
00402d49  8bd8                 MOV EBX,EAX
00402d4b  83fbff               CMP EBX,-0x1
00402d4e  7508                 JNZ 0x00402d58
00402d50  ff15ac604000         CALL dword ptr [0x004060ac]
00402d56  eb02                 JMP 0x00402d5a
00402d58  33c0                 XOR EAX,EAX
00402d5a  85c0                 TEST EAX,EAX
00402d5c  7409                 JZ 0x00402d67
00402d5e  50                   PUSH EAX
00402d5f  e8a3160000           CALL 0x00404407
00402d64  59                   POP ECX
00402d65  eb20                 JMP 0x00402d87
00402d67  8b07                 MOV EAX,dword ptr [EDI]
00402d69  80643004fd           AND byte ptr [EAX + ESI*0x1 + 0x4],0xfd
00402d6e  8d443004             LEA EAX,[EAX + ESI*0x1 + 0x4]
00402d72  8bc3                 MOV EAX,EBX
00402d74  eb14                 JMP 0x00402d8a
00402d76  8325487f400000       AND dword ptr [0x00407f48],0x0
00402d7d  c705447f400009000000 MOV dword ptr [0x00407f44],0x9
00402d87  83c8ff               OR EAX,0xffffffff
00402d8a  5f                   POP EDI
00402d8b  5e                   POP ESI
00402d8c  5b                   POP EBX
00402d8d  c3                   RET

; ==== FUNCTION FUN_00402d8e entry=00402d8e sig=int __cdecl FUN_00402d8e(DWORD param_1, char * param_2, uint param_3)
00402d8e  55                   PUSH EBP
00402d8f  8bec                 MOV EBP,ESP
00402d91  81ec14040000         SUB ESP,0x414
00402d97  8b4d08               MOV ECX,dword ptr [EBP + 0x8]
00402d9a  53                   PUSH EBX
00402d9b  3b0d60944000         CMP ECX,dword ptr [0x00409460]
00402da1  56                   PUSH ESI
00402da2  57                   PUSH EDI
00402da3  0f8379010000         JNC 0x00402f22
00402da9  8bc1                 MOV EAX,ECX
00402dab  8bf1                 MOV ESI,ECX
00402dad  c1f805               SAR EAX,0x5
00402db0  83e61f               AND ESI,0x1f
00402db3  8d1c8560934000       LEA EBX,[EAX*0x4 + 0x409360]
00402dba  c1e603               SHL ESI,0x3
00402dbd  8b03                 MOV EAX,dword ptr [EBX]
00402dbf  8a443004             MOV AL,byte ptr [EAX + ESI*0x1 + 0x4]
00402dc3  a801                 TEST AL,0x1
00402dc5  0f8457010000         JZ 0x00402f22
00402dcb  33ff                 XOR EDI,EDI
00402dcd  397d10               CMP dword ptr [EBP + 0x10],EDI
00402dd0  897df8               MOV dword ptr [EBP + -0x8],EDI
00402dd3  897df0               MOV dword ptr [EBP + -0x10],EDI
00402dd6  7507                 JNZ 0x00402ddf
00402dd8  33c0                 XOR EAX,EAX
00402dda  e957010000           JMP 0x00402f36
00402ddf  a820                 TEST AL,0x20
00402de1  740c                 JZ 0x00402def
00402de3  6a02                 PUSH 0x2
00402de5  57                   PUSH EDI
00402de6  51                   PUSH ECX
00402de7  e808ffffff           CALL 0x00402cf4
00402dec  83c40c               ADD ESP,0xc
00402def  8b03                 MOV EAX,dword ptr [EBX]
00402df1  03c6                 ADD EAX,ESI
00402df3  f6400480             TEST byte ptr [EAX + 0x4],0x80
00402df7  0f84c1000000         JZ 0x00402ebe
00402dfd  8b450c               MOV EAX,dword ptr [EBP + 0xc]
00402e00  397d10               CMP dword ptr [EBP + 0x10],EDI
00402e03  8945fc               MOV dword ptr [EBP + -0x4],EAX
00402e06  897d08               MOV dword ptr [EBP + 0x8],EDI
00402e09  0f86e7000000         JBE 0x00402ef6
00402e0f  8d85ecfbffff         LEA EAX,[EBP + 0xfffffbec]
00402e15  8b4dfc               MOV ECX,dword ptr [EBP + -0x4]
00402e18  2b4d0c               SUB ECX,dword ptr [EBP + 0xc]
00402e1b  3b4d10               CMP ECX,dword ptr [EBP + 0x10]
00402e1e  7329                 JNC 0x00402e49
00402e20  8b4dfc               MOV ECX,dword ptr [EBP + -0x4]
00402e23  ff45fc               INC dword ptr [EBP + -0x4]
00402e26  8a09                 MOV CL,byte ptr [ECX]
00402e28  80f90a               CMP CL,0xa
00402e2b  7507                 JNZ 0x00402e34
00402e2d  ff45f0               INC dword ptr [EBP + -0x10]
00402e30  c6000d               MOV byte ptr [EAX],0xd
00402e33  40                   INC EAX
00402e34  8808                 MOV byte ptr [EAX],CL
00402e36  40                   INC EAX
00402e37  8bc8                 MOV ECX,EAX
00402e39  8d95ecfbffff         LEA EDX,[EBP + 0xfffffbec]
00402e3f  2bca                 SUB ECX,EDX
00402e41  81f900040000         CMP ECX,0x400
00402e47  7ccc                 JL 0x00402e15
00402e49  8bf8                 MOV EDI,EAX
00402e4b  8d85ecfbffff         LEA EAX,[EBP + 0xfffffbec]
00402e51  2bf8                 SUB EDI,EAX
00402e53  8d45f4               LEA EAX,[EBP + -0xc]
00402e56  6a00                 PUSH 0x0
00402e58  50                   PUSH EAX
00402e59  8d85ecfbffff         LEA EAX,[EBP + 0xfffffbec]
00402e5f  57                   PUSH EDI
00402e60  50                   PUSH EAX
00402e61  8b03                 MOV EAX,dword ptr [EBX]
00402e63  ff3430               PUSH dword ptr [EAX + ESI*0x1]
00402e66  ff15a8604000         CALL dword ptr [0x004060a8]
00402e6c  85c0                 TEST EAX,EAX
00402e6e  7443                 JZ 0x00402eb3
00402e70  8b45f4               MOV EAX,dword ptr [EBP + -0xc]
00402e73  0145f8               ADD dword ptr [EBP + -0x8],EAX
00402e76  3bc7                 CMP EAX,EDI
00402e78  7c0b                 JL 0x00402e85
00402e7a  8b45fc               MOV EAX,dword ptr [EBP + -0x4]
00402e7d  2b450c               SUB EAX,dword ptr [EBP + 0xc]
00402e80  3b4510               CMP EAX,dword ptr [EBP + 0x10]
00402e83  728a                 JC 0x00402e0f
00402e85  33ff                 XOR EDI,EDI
00402e87  8b45f8               MOV EAX,dword ptr [EBP + -0x8]
00402e8a  3bc7                 CMP EAX,EDI
00402e8c  0f858b000000         JNZ 0x00402f1d
00402e92  397d08               CMP dword ptr [EBP + 0x8],EDI
00402e95  745f                 JZ 0x00402ef6
00402e97  6a05                 PUSH 0x5
00402e99  58                   POP EAX
00402e9a  394508               CMP dword ptr [EBP + 0x8],EAX
00402e9d  754c                 JNZ 0x00402eeb
00402e9f  c705447f400009000000 MOV dword ptr [0x00407f44],0x9
00402ea9  a3487f4000           MOV [0x00407f48],EAX
00402eae  e980000000           JMP 0x00402f33
00402eb3  ff15ac604000         CALL dword ptr [0x004060ac]
00402eb9  894508               MOV dword ptr [EBP + 0x8],EAX
00402ebc  ebc7                 JMP 0x00402e85
00402ebe  8d4df4               LEA ECX,[EBP + -0xc]
00402ec1  57                   PUSH EDI
00402ec2  51                   PUSH ECX
00402ec3  ff7510               PUSH dword ptr [EBP + 0x10]
00402ec6  ff750c               PUSH dword ptr [EBP + 0xc]
00402ec9  ff30                 PUSH dword ptr [EAX]
00402ecb  ff15a8604000         CALL dword ptr [0x004060a8]
00402ed1  85c0                 TEST EAX,EAX
00402ed3  740b                 JZ 0x00402ee0
00402ed5  8b45f4               MOV EAX,dword ptr [EBP + -0xc]
00402ed8  897d08               MOV dword ptr [EBP + 0x8],EDI
00402edb  8945f8               MOV dword ptr [EBP + -0x8],EAX
00402ede  eba7                 JMP 0x00402e87
00402ee0  ff15ac604000         CALL dword ptr [0x004060ac]
00402ee6  894508               MOV dword ptr [EBP + 0x8],EAX
00402ee9  eb9c                 JMP 0x00402e87
00402eeb  ff7508               PUSH dword ptr [EBP + 0x8]
00402eee  e814150000           CALL 0x00404407
00402ef3  59                   POP ECX
00402ef4  eb3d                 JMP 0x00402f33
00402ef6  8b03                 MOV EAX,dword ptr [EBX]
00402ef8  f644300440           TEST byte ptr [EAX + ESI*0x1 + 0x4],0x40
00402efd  740c                 JZ 0x00402f0b
00402eff  8b450c               MOV EAX,dword ptr [EBP + 0xc]
00402f02  80381a               CMP byte ptr [EAX],0x1a
00402f05  0f84cdfeffff         JZ 0x00402dd8
00402f0b  c705447f40001c000000 MOV dword ptr [0x00407f44],0x1c
00402f15  893d487f4000         MOV dword ptr [0x00407f48],EDI
00402f1b  eb16                 JMP 0x00402f33
00402f1d  2b45f0               SUB EAX,dword ptr [EBP + -0x10]
00402f20  eb14                 JMP 0x00402f36
00402f22  8325487f400000       AND dword ptr [0x00407f48],0x0
00402f29  c705447f400009000000 MOV dword ptr [0x00407f44],0x9
00402f33  83c8ff               OR EAX,0xffffffff
00402f36  5f                   POP EDI
00402f37  5e                   POP ESI
00402f38  5b                   POP EBX
00402f39  c9                   LEAVE
00402f3a  c3                   RET

; ==== FUNCTION FUN_00402f3b entry=00402f3b sig=undefined __cdecl FUN_00402f3b(undefined4 * param_1)
00402f3b  ff05ac804000         INC dword ptr [0x004080ac]
00402f41  6800100000           PUSH 0x1000
00402f46  e835080000           CALL 0x00403780
00402f4b  59                   POP ECX
00402f4c  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
00402f50  85c0                 TEST EAX,EAX
00402f52  894108               MOV dword ptr [ECX + 0x8],EAX
00402f55  740d                 JZ 0x00402f64
00402f57  83490c08             OR dword ptr [ECX + 0xc],0x8
00402f5b  c7411800100000       MOV dword ptr [ECX + 0x18],0x1000
00402f62  eb11                 JMP 0x00402f75
00402f64  83490c04             OR dword ptr [ECX + 0xc],0x4
00402f68  8d4114               LEA EAX,[ECX + 0x14]
00402f6b  894108               MOV dword ptr [ECX + 0x8],EAX
00402f6e  c7411802000000       MOV dword ptr [ECX + 0x18],0x2
00402f75  8b4108               MOV EAX,dword ptr [ECX + 0x8]
00402f78  83610400             AND dword ptr [ECX + 0x4],0x0
00402f7c  8901                 MOV dword ptr [ECX],EAX
00402f7e  c3                   RET

; ==== FUNCTION FUN_00402f7f entry=00402f7f sig=byte __cdecl FUN_00402f7f(uint param_1)
00402f7f  8b442404             MOV EAX,dword ptr [ESP + 0x4]
00402f83  3b0560944000         CMP EAX,dword ptr [0x00409460]
00402f89  7203                 JC 0x00402f8e
00402f8b  33c0                 XOR EAX,EAX
00402f8d  c3                   RET
00402f8e  8bc8                 MOV ECX,EAX
00402f90  83e01f               AND EAX,0x1f
00402f93  c1f905               SAR ECX,0x5
00402f96  8b0c8d60934000       MOV ECX,dword ptr [ECX*0x4 + 0x409360]
00402f9d  8a44c104             MOV AL,byte ptr [ECX + EAX*0x8 + 0x4]
00402fa1  83e040               AND EAX,0x40
00402fa4  c3                   RET

; ==== FUNCTION FUN_00402fa5 entry=00402fa5 sig=undefined __stdcall FUN_00402fa5(void)
00402fa5  a140934000           MOV EAX,[0x00409340]
00402faa  56                   PUSH ESI
00402fab  6a14                 PUSH 0x14
00402fad  85c0                 TEST EAX,EAX
00402faf  5e                   POP ESI
00402fb0  7507                 JNZ 0x00402fb9
00402fb2  b800020000           MOV EAX,0x200
00402fb7  eb06                 JMP 0x00402fbf
00402fb9  3bc6                 CMP EAX,ESI
00402fbb  7d07                 JGE 0x00402fc4
00402fbd  8bc6                 MOV EAX,ESI
00402fbf  a340934000           MOV [0x00409340],EAX
00402fc4  6a04                 PUSH 0x4
00402fc6  50                   PUSH EAX
00402fc7  e859150000           CALL 0x00404525
00402fcc  59                   POP ECX
00402fcd  a328834000           MOV [0x00408328],EAX
00402fd2  85c0                 TEST EAX,EAX
00402fd4  59                   POP ECX
00402fd5  7521                 JNZ 0x00402ff8
00402fd7  6a04                 PUSH 0x4
00402fd9  56                   PUSH ESI
00402fda  893540934000         MOV dword ptr [0x00409340],ESI
00402fe0  e840150000           CALL 0x00404525
00402fe5  59                   POP ECX
00402fe6  a328834000           MOV [0x00408328],EAX
00402feb  85c0                 TEST EAX,EAX
00402fed  59                   POP ECX
00402fee  7508                 JNZ 0x00402ff8
00402ff0  6a1a                 PUSH 0x1a
00402ff2  e83de8ffff           CALL 0x00401834
00402ff7  59                   POP ECX
00402ff8  33c9                 XOR ECX,ECX
00402ffa  b858734000           MOV EAX,0x407358
00402fff  8b1528834000         MOV EDX,dword ptr [0x00408328]
00403005  890411               MOV dword ptr [ECX + EDX*0x1],EAX
00403008  83c020               ADD EAX,0x20
0040300b  83c104               ADD ECX,0x4
0040300e  3dd8754000           CMP EAX,0x4075d8
00403013  7cea                 JL 0x00402fff
00403015  33d2                 XOR EDX,EDX
00403017  b968734000           MOV ECX,0x407368
0040301c  8bc2                 MOV EAX,EDX
0040301e  8bf2                 MOV ESI,EDX
00403020  c1f805               SAR EAX,0x5
00403023  83e61f               AND ESI,0x1f
00403026  8b048560934000       MOV EAX,dword ptr [EAX*0x4 + 0x409360]
0040302d  8b04f0               MOV EAX,dword ptr [EAX + ESI*0x8]
00403030  83f8ff               CMP EAX,-0x1
00403033  7404                 JZ 0x00403039
00403035  85c0                 TEST EAX,EAX
00403037  7503                 JNZ 0x0040303c
00403039  8309ff               OR dword ptr [ECX],0xffffffff
0040303c  83c120               ADD ECX,0x20
0040303f  42                   INC EDX
00403040  81f9c8734000         CMP ECX,0x4073c8
00403046  7cd4                 JL 0x0040301c
00403048  5e                   POP ESI
00403049  c3                   RET

; ==== FUNCTION FUN_0040304a entry=0040304a sig=undefined __stdcall FUN_0040304a(void)
0040304a  e842160000           CALL 0x00404691
0040304f  803d847f400000       CMP byte ptr [0x00407f84],0x0
00403056  7405                 JZ 0x0040305d
00403058  e945150000           JMP 0x004045a2
0040305d  c3                   RET

; ==== FUNCTION __break entry=0040305e sig=noreturn undefined __stdcall __break(void)
0040305e  cc                   INT3

; ==== FUNCTION __break entry=0040305f sig=noreturn undefined __stdcall __break(void)
0040305f  cc                   INT3

; ==== FUNCTION _strlen entry=00403060 sig=size_t __cdecl _strlen(char * _Str)
00403060  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
00403064  f7c103000000         TEST ECX,0x3
0040306a  7414                 JZ 0x00403080
0040306c  8a01                 MOV AL,byte ptr [ECX]
0040306e  41                   INC ECX
0040306f  84c0                 TEST AL,AL
00403071  7440                 JZ 0x004030b3
00403073  f7c103000000         TEST ECX,0x3
00403079  75f1                 JNZ 0x0040306c
0040307b  0500000000           ADD EAX,0x0
00403080  8b01                 MOV EAX,dword ptr [ECX]
00403082  bafffefe7e           MOV EDX,0x7efefeff
00403087  03d0                 ADD EDX,EAX
00403089  83f0ff               XOR EAX,0xffffffff
0040308c  33c2                 XOR EAX,EDX
0040308e  83c104               ADD ECX,0x4
00403091  a900010181           TEST EAX,0x81010100
00403096  74e8                 JZ 0x00403080
00403098  8b41fc               MOV EAX,dword ptr [ECX + -0x4]
0040309b  84c0                 TEST AL,AL
0040309d  7432                 JZ 0x004030d1
0040309f  84e4                 TEST AH,AH
004030a1  7424                 JZ 0x004030c7
004030a3  a90000ff00           TEST EAX,0xff0000
004030a8  7413                 JZ 0x004030bd
004030aa  a9000000ff           TEST EAX,0xff000000
004030af  7402                 JZ 0x004030b3
004030b1  ebcd                 JMP 0x00403080
004030b3  8d41ff               LEA EAX,[ECX + -0x1]
004030b6  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
004030ba  2bc1                 SUB EAX,ECX
004030bc  c3                   RET
004030bd  8d41fe               LEA EAX,[ECX + -0x2]
004030c0  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
004030c4  2bc1                 SUB EAX,ECX
004030c6  c3                   RET
004030c7  8d41fd               LEA EAX,[ECX + -0x3]
004030ca  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
004030ce  2bc1                 SUB EAX,ECX
004030d0  c3                   RET
004030d1  8d41fc               LEA EAX,[ECX + -0x4]
004030d4  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
004030d8  2bc1                 SUB EAX,ECX
004030da  c3                   RET

; ==== FUNCTION FUN_004030db entry=004030db sig=int __cdecl FUN_004030db(LPSTR param_1, WCHAR param_2)
004030db  55                   PUSH EBP
004030dc  8bec                 MOV EBP,ESP
004030de  8b4508               MOV EAX,dword ptr [EBP + 0x8]
004030e1  85c0                 TEST EAX,EAX
004030e3  7502                 JNZ 0x004030e7
004030e5  5d                   POP EBP
004030e6  c3                   RET
004030e7  833dc880400000       CMP dword ptr [0x004080c8],0x0
004030ee  7512                 JNZ 0x00403102
004030f0  668b4d0c             MOV CX,word ptr [EBP + 0xc]
004030f4  6681f9ff00           CMP CX,0xff
004030f9  7739                 JA 0x00403134
004030fb  6a01                 PUSH 0x1
004030fd  8808                 MOV byte ptr [EAX],CL
004030ff  58                   POP EAX
00403100  5d                   POP EBP
00403101  c3                   RET
00403102  8d4d08               LEA ECX,[EBP + 0x8]
00403105  83650800             AND dword ptr [EBP + 0x8],0x0
00403109  51                   PUSH ECX
0040310a  6a00                 PUSH 0x0
0040310c  ff35807a4000         PUSH dword ptr [0x00407a80]
00403112  50                   PUSH EAX
00403113  8d450c               LEA EAX,[EBP + 0xc]
00403116  6a01                 PUSH 0x1
00403118  50                   PUSH EAX
00403119  6820020000           PUSH 0x220
0040311e  ff35d8804000         PUSH dword ptr [0x004080d8]
00403124  ff1580604000         CALL dword ptr [0x00406080]
0040312a  85c0                 TEST EAX,EAX
0040312c  7406                 JZ 0x00403134
0040312e  837d0800             CMP dword ptr [EBP + 0x8],0x0
00403132  740d                 JZ 0x00403141
00403134  c705447f40002a000000 MOV dword ptr [0x00407f44],0x2a
0040313e  83c8ff               OR EAX,0xffffffff
00403141  5d                   POP EBP
00403142  c3                   RET
; undefined 13 bytes at 00403143

; ==== FUNCTION __aulldiv entry=00403150 sig=undefined8 __stdcall __aulldiv(uint param_1, uint param_2, uint param_3, uint param_4)
00403150  53                   PUSH EBX
00403151  56                   PUSH ESI
00403152  8b442418             MOV EAX,dword ptr [ESP + 0x18]
00403156  0bc0                 OR EAX,EAX
00403158  7518                 JNZ 0x00403172
0040315a  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
0040315e  8b442410             MOV EAX,dword ptr [ESP + 0x10]
00403162  33d2                 XOR EDX,EDX
00403164  f7f1                 DIV ECX
00403166  8bd8                 MOV EBX,EAX
00403168  8b44240c             MOV EAX,dword ptr [ESP + 0xc]
0040316c  f7f1                 DIV ECX
0040316e  8bd3                 MOV EDX,EBX
00403170  eb41                 JMP 0x004031b3
00403172  8bc8                 MOV ECX,EAX
00403174  8b5c2414             MOV EBX,dword ptr [ESP + 0x14]
00403178  8b542410             MOV EDX,dword ptr [ESP + 0x10]
0040317c  8b44240c             MOV EAX,dword ptr [ESP + 0xc]
00403180  d1e9                 SHR ECX,0x1
00403182  d1db                 RCR EBX,0x1
00403184  d1ea                 SHR EDX,0x1
00403186  d1d8                 RCR EAX,0x1
00403188  0bc9                 OR ECX,ECX
0040318a  75f4                 JNZ 0x00403180
0040318c  f7f3                 DIV EBX
0040318e  8bf0                 MOV ESI,EAX
00403190  f7642418             MUL dword ptr [ESP + 0x18]
00403194  8bc8                 MOV ECX,EAX
00403196  8b442414             MOV EAX,dword ptr [ESP + 0x14]
0040319a  f7e6                 MUL ESI
0040319c  03d1                 ADD EDX,ECX
0040319e  720e                 JC 0x004031ae
004031a0  3b542410             CMP EDX,dword ptr [ESP + 0x10]
004031a4  7708                 JA 0x004031ae
004031a6  7207                 JC 0x004031af
004031a8  3b44240c             CMP EAX,dword ptr [ESP + 0xc]
004031ac  7601                 JBE 0x004031af
004031ae  4e                   DEC ESI
004031af  33d2                 XOR EDX,EDX
004031b1  8bc6                 MOV EAX,ESI
004031b3  5e                   POP ESI
004031b4  5b                   POP EBX
004031b5  c21000               RET 0x10
; undefined 8 bytes at 004031b8

; ==== FUNCTION __aullrem entry=004031c0 sig=undefined8 __stdcall __aullrem(uint param_1, uint param_2, uint param_3, uint param_4)
004031c0  53                   PUSH EBX
004031c1  8b442414             MOV EAX,dword ptr [ESP + 0x14]
004031c5  0bc0                 OR EAX,EAX
004031c7  7518                 JNZ 0x004031e1
004031c9  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
004031cd  8b44240c             MOV EAX,dword ptr [ESP + 0xc]
004031d1  33d2                 XOR EDX,EDX
004031d3  f7f1                 DIV ECX
004031d5  8b442408             MOV EAX,dword ptr [ESP + 0x8]
004031d9  f7f1                 DIV ECX
004031db  8bc2                 MOV EAX,EDX
004031dd  33d2                 XOR EDX,EDX
004031df  eb50                 JMP 0x00403231
004031e1  8bc8                 MOV ECX,EAX
004031e3  8b5c2410             MOV EBX,dword ptr [ESP + 0x10]
004031e7  8b54240c             MOV EDX,dword ptr [ESP + 0xc]
004031eb  8b442408             MOV EAX,dword ptr [ESP + 0x8]
004031ef  d1e9                 SHR ECX,0x1
004031f1  d1db                 RCR EBX,0x1
004031f3  d1ea                 SHR EDX,0x1
004031f5  d1d8                 RCR EAX,0x1
004031f7  0bc9                 OR ECX,ECX
004031f9  75f4                 JNZ 0x004031ef
004031fb  f7f3                 DIV EBX
004031fd  8bc8                 MOV ECX,EAX
004031ff  f7642414             MUL dword ptr [ESP + 0x14]
00403203  91                   XCHG EAX,ECX
00403204  f7642410             MUL dword ptr [ESP + 0x10]
00403208  03d1                 ADD EDX,ECX
0040320a  720e                 JC 0x0040321a
0040320c  3b54240c             CMP EDX,dword ptr [ESP + 0xc]
00403210  7708                 JA 0x0040321a
00403212  720e                 JC 0x00403222
00403214  3b442408             CMP EAX,dword ptr [ESP + 0x8]
00403218  7608                 JBE 0x00403222
0040321a  2b442410             SUB EAX,dword ptr [ESP + 0x10]
0040321e  1b542414             SBB EDX,dword ptr [ESP + 0x14]
00403222  2b442408             SUB EAX,dword ptr [ESP + 0x8]
00403226  1b54240c             SBB EDX,dword ptr [ESP + 0xc]
0040322a  f7da                 NEG EDX
0040322c  f7d8                 NEG EAX
0040322e  83da00               SBB EDX,0x0
00403231  5b                   POP EBX
00403232  c21000               RET 0x10

; ==== FUNCTION FUN_00403235 entry=00403235 sig=undefined __cdecl FUN_00403235(byte param_1)
00403235  6a04                 PUSH 0x4
00403237  6a00                 PUSH 0x0
00403239  ff74240c             PUSH dword ptr [ESP + 0xc]
0040323d  e804000000           CALL 0x00403246
00403242  83c40c               ADD ESP,0xc
00403245  c3                   RET

; ==== FUNCTION FUN_00403246 entry=00403246 sig=undefined4 __cdecl FUN_00403246(byte param_1, uint param_2, byte param_3)
00403246  0fb6442404           MOVZX EAX,byte ptr [ESP + 0x4]
0040324b  8a4c240c             MOV CL,byte ptr [ESP + 0xc]
0040324f  848821824000         TEST byte ptr [EAX + 0x408221],CL
00403255  751c                 JNZ 0x00403273
00403257  837c240800           CMP dword ptr [ESP + 0x8],0x0
0040325c  740e                 JZ 0x0040326c
0040325e  0fb7044502764000     MOVZX EAX,word ptr [EAX*0x2 + 0x407602]
00403266  23442408             AND EAX,dword ptr [ESP + 0x8]
0040326a  eb02                 JMP 0x0040326e
0040326c  33c0                 XOR EAX,EAX
0040326e  85c0                 TEST EAX,EAX
00403270  7501                 JNZ 0x00403273
00403272  c3                   RET
00403273  6a01                 PUSH 0x1
00403275  58                   POP EAX
00403276  c3                   RET

; ==== FUNCTION FUN_00403277 entry=00403277 sig=undefined4 __cdecl FUN_00403277(int param_1)
00403277  55                   PUSH EBP
00403278  8bec                 MOV EBP,ESP
0040327a  83ec18               SUB ESP,0x18
0040327d  53                   PUSH EBX
0040327e  56                   PUSH ESI
0040327f  57                   PUSH EDI
00403280  ff7508               PUSH dword ptr [EBP + 0x8]
00403283  e888010000           CALL 0x00403410
00403288  8bf0                 MOV ESI,EAX
0040328a  59                   POP ECX
0040328b  3b3508814000         CMP ESI,dword ptr [0x00408108]
00403291  897508               MOV dword ptr [EBP + 0x8],ESI
00403294  0f846a010000         JZ 0x00403404
0040329a  33db                 XOR EBX,EBX
0040329c  3bf3                 CMP ESI,EBX
0040329e  0f8456010000         JZ 0x004033fa
004032a4  33d2                 XOR EDX,EDX
004032a6  b818784000           MOV EAX,0x407818
004032ab  3930                 CMP dword ptr [EAX],ESI
004032ad  7472                 JZ 0x00403321
004032af  83c030               ADD EAX,0x30
004032b2  42                   INC EDX
004032b3  3d08794000           CMP EAX,0x407908
004032b8  7cf1                 JL 0x004032ab
004032ba  8d45e8               LEA EAX,[EBP + -0x18]
004032bd  50                   PUSH EAX
004032be  56                   PUSH ESI
004032bf  ff15b4604000         CALL dword ptr [0x004060b4]
004032c5  83f801               CMP EAX,0x1
004032c8  0f8524010000         JNZ 0x004033f2
004032ce  6a40                 PUSH 0x40
004032d0  33c0                 XOR EAX,EAX
004032d2  59                   POP ECX
004032d3  bf20824000           MOV EDI,0x408220
004032d8  837de801             CMP dword ptr [EBP + -0x18],0x1
004032dc  893508814000         MOV dword ptr [0x00408108],ESI
004032e2  f3ab                 STOSD.REP ES:EDI
004032e4  aa                   STOSB ES:EDI
004032e5  891d24834000         MOV dword ptr [0x00408324],EBX
004032eb  0f86ef000000         JBE 0x004033e0
004032f1  807dee00             CMP byte ptr [EBP + -0x12],0x0
004032f5  0f84bb000000         JZ 0x004033b6
004032fb  8d4def               LEA ECX,[EBP + -0x11]
004032fe  8a11                 MOV DL,byte ptr [ECX]
00403300  84d2                 TEST DL,DL
00403302  0f84ae000000         JZ 0x004033b6
00403308  0fb641ff             MOVZX EAX,byte ptr [ECX + -0x1]
0040330c  0fb6d2               MOVZX EDX,DL
0040330f  3bc2                 CMP EAX,EDX
00403311  0f8793000000         JA 0x004033aa
00403317  80882182400004       OR byte ptr [EAX + 0x408221],0x4
0040331e  40                   INC EAX
0040331f  ebee                 JMP 0x0040330f
00403321  6a40                 PUSH 0x40
00403323  33c0                 XOR EAX,EAX
00403325  59                   POP ECX
00403326  bf20824000           MOV EDI,0x408220
0040332b  f3ab                 STOSD.REP ES:EDI
0040332d  8d3452               LEA ESI,[EDX + EDX*0x2]
00403330  895dfc               MOV dword ptr [EBP + -0x4],EBX
00403333  c1e604               SHL ESI,0x4
00403336  aa                   STOSB ES:EDI
00403337  8d9e28784000         LEA EBX,[ESI + 0x407828]
0040333d  803b00               CMP byte ptr [EBX],0x0
00403340  8bcb                 MOV ECX,EBX
00403342  742c                 JZ 0x00403370
00403344  8a5101               MOV DL,byte ptr [ECX + 0x1]
00403347  84d2                 TEST DL,DL
00403349  7425                 JZ 0x00403370
0040334b  0fb601               MOVZX EAX,byte ptr [ECX]
0040334e  0fb6fa               MOVZX EDI,DL
00403351  3bc7                 CMP EAX,EDI
00403353  7714                 JA 0x00403369
00403355  8b55fc               MOV EDX,dword ptr [EBP + -0x4]
00403358  8a9210784000         MOV DL,byte ptr [EDX + 0x407810]
0040335e  089021824000         OR byte ptr [EAX + 0x408221],DL
00403364  40                   INC EAX
00403365  3bc7                 CMP EAX,EDI
00403367  76f5                 JBE 0x0040335e
00403369  41                   INC ECX
0040336a  41                   INC ECX
0040336b  803900               CMP byte ptr [ECX],0x0
0040336e  75d4                 JNZ 0x00403344
00403370  ff45fc               INC dword ptr [EBP + -0x4]
00403373  83c308               ADD EBX,0x8
00403376  837dfc04             CMP dword ptr [EBP + -0x4],0x4
0040337a  72c1                 JC 0x0040333d
0040337c  8b4508               MOV EAX,dword ptr [EBP + 0x8]
0040337f  c7051c81400001000000 MOV dword ptr [0x0040811c],0x1
00403389  50                   PUSH EAX
0040338a  a308814000           MOV [0x00408108],EAX
0040338f  e8c6000000           CALL 0x0040345a
00403394  8db61c784000         LEA ESI,[ESI + 0x40781c]
0040339a  bf10814000           MOV EDI,0x408110
0040339f  a5                   MOVSD ES:EDI,ESI
004033a0  a5                   MOVSD ES:EDI,ESI
004033a1  59                   POP ECX
004033a2  a324834000           MOV [0x00408324],EAX
004033a7  a5                   MOVSD ES:EDI,ESI
004033a8  eb55                 JMP 0x004033ff
004033aa  41                   INC ECX
004033ab  41                   INC ECX
004033ac  8079ff00             CMP byte ptr [ECX + -0x1],0x0
004033b0  0f8548ffffff         JNZ 0x004032fe
004033b6  6a01                 PUSH 0x1
004033b8  58                   POP EAX
004033b9  80882182400008       OR byte ptr [EAX + 0x408221],0x8
004033c0  40                   INC EAX
004033c1  3dff000000           CMP EAX,0xff
004033c6  72f1                 JC 0x004033b9
004033c8  56                   PUSH ESI
004033c9  e88c000000           CALL 0x0040345a
004033ce  59                   POP ECX
004033cf  a324834000           MOV [0x00408324],EAX
004033d4  c7051c81400001000000 MOV dword ptr [0x0040811c],0x1
004033de  eb06                 JMP 0x004033e6
004033e0  891d1c814000         MOV dword ptr [0x0040811c],EBX
004033e6  33c0                 XOR EAX,EAX
004033e8  bf10814000           MOV EDI,0x408110
004033ed  ab                   STOSD ES:EDI
004033ee  ab                   STOSD ES:EDI
004033ef  ab                   STOSD ES:EDI
004033f0  eb0d                 JMP 0x004033ff
004033f2  391db0804000         CMP dword ptr [0x004080b0],EBX
004033f8  740e                 JZ 0x00403408
004033fa  e88e000000           CALL 0x0040348d
004033ff  e8b2000000           CALL 0x004034b6
00403404  33c0                 XOR EAX,EAX
00403406  eb03                 JMP 0x0040340b
00403408  83c8ff               OR EAX,0xffffffff
0040340b  5f                   POP EDI
0040340c  5e                   POP ESI
0040340d  5b                   POP EBX
0040340e  c9                   LEAVE
0040340f  c3                   RET

; ==== FUNCTION FUN_00403410 entry=00403410 sig=int __cdecl FUN_00403410(int param_1)
00403410  8b442404             MOV EAX,dword ptr [ESP + 0x4]
00403414  8325b080400000       AND dword ptr [0x004080b0],0x0
0040341b  83f8fe               CMP EAX,-0x2
0040341e  7510                 JNZ 0x00403430
00403420  c705b080400001000000 MOV dword ptr [0x004080b0],0x1
0040342a  ff25bc604000         JMP dword ptr [0x004060bc]
00403430  83f8fd               CMP EAX,-0x3
00403433  7510                 JNZ 0x00403445
00403435  c705b080400001000000 MOV dword ptr [0x004080b0],0x1
0040343f  ff25b8604000         JMP dword ptr [0x004060b8]
00403445  83f8fc               CMP EAX,-0x4
00403448  750f                 JNZ 0x00403459
0040344a  a1d8804000           MOV EAX,[0x004080d8]
0040344f  c705b080400001000000 MOV dword ptr [0x004080b0],0x1
00403459  c3                   RET

; ==== FUNCTION FUN_0040345a entry=0040345a sig=undefined4 __cdecl FUN_0040345a(int param_1)
0040345a  8b442404             MOV EAX,dword ptr [ESP + 0x4]
0040345e  2da4030000           SUB EAX,0x3a4
00403463  7422                 JZ 0x00403487
00403465  83e804               SUB EAX,0x4
00403468  7417                 JZ 0x00403481
0040346a  83e80d               SUB EAX,0xd
0040346d  740c                 JZ 0x0040347b
0040346f  48                   DEC EAX
00403470  7403                 JZ 0x00403475
00403472  33c0                 XOR EAX,EAX
00403474  c3                   RET
00403475  b804040000           MOV EAX,0x404
0040347a  c3                   RET
0040347b  b812040000           MOV EAX,0x412
00403480  c3                   RET
00403481  b804080000           MOV EAX,0x804
00403486  c3                   RET
00403487  b811040000           MOV EAX,0x411
0040348c  c3                   RET

; ==== FUNCTION FUN_0040348d entry=0040348d sig=undefined __stdcall FUN_0040348d(void)
0040348d  57                   PUSH EDI
0040348e  6a40                 PUSH 0x40
00403490  59                   POP ECX
00403491  33c0                 XOR EAX,EAX
00403493  bf20824000           MOV EDI,0x408220
00403498  f3ab                 STOSD.REP ES:EDI
0040349a  aa                   STOSB ES:EDI
0040349b  33c0                 XOR EAX,EAX
0040349d  bf10814000           MOV EDI,0x408110
004034a2  a308814000           MOV [0x00408108],EAX
004034a7  a31c814000           MOV [0x0040811c],EAX
004034ac  a324834000           MOV [0x00408324],EAX
004034b1  ab                   STOSD ES:EDI
004034b2  ab                   STOSD ES:EDI
004034b3  ab                   STOSD ES:EDI
004034b4  5f                   POP EDI
004034b5  c3                   RET

; ==== FUNCTION FUN_004034b6 entry=004034b6 sig=undefined __stdcall FUN_004034b6(void)
004034b6  55                   PUSH EBP
004034b7  8bec                 MOV EBP,ESP
004034b9  81ec14050000         SUB ESP,0x514
004034bf  8d45ec               LEA EAX,[EBP + -0x14]
004034c2  56                   PUSH ESI
004034c3  50                   PUSH EAX
004034c4  ff3508814000         PUSH dword ptr [0x00408108]
004034ca  ff15b4604000         CALL dword ptr [0x004060b4]
004034d0  83f801               CMP EAX,0x1
004034d3  0f8516010000         JNZ 0x004035ef
004034d9  33c0                 XOR EAX,EAX
004034db  be00010000           MOV ESI,0x100
004034e0  888405ecfeffff       MOV byte ptr [EBP + EAX*0x1 + 0xfffffeec],AL
004034e7  40                   INC EAX
004034e8  3bc6                 CMP EAX,ESI
004034ea  72f4                 JC 0x004034e0
004034ec  8a45f2               MOV AL,byte ptr [EBP + -0xe]
004034ef  c685ecfeffff20       MOV byte ptr [EBP + 0xfffffeec],0x20
004034f6  84c0                 TEST AL,AL
004034f8  7437                 JZ 0x00403531
004034fa  53                   PUSH EBX
004034fb  57                   PUSH EDI
004034fc  8d55f3               LEA EDX,[EBP + -0xd]
004034ff  0fb60a               MOVZX ECX,byte ptr [EDX]
00403502  0fb6c0               MOVZX EAX,AL
00403505  3bc1                 CMP EAX,ECX
00403507  771d                 JA 0x00403526
00403509  2bc8                 SUB ECX,EAX
0040350b  8dbc05ecfeffff       LEA EDI,[EBP + EAX*0x1 + 0xfffffeec]
00403512  41                   INC ECX
00403513  b820202020           MOV EAX,0x20202020
00403518  8bd9                 MOV EBX,ECX
0040351a  c1e902               SHR ECX,0x2
0040351d  f3ab                 STOSD.REP ES:EDI
0040351f  8bcb                 MOV ECX,EBX
00403521  83e103               AND ECX,0x3
00403524  f3aa                 STOSB.REP ES:EDI
00403526  42                   INC EDX
00403527  42                   INC EDX
00403528  8a42ff               MOV AL,byte ptr [EDX + -0x1]
0040352b  84c0                 TEST AL,AL
0040352d  75d0                 JNZ 0x004034ff
0040352f  5f                   POP EDI
00403530  5b                   POP EBX
00403531  6a00                 PUSH 0x0
00403533  8d85ecfaffff         LEA EAX,[EBP + 0xfffffaec]
00403539  ff3524834000         PUSH dword ptr [0x00408324]
0040353f  ff3508814000         PUSH dword ptr [0x00408108]
00403545  50                   PUSH EAX
00403546  8d85ecfeffff         LEA EAX,[EBP + 0xfffffeec]
0040354c  56                   PUSH ESI
0040354d  50                   PUSH EAX
0040354e  6a01                 PUSH 0x1
00403550  e80a140000           CALL 0x0040495f
00403555  6a00                 PUSH 0x0
00403557  8d85ecfdffff         LEA EAX,[EBP + 0xfffffdec]
0040355d  ff3508814000         PUSH dword ptr [0x00408108]
00403563  56                   PUSH ESI
00403564  50                   PUSH EAX
00403565  8d85ecfeffff         LEA EAX,[EBP + 0xfffffeec]
0040356b  56                   PUSH ESI
0040356c  50                   PUSH EAX
0040356d  56                   PUSH ESI
0040356e  ff3524834000         PUSH dword ptr [0x00408324]
00403574  e897110000           CALL 0x00404710
00403579  6a00                 PUSH 0x0
0040357b  8d85ecfcffff         LEA EAX,[EBP + 0xfffffcec]
00403581  ff3508814000         PUSH dword ptr [0x00408108]
00403587  56                   PUSH ESI
00403588  50                   PUSH EAX
00403589  8d85ecfeffff         LEA EAX,[EBP + 0xfffffeec]
0040358f  56                   PUSH ESI
00403590  50                   PUSH EAX
00403591  6800020000           PUSH 0x200
00403596  ff3524834000         PUSH dword ptr [0x00408324]
0040359c  e86f110000           CALL 0x00404710
004035a1  83c45c               ADD ESP,0x5c
004035a4  33c0                 XOR EAX,EAX
004035a6  8d8decfaffff         LEA ECX,[EBP + 0xfffffaec]
004035ac  668b11               MOV DX,word ptr [ECX]
004035af  f6c201               TEST DL,0x1
004035b2  7416                 JZ 0x004035ca
004035b4  80882182400010       OR byte ptr [EAX + 0x408221],0x10
004035bb  8a9405ecfdffff       MOV DL,byte ptr [EBP + EAX*0x1 + 0xfffffdec]
004035c2  889020814000         MOV byte ptr [EAX + 0x408120],DL
004035c8  eb1c                 JMP 0x004035e6
004035ca  f6c202               TEST DL,0x2
004035cd  7410                 JZ 0x004035df
004035cf  80882182400020       OR byte ptr [EAX + 0x408221],0x20
004035d6  8a9405ecfcffff       MOV DL,byte ptr [EBP + EAX*0x1 + 0xfffffcec]
004035dd  ebe3                 JMP 0x004035c2
004035df  80a02081400000       AND byte ptr [EAX + 0x408120],0x0
004035e6  40                   INC EAX
004035e7  41                   INC ECX
004035e8  41                   INC ECX
004035e9  3bc6                 CMP EAX,ESI
004035eb  72bf                 JC 0x004035ac
004035ed  eb49                 JMP 0x00403638
004035ef  33c0                 XOR EAX,EAX
004035f1  be00010000           MOV ESI,0x100
004035f6  83f841               CMP EAX,0x41
004035f9  7219                 JC 0x00403614
004035fb  83f85a               CMP EAX,0x5a
004035fe  7714                 JA 0x00403614
00403600  80882182400010       OR byte ptr [EAX + 0x408221],0x10
00403607  8ac8                 MOV CL,AL
00403609  80c120               ADD CL,0x20
0040360c  888820814000         MOV byte ptr [EAX + 0x408120],CL
00403612  eb1f                 JMP 0x00403633
00403614  83f861               CMP EAX,0x61
00403617  7213                 JC 0x0040362c
00403619  83f87a               CMP EAX,0x7a
0040361c  770e                 JA 0x0040362c
0040361e  80882182400020       OR byte ptr [EAX + 0x408221],0x20
00403625  8ac8                 MOV CL,AL
00403627  80e920               SUB CL,0x20
0040362a  ebe0                 JMP 0x0040360c
0040362c  80a02081400000       AND byte ptr [EAX + 0x408120],0x0
00403633  40                   INC EAX
00403634  3bc6                 CMP EAX,ESI
00403636  72be                 JC 0x004035f6
00403638  5e                   POP ESI
00403639  c9                   LEAVE
0040363a  c3                   RET

; ==== FUNCTION FUN_0040363b entry=0040363b sig=undefined __stdcall FUN_0040363b(void)
0040363b  833d6c94400000       CMP dword ptr [0x0040946c],0x0
00403642  7512                 JNZ 0x00403656
00403644  6afd                 PUSH -0x3
00403646  e82cfcffff           CALL 0x00403277
0040364b  59                   POP ECX
0040364c  c7056c94400001000000 MOV dword ptr [0x0040946c],0x1
00403656  c3                   RET

; ==== FUNCTION FUN_00403657 entry=00403657 sig=undefined __cdecl FUN_00403657(LPVOID param_1)
00403657  56                   PUSH ESI
00403658  8b742408             MOV ESI,dword ptr [ESP + 0x8]
0040365c  85f6                 TEST ESI,ESI
0040365e  7424                 JZ 0x00403684
00403660  56                   PUSH ESI
00403661  e80d050000           CALL 0x00403b73
00403666  59                   POP ECX
00403667  85c0                 TEST EAX,EAX
00403669  56                   PUSH ESI
0040366a  740a                 JZ 0x00403676
0040366c  50                   PUSH EAX
0040366d  e82c050000           CALL 0x00403b9e
00403672  59                   POP ECX
00403673  59                   POP ECX
00403674  5e                   POP ESI
00403675  c3                   RET
00403676  6a00                 PUSH 0x0
00403678  ff3544934000         PUSH dword ptr [0x00409344]
0040367e  ff15a0604000         CALL dword ptr [0x004060a0]
00403684  5e                   POP ESI
00403685  c3                   RET
; undefined 10 bytes at 00403686

; ==== FUNCTION FUN_00403690 entry=00403690 sig=uint * __cdecl FUN_00403690(uint * param_1, uint * param_2)
00403690  57                   PUSH EDI
00403691  8b7c2408             MOV EDI,dword ptr [ESP + 0x8]
00403695  eb6a                 JMP 0x00403701

; ==== FUNCTION FUN_00403697 entry=00403697 sig=uint * __stdcall FUN_00403697(uint * param_1, uint * param_2)
00403697  8da42400000000       LEA ESP,[ESP]
0040369e  8bff                 MOV EDI,EDI

; ==== FUNCTION FUN_004036a0 entry=004036a0 sig=uint * __cdecl FUN_004036a0(uint * param_1, uint * param_2)
004036a0  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
004036a4  57                   PUSH EDI
004036a5  f7c103000000         TEST ECX,0x3
004036ab  740f                 JZ 0x004036bc
004036ad  8a01                 MOV AL,byte ptr [ECX]
004036af  41                   INC ECX
004036b0  84c0                 TEST AL,AL
004036b2  743b                 JZ 0x004036ef
004036b4  f7c103000000         TEST ECX,0x3
004036ba  75f1                 JNZ 0x004036ad
004036bc  8b01                 MOV EAX,dword ptr [ECX]
004036be  bafffefe7e           MOV EDX,0x7efefeff
004036c3  03d0                 ADD EDX,EAX
004036c5  83f0ff               XOR EAX,0xffffffff
004036c8  33c2                 XOR EAX,EDX
004036ca  83c104               ADD ECX,0x4
004036cd  a900010181           TEST EAX,0x81010100
004036d2  74e8                 JZ 0x004036bc
004036d4  8b41fc               MOV EAX,dword ptr [ECX + -0x4]
004036d7  84c0                 TEST AL,AL
004036d9  7423                 JZ 0x004036fe
004036db  84e4                 TEST AH,AH
004036dd  741a                 JZ 0x004036f9
004036df  a90000ff00           TEST EAX,0xff0000
004036e4  740e                 JZ 0x004036f4
004036e6  a9000000ff           TEST EAX,0xff000000
004036eb  7402                 JZ 0x004036ef
004036ed  ebcd                 JMP 0x004036bc
004036ef  8d79ff               LEA EDI,[ECX + -0x1]
004036f2  eb0d                 JMP 0x00403701
004036f4  8d79fe               LEA EDI,[ECX + -0x2]
004036f7  eb08                 JMP 0x00403701
004036f9  8d79fd               LEA EDI,[ECX + -0x3]
004036fc  eb03                 JMP 0x00403701
004036fe  8d79fc               LEA EDI,[ECX + -0x4]
00403701  8b4c240c             MOV ECX,dword ptr [ESP + 0xc]
00403705  f7c103000000         TEST ECX,0x3
0040370b  7419                 JZ 0x00403726
0040370d  8a11                 MOV DL,byte ptr [ECX]
0040370f  41                   INC ECX
00403710  84d2                 TEST DL,DL
00403712  7464                 JZ 0x00403778
00403714  8817                 MOV byte ptr [EDI],DL
00403716  47                   INC EDI
00403717  f7c103000000         TEST ECX,0x3
0040371d  75ee                 JNZ 0x0040370d
0040371f  eb05                 JMP 0x00403726
00403721  8917                 MOV dword ptr [EDI],EDX
00403723  83c704               ADD EDI,0x4
00403726  bafffefe7e           MOV EDX,0x7efefeff
0040372b  8b01                 MOV EAX,dword ptr [ECX]
0040372d  03d0                 ADD EDX,EAX
0040372f  83f0ff               XOR EAX,0xffffffff
00403732  33c2                 XOR EAX,EDX
00403734  8b11                 MOV EDX,dword ptr [ECX]
00403736  83c104               ADD ECX,0x4
00403739  a900010181           TEST EAX,0x81010100
0040373e  74e1                 JZ 0x00403721
00403740  84d2                 TEST DL,DL
00403742  7434                 JZ 0x00403778
00403744  84f6                 TEST DH,DH
00403746  7427                 JZ 0x0040376f
00403748  f7c20000ff00         TEST EDX,0xff0000
0040374e  7412                 JZ 0x00403762
00403750  f7c2000000ff         TEST EDX,0xff000000
00403756  7402                 JZ 0x0040375a
00403758  ebc7                 JMP 0x00403721
0040375a  8917                 MOV dword ptr [EDI],EDX
0040375c  8b442408             MOV EAX,dword ptr [ESP + 0x8]
00403760  5f                   POP EDI
00403761  c3                   RET
00403762  668917               MOV word ptr [EDI],DX
00403765  8b442408             MOV EAX,dword ptr [ESP + 0x8]
00403769  c6470200             MOV byte ptr [EDI + 0x2],0x0
0040376d  5f                   POP EDI
0040376e  c3                   RET
0040376f  668917               MOV word ptr [EDI],DX
00403772  8b442408             MOV EAX,dword ptr [ESP + 0x8]
00403776  5f                   POP EDI
00403777  c3                   RET
00403778  8817                 MOV byte ptr [EDI],DL
0040377a  8b442408             MOV EAX,dword ptr [ESP + 0x8]
0040377e  5f                   POP EDI
0040377f  c3                   RET

; ==== FUNCTION _malloc entry=00403780 sig=void * __cdecl _malloc(size_t _Size)
00403780  ff35e8804000         PUSH dword ptr [0x004080e8]
00403786  ff742408             PUSH dword ptr [ESP + 0x8]
0040378a  e803000000           CALL 0x00403792
0040378f  59                   POP ECX
00403790  59                   POP ECX
00403791  c3                   RET

; ==== FUNCTION __nh_malloc entry=00403792 sig=void * __cdecl __nh_malloc(size_t _Size, int _NhFlag)
00403792  837c2404e0           CMP dword ptr [ESP + 0x4],-0x20
00403797  7722                 JA 0x004037bb
00403799  ff742404             PUSH dword ptr [ESP + 0x4]
0040379d  e81c000000           CALL 0x004037be
004037a2  85c0                 TEST EAX,EAX
004037a4  59                   POP ECX
004037a5  7516                 JNZ 0x004037bd
004037a7  39442408             CMP dword ptr [ESP + 0x8],EAX
004037ab  7410                 JZ 0x004037bd
004037ad  ff742404             PUSH dword ptr [ESP + 0x4]
004037b1  e8f2120000           CALL 0x00404aa8
004037b6  85c0                 TEST EAX,EAX
004037b8  59                   POP ECX
004037b9  75de                 JNZ 0x00403799
004037bb  33c0                 XOR EAX,EAX
004037bd  c3                   RET

; ==== FUNCTION FUN_004037be entry=004037be sig=undefined __cdecl FUN_004037be(uint * param_1)
004037be  56                   PUSH ESI
004037bf  8b742408             MOV ESI,dword ptr [ESP + 0x8]
004037c3  3b3510794000         CMP ESI,dword ptr [0x00407910]
004037c9  770b                 JA 0x004037d6
004037cb  56                   PUSH ESI
004037cc  e8f8060000           CALL 0x00403ec9
004037d1  85c0                 TEST EAX,EAX
004037d3  59                   POP ECX
004037d4  751c                 JNZ 0x004037f2
004037d6  85f6                 TEST ESI,ESI
004037d8  7503                 JNZ 0x004037dd
004037da  6a01                 PUSH 0x1
004037dc  5e                   POP ESI
004037dd  83c60f               ADD ESI,0xf
004037e0  83e6f0               AND ESI,0xfffffff0
004037e3  56                   PUSH ESI
004037e4  6a00                 PUSH 0x0
004037e6  ff3544934000         PUSH dword ptr [0x00409344]
004037ec  ff15c0604000         CALL dword ptr [0x004060c0]
004037f2  5e                   POP ESI
004037f3  c3                   RET
; undefined 12 bytes at 004037f4

; ==== FUNCTION FUN_00403800 entry=00403800 sig=undefined4 * __cdecl FUN_00403800(undefined4 * param_1, undefined4 * param_2, uint param_3)
00403800  55                   PUSH EBP
00403801  8bec                 MOV EBP,ESP
00403803  57                   PUSH EDI
00403804  56                   PUSH ESI
00403805  8b750c               MOV ESI,dword ptr [EBP + 0xc]
00403808  8b4d10               MOV ECX,dword ptr [EBP + 0x10]
0040380b  8b7d08               MOV EDI,dword ptr [EBP + 0x8]
0040380e  8bc1                 MOV EAX,ECX
00403810  8bd1                 MOV EDX,ECX
00403812  03c6                 ADD EAX,ESI
00403814  3bfe                 CMP EDI,ESI
00403816  7608                 JBE 0x00403820
00403818  3bf8                 CMP EDI,EAX
0040381a  0f8278010000         JC 0x00403998
00403820  f7c703000000         TEST EDI,0x3
00403826  7514                 JNZ 0x0040383c
00403828  c1e902               SHR ECX,0x2
0040382b  83e203               AND EDX,0x3
0040382e  83f908               CMP ECX,0x8
00403831  7229                 JC 0x0040385c
00403833  f3a5                 MOVSD.REP ES:EDI,ESI
switchD_00403835::switchD:
00403835  ff249548394000       JMP dword ptr [EDX*0x4 + 0x403948]
0040383c  8bc7                 MOV EAX,EDI
0040383e  ba03000000           MOV EDX,0x3
00403843  83e904               SUB ECX,0x4
00403846  720c                 JC 0x00403854
switchD_00403854::default:
00403848  83e003               AND EAX,0x3
0040384b  03c8                 ADD ECX,EAX
switchD_0040384d::switchD:
0040384d  ff248560384000       JMP dword ptr [EAX*0x4 + 0x403860]
switchD_00403854::switchD:
00403854  ff248d58394000       JMP dword ptr [ECX*0x4 + 0x403958]
; undefined 1 bytes at 0040385b
switchD_0040385c::switchD:
0040385c  ff248ddc384000       JMP dword ptr [ECX*0x4 + 0x4038dc]
; undefined 1 bytes at 00403863
switchD_0040384d::switchdataD_00403864:
00403864  addr 00403870
00403868  addr 0040389c
0040386c  addr 004038c0
switchD_0040384d::caseD_1:
00403870  23d1                 AND EDX,ECX
00403872  8a06                 MOV AL,byte ptr [ESI]
00403874  8807                 MOV byte ptr [EDI],AL
00403876  8a4601               MOV AL,byte ptr [ESI + 0x1]
00403879  884701               MOV byte ptr [EDI + 0x1],AL
0040387c  8a4602               MOV AL,byte ptr [ESI + 0x2]
0040387f  c1e902               SHR ECX,0x2
00403882  884702               MOV byte ptr [EDI + 0x2],AL
00403885  83c603               ADD ESI,0x3
00403888  83c703               ADD EDI,0x3
0040388b  83f908               CMP ECX,0x8
0040388e  72cc                 JC 0x0040385c
00403890  f3a5                 MOVSD.REP ES:EDI,ESI
switchD_00403892::switchD:
00403892  ff249548394000       JMP dword ptr [EDX*0x4 + 0x403948]

; ==== FUNCTION FUN_00403899 entry=00403899 sig=undefined __fastcall FUN_00403899(uint param_1, uint param_2)
00403899  8d4900               LEA ECX,[ECX]
switchD_0040384d::caseD_2:
0040389c  23d1                 AND EDX,ECX
0040389e  8a06                 MOV AL,byte ptr [ESI]
004038a0  8807                 MOV byte ptr [EDI],AL
004038a2  8a4601               MOV AL,byte ptr [ESI + 0x1]
004038a5  c1e902               SHR ECX,0x2
004038a8  884701               MOV byte ptr [EDI + 0x1],AL
004038ab  83c602               ADD ESI,0x2
004038ae  83c702               ADD EDI,0x2
004038b1  83f908               CMP ECX,0x8
004038b4  72a6                 JC 0x0040385c
004038b6  f3a5                 MOVSD.REP ES:EDI,ESI
switchD_004038b8::switchD:
004038b8  ff249548394000       JMP dword ptr [EDX*0x4 + 0x403948]
; undefined 1 bytes at 004038bf

; ==== FUNCTION switchD_0040384d::caseD_3 entry=004038c0 sig=undefined __fastcall caseD_3(uint param_1, uint param_2)
004038c0  23d1                 AND EDX,ECX
004038c2  8a06                 MOV AL,byte ptr [ESI]
004038c4  8807                 MOV byte ptr [EDI],AL
004038c6  46                   INC ESI
004038c7  c1e902               SHR ECX,0x2
004038ca  47                   INC EDI
004038cb  83f908               CMP ECX,0x8
004038ce  728c                 JC 0x0040385c
004038d0  f3a5                 MOVSD.REP ES:EDI,ESI
switchD_004038d2::switchD:
004038d2  ff249548394000       JMP dword ptr [EDX*0x4 + 0x403948]

; ==== FUNCTION FUN_004038d9 entry=004038d9 sig=undefined __fastcall FUN_004038d9(int param_1, int param_2)
004038d9  8d4900               LEA ECX,[ECX]
switchD_0040385c::switchdataD_004038dc:
004038dc  addr 0040393f
004038e0  addr 0040392c
004038e4  addr 00403924
004038e8  addr 0040391c
004038ec  addr 00403914
004038f0  addr 0040390c
004038f4  addr 00403904
004038f8  addr 004038fc
switchD_0040385c::caseD_7:
004038fc  8b448ee4             MOV EAX,dword ptr [ESI + ECX*0x4 + -0x1c]
00403900  89448fe4             MOV dword ptr [EDI + ECX*0x4 + -0x1c],EAX
switchD_0040385c::caseD_6:
00403904  8b448ee8             MOV EAX,dword ptr [ESI + ECX*0x4 + -0x18]
00403908  89448fe8             MOV dword ptr [EDI + ECX*0x4 + -0x18],EAX
switchD_0040385c::caseD_5:
0040390c  8b448eec             MOV EAX,dword ptr [ESI + ECX*0x4 + -0x14]
00403910  89448fec             MOV dword ptr [EDI + ECX*0x4 + -0x14],EAX
switchD_0040385c::caseD_4:
00403914  8b448ef0             MOV EAX,dword ptr [ESI + ECX*0x4 + -0x10]
00403918  89448ff0             MOV dword ptr [EDI + ECX*0x4 + -0x10],EAX
switchD_0040385c::caseD_3:
0040391c  8b448ef4             MOV EAX,dword ptr [ESI + ECX*0x4 + -0xc]
00403920  89448ff4             MOV dword ptr [EDI + ECX*0x4 + -0xc],EAX
switchD_0040385c::caseD_2:
00403924  8b448ef8             MOV EAX,dword ptr [ESI + ECX*0x4 + -0x8]
00403928  89448ff8             MOV dword ptr [EDI + ECX*0x4 + -0x8],EAX
switchD_0040385c::caseD_1:
0040392c  8b448efc             MOV EAX,dword ptr [ESI + ECX*0x4 + -0x4]
00403930  89448ffc             MOV dword ptr [EDI + ECX*0x4 + -0x4],EAX
00403934  8d048d00000000       LEA EAX,[ECX*0x4 + 0x0]
0040393b  03f0                 ADD ESI,EAX
0040393d  03f8                 ADD EDI,EAX
switchD_0040385c::caseD_0:
0040393f  ff249548394000       JMP dword ptr [EDX*0x4 + 0x403948]

; ==== FUNCTION FUN_00403946 entry=00403946 sig=undefined __fastcall FUN_00403946(char param_1, undefined2 param_2)
00403946  8bff                 MOV EDI,EDI
switchD_00403835::switchdataD_00403948:
00403948  addr 00403958
0040394c  addr 00403960
00403950  addr 0040396c
00403954  addr 00403980

; ==== FUNCTION switchD_00403835::caseD_0 entry=00403958 sig=undefined4 __stdcall caseD_0(void)
00403958  8b4508               MOV EAX,dword ptr [EBP + 0x8]
0040395b  5e                   POP ESI
0040395c  5f                   POP EDI
0040395d  c9                   LEAVE
0040395e  c3                   RET
; undefined 1 bytes at 0040395f
switchD_00403835::caseD_1:
00403960  8a06                 MOV AL,byte ptr [ESI]
00403962  8807                 MOV byte ptr [EDI],AL
00403964  8b4508               MOV EAX,dword ptr [EBP + 0x8]
00403967  5e                   POP ESI
00403968  5f                   POP EDI
00403969  c9                   LEAVE
0040396a  c3                   RET
; undefined 1 bytes at 0040396b
switchD_00403835::caseD_2:
0040396c  8a06                 MOV AL,byte ptr [ESI]
0040396e  8807                 MOV byte ptr [EDI],AL
00403970  8a4601               MOV AL,byte ptr [ESI + 0x1]
00403973  884701               MOV byte ptr [EDI + 0x1],AL
00403976  8b4508               MOV EAX,dword ptr [EBP + 0x8]
00403979  5e                   POP ESI
0040397a  5f                   POP EDI
0040397b  c9                   LEAVE
0040397c  c3                   RET

; ==== FUNCTION FUN_0040397d entry=0040397d sig=undefined4 __stdcall FUN_0040397d(void)
0040397d  8d4900               LEA ECX,[ECX]
switchD_00403835::caseD_3:
00403980  8a06                 MOV AL,byte ptr [ESI]
00403982  8807                 MOV byte ptr [EDI],AL
00403984  8a4601               MOV AL,byte ptr [ESI + 0x1]
00403987  884701               MOV byte ptr [EDI + 0x1],AL
0040398a  8a4602               MOV AL,byte ptr [ESI + 0x2]
0040398d  884702               MOV byte ptr [EDI + 0x2],AL
00403990  8b4508               MOV EAX,dword ptr [EBP + 0x8]
00403993  5e                   POP ESI
00403994  5f                   POP EDI
00403995  c9                   LEAVE
00403996  c3                   RET
; undefined 1 bytes at 00403997
00403998  8d7431fc             LEA ESI,[ECX + ESI*0x1 + -0x4]
0040399c  8d7c39fc             LEA EDI,[ECX + EDI*0x1 + -0x4]
004039a0  f7c703000000         TEST EDI,0x3
004039a6  7524                 JNZ 0x004039cc
004039a8  c1e902               SHR ECX,0x2
004039ab  83e203               AND EDX,0x3
004039ae  83f908               CMP ECX,0x8
004039b1  720d                 JC 0x004039c0
004039b3  fd                   STD
004039b4  f3a5                 MOVSD.REP ES:EDI,ESI
004039b6  fc                   CLD
switchD_004039b7::switchD:
004039b7  ff2495e03a4000       JMP dword ptr [EDX*0x4 + 0x403ae0]

; ==== FUNCTION FUN_004039be entry=004039be sig=undefined __fastcall FUN_004039be(int param_1)
004039be  8bff                 MOV EDI,EDI
004039c0  f7d9                 NEG ECX
switchD_004039c2::switchD:
004039c2  ff248d903a4000       JMP dword ptr [ECX*0x4 + 0x403a90]

; ==== FUNCTION FUN_004039c9 entry=004039c9 sig=undefined4 __fastcall FUN_004039c9(int param_1)
004039c9  8d4900               LEA ECX,[ECX]
004039cc  8bc7                 MOV EAX,EDI
004039ce  ba03000000           MOV EDX,0x3
004039d3  83f904               CMP ECX,0x4
004039d6  720c                 JC 0x004039e4
switchD_004039e4::default:
004039d8  83e003               AND EAX,0x3
004039db  2bc8                 SUB ECX,EAX
switchD_004039dd::switchD:
004039dd  ff2485e8394000       JMP dword ptr [EAX*0x4 + 0x4039e8]
switchD_004039e4::switchD:
004039e4  ff248de03a4000       JMP dword ptr [ECX*0x4 + 0x403ae0]
; undefined 1 bytes at 004039eb
switchD_004039dd::switchdataD_004039ec:
004039ec  addr 004039f8
004039f0  addr 00403a18
004039f4  addr 00403a40
switchD_004039dd::caseD_1:
004039f8  8a4603               MOV AL,byte ptr [ESI + 0x3]
004039fb  23d1                 AND EDX,ECX
004039fd  884703               MOV byte ptr [EDI + 0x3],AL
00403a00  4e                   DEC ESI
00403a01  c1e902               SHR ECX,0x2
00403a04  4f                   DEC EDI
00403a05  83f908               CMP ECX,0x8
00403a08  72b6                 JC 0x004039c0
00403a0a  fd                   STD
00403a0b  f3a5                 MOVSD.REP ES:EDI,ESI
00403a0d  fc                   CLD
switchD_00403a0e::switchD:
00403a0e  ff2495e03a4000       JMP dword ptr [EDX*0x4 + 0x403ae0]

; ==== FUNCTION FUN_00403a15 entry=00403a15 sig=undefined __fastcall FUN_00403a15(uint param_1, uint param_2)
00403a15  8d4900               LEA ECX,[ECX]
switchD_004039dd::caseD_2:
00403a18  8a4603               MOV AL,byte ptr [ESI + 0x3]
00403a1b  23d1                 AND EDX,ECX
00403a1d  884703               MOV byte ptr [EDI + 0x3],AL
00403a20  8a4602               MOV AL,byte ptr [ESI + 0x2]
00403a23  c1e902               SHR ECX,0x2
00403a26  884702               MOV byte ptr [EDI + 0x2],AL
00403a29  83ee02               SUB ESI,0x2
00403a2c  83ef02               SUB EDI,0x2
00403a2f  83f908               CMP ECX,0x8
00403a32  728c                 JC 0x004039c0
00403a34  fd                   STD
00403a35  f3a5                 MOVSD.REP ES:EDI,ESI
00403a37  fc                   CLD
switchD_00403a38::switchD:
00403a38  ff2495e03a4000       JMP dword ptr [EDX*0x4 + 0x403ae0]
; undefined 1 bytes at 00403a3f

; ==== FUNCTION switchD_004039dd::caseD_3 entry=00403a40 sig=undefined __fastcall caseD_3(uint param_1, uint param_2)
00403a40  8a4603               MOV AL,byte ptr [ESI + 0x3]
00403a43  23d1                 AND EDX,ECX
00403a45  884703               MOV byte ptr [EDI + 0x3],AL
00403a48  8a4602               MOV AL,byte ptr [ESI + 0x2]
00403a4b  884702               MOV byte ptr [EDI + 0x2],AL
00403a4e  8a4601               MOV AL,byte ptr [ESI + 0x1]
00403a51  c1e902               SHR ECX,0x2
00403a54  884701               MOV byte ptr [EDI + 0x1],AL
00403a57  83ee03               SUB ESI,0x3
00403a5a  83ef03               SUB EDI,0x3
00403a5d  83f908               CMP ECX,0x8
00403a60  0f825affffff         JC 0x004039c0
00403a66  fd                   STD
00403a67  f3a5                 MOVSD.REP ES:EDI,ESI
00403a69  fc                   CLD
switchD_00403a6a::switchD:
00403a6a  ff2495e03a4000       JMP dword ptr [EDX*0x4 + 0x403ae0]

; ==== FUNCTION FUN_00403a71 entry=00403a71 sig=undefined __fastcall FUN_00403a71(int param_1, int param_2)
00403a71  8d4900               LEA ECX,[ECX]
switchD_004039c2::switchdataD_00403a74:
00403a74  addr 00403a94
00403a78  addr 00403a9c
00403a7c  addr 00403aa4
00403a80  addr 00403aac
00403a84  addr 00403ab4
00403a88  addr 00403abc
00403a8c  addr 00403ac4
00403a90  addr 00403ad7
switchD_004039c2::caseD_7:
00403a94  8b448e1c             MOV EAX,dword ptr [ESI + ECX*0x4 + 0x1c]
00403a98  89448f1c             MOV dword ptr [EDI + ECX*0x4 + 0x1c],EAX
switchD_004039c2::caseD_6:
00403a9c  8b448e18             MOV EAX,dword ptr [ESI + ECX*0x4 + 0x18]
00403aa0  89448f18             MOV dword ptr [EDI + ECX*0x4 + 0x18],EAX
switchD_004039c2::caseD_5:
00403aa4  8b448e14             MOV EAX,dword ptr [ESI + ECX*0x4 + 0x14]
00403aa8  89448f14             MOV dword ptr [EDI + ECX*0x4 + 0x14],EAX
switchD_004039c2::caseD_4:
00403aac  8b448e10             MOV EAX,dword ptr [ESI + ECX*0x4 + 0x10]
00403ab0  89448f10             MOV dword ptr [EDI + ECX*0x4 + 0x10],EAX
switchD_004039c2::caseD_3:
00403ab4  8b448e0c             MOV EAX,dword ptr [ESI + ECX*0x4 + 0xc]
00403ab8  89448f0c             MOV dword ptr [EDI + ECX*0x4 + 0xc],EAX
switchD_004039c2::caseD_2:
00403abc  8b448e08             MOV EAX,dword ptr [ESI + ECX*0x4 + 0x8]
00403ac0  89448f08             MOV dword ptr [EDI + ECX*0x4 + 0x8],EAX
switchD_004039c2::caseD_1:
00403ac4  8b448e04             MOV EAX,dword ptr [ESI + ECX*0x4 + 0x4]
00403ac8  89448f04             MOV dword ptr [EDI + ECX*0x4 + 0x4],EAX
00403acc  8d048d00000000       LEA EAX,[ECX*0x4 + 0x0]
00403ad3  03f0                 ADD ESI,EAX
00403ad5  03f8                 ADD EDI,EAX
switchD_004039c2::caseD_0:
00403ad7  ff2495e03a4000       JMP dword ptr [EDX*0x4 + 0x403ae0]

; ==== FUNCTION FUN_00403ade entry=00403ade sig=undefined __stdcall FUN_00403ade(void)
00403ade  8bff                 MOV EDI,EDI
switchD_004039b7::switchdataD_00403ae0:
00403ae0  addr 00403af0
00403ae4  addr 00403af8
00403ae8  addr 00403b08
00403aec  addr 00403b1c

; ==== FUNCTION switchD_004039b7::caseD_0 entry=00403af0 sig=undefined4 __stdcall caseD_0(void)
00403af0  8b4508               MOV EAX,dword ptr [EBP + 0x8]
00403af3  5e                   POP ESI
00403af4  5f                   POP EDI
00403af5  c9                   LEAVE
00403af6  c3                   RET
; undefined 1 bytes at 00403af7
switchD_004039b7::caseD_1:
00403af8  8a4603               MOV AL,byte ptr [ESI + 0x3]
00403afb  884703               MOV byte ptr [EDI + 0x3],AL
00403afe  8b4508               MOV EAX,dword ptr [EBP + 0x8]
00403b01  5e                   POP ESI
00403b02  5f                   POP EDI
00403b03  c9                   LEAVE
00403b04  c3                   RET

; ==== FUNCTION FUN_00403b05 entry=00403b05 sig=undefined4 __stdcall FUN_00403b05(void)
00403b05  8d4900               LEA ECX,[ECX]
switchD_004039b7::caseD_2:
00403b08  8a4603               MOV AL,byte ptr [ESI + 0x3]
00403b0b  884703               MOV byte ptr [EDI + 0x3],AL
00403b0e  8a4602               MOV AL,byte ptr [ESI + 0x2]
00403b11  884702               MOV byte ptr [EDI + 0x2],AL
00403b14  8b4508               MOV EAX,dword ptr [EBP + 0x8]
00403b17  5e                   POP ESI
00403b18  5f                   POP EDI
00403b19  c9                   LEAVE
00403b1a  c3                   RET
; undefined 1 bytes at 00403b1b
switchD_004039b7::caseD_3:
00403b1c  8a4603               MOV AL,byte ptr [ESI + 0x3]
00403b1f  884703               MOV byte ptr [EDI + 0x3],AL
00403b22  8a4602               MOV AL,byte ptr [ESI + 0x2]
00403b25  884702               MOV byte ptr [EDI + 0x2],AL
00403b28  8a4601               MOV AL,byte ptr [ESI + 0x1]
00403b2b  884701               MOV byte ptr [EDI + 0x1],AL
00403b2e  8b4508               MOV EAX,dword ptr [EBP + 0x8]
00403b31  5e                   POP ESI
00403b32  5f                   POP EDI
00403b33  c9                   LEAVE
00403b34  c3                   RET

; ==== FUNCTION FUN_00403b35 entry=00403b35 sig=undefined4 __stdcall FUN_00403b35(void)
00403b35  6840010000           PUSH 0x140
00403b3a  6a00                 PUSH 0x0
00403b3c  ff3544934000         PUSH dword ptr [0x00409344]
00403b42  ff15c0604000         CALL dword ptr [0x004060c0]
00403b48  85c0                 TEST EAX,EAX
00403b4a  a304814000           MOV [0x00408104],EAX
00403b4f  7501                 JNZ 0x00403b52
00403b51  c3                   RET
00403b52  8325fc80400000       AND dword ptr [0x004080fc],0x0
00403b59  83250081400000       AND dword ptr [0x00408100],0x0
00403b60  6a01                 PUSH 0x1
00403b62  a3f8804000           MOV [0x004080f8],EAX
00403b67  c705f080400010000000 MOV dword ptr [0x004080f0],0x10
00403b71  58                   POP EAX
00403b72  c3                   RET

; ==== FUNCTION FUN_00403b73 entry=00403b73 sig=uint __cdecl FUN_00403b73(int param_1)
00403b73  a100814000           MOV EAX,[0x00408100]
00403b78  8d0c80               LEA ECX,[EAX + EAX*0x4]
00403b7b  a104814000           MOV EAX,[0x00408104]
00403b80  8d0c88               LEA ECX,[EAX + ECX*0x4]
00403b83  3bc1                 CMP EAX,ECX
00403b85  7314                 JNC 0x00403b9b
00403b87  8b542404             MOV EDX,dword ptr [ESP + 0x4]
00403b8b  2b500c               SUB EDX,dword ptr [EAX + 0xc]
00403b8e  81fa00001000         CMP EDX,0x100000
00403b94  7207                 JC 0x00403b9d
00403b96  83c014               ADD EAX,0x14
00403b99  ebe8                 JMP 0x00403b83
00403b9b  33c0                 XOR EAX,EAX
00403b9d  c3                   RET

; ==== FUNCTION FUN_00403b9e entry=00403b9e sig=undefined __cdecl FUN_00403b9e(uint * param_1, uint param_2)
00403b9e  55                   PUSH EBP
00403b9f  8bec                 MOV EBP,ESP
00403ba1  83ec14               SUB ESP,0x14
00403ba4  8b550c               MOV EDX,dword ptr [EBP + 0xc]
00403ba7  8b4d08               MOV ECX,dword ptr [EBP + 0x8]
00403baa  53                   PUSH EBX
00403bab  56                   PUSH ESI
00403bac  8b4110               MOV EAX,dword ptr [ECX + 0x10]
00403baf  8bf2                 MOV ESI,EDX
00403bb1  2b710c               SUB ESI,dword ptr [ECX + 0xc]
00403bb4  8b5afc               MOV EBX,dword ptr [EDX + -0x4]
00403bb7  83c2fc               ADD EDX,-0x4
00403bba  57                   PUSH EDI
00403bbb  c1ee0f               SHR ESI,0xf
00403bbe  8bce                 MOV ECX,ESI
00403bc0  8b7afc               MOV EDI,dword ptr [EDX + -0x4]
00403bc3  69c904020000         IMUL ECX,ECX,0x204
00403bc9  4b                   DEC EBX
00403bca  897dfc               MOV dword ptr [EBP + -0x4],EDI
00403bcd  8d8c0144010000       LEA ECX,[ECX + EAX*0x1 + 0x144]
00403bd4  895df4               MOV dword ptr [EBP + -0xc],EBX
00403bd7  894df0               MOV dword ptr [EBP + -0x10],ECX
00403bda  8b0c13               MOV ECX,dword ptr [EBX + EDX*0x1]
00403bdd  f6c101               TEST CL,0x1
00403be0  894df8               MOV dword ptr [EBP + -0x8],ECX
00403be3  757f                 JNZ 0x00403c64
00403be5  c1f904               SAR ECX,0x4
00403be8  6a3f                 PUSH 0x3f
00403bea  49                   DEC ECX
00403beb  5f                   POP EDI
00403bec  894d0c               MOV dword ptr [EBP + 0xc],ECX
00403bef  3bcf                 CMP ECX,EDI
00403bf1  7603                 JBE 0x00403bf6
00403bf3  897d0c               MOV dword ptr [EBP + 0xc],EDI
00403bf6  8b4c1304             MOV ECX,dword ptr [EBX + EDX*0x1 + 0x4]
00403bfa  3b4c1308             CMP ECX,dword ptr [EBX + EDX*0x1 + 0x8]
00403bfe  7548                 JNZ 0x00403c48
00403c00  8b4d0c               MOV ECX,dword ptr [EBP + 0xc]
00403c03  83f920               CMP ECX,0x20
00403c06  731c                 JNC 0x00403c24
00403c08  bf00000080           MOV EDI,0x80000000
00403c0d  d3ef                 SHR EDI,CL
00403c0f  8d4c0104             LEA ECX,[ECX + EAX*0x1 + 0x4]
00403c13  f7d7                 NOT EDI
00403c15  217cb044             AND dword ptr [EAX + ESI*0x4 + 0x44],EDI
00403c19  fe09                 DEC byte ptr [ECX]
00403c1b  752b                 JNZ 0x00403c48
00403c1d  8b4d08               MOV ECX,dword ptr [EBP + 0x8]
00403c20  2139                 AND dword ptr [ECX],EDI
00403c22  eb24                 JMP 0x00403c48
00403c24  83c1e0               ADD ECX,-0x20
00403c27  bf00000080           MOV EDI,0x80000000
00403c2c  d3ef                 SHR EDI,CL
00403c2e  8b4d0c               MOV ECX,dword ptr [EBP + 0xc]
00403c31  8d4c0104             LEA ECX,[ECX + EAX*0x1 + 0x4]
00403c35  f7d7                 NOT EDI
00403c37  21bcb0c4000000       AND dword ptr [EAX + ESI*0x4 + 0xc4],EDI
00403c3e  fe09                 DEC byte ptr [ECX]
00403c40  7506                 JNZ 0x00403c48
00403c42  8b4d08               MOV ECX,dword ptr [EBP + 0x8]
00403c45  217904               AND dword ptr [ECX + 0x4],EDI
00403c48  8b4c1308             MOV ECX,dword ptr [EBX + EDX*0x1 + 0x8]
00403c4c  8b7c1304             MOV EDI,dword ptr [EBX + EDX*0x1 + 0x4]
00403c50  897904               MOV dword ptr [ECX + 0x4],EDI
00403c53  8b4c1304             MOV ECX,dword ptr [EBX + EDX*0x1 + 0x4]
00403c57  8b7c1308             MOV EDI,dword ptr [EBX + EDX*0x1 + 0x8]
00403c5b  035df8               ADD EBX,dword ptr [EBP + -0x8]
00403c5e  897908               MOV dword ptr [ECX + 0x8],EDI
00403c61  895df4               MOV dword ptr [EBP + -0xc],EBX
00403c64  8bfb                 MOV EDI,EBX
00403c66  c1ff04               SAR EDI,0x4
00403c69  4f                   DEC EDI
00403c6a  83ff3f               CMP EDI,0x3f
00403c6d  7603                 JBE 0x00403c72
00403c6f  6a3f                 PUSH 0x3f
00403c71  5f                   POP EDI
00403c72  8b4dfc               MOV ECX,dword ptr [EBP + -0x4]
00403c75  83e101               AND ECX,0x1
00403c78  894dec               MOV dword ptr [EBP + -0x14],ECX
00403c7b  0f85a0000000         JNZ 0x00403d21
00403c81  2b55fc               SUB EDX,dword ptr [EBP + -0x4]
00403c84  8b4dfc               MOV ECX,dword ptr [EBP + -0x4]
00403c87  c1f904               SAR ECX,0x4
00403c8a  6a3f                 PUSH 0x3f
00403c8c  8955f8               MOV dword ptr [EBP + -0x8],EDX
00403c8f  49                   DEC ECX
00403c90  5a                   POP EDX
00403c91  3bca                 CMP ECX,EDX
00403c93  894d0c               MOV dword ptr [EBP + 0xc],ECX
00403c96  7605                 JBE 0x00403c9d
00403c98  89550c               MOV dword ptr [EBP + 0xc],EDX
00403c9b  8bca                 MOV ECX,EDX
00403c9d  035dfc               ADD EBX,dword ptr [EBP + -0x4]
00403ca0  8bfb                 MOV EDI,EBX
00403ca2  895df4               MOV dword ptr [EBP + -0xc],EBX
00403ca5  c1ff04               SAR EDI,0x4
00403ca8  4f                   DEC EDI
00403ca9  3bfa                 CMP EDI,EDX
00403cab  7602                 JBE 0x00403caf
00403cad  8bfa                 MOV EDI,EDX
00403caf  3bcf                 CMP ECX,EDI
00403cb1  746b                 JZ 0x00403d1e
00403cb3  8b4df8               MOV ECX,dword ptr [EBP + -0x8]
00403cb6  8b5104               MOV EDX,dword ptr [ECX + 0x4]
00403cb9  3b5108               CMP EDX,dword ptr [ECX + 0x8]
00403cbc  7548                 JNZ 0x00403d06
00403cbe  8b4d0c               MOV ECX,dword ptr [EBP + 0xc]
00403cc1  83f920               CMP ECX,0x20
00403cc4  731c                 JNC 0x00403ce2
00403cc6  ba00000080           MOV EDX,0x80000000
00403ccb  d3ea                 SHR EDX,CL
00403ccd  8d4c0104             LEA ECX,[ECX + EAX*0x1 + 0x4]
00403cd1  f7d2                 NOT EDX
00403cd3  2154b044             AND dword ptr [EAX + ESI*0x4 + 0x44],EDX
00403cd7  fe09                 DEC byte ptr [ECX]
00403cd9  752b                 JNZ 0x00403d06
00403cdb  8b4d08               MOV ECX,dword ptr [EBP + 0x8]
00403cde  2111                 AND dword ptr [ECX],EDX
00403ce0  eb24                 JMP 0x00403d06
00403ce2  83c1e0               ADD ECX,-0x20
00403ce5  ba00000080           MOV EDX,0x80000000
00403cea  d3ea                 SHR EDX,CL
00403cec  8b4d0c               MOV ECX,dword ptr [EBP + 0xc]
00403cef  8d4c0104             LEA ECX,[ECX + EAX*0x1 + 0x4]
00403cf3  f7d2                 NOT EDX
00403cf5  2194b0c4000000       AND dword ptr [EAX + ESI*0x4 + 0xc4],EDX
00403cfc  fe09                 DEC byte ptr [ECX]
00403cfe  7506                 JNZ 0x00403d06
00403d00  8b4d08               MOV ECX,dword ptr [EBP + 0x8]
00403d03  215104               AND dword ptr [ECX + 0x4],EDX
00403d06  8b4df8               MOV ECX,dword ptr [EBP + -0x8]
00403d09  8b5108               MOV EDX,dword ptr [ECX + 0x8]
00403d0c  8b4904               MOV ECX,dword ptr [ECX + 0x4]
00403d0f  894a04               MOV dword ptr [EDX + 0x4],ECX
00403d12  8b4df8               MOV ECX,dword ptr [EBP + -0x8]
00403d15  8b5104               MOV EDX,dword ptr [ECX + 0x4]
00403d18  8b4908               MOV ECX,dword ptr [ECX + 0x8]
00403d1b  894a08               MOV dword ptr [EDX + 0x8],ECX
00403d1e  8b55f8               MOV EDX,dword ptr [EBP + -0x8]
00403d21  837dec00             CMP dword ptr [EBP + -0x14],0x0
00403d25  7509                 JNZ 0x00403d30
00403d27  397d0c               CMP dword ptr [EBP + 0xc],EDI
00403d2a  0f8489000000         JZ 0x00403db9
00403d30  8b4df0               MOV ECX,dword ptr [EBP + -0x10]
00403d33  8d0cf9               LEA ECX,[ECX + EDI*0x8]
00403d36  8b4904               MOV ECX,dword ptr [ECX + 0x4]
00403d39  894a04               MOV dword ptr [EDX + 0x4],ECX
00403d3c  8b4df0               MOV ECX,dword ptr [EBP + -0x10]
00403d3f  8d0cf9               LEA ECX,[ECX + EDI*0x8]
00403d42  894a08               MOV dword ptr [EDX + 0x8],ECX
00403d45  895104               MOV dword ptr [ECX + 0x4],EDX
00403d48  8b4a04               MOV ECX,dword ptr [EDX + 0x4]
00403d4b  895108               MOV dword ptr [ECX + 0x8],EDX
00403d4e  8b4a04               MOV ECX,dword ptr [EDX + 0x4]
00403d51  3b4a08               CMP ECX,dword ptr [EDX + 0x8]
00403d54  7563                 JNZ 0x00403db9
00403d56  8a4c0704             MOV CL,byte ptr [EDI + EAX*0x1 + 0x4]
00403d5a  83ff20               CMP EDI,0x20
00403d5d  884d0f               MOV byte ptr [EBP + 0xf],CL
00403d60  fec1                 INC CL
00403d62  884c0704             MOV byte ptr [EDI + EAX*0x1 + 0x4],CL
00403d66  7325                 JNC 0x00403d8d
00403d68  807d0f00             CMP byte ptr [EBP + 0xf],0x0
00403d6c  750e                 JNZ 0x00403d7c
00403d6e  bb00000080           MOV EBX,0x80000000
00403d73  8bcf                 MOV ECX,EDI
00403d75  d3eb                 SHR EBX,CL
00403d77  8b4d08               MOV ECX,dword ptr [EBP + 0x8]
00403d7a  0919                 OR dword ptr [ECX],EBX
00403d7c  bb00000080           MOV EBX,0x80000000
00403d81  8bcf                 MOV ECX,EDI
00403d83  d3eb                 SHR EBX,CL
00403d85  8d44b044             LEA EAX,[EAX + ESI*0x4 + 0x44]
00403d89  0918                 OR dword ptr [EAX],EBX
00403d8b  eb29                 JMP 0x00403db6
00403d8d  807d0f00             CMP byte ptr [EBP + 0xf],0x0
00403d91  7510                 JNZ 0x00403da3
00403d93  8d4fe0               LEA ECX,[EDI + -0x20]
00403d96  bb00000080           MOV EBX,0x80000000
00403d9b  d3eb                 SHR EBX,CL
00403d9d  8b4d08               MOV ECX,dword ptr [EBP + 0x8]
00403da0  095904               OR dword ptr [ECX + 0x4],EBX
00403da3  8d4fe0               LEA ECX,[EDI + -0x20]
00403da6  bf00000080           MOV EDI,0x80000000
00403dab  d3ef                 SHR EDI,CL
00403dad  8d84b0c4000000       LEA EAX,[EAX + ESI*0x4 + 0xc4]
00403db4  0938                 OR dword ptr [EAX],EDI
00403db6  8b5df4               MOV EBX,dword ptr [EBP + -0xc]
00403db9  8b45f0               MOV EAX,dword ptr [EBP + -0x10]
00403dbc  891a                 MOV dword ptr [EDX],EBX
00403dbe  895c13fc             MOV dword ptr [EBX + EDX*0x1 + -0x4],EBX
00403dc2  ff08                 DEC dword ptr [EAX]
00403dc4  0f85fa000000         JNZ 0x00403ec4
00403dca  a1fc804000           MOV EAX,[0x004080fc]
00403dcf  85c0                 TEST EAX,EAX
00403dd1  0f84df000000         JZ 0x00403eb6
00403dd7  8b0df4804000         MOV ECX,dword ptr [0x004080f4]
00403ddd  8b3d9c604000         MOV EDI,dword ptr [0x0040609c]
00403de3  c1e10f               SHL ECX,0xf
00403de6  03480c               ADD ECX,dword ptr [EAX + 0xc]
00403de9  bb00800000           MOV EBX,0x8000
00403dee  6800400000           PUSH 0x4000
00403df3  53                   PUSH EBX
00403df4  51                   PUSH ECX
00403df5  ffd7                 CALL EDI
00403df7  8b0df4804000         MOV ECX,dword ptr [0x004080f4]
00403dfd  a1fc804000           MOV EAX,[0x004080fc]
00403e02  ba00000080           MOV EDX,0x80000000
00403e07  d3ea                 SHR EDX,CL
00403e09  095008               OR dword ptr [EAX + 0x8],EDX
00403e0c  a1fc804000           MOV EAX,[0x004080fc]
00403e11  8b0df4804000         MOV ECX,dword ptr [0x004080f4]
00403e17  8b4010               MOV EAX,dword ptr [EAX + 0x10]
00403e1a  83a488c400000000     AND dword ptr [EAX + ECX*0x4 + 0xc4],0x0
00403e22  a1fc804000           MOV EAX,[0x004080fc]
00403e27  8b4010               MOV EAX,dword ptr [EAX + 0x10]
00403e2a  fe4843               DEC byte ptr [EAX + 0x43]
00403e2d  a1fc804000           MOV EAX,[0x004080fc]
00403e32  8b4810               MOV ECX,dword ptr [EAX + 0x10]
00403e35  80794300             CMP byte ptr [ECX + 0x43],0x0
00403e39  7509                 JNZ 0x00403e44
00403e3b  836004fe             AND dword ptr [EAX + 0x4],0xfffffffe
00403e3f  a1fc804000           MOV EAX,[0x004080fc]
00403e44  837808ff             CMP dword ptr [EAX + 0x8],-0x1
00403e48  756c                 JNZ 0x00403eb6
00403e4a  53                   PUSH EBX
00403e4b  6a00                 PUSH 0x0
00403e4d  ff700c               PUSH dword ptr [EAX + 0xc]
00403e50  ffd7                 CALL EDI
00403e52  a1fc804000           MOV EAX,[0x004080fc]
00403e57  ff7010               PUSH dword ptr [EAX + 0x10]
00403e5a  6a00                 PUSH 0x0
00403e5c  ff3544934000         PUSH dword ptr [0x00409344]
00403e62  ff15a0604000         CALL dword ptr [0x004060a0]
00403e68  a100814000           MOV EAX,[0x00408100]
00403e6d  8b1504814000         MOV EDX,dword ptr [0x00408104]
00403e73  8d0480               LEA EAX,[EAX + EAX*0x4]
00403e76  c1e002               SHL EAX,0x2
00403e79  8bc8                 MOV ECX,EAX
00403e7b  a1fc804000           MOV EAX,[0x004080fc]
00403e80  2bc8                 SUB ECX,EAX
00403e82  8d4c11ec             LEA ECX,[ECX + EDX*0x1 + -0x14]
00403e86  51                   PUSH ECX
00403e87  8d4814               LEA ECX,[EAX + 0x14]
00403e8a  51                   PUSH ECX
00403e8b  50                   PUSH EAX
00403e8c  e83f0c0000           CALL 0x00404ad0
00403e91  8b4508               MOV EAX,dword ptr [EBP + 0x8]
00403e94  83c40c               ADD ESP,0xc
00403e97  ff0d00814000         DEC dword ptr [0x00408100]
00403e9d  3b05fc804000         CMP EAX,dword ptr [0x004080fc]
00403ea3  7603                 JBE 0x00403ea8
00403ea5  83e814               SUB EAX,0x14
00403ea8  8b0d04814000         MOV ECX,dword ptr [0x00408104]
00403eae  890df8804000         MOV dword ptr [0x004080f8],ECX
00403eb4  eb03                 JMP 0x00403eb9
00403eb6  8b4508               MOV EAX,dword ptr [EBP + 0x8]
00403eb9  a3fc804000           MOV [0x004080fc],EAX
00403ebe  8935f4804000         MOV dword ptr [0x004080f4],ESI
00403ec4  5f                   POP EDI
00403ec5  5e                   POP ESI
00403ec6  5b                   POP EBX
00403ec7  c9                   LEAVE
00403ec8  c3                   RET

; ==== FUNCTION FUN_00403ec9 entry=00403ec9 sig=int * __cdecl FUN_00403ec9(uint * param_1)
00403ec9  55                   PUSH EBP
00403eca  8bec                 MOV EBP,ESP
00403ecc  83ec14               SUB ESP,0x14
00403ecf  a100814000           MOV EAX,[0x00408100]
00403ed4  8b1504814000         MOV EDX,dword ptr [0x00408104]
00403eda  53                   PUSH EBX
00403edb  56                   PUSH ESI
00403edc  8d0480               LEA EAX,[EAX + EAX*0x4]
00403edf  57                   PUSH EDI
00403ee0  8d3c82               LEA EDI,[EDX + EAX*0x4]
00403ee3  8b4508               MOV EAX,dword ptr [EBP + 0x8]
00403ee6  897dfc               MOV dword ptr [EBP + -0x4],EDI
00403ee9  8d4817               LEA ECX,[EAX + 0x17]
00403eec  83e1f0               AND ECX,0xfffffff0
00403eef  894df0               MOV dword ptr [EBP + -0x10],ECX
00403ef2  c1f904               SAR ECX,0x4
00403ef5  49                   DEC ECX
00403ef6  83f920               CMP ECX,0x20
00403ef9  7d0e                 JGE 0x00403f09
00403efb  83ceff               OR ESI,0xffffffff
00403efe  d3ee                 SHR ESI,CL
00403f00  834df8ff             OR dword ptr [EBP + -0x8],0xffffffff
00403f04  8975f4               MOV dword ptr [EBP + -0xc],ESI
00403f07  eb10                 JMP 0x00403f19
00403f09  83c1e0               ADD ECX,-0x20
00403f0c  83c8ff               OR EAX,0xffffffff
00403f0f  33f6                 XOR ESI,ESI
00403f11  d3e8                 SHR EAX,CL
00403f13  8975f4               MOV dword ptr [EBP + -0xc],ESI
00403f16  8945f8               MOV dword ptr [EBP + -0x8],EAX
00403f19  a1f8804000           MOV EAX,[0x004080f8]
00403f1e  8bd8                 MOV EBX,EAX
00403f20  3bdf                 CMP EBX,EDI
00403f22  895d08               MOV dword ptr [EBP + 0x8],EBX
00403f25  7319                 JNC 0x00403f40
00403f27  8b4b04               MOV ECX,dword ptr [EBX + 0x4]
00403f2a  8b3b                 MOV EDI,dword ptr [EBX]
00403f2c  234df8               AND ECX,dword ptr [EBP + -0x8]
00403f2f  23fe                 AND EDI,ESI
00403f31  0bcf                 OR ECX,EDI
00403f33  750b                 JNZ 0x00403f40
00403f35  83c314               ADD EBX,0x14
00403f38  3b5dfc               CMP EBX,dword ptr [EBP + -0x4]
00403f3b  895d08               MOV dword ptr [EBP + 0x8],EBX
00403f3e  72e7                 JC 0x00403f27
00403f40  3b5dfc               CMP EBX,dword ptr [EBP + -0x4]
00403f43  7579                 JNZ 0x00403fbe
00403f45  8bda                 MOV EBX,EDX
00403f47  3bd8                 CMP EBX,EAX
00403f49  895d08               MOV dword ptr [EBP + 0x8],EBX
00403f4c  7315                 JNC 0x00403f63
00403f4e  8b4b04               MOV ECX,dword ptr [EBX + 0x4]
00403f51  8b3b                 MOV EDI,dword ptr [EBX]
00403f53  234df8               AND ECX,dword ptr [EBP + -0x8]
00403f56  23fe                 AND EDI,ESI
00403f58  0bcf                 OR ECX,EDI
00403f5a  7505                 JNZ 0x00403f61
00403f5c  83c314               ADD EBX,0x14
00403f5f  ebe6                 JMP 0x00403f47
00403f61  3bd8                 CMP EBX,EAX
00403f63  7559                 JNZ 0x00403fbe
00403f65  3b5dfc               CMP EBX,dword ptr [EBP + -0x4]
00403f68  7311                 JNC 0x00403f7b
00403f6a  837b0800             CMP dword ptr [EBX + 0x8],0x0
00403f6e  7508                 JNZ 0x00403f78
00403f70  83c314               ADD EBX,0x14
00403f73  895d08               MOV dword ptr [EBP + 0x8],EBX
00403f76  ebed                 JMP 0x00403f65
00403f78  3b5dfc               CMP EBX,dword ptr [EBP + -0x4]
00403f7b  7526                 JNZ 0x00403fa3
00403f7d  8bda                 MOV EBX,EDX
00403f7f  3bd8                 CMP EBX,EAX
00403f81  895d08               MOV dword ptr [EBP + 0x8],EBX
00403f84  730d                 JNC 0x00403f93
00403f86  837b0800             CMP dword ptr [EBX + 0x8],0x0
00403f8a  7505                 JNZ 0x00403f91
00403f8c  83c314               ADD EBX,0x14
00403f8f  ebee                 JMP 0x00403f7f
00403f91  3bd8                 CMP EBX,EAX
00403f93  750e                 JNZ 0x00403fa3
00403f95  e838020000           CALL 0x004041d2
00403f9a  8bd8                 MOV EBX,EAX
00403f9c  85db                 TEST EBX,EBX
00403f9e  895d08               MOV dword ptr [EBP + 0x8],EBX
00403fa1  7414                 JZ 0x00403fb7
00403fa3  53                   PUSH EBX
00403fa4  e8da020000           CALL 0x00404283
00403fa9  59                   POP ECX
00403faa  8b4b10               MOV ECX,dword ptr [EBX + 0x10]
00403fad  8901                 MOV dword ptr [ECX],EAX
00403faf  8b4310               MOV EAX,dword ptr [EBX + 0x10]
00403fb2  8338ff               CMP dword ptr [EAX],-0x1
00403fb5  7507                 JNZ 0x00403fbe
00403fb7  33c0                 XOR EAX,EAX
00403fb9  e90f020000           JMP 0x004041cd
00403fbe  891df8804000         MOV dword ptr [0x004080f8],EBX
00403fc4  8b4310               MOV EAX,dword ptr [EBX + 0x10]
00403fc7  8b10                 MOV EDX,dword ptr [EAX]
00403fc9  83faff               CMP EDX,-0x1
00403fcc  8955fc               MOV dword ptr [EBP + -0x4],EDX
00403fcf  7414                 JZ 0x00403fe5
00403fd1  8b8c90c4000000       MOV ECX,dword ptr [EAX + EDX*0x4 + 0xc4]
00403fd8  8b7c9044             MOV EDI,dword ptr [EAX + EDX*0x4 + 0x44]
00403fdc  234df8               AND ECX,dword ptr [EBP + -0x8]
00403fdf  23fe                 AND EDI,ESI
00403fe1  0bcf                 OR ECX,EDI
00403fe3  7537                 JNZ 0x0040401c
00403fe5  8b90c4000000         MOV EDX,dword ptr [EAX + 0xc4]
00403feb  8b7044               MOV ESI,dword ptr [EAX + 0x44]
00403fee  2355f8               AND EDX,dword ptr [EBP + -0x8]
00403ff1  2375f4               AND ESI,dword ptr [EBP + -0xc]
00403ff4  8365fc00             AND dword ptr [EBP + -0x4],0x0
00403ff8  8d4844               LEA ECX,[EAX + 0x44]
00403ffb  0bd6                 OR EDX,ESI
00403ffd  8b75f4               MOV ESI,dword ptr [EBP + -0xc]
00404000  7517                 JNZ 0x00404019
00404002  8b9184000000         MOV EDX,dword ptr [ECX + 0x84]
00404008  ff45fc               INC dword ptr [EBP + -0x4]
0040400b  2355f8               AND EDX,dword ptr [EBP + -0x8]
0040400e  83c104               ADD ECX,0x4
00404011  8bfe                 MOV EDI,ESI
00404013  2339                 AND EDI,dword ptr [ECX]
00404015  0bd7                 OR EDX,EDI
00404017  74e9                 JZ 0x00404002
00404019  8b55fc               MOV EDX,dword ptr [EBP + -0x4]
0040401c  8bca                 MOV ECX,EDX
0040401e  33ff                 XOR EDI,EDI
00404020  69c904020000         IMUL ECX,ECX,0x204
00404026  8d8c0144010000       LEA ECX,[ECX + EAX*0x1 + 0x144]
0040402d  894df4               MOV dword ptr [EBP + -0xc],ECX
00404030  8b4c9044             MOV ECX,dword ptr [EAX + EDX*0x4 + 0x44]
00404034  23ce                 AND ECX,ESI
00404036  750d                 JNZ 0x00404045
00404038  8b8c90c4000000       MOV ECX,dword ptr [EAX + EDX*0x4 + 0xc4]
0040403f  6a20                 PUSH 0x20
00404041  234df8               AND ECX,dword ptr [EBP + -0x8]
00404044  5f                   POP EDI
00404045  85c9                 TEST ECX,ECX
00404047  7c05                 JL 0x0040404e
00404049  d1e1                 SHL ECX,0x1
0040404b  47                   INC EDI
0040404c  ebf7                 JMP 0x00404045
0040404e  8b4df4               MOV ECX,dword ptr [EBP + -0xc]
00404051  8b54f904             MOV EDX,dword ptr [ECX + EDI*0x8 + 0x4]
00404055  8b0a                 MOV ECX,dword ptr [EDX]
00404057  2b4df0               SUB ECX,dword ptr [EBP + -0x10]
0040405a  8bf1                 MOV ESI,ECX
0040405c  894df8               MOV dword ptr [EBP + -0x8],ECX
0040405f  c1fe04               SAR ESI,0x4
00404062  4e                   DEC ESI
00404063  83fe3f               CMP ESI,0x3f
00404066  7e03                 JLE 0x0040406b
00404068  6a3f                 PUSH 0x3f
0040406a  5e                   POP ESI
0040406b  3bf7                 CMP ESI,EDI
0040406d  0f840d010000         JZ 0x00404180
00404073  8b4a04               MOV ECX,dword ptr [EDX + 0x4]
00404076  3b4a08               CMP ECX,dword ptr [EDX + 0x8]
00404079  7561                 JNZ 0x004040dc
0040407b  83ff20               CMP EDI,0x20
0040407e  7d2b                 JGE 0x004040ab
00404080  bb00000080           MOV EBX,0x80000000
00404085  8bcf                 MOV ECX,EDI
00404087  d3eb                 SHR EBX,CL
00404089  8b4dfc               MOV ECX,dword ptr [EBP + -0x4]
0040408c  8d7c3804             LEA EDI,[EAX + EDI*0x1 + 0x4]
00404090  f7d3                 NOT EBX
00404092  895dec               MOV dword ptr [EBP + -0x14],EBX
00404095  235c8844             AND EBX,dword ptr [EAX + ECX*0x4 + 0x44]
00404099  895c8844             MOV dword ptr [EAX + ECX*0x4 + 0x44],EBX
0040409d  fe0f                 DEC byte ptr [EDI]
0040409f  7538                 JNZ 0x004040d9
004040a1  8b5d08               MOV EBX,dword ptr [EBP + 0x8]
004040a4  8b4dec               MOV ECX,dword ptr [EBP + -0x14]
004040a7  210b                 AND dword ptr [EBX],ECX
004040a9  eb31                 JMP 0x004040dc
004040ab  8d4fe0               LEA ECX,[EDI + -0x20]
004040ae  bb00000080           MOV EBX,0x80000000
004040b3  d3eb                 SHR EBX,CL
004040b5  8b4dfc               MOV ECX,dword ptr [EBP + -0x4]
004040b8  8d7c3804             LEA EDI,[EAX + EDI*0x1 + 0x4]
004040bc  8d8c88c4000000       LEA ECX,[EAX + ECX*0x4 + 0xc4]
004040c3  f7d3                 NOT EBX
004040c5  2119                 AND dword ptr [ECX],EBX
004040c7  fe0f                 DEC byte ptr [EDI]
004040c9  895dec               MOV dword ptr [EBP + -0x14],EBX
004040cc  750b                 JNZ 0x004040d9
004040ce  8b5d08               MOV EBX,dword ptr [EBP + 0x8]
004040d1  8b4dec               MOV ECX,dword ptr [EBP + -0x14]
004040d4  214b04               AND dword ptr [EBX + 0x4],ECX
004040d7  eb03                 JMP 0x004040dc
004040d9  8b5d08               MOV EBX,dword ptr [EBP + 0x8]
004040dc  8b4a08               MOV ECX,dword ptr [EDX + 0x8]
004040df  8b7a04               MOV EDI,dword ptr [EDX + 0x4]
004040e2  837df800             CMP dword ptr [EBP + -0x8],0x0
004040e6  897904               MOV dword ptr [ECX + 0x4],EDI
004040e9  8b4a04               MOV ECX,dword ptr [EDX + 0x4]
004040ec  8b7a08               MOV EDI,dword ptr [EDX + 0x8]
004040ef  897908               MOV dword ptr [ECX + 0x8],EDI
004040f2  0f8494000000         JZ 0x0040418c
004040f8  8b4df4               MOV ECX,dword ptr [EBP + -0xc]
004040fb  8b7cf104             MOV EDI,dword ptr [ECX + ESI*0x8 + 0x4]
004040ff  8d0cf1               LEA ECX,[ECX + ESI*0x8]
00404102  897a04               MOV dword ptr [EDX + 0x4],EDI
00404105  894a08               MOV dword ptr [EDX + 0x8],ECX
00404108  895104               MOV dword ptr [ECX + 0x4],EDX
0040410b  8b4a04               MOV ECX,dword ptr [EDX + 0x4]
0040410e  895108               MOV dword ptr [ECX + 0x8],EDX
00404111  8b4a04               MOV ECX,dword ptr [EDX + 0x4]
00404114  3b4a08               CMP ECX,dword ptr [EDX + 0x8]
00404117  7564                 JNZ 0x0040417d
00404119  8a4c0604             MOV CL,byte ptr [ESI + EAX*0x1 + 0x4]
0040411d  83fe20               CMP ESI,0x20
00404120  884d0b               MOV byte ptr [EBP + 0xb],CL
00404123  7d29                 JGE 0x0040414e
00404125  fec1                 INC CL
00404127  807d0b00             CMP byte ptr [EBP + 0xb],0x0
0040412b  884c0604             MOV byte ptr [ESI + EAX*0x1 + 0x4],CL
0040412f  750b                 JNZ 0x0040413c
00404131  bf00000080           MOV EDI,0x80000000
00404136  8bce                 MOV ECX,ESI
00404138  d3ef                 SHR EDI,CL
0040413a  093b                 OR dword ptr [EBX],EDI
0040413c  bf00000080           MOV EDI,0x80000000
00404141  8bce                 MOV ECX,ESI
00404143  d3ef                 SHR EDI,CL
00404145  8b4dfc               MOV ECX,dword ptr [EBP + -0x4]
00404148  097c8844             OR dword ptr [EAX + ECX*0x4 + 0x44],EDI
0040414c  eb2f                 JMP 0x0040417d
0040414e  fec1                 INC CL
00404150  807d0b00             CMP byte ptr [EBP + 0xb],0x0
00404154  884c0604             MOV byte ptr [ESI + EAX*0x1 + 0x4],CL
00404158  750d                 JNZ 0x00404167
0040415a  8d4ee0               LEA ECX,[ESI + -0x20]
0040415d  bf00000080           MOV EDI,0x80000000
00404162  d3ef                 SHR EDI,CL
00404164  097b04               OR dword ptr [EBX + 0x4],EDI
00404167  8b4dfc               MOV ECX,dword ptr [EBP + -0x4]
0040416a  8dbc88c4000000       LEA EDI,[EAX + ECX*0x4 + 0xc4]
00404171  8d4ee0               LEA ECX,[ESI + -0x20]
00404174  be00000080           MOV ESI,0x80000000
00404179  d3ee                 SHR ESI,CL
0040417b  0937                 OR dword ptr [EDI],ESI
0040417d  8b4df8               MOV ECX,dword ptr [EBP + -0x8]
00404180  85c9                 TEST ECX,ECX
00404182  740b                 JZ 0x0040418f
00404184  890a                 MOV dword ptr [EDX],ECX
00404186  894c11fc             MOV dword ptr [ECX + EDX*0x1 + -0x4],ECX
0040418a  eb03                 JMP 0x0040418f
0040418c  8b4df8               MOV ECX,dword ptr [EBP + -0x8]
0040418f  8b75f0               MOV ESI,dword ptr [EBP + -0x10]
00404192  03d1                 ADD EDX,ECX
00404194  8d4e01               LEA ECX,[ESI + 0x1]
00404197  890a                 MOV dword ptr [EDX],ECX
00404199  894c32fc             MOV dword ptr [EDX + ESI*0x1 + -0x4],ECX
0040419d  8b75f4               MOV ESI,dword ptr [EBP + -0xc]
004041a0  8b0e                 MOV ECX,dword ptr [ESI]
004041a2  85c9                 TEST ECX,ECX
004041a4  8d7901               LEA EDI,[ECX + 0x1]
004041a7  893e                 MOV dword ptr [ESI],EDI
004041a9  751a                 JNZ 0x004041c5
004041ab  3b1dfc804000         CMP EBX,dword ptr [0x004080fc]
004041b1  7512                 JNZ 0x004041c5
004041b3  8b4dfc               MOV ECX,dword ptr [EBP + -0x4]
004041b6  3b0df4804000         CMP ECX,dword ptr [0x004080f4]
004041bc  7507                 JNZ 0x004041c5
004041be  8325fc80400000       AND dword ptr [0x004080fc],0x0
004041c5  8b4dfc               MOV ECX,dword ptr [EBP + -0x4]
004041c8  8908                 MOV dword ptr [EAX],ECX
004041ca  8d4204               LEA EAX,[EDX + 0x4]
004041cd  5f                   POP EDI
004041ce  5e                   POP ESI
004041cf  5b                   POP EBX
004041d0  c9                   LEAVE
004041d1  c3                   RET

; ==== FUNCTION FUN_004041d2 entry=004041d2 sig=undefined4 * __stdcall FUN_004041d2(void)
004041d2  a100814000           MOV EAX,[0x00408100]
004041d7  8b0df0804000         MOV ECX,dword ptr [0x004080f0]
004041dd  56                   PUSH ESI
004041de  57                   PUSH EDI
004041df  33ff                 XOR EDI,EDI
004041e1  3bc1                 CMP EAX,ECX
004041e3  7530                 JNZ 0x00404215
004041e5  8d448950             LEA EAX,[ECX + ECX*0x4 + 0x50]
004041e9  c1e002               SHL EAX,0x2
004041ec  50                   PUSH EAX
004041ed  ff3504814000         PUSH dword ptr [0x00408104]
004041f3  57                   PUSH EDI
004041f4  ff3544934000         PUSH dword ptr [0x00409344]
004041fa  ff15c8604000         CALL dword ptr [0x004060c8]
00404200  3bc7                 CMP EAX,EDI
00404202  7461                 JZ 0x00404265
00404204  8305f080400010       ADD dword ptr [0x004080f0],0x10
0040420b  a304814000           MOV [0x00408104],EAX
00404210  a100814000           MOV EAX,[0x00408100]
00404215  8b0d04814000         MOV ECX,dword ptr [0x00408104]
0040421b  68c4410000           PUSH 0x41c4
00404220  6a08                 PUSH 0x8
00404222  8d0480               LEA EAX,[EAX + EAX*0x4]
00404225  ff3544934000         PUSH dword ptr [0x00409344]
0040422b  8d3481               LEA ESI,[ECX + EAX*0x4]
0040422e  ff15c0604000         CALL dword ptr [0x004060c0]
00404234  3bc7                 CMP EAX,EDI
00404236  894610               MOV dword ptr [ESI + 0x10],EAX
00404239  742a                 JZ 0x00404265
0040423b  6a04                 PUSH 0x4
0040423d  6800200000           PUSH 0x2000
00404242  6800001000           PUSH 0x100000
00404247  57                   PUSH EDI
00404248  ff15c4604000         CALL dword ptr [0x004060c4]
0040424e  3bc7                 CMP EAX,EDI
00404250  89460c               MOV dword ptr [ESI + 0xc],EAX
00404253  7514                 JNZ 0x00404269
00404255  ff7610               PUSH dword ptr [ESI + 0x10]
00404258  57                   PUSH EDI
00404259  ff3544934000         PUSH dword ptr [0x00409344]
0040425f  ff15a0604000         CALL dword ptr [0x004060a0]
00404265  33c0                 XOR EAX,EAX
00404267  eb17                 JMP 0x00404280
00404269  834e08ff             OR dword ptr [ESI + 0x8],0xffffffff
0040426d  893e                 MOV dword ptr [ESI],EDI
0040426f  897e04               MOV dword ptr [ESI + 0x4],EDI
00404272  ff0500814000         INC dword ptr [0x00408100]
00404278  8b4610               MOV EAX,dword ptr [ESI + 0x10]
0040427b  8308ff               OR dword ptr [EAX],0xffffffff
0040427e  8bc6                 MOV EAX,ESI
00404280  5f                   POP EDI
00404281  5e                   POP ESI
00404282  c3                   RET

; ==== FUNCTION FUN_00404283 entry=00404283 sig=int __cdecl FUN_00404283(int param_1)
00404283  55                   PUSH EBP
00404284  8bec                 MOV EBP,ESP
00404286  51                   PUSH ECX
00404287  8b4d08               MOV ECX,dword ptr [EBP + 0x8]
0040428a  53                   PUSH EBX
0040428b  56                   PUSH ESI
0040428c  57                   PUSH EDI
0040428d  8b7110               MOV ESI,dword ptr [ECX + 0x10]
00404290  8b4108               MOV EAX,dword ptr [ECX + 0x8]
00404293  33db                 XOR EBX,EBX
00404295  85c0                 TEST EAX,EAX
00404297  7c05                 JL 0x0040429e
00404299  d1e0                 SHL EAX,0x1
0040429b  43                   INC EBX
0040429c  ebf7                 JMP 0x00404295
0040429e  8bc3                 MOV EAX,EBX
004042a0  6a3f                 PUSH 0x3f
004042a2  69c004020000         IMUL EAX,EAX,0x204
004042a8  5a                   POP EDX
004042a9  8d843044010000       LEA EAX,[EAX + ESI*0x1 + 0x144]
004042b0  8945fc               MOV dword ptr [EBP + -0x4],EAX
004042b3  894008               MOV dword ptr [EAX + 0x8],EAX
004042b6  894004               MOV dword ptr [EAX + 0x4],EAX
004042b9  83c008               ADD EAX,0x8
004042bc  4a                   DEC EDX
004042bd  75f4                 JNZ 0x004042b3
004042bf  8bfb                 MOV EDI,EBX
004042c1  6a04                 PUSH 0x4
004042c3  c1e70f               SHL EDI,0xf
004042c6  03790c               ADD EDI,dword ptr [ECX + 0xc]
004042c9  6800100000           PUSH 0x1000
004042ce  6800800000           PUSH 0x8000
004042d3  57                   PUSH EDI
004042d4  ff15c4604000         CALL dword ptr [0x004060c4]
004042da  85c0                 TEST EAX,EAX
004042dc  7508                 JNZ 0x004042e6
004042de  83c8ff               OR EAX,0xffffffff
004042e1  e993000000           JMP 0x00404379
004042e6  8d9700700000         LEA EDX,[EDI + 0x7000]
004042ec  3bfa                 CMP EDI,EDX
004042ee  773c                 JA 0x0040432c
004042f0  8d4710               LEA EAX,[EDI + 0x10]
004042f3  8348f8ff             OR dword ptr [EAX + -0x8],0xffffffff
004042f7  8388ec0f0000ff       OR dword ptr [EAX + 0xfec],0xffffffff
004042fe  8d88fc0f0000         LEA ECX,[EAX + 0xffc]
00404304  c740fcf00f0000       MOV dword ptr [EAX + -0x4],0xff0
0040430b  8908                 MOV dword ptr [EAX],ECX
0040430d  8d88fcefffff         LEA ECX,[EAX + 0xffffeffc]
00404313  894804               MOV dword ptr [EAX + 0x4],ECX
00404316  c780e80f0000f00f0000 MOV dword ptr [EAX + 0xfe8],0xff0
00404320  0500100000           ADD EAX,0x1000
00404325  8d48f0               LEA ECX,[EAX + -0x10]
00404328  3bca                 CMP ECX,EDX
0040432a  76c7                 JBE 0x004042f3
0040432c  8b45fc               MOV EAX,dword ptr [EBP + -0x4]
0040432f  8d4f0c               LEA ECX,[EDI + 0xc]
00404332  05f8010000           ADD EAX,0x1f8
00404337  6a01                 PUSH 0x1
00404339  5f                   POP EDI
0040433a  894804               MOV dword ptr [EAX + 0x4],ECX
0040433d  894108               MOV dword ptr [ECX + 0x8],EAX
00404340  8d4a0c               LEA ECX,[EDX + 0xc]
00404343  894808               MOV dword ptr [EAX + 0x8],ECX
00404346  894104               MOV dword ptr [ECX + 0x4],EAX
00404349  83649e4400           AND dword ptr [ESI + EBX*0x4 + 0x44],0x0
0040434e  89bc9ec4000000       MOV dword ptr [ESI + EBX*0x4 + 0xc4],EDI
00404355  8a4643               MOV AL,byte ptr [ESI + 0x43]
00404358  8ac8                 MOV CL,AL
0040435a  fec1                 INC CL
0040435c  84c0                 TEST AL,AL
0040435e  8b4508               MOV EAX,dword ptr [EBP + 0x8]
00404361  884e43               MOV byte ptr [ESI + 0x43],CL
00404364  7503                 JNZ 0x00404369
00404366  097804               OR dword ptr [EAX + 0x4],EDI
00404369  ba00000080           MOV EDX,0x80000000
0040436e  8bcb                 MOV ECX,EBX
00404370  d3ea                 SHR EDX,CL
00404372  f7d2                 NOT EDX
00404374  215008               AND dword ptr [EAX + 0x8],EDX
00404377  8bc3                 MOV EAX,EBX
00404379  5f                   POP EDI
0040437a  5e                   POP ESI
0040437b  5b                   POP EBX
0040437c  c9                   LEAVE
0040437d  c3                   RET

; ==== FUNCTION FUN_0040437e entry=0040437e sig=int __cdecl FUN_0040437e(undefined4 param_1, undefined4 param_2, undefined4 param_3)
0040437e  53                   PUSH EBX
0040437f  33db                 XOR EBX,EBX
00404381  391db4804000         CMP dword ptr [0x004080b4],EBX
00404387  56                   PUSH ESI
00404388  57                   PUSH EDI
00404389  7542                 JNZ 0x004043cd
0040438b  68b8644000           PUSH 0x4064b8
00404390  ff1590604000         CALL dword ptr [0x00406090]
00404396  8bf8                 MOV EDI,EAX
00404398  3bfb                 CMP EDI,EBX
0040439a  7467                 JZ 0x00404403
0040439c  8b3550604000         MOV ESI,dword ptr [0x00406050]
004043a2  68ac644000           PUSH 0x4064ac
004043a7  57                   PUSH EDI
004043a8  ffd6                 CALL ESI
004043aa  85c0                 TEST EAX,EAX
004043ac  a3b4804000           MOV [0x004080b4],EAX
004043b1  7450                 JZ 0x00404403
004043b3  689c644000           PUSH 0x40649c
004043b8  57                   PUSH EDI
004043b9  ffd6                 CALL ESI
004043bb  6888644000           PUSH 0x406488
004043c0  57                   PUSH EDI
004043c1  a3b8804000           MOV [0x004080b8],EAX
004043c6  ffd6                 CALL ESI
004043c8  a3bc804000           MOV [0x004080bc],EAX
004043cd  a1b8804000           MOV EAX,[0x004080b8]
004043d2  85c0                 TEST EAX,EAX
004043d4  7416                 JZ 0x004043ec
004043d6  ffd0                 CALL EAX
004043d8  8bd8                 MOV EBX,EAX
004043da  85db                 TEST EBX,EBX
004043dc  740e                 JZ 0x004043ec
004043de  a1bc804000           MOV EAX,[0x004080bc]
004043e3  85c0                 TEST EAX,EAX
004043e5  7405                 JZ 0x004043ec
004043e7  53                   PUSH EBX
004043e8  ffd0                 CALL EAX
004043ea  8bd8                 MOV EBX,EAX
004043ec  ff742418             PUSH dword ptr [ESP + 0x18]
004043f0  ff742418             PUSH dword ptr [ESP + 0x18]
004043f4  ff742418             PUSH dword ptr [ESP + 0x18]
004043f8  53                   PUSH EBX
004043f9  ff15b4804000         CALL dword ptr [0x004080b4]
004043ff  5f                   POP EDI
00404400  5e                   POP ESI
00404401  5b                   POP EBX
00404402  c3                   RET
00404403  33c0                 XOR EAX,EAX
00404405  ebf8                 JMP 0x004043ff

; ==== FUNCTION FUN_00404407 entry=00404407 sig=undefined __cdecl FUN_00404407(uint param_1)
00404407  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
0040440b  33d2                 XOR EDX,EDX
0040440d  890d487f4000         MOV dword ptr [0x00407f48],ECX
00404413  b818794000           MOV EAX,0x407918
00404418  3b08                 CMP ECX,dword ptr [EAX]
0040441a  7420                 JZ 0x0040443c
0040441c  83c008               ADD EAX,0x8
0040441f  42                   INC EDX
00404420  3d807a4000           CMP EAX,0x407a80
00404425  7cf1                 JL 0x00404418
00404427  83f913               CMP ECX,0x13
0040442a  721d                 JC 0x00404449
0040442c  83f924               CMP ECX,0x24
0040442f  7718                 JA 0x00404449
00404431  c705447f40000d000000 MOV dword ptr [0x00407f44],0xd
0040443b  c3                   RET
0040443c  8b04d51c794000       MOV EAX,dword ptr [EDX*0x8 + 0x40791c]
00404443  a3447f4000           MOV [0x00407f44],EAX
00404448  c3                   RET
00404449  81f9bc000000         CMP ECX,0xbc
0040444f  7212                 JC 0x00404463
00404451  81f9ca000000         CMP ECX,0xca
00404457  c705447f400008000000 MOV dword ptr [0x00407f44],0x8
00404461  760a                 JBE 0x0040446d
00404463  c705447f400016000000 MOV dword ptr [0x00407f44],0x16
0040446d  c3                   RET

; ==== FUNCTION FUN_0040446e entry=0040446e sig=undefined4 __cdecl FUN_0040446e(uint param_1)
0040446e  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
00404472  56                   PUSH ESI
00404473  3b0d60944000         CMP ECX,dword ptr [0x00409460]
00404479  57                   PUSH EDI
0040447a  7355                 JNC 0x004044d1
0040447c  8bc1                 MOV EAX,ECX
0040447e  8bf1                 MOV ESI,ECX
00404480  c1f805               SAR EAX,0x5
00404483  83e61f               AND ESI,0x1f
00404486  8d3c8560934000       LEA EDI,[EAX*0x4 + 0x409360]
0040448d  c1e603               SHL ESI,0x3
00404490  8b07                 MOV EAX,dword ptr [EDI]
00404492  03c6                 ADD EAX,ESI
00404494  f6400401             TEST byte ptr [EAX + 0x4],0x1
00404498  7437                 JZ 0x004044d1
0040449a  8338ff               CMP dword ptr [EAX],-0x1
0040449d  7432                 JZ 0x004044d1
0040449f  833d1472400001       CMP dword ptr [0x00407214],0x1
004044a6  751f                 JNZ 0x004044c7
004044a8  33c0                 XOR EAX,EAX
004044aa  2bc8                 SUB ECX,EAX
004044ac  7410                 JZ 0x004044be
004044ae  49                   DEC ECX
004044af  7408                 JZ 0x004044b9
004044b1  49                   DEC ECX
004044b2  7513                 JNZ 0x004044c7
004044b4  50                   PUSH EAX
004044b5  6af4                 PUSH -0xc
004044b7  eb08                 JMP 0x004044c1
004044b9  50                   PUSH EAX
004044ba  6af5                 PUSH -0xb
004044bc  eb03                 JMP 0x004044c1
004044be  50                   PUSH EAX
004044bf  6af6                 PUSH -0xa
004044c1  ff1548604000         CALL dword ptr [0x00406048]
004044c7  8b07                 MOV EAX,dword ptr [EDI]
004044c9  830c30ff             OR dword ptr [EAX + ESI*0x1],0xffffffff
004044cd  33c0                 XOR EAX,EAX
004044cf  eb14                 JMP 0x004044e5
004044d1  8325487f400000       AND dword ptr [0x00407f48],0x0
004044d8  c705447f400009000000 MOV dword ptr [0x00407f44],0x9
004044e2  83c8ff               OR EAX,0xffffffff
004044e5  5f                   POP EDI
004044e6  5e                   POP ESI
004044e7  c3                   RET

; ==== FUNCTION FUN_004044e8 entry=004044e8 sig=undefined4 __cdecl FUN_004044e8(uint param_1)
004044e8  8b442404             MOV EAX,dword ptr [ESP + 0x4]
004044ec  3b0560944000         CMP EAX,dword ptr [0x00409460]
004044f2  731c                 JNC 0x00404510
004044f4  8bc8                 MOV ECX,EAX
004044f6  83e01f               AND EAX,0x1f
004044f9  c1f905               SAR ECX,0x5
004044fc  8b0c8d60934000       MOV ECX,dword ptr [ECX*0x4 + 0x409360]
00404503  f644c10401           TEST byte ptr [ECX + EAX*0x8 + 0x4],0x1
00404508  8d04c1               LEA EAX,[ECX + EAX*0x8]
0040450b  7403                 JZ 0x00404510
0040450d  8b00                 MOV EAX,dword ptr [EAX]
0040450f  c3                   RET
00404510  8325487f400000       AND dword ptr [0x00407f48],0x0
00404517  c705447f400009000000 MOV dword ptr [0x00407f44],0x9
00404521  83c8ff               OR EAX,0xffffffff
00404524  c3                   RET

; ==== FUNCTION FUN_00404525 entry=00404525 sig=int * __cdecl FUN_00404525(int param_1, int param_2)
00404525  53                   PUSH EBX
00404526  56                   PUSH ESI
00404527  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
0040452b  57                   PUSH EDI
0040452c  0faf742414           IMUL ESI,dword ptr [ESP + 0x14]
00404531  83fee0               CMP ESI,-0x20
00404534  8bde                 MOV EBX,ESI
00404536  770d                 JA 0x00404545
00404538  85f6                 TEST ESI,ESI
0040453a  7503                 JNZ 0x0040453f
0040453c  6a01                 PUSH 0x1
0040453e  5e                   POP ESI
0040453f  83c60f               ADD ESI,0xf
00404542  83e6f0               AND ESI,0xfffffff0
00404545  33ff                 XOR EDI,EDI
00404547  83fee0               CMP ESI,-0x20
0040454a  772a                 JA 0x00404576
0040454c  3b1d10794000         CMP EBX,dword ptr [0x00407910]
00404552  770d                 JA 0x00404561
00404554  53                   PUSH EBX
00404555  e86ff9ffff           CALL 0x00403ec9
0040455a  8bf8                 MOV EDI,EAX
0040455c  59                   POP ECX
0040455d  85ff                 TEST EDI,EDI
0040455f  752b                 JNZ 0x0040458c
00404561  56                   PUSH ESI
00404562  6a08                 PUSH 0x8
00404564  ff3544934000         PUSH dword ptr [0x00409344]
0040456a  ff15c0604000         CALL dword ptr [0x004060c0]
00404570  8bf8                 MOV EDI,EAX
00404572  85ff                 TEST EDI,EDI
00404574  7522                 JNZ 0x00404598
00404576  833de880400000       CMP dword ptr [0x004080e8],0x0
0040457d  7419                 JZ 0x00404598
0040457f  56                   PUSH ESI
00404580  e823050000           CALL 0x00404aa8
00404585  85c0                 TEST EAX,EAX
00404587  59                   POP ECX
00404588  7414                 JZ 0x0040459e
0040458a  ebb9                 JMP 0x00404545
0040458c  53                   PUSH EBX
0040458d  6a00                 PUSH 0x0
0040458f  57                   PUSH EDI
00404590  e87b080000           CALL 0x00404e10
00404595  83c40c               ADD ESP,0xc
00404598  8bc7                 MOV EAX,EDI
0040459a  5f                   POP EDI
0040459b  5e                   POP ESI
0040459c  5b                   POP EBX
0040459d  c3                   RET
0040459e  33c0                 XOR EAX,EAX
004045a0  ebf8                 JMP 0x0040459a

; ==== FUNCTION FUN_004045a2 entry=004045a2 sig=int __stdcall FUN_004045a2(void)
004045a2  56                   PUSH ESI
004045a3  57                   PUSH EDI
004045a4  6a03                 PUSH 0x3
004045a6  33ff                 XOR EDI,EDI
004045a8  5e                   POP ESI
004045a9  393540934000         CMP dword ptr [0x00409340],ESI
004045af  7e44                 JLE 0x004045f5
004045b1  a128834000           MOV EAX,[0x00408328]
004045b6  8b04b0               MOV EAX,dword ptr [EAX + ESI*0x4]
004045b9  85c0                 TEST EAX,EAX
004045bb  742f                 JZ 0x004045ec
004045bd  f6400c83             TEST byte ptr [EAX + 0xc],0x83
004045c1  740d                 JZ 0x004045d0
004045c3  50                   PUSH EAX
004045c4  e89f080000           CALL 0x00404e68
004045c9  83f8ff               CMP EAX,-0x1
004045cc  59                   POP ECX
004045cd  7401                 JZ 0x004045d0
004045cf  47                   INC EDI
004045d0  83fe14               CMP ESI,0x14
004045d3  7c17                 JL 0x004045ec
004045d5  a128834000           MOV EAX,[0x00408328]
004045da  ff34b0               PUSH dword ptr [EAX + ESI*0x4]
004045dd  e875f0ffff           CALL 0x00403657
004045e2  a128834000           MOV EAX,[0x00408328]
004045e7  59                   POP ECX
004045e8  8324b000             AND dword ptr [EAX + ESI*0x4],0x0
004045ec  46                   INC ESI
004045ed  3b3540934000         CMP ESI,dword ptr [0x00409340]
004045f3  7cbc                 JL 0x004045b1
004045f5  8bc7                 MOV EAX,EDI
004045f7  5f                   POP EDI
004045f8  5e                   POP ESI
004045f9  c3                   RET

; ==== FUNCTION FUN_004045fa entry=004045fa sig=int __cdecl FUN_004045fa(int * param_1)
004045fa  56                   PUSH ESI
004045fb  8b742408             MOV ESI,dword ptr [ESP + 0x8]
004045ff  85f6                 TEST ESI,ESI
00404601  7509                 JNZ 0x0040460c
00404603  56                   PUSH ESI
00404604  e891000000           CALL 0x0040469a
00404609  59                   POP ECX
0040460a  5e                   POP ESI
0040460b  c3                   RET
0040460c  56                   PUSH ESI
0040460d  e823000000           CALL 0x00404635
00404612  85c0                 TEST EAX,EAX
00404614  59                   POP ECX
00404615  7405                 JZ 0x0040461c
00404617  83c8ff               OR EAX,0xffffffff
0040461a  5e                   POP ESI
0040461b  c3                   RET
0040461c  f6460d40             TEST byte ptr [ESI + 0xd],0x40
00404620  740f                 JZ 0x00404631
00404622  ff7610               PUSH dword ptr [ESI + 0x10]
00404625  e894080000           CALL 0x00404ebe
0040462a  f7d8                 NEG EAX
0040462c  59                   POP ECX
0040462d  5e                   POP ESI
0040462e  1bc0                 SBB EAX,EAX
00404630  c3                   RET
00404631  33c0                 XOR EAX,EAX
00404633  5e                   POP ESI
00404634  c3                   RET

; ==== FUNCTION FUN_00404635 entry=00404635 sig=undefined4 __cdecl FUN_00404635(int * param_1)
00404635  53                   PUSH EBX
00404636  56                   PUSH ESI
00404637  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
0040463b  33db                 XOR EBX,EBX
0040463d  57                   PUSH EDI
0040463e  8b460c               MOV EAX,dword ptr [ESI + 0xc]
00404641  8bc8                 MOV ECX,EAX
00404643  83e103               AND ECX,0x3
00404646  80f902               CMP CL,0x2
00404649  7537                 JNZ 0x00404682
0040464b  66a90801             TEST AX,0x108
0040464f  7431                 JZ 0x00404682
00404651  8b4608               MOV EAX,dword ptr [ESI + 0x8]
00404654  8b3e                 MOV EDI,dword ptr [ESI]
00404656  2bf8                 SUB EDI,EAX
00404658  85ff                 TEST EDI,EDI
0040465a  7e26                 JLE 0x00404682
0040465c  57                   PUSH EDI
0040465d  50                   PUSH EAX
0040465e  ff7610               PUSH dword ptr [ESI + 0x10]
00404661  e828e7ffff           CALL 0x00402d8e
00404666  83c40c               ADD ESP,0xc
00404669  3bc7                 CMP EAX,EDI
0040466b  750e                 JNZ 0x0040467b
0040466d  8b460c               MOV EAX,dword ptr [ESI + 0xc]
00404670  a880                 TEST AL,0x80
00404672  740e                 JZ 0x00404682
00404674  24fd                 AND AL,0xfd
00404676  89460c               MOV dword ptr [ESI + 0xc],EAX
00404679  eb07                 JMP 0x00404682
0040467b  834e0c20             OR dword ptr [ESI + 0xc],0x20
0040467f  83cbff               OR EBX,0xffffffff
00404682  8b4608               MOV EAX,dword ptr [ESI + 0x8]
00404685  83660400             AND dword ptr [ESI + 0x4],0x0
00404689  8906                 MOV dword ptr [ESI],EAX
0040468b  5f                   POP EDI
0040468c  8bc3                 MOV EAX,EBX
0040468e  5e                   POP ESI
0040468f  5b                   POP EBX
00404690  c3                   RET

; ==== FUNCTION FUN_00404691 entry=00404691 sig=undefined __stdcall FUN_00404691(void)
00404691  6a01                 PUSH 0x1

; ==== FUNCTION FUN_00404693 entry=00404693 sig=undefined __stdcall FUN_00404693(void)
00404693  e802000000           CALL 0x0040469a
00404698  59                   POP ECX
00404699  c3                   RET

; ==== FUNCTION flsall entry=0040469a sig=int __cdecl flsall(int param_1)
0040469a  53                   PUSH EBX
0040469b  56                   PUSH ESI
0040469c  57                   PUSH EDI
0040469d  33f6                 XOR ESI,ESI
0040469f  33db                 XOR EBX,EBX
004046a1  33ff                 XOR EDI,EDI
004046a3  393540934000         CMP dword ptr [0x00409340],ESI
004046a9  7e4d                 JLE 0x004046f8
004046ab  a128834000           MOV EAX,[0x00408328]
004046b0  8b04b0               MOV EAX,dword ptr [EAX + ESI*0x4]
004046b3  85c0                 TEST EAX,EAX
004046b5  7438                 JZ 0x004046ef
004046b7  8b480c               MOV ECX,dword ptr [EAX + 0xc]
004046ba  f6c183               TEST CL,0x83
004046bd  7430                 JZ 0x004046ef
004046bf  837c241001           CMP dword ptr [ESP + 0x10],0x1
004046c4  750f                 JNZ 0x004046d5
004046c6  50                   PUSH EAX
004046c7  e82effffff           CALL 0x004045fa
004046cc  83f8ff               CMP EAX,-0x1
004046cf  59                   POP ECX
004046d0  741d                 JZ 0x004046ef
004046d2  43                   INC EBX
004046d3  eb1a                 JMP 0x004046ef
004046d5  837c241000           CMP dword ptr [ESP + 0x10],0x0
004046da  7513                 JNZ 0x004046ef
004046dc  f6c102               TEST CL,0x2
004046df  740e                 JZ 0x004046ef
004046e1  50                   PUSH EAX
004046e2  e813ffffff           CALL 0x004045fa
004046e7  83f8ff               CMP EAX,-0x1
004046ea  59                   POP ECX
004046eb  7502                 JNZ 0x004046ef
004046ed  0bf8                 OR EDI,EAX
004046ef  46                   INC ESI
004046f0  3b3540934000         CMP ESI,dword ptr [0x00409340]
004046f6  7cb3                 JL 0x004046ab
004046f8  837c241001           CMP dword ptr [ESP + 0x10],0x1
004046fd  8bc3                 MOV EAX,EBX
004046ff  7402                 JZ 0x00404703
00404701  8bc7                 MOV EAX,EDI
00404703  5f                   POP EDI
00404704  5e                   POP ESI
00404705  5b                   POP EBX
00404706  c3                   RET

; ==== FUNCTION FUN_00404707 entry=00404707 sig=undefined __stdcall FUN_00404707(void)
00404707  6a02                 PUSH 0x2
00404709  e826d1ffff           CALL 0x00401834
0040470e  59                   POP ECX
0040470f  c3                   RET

; ==== FUNCTION FUN_00404710 entry=00404710 sig=LPWSTR __cdecl FUN_00404710(LCID param_1, DWORD param_2, char * param_3, int param_4, LPSTR param_5, int param_6, UINT param_7, int param_8)
00404710  55                   PUSH EBP
00404711  8bec                 MOV EBP,ESP
00404713  6aff                 PUSH -0x1
00404715  68d0644000           PUSH 0x4064d0
0040471a  68902a4000           PUSH 0x402a90
0040471f  64a100000000         MOV EAX,FS:[0x0]
00404725  50                   PUSH EAX
00404726  64892500000000       MOV dword ptr FS:[0x0],ESP
0040472d  83ec1c               SUB ESP,0x1c
00404730  53                   PUSH EBX
00404731  56                   PUSH ESI
00404732  57                   PUSH EDI
00404733  8965e8               MOV dword ptr [EBP + -0x18],ESP
00404736  33ff                 XOR EDI,EDI
00404738  393de0804000         CMP dword ptr [0x004080e0],EDI
0040473e  7546                 JNZ 0x00404786
00404740  57                   PUSH EDI
00404741  57                   PUSH EDI
00404742  6a01                 PUSH 0x1
00404744  5b                   POP EBX
00404745  53                   PUSH EBX
00404746  68c8644000           PUSH 0x4064c8
0040474b  be00010000           MOV ESI,0x100
00404750  56                   PUSH ESI
00404751  57                   PUSH EDI
00404752  ff153c604000         CALL dword ptr [0x0040603c]
00404758  85c0                 TEST EAX,EAX
0040475a  7408                 JZ 0x00404764
0040475c  891de0804000         MOV dword ptr [0x004080e0],EBX
00404762  eb22                 JMP 0x00404786
00404764  57                   PUSH EDI
00404765  57                   PUSH EDI
00404766  53                   PUSH EBX
00404767  68c4644000           PUSH 0x4064c4
0040476c  56                   PUSH ESI
0040476d  57                   PUSH EDI
0040476e  ff154c604000         CALL dword ptr [0x0040604c]
00404774  85c0                 TEST EAX,EAX
00404776  0f8422010000         JZ 0x0040489e
0040477c  c705e080400002000000 MOV dword ptr [0x004080e0],0x2
00404786  397d14               CMP dword ptr [EBP + 0x14],EDI
00404789  7e10                 JLE 0x0040479b
0040478b  ff7514               PUSH dword ptr [EBP + 0x14]
0040478e  ff7510               PUSH dword ptr [EBP + 0x10]
00404791  e89e010000           CALL 0x00404934
00404796  59                   POP ECX
00404797  59                   POP ECX
00404798  894514               MOV dword ptr [EBP + 0x14],EAX
0040479b  a1e0804000           MOV EAX,[0x004080e0]
004047a0  83f802               CMP EAX,0x2
004047a3  751d                 JNZ 0x004047c2
004047a5  ff751c               PUSH dword ptr [EBP + 0x1c]
004047a8  ff7518               PUSH dword ptr [EBP + 0x18]
004047ab  ff7514               PUSH dword ptr [EBP + 0x14]
004047ae  ff7510               PUSH dword ptr [EBP + 0x10]
004047b1  ff750c               PUSH dword ptr [EBP + 0xc]
004047b4  ff7508               PUSH dword ptr [EBP + 0x8]
004047b7  ff154c604000         CALL dword ptr [0x0040604c]
004047bd  e9de000000           JMP 0x004048a0
004047c2  83f801               CMP EAX,0x1
004047c5  0f85d3000000         JNZ 0x0040489e
004047cb  397d20               CMP dword ptr [EBP + 0x20],EDI
004047ce  7508                 JNZ 0x004047d8
004047d0  a1d8804000           MOV EAX,[0x004080d8]
004047d5  894520               MOV dword ptr [EBP + 0x20],EAX
004047d8  57                   PUSH EDI
004047d9  57                   PUSH EDI
004047da  ff7514               PUSH dword ptr [EBP + 0x14]
004047dd  ff7510               PUSH dword ptr [EBP + 0x10]
004047e0  8b4524               MOV EAX,dword ptr [EBP + 0x24]
004047e3  f7d8                 NEG EAX
004047e5  1bc0                 SBB EAX,EAX
004047e7  83e008               AND EAX,0x8
004047ea  40                   INC EAX
004047eb  50                   PUSH EAX
004047ec  ff7520               PUSH dword ptr [EBP + 0x20]
004047ef  ff1544604000         CALL dword ptr [0x00406044]
004047f5  8bd8                 MOV EBX,EAX
004047f7  895de4               MOV dword ptr [EBP + -0x1c],EBX
004047fa  3bdf                 CMP EBX,EDI
004047fc  0f849c000000         JZ 0x0040489e
00404802  897dfc               MOV dword ptr [EBP + -0x4],EDI
00404805  8d041b               LEA EAX,[EBX + EBX*0x1]
00404808  83c003               ADD EAX,0x3
0040480b  24fc                 AND AL,0xfc
0040480d  e80e070000           CALL 0x00404f20
00404812  8965e8               MOV dword ptr [EBP + -0x18],ESP
00404815  8bc4                 MOV EAX,ESP
00404817  8945dc               MOV dword ptr [EBP + -0x24],EAX
0040481a  834dfcff             OR dword ptr [EBP + -0x4],0xffffffff
0040481e  eb13                 JMP 0x00404833

; ==== FUNCTION FUN_00404820 entry=00404820 sig=undefined4 __stdcall FUN_00404820(void)
00404820  6a01                 PUSH 0x1
00404822  58                   POP EAX
00404823  c3                   RET

; ==== FUNCTION FUN_00404824 entry=00404824 sig=LPCWSTR __stdcall FUN_00404824(void)
00404824  8b65e8               MOV ESP,dword ptr [EBP + -0x18]
00404827  33ff                 XOR EDI,EDI
00404829  897ddc               MOV dword ptr [EBP + -0x24],EDI
0040482c  834dfcff             OR dword ptr [EBP + -0x4],0xffffffff
00404830  8b5de4               MOV EBX,dword ptr [EBP + -0x1c]

; ==== FUNCTION FUN_00404833 entry=00404833 sig=LPWSTR __stdcall FUN_00404833(void)
00404833  397ddc               CMP dword ptr [EBP + -0x24],EDI
00404836  7466                 JZ 0x0040489e
00404838  53                   PUSH EBX
00404839  ff75dc               PUSH dword ptr [EBP + -0x24]
0040483c  ff7514               PUSH dword ptr [EBP + 0x14]
0040483f  ff7510               PUSH dword ptr [EBP + 0x10]
00404842  6a01                 PUSH 0x1
00404844  ff7520               PUSH dword ptr [EBP + 0x20]
00404847  ff1544604000         CALL dword ptr [0x00406044]
0040484d  85c0                 TEST EAX,EAX
0040484f  744d                 JZ 0x0040489e
00404851  57                   PUSH EDI
00404852  57                   PUSH EDI
00404853  53                   PUSH EBX
00404854  ff75dc               PUSH dword ptr [EBP + -0x24]
00404857  ff750c               PUSH dword ptr [EBP + 0xc]
0040485a  ff7508               PUSH dword ptr [EBP + 0x8]
0040485d  ff153c604000         CALL dword ptr [0x0040603c]
00404863  8bf0                 MOV ESI,EAX
00404865  8975d8               MOV dword ptr [EBP + -0x28],ESI
00404868  3bf7                 CMP ESI,EDI
0040486a  7432                 JZ 0x0040489e
0040486c  f6450d04             TEST byte ptr [EBP + 0xd],0x4
00404870  7440                 JZ 0x004048b2
00404872  397d1c               CMP dword ptr [EBP + 0x1c],EDI
00404875  0f84b2000000         JZ 0x0040492d
0040487b  3b751c               CMP ESI,dword ptr [EBP + 0x1c]
0040487e  7f1e                 JG 0x0040489e
00404880  ff751c               PUSH dword ptr [EBP + 0x1c]
00404883  ff7518               PUSH dword ptr [EBP + 0x18]
00404886  53                   PUSH EBX
00404887  ff75dc               PUSH dword ptr [EBP + -0x24]
0040488a  ff750c               PUSH dword ptr [EBP + 0xc]
0040488d  ff7508               PUSH dword ptr [EBP + 0x8]
00404890  ff153c604000         CALL dword ptr [0x0040603c]
00404896  85c0                 TEST EAX,EAX
00404898  0f858f000000         JNZ 0x0040492d
0040489e  33c0                 XOR EAX,EAX
004048a0  8d65c8               LEA ESP,[EBP + -0x38]
004048a3  8b4df0               MOV ECX,dword ptr [EBP + -0x10]
004048a6  64890d00000000       MOV dword ptr FS:[0x0],ECX
004048ad  5f                   POP EDI
004048ae  5e                   POP ESI
004048af  5b                   POP EBX
004048b0  c9                   LEAVE
004048b1  c3                   RET
004048b2  c745fc01000000       MOV dword ptr [EBP + -0x4],0x1
004048b9  8d0436               LEA EAX,[ESI + ESI*0x1]
004048bc  83c003               ADD EAX,0x3
004048bf  24fc                 AND AL,0xfc
004048c1  e85a060000           CALL 0x00404f20
004048c6  8965e8               MOV dword ptr [EBP + -0x18],ESP
004048c9  8bdc                 MOV EBX,ESP
004048cb  895de0               MOV dword ptr [EBP + -0x20],EBX
004048ce  834dfcff             OR dword ptr [EBP + -0x4],0xffffffff
004048d2  eb12                 JMP 0x004048e6

; ==== FUNCTION FUN_004048d4 entry=004048d4 sig=undefined4 __stdcall FUN_004048d4(void)
004048d4  6a01                 PUSH 0x1
004048d6  58                   POP EAX
004048d7  c3                   RET

; ==== FUNCTION FUN_004048d8 entry=004048d8 sig=int __stdcall FUN_004048d8(void)
004048d8  8b65e8               MOV ESP,dword ptr [EBP + -0x18]
004048db  33ff                 XOR EDI,EDI
004048dd  33db                 XOR EBX,EBX
004048df  834dfcff             OR dword ptr [EBP + -0x4],0xffffffff
004048e3  8b75d8               MOV ESI,dword ptr [EBP + -0x28]

; ==== FUNCTION FUN_004048e6 entry=004048e6 sig=LPCWSTR __stdcall FUN_004048e6(void)
004048e6  3bdf                 CMP EBX,EDI
004048e8  74b4                 JZ 0x0040489e
004048ea  56                   PUSH ESI
004048eb  53                   PUSH EBX
004048ec  ff75e4               PUSH dword ptr [EBP + -0x1c]
004048ef  ff75dc               PUSH dword ptr [EBP + -0x24]
004048f2  ff750c               PUSH dword ptr [EBP + 0xc]
004048f5  ff7508               PUSH dword ptr [EBP + 0x8]
004048f8  ff153c604000         CALL dword ptr [0x0040603c]
004048fe  85c0                 TEST EAX,EAX
00404900  749c                 JZ 0x0040489e
00404902  397d1c               CMP dword ptr [EBP + 0x1c],EDI
00404905  57                   PUSH EDI
00404906  57                   PUSH EDI
00404907  7504                 JNZ 0x0040490d
00404909  57                   PUSH EDI
0040490a  57                   PUSH EDI
0040490b  eb06                 JMP 0x00404913
0040490d  ff751c               PUSH dword ptr [EBP + 0x1c]
00404910  ff7518               PUSH dword ptr [EBP + 0x18]
00404913  56                   PUSH ESI
00404914  53                   PUSH EBX
00404915  6820020000           PUSH 0x220
0040491a  ff7520               PUSH dword ptr [EBP + 0x20]
0040491d  ff1580604000         CALL dword ptr [0x00406080]
00404923  8bf0                 MOV ESI,EAX
00404925  3bf7                 CMP ESI,EDI
00404927  0f8471ffffff         JZ 0x0040489e
0040492d  8bc6                 MOV EAX,ESI
0040492f  e96cffffff           JMP 0x004048a0

; ==== FUNCTION FUN_00404934 entry=00404934 sig=int __cdecl FUN_00404934(char * param_1, int param_2)
00404934  8b542408             MOV EDX,dword ptr [ESP + 0x8]
00404938  8b442404             MOV EAX,dword ptr [ESP + 0x4]
0040493c  85d2                 TEST EDX,EDX
0040493e  56                   PUSH ESI
0040493f  8d4aff               LEA ECX,[EDX + -0x1]
00404942  740d                 JZ 0x00404951
00404944  803800               CMP byte ptr [EAX],0x0
00404947  7408                 JZ 0x00404951
00404949  40                   INC EAX
0040494a  8bf1                 MOV ESI,ECX
0040494c  49                   DEC ECX
0040494d  85f6                 TEST ESI,ESI
0040494f  75f3                 JNZ 0x00404944
00404951  803800               CMP byte ptr [EAX],0x0
00404954  5e                   POP ESI
00404955  7505                 JNZ 0x0040495c
00404957  2b442404             SUB EAX,dword ptr [ESP + 0x4]
0040495b  c3                   RET
0040495c  8bc2                 MOV EAX,EDX
0040495e  c3                   RET

; ==== FUNCTION FUN_0040495f entry=0040495f sig=BOOL __cdecl FUN_0040495f(DWORD param_1, LPCSTR param_2, int param_3, LPWORD param_4, UINT param_5, LCID param_6, int param_7)
0040495f  55                   PUSH EBP
00404960  8bec                 MOV EBP,ESP
00404962  6aff                 PUSH -0x1
00404964  68e8644000           PUSH 0x4064e8
00404969  68902a4000           PUSH 0x402a90
0040496e  64a100000000         MOV EAX,FS:[0x0]
00404974  50                   PUSH EAX
00404975  64892500000000       MOV dword ptr FS:[0x0],ESP
0040497c  83ec18               SUB ESP,0x18
0040497f  53                   PUSH EBX
00404980  56                   PUSH ESI
00404981  57                   PUSH EDI
00404982  8965e8               MOV dword ptr [EBP + -0x18],ESP
00404985  a1e4804000           MOV EAX,[0x004080e4]
0040498a  33db                 XOR EBX,EBX
0040498c  3bc3                 CMP EAX,EBX
0040498e  753e                 JNZ 0x004049ce
00404990  8d45e4               LEA EAX,[EBP + -0x1c]
00404993  50                   PUSH EAX
00404994  6a01                 PUSH 0x1
00404996  5e                   POP ESI
00404997  56                   PUSH ESI
00404998  68c8644000           PUSH 0x4064c8
0040499d  56                   PUSH ESI
0040499e  ff1540604000         CALL dword ptr [0x00406040]
004049a4  85c0                 TEST EAX,EAX
004049a6  7404                 JZ 0x004049ac
004049a8  8bc6                 MOV EAX,ESI
004049aa  eb1d                 JMP 0x004049c9
004049ac  8d45e4               LEA EAX,[EBP + -0x1c]
004049af  50                   PUSH EAX
004049b0  56                   PUSH ESI
004049b1  68c4644000           PUSH 0x4064c4
004049b6  56                   PUSH ESI
004049b7  53                   PUSH EBX
004049b8  ff1538604000         CALL dword ptr [0x00406038]
004049be  85c0                 TEST EAX,EAX
004049c0  0f84ce000000         JZ 0x00404a94
004049c6  6a02                 PUSH 0x2
004049c8  58                   POP EAX
004049c9  a3e4804000           MOV [0x004080e4],EAX
004049ce  83f802               CMP EAX,0x2
004049d1  7524                 JNZ 0x004049f7
004049d3  8b451c               MOV EAX,dword ptr [EBP + 0x1c]
004049d6  3bc3                 CMP EAX,EBX
004049d8  7505                 JNZ 0x004049df
004049da  a1c8804000           MOV EAX,[0x004080c8]
004049df  ff7514               PUSH dword ptr [EBP + 0x14]
004049e2  ff7510               PUSH dword ptr [EBP + 0x10]
004049e5  ff750c               PUSH dword ptr [EBP + 0xc]
004049e8  ff7508               PUSH dword ptr [EBP + 0x8]
004049eb  50                   PUSH EAX
004049ec  ff1538604000         CALL dword ptr [0x00406038]
004049f2  e99f000000           JMP 0x00404a96
004049f7  83f801               CMP EAX,0x1
004049fa  0f8594000000         JNZ 0x00404a94
00404a00  395d18               CMP dword ptr [EBP + 0x18],EBX
00404a03  7508                 JNZ 0x00404a0d
00404a05  a1d8804000           MOV EAX,[0x004080d8]
00404a0a  894518               MOV dword ptr [EBP + 0x18],EAX
00404a0d  53                   PUSH EBX
00404a0e  53                   PUSH EBX
00404a0f  ff7510               PUSH dword ptr [EBP + 0x10]
00404a12  ff750c               PUSH dword ptr [EBP + 0xc]
00404a15  8b4520               MOV EAX,dword ptr [EBP + 0x20]
00404a18  f7d8                 NEG EAX
00404a1a  1bc0                 SBB EAX,EAX
00404a1c  83e008               AND EAX,0x8
00404a1f  40                   INC EAX
00404a20  50                   PUSH EAX
00404a21  ff7518               PUSH dword ptr [EBP + 0x18]
00404a24  ff1544604000         CALL dword ptr [0x00406044]
00404a2a  8945e0               MOV dword ptr [EBP + -0x20],EAX
00404a2d  3bc3                 CMP EAX,EBX
00404a2f  7463                 JZ 0x00404a94
00404a31  895dfc               MOV dword ptr [EBP + -0x4],EBX
00404a34  8d3c00               LEA EDI,[EAX + EAX*0x1]
00404a37  8bc7                 MOV EAX,EDI
00404a39  83c003               ADD EAX,0x3
00404a3c  24fc                 AND AL,0xfc
00404a3e  e8dd040000           CALL 0x00404f20
00404a43  8965e8               MOV dword ptr [EBP + -0x18],ESP
00404a46  8bf4                 MOV ESI,ESP
00404a48  8975dc               MOV dword ptr [EBP + -0x24],ESI
00404a4b  57                   PUSH EDI
00404a4c  53                   PUSH EBX
00404a4d  56                   PUSH ESI
00404a4e  e8bd030000           CALL 0x00404e10
00404a53  83c40c               ADD ESP,0xc
00404a56  eb0b                 JMP 0x00404a63

; ==== FUNCTION FUN_00404a58 entry=00404a58 sig=undefined4 __stdcall FUN_00404a58(void)
00404a58  6a01                 PUSH 0x1
00404a5a  58                   POP EAX
00404a5b  c3                   RET

; ==== FUNCTION FUN_00404a5c entry=00404a5c sig=BOOL __stdcall FUN_00404a5c(void)
00404a5c  8b65e8               MOV ESP,dword ptr [EBP + -0x18]
00404a5f  33db                 XOR EBX,EBX
00404a61  33f6                 XOR ESI,ESI

; ==== FUNCTION FUN_00404a63 entry=00404a63 sig=BOOL __stdcall FUN_00404a63(void)
00404a63  834dfcff             OR dword ptr [EBP + -0x4],0xffffffff
00404a67  3bf3                 CMP ESI,EBX
00404a69  7429                 JZ 0x00404a94
00404a6b  ff75e0               PUSH dword ptr [EBP + -0x20]
00404a6e  56                   PUSH ESI
00404a6f  ff7510               PUSH dword ptr [EBP + 0x10]
00404a72  ff750c               PUSH dword ptr [EBP + 0xc]
00404a75  6a01                 PUSH 0x1
00404a77  ff7518               PUSH dword ptr [EBP + 0x18]
00404a7a  ff1544604000         CALL dword ptr [0x00406044]
00404a80  3bc3                 CMP EAX,EBX
00404a82  7410                 JZ 0x00404a94
00404a84  ff7514               PUSH dword ptr [EBP + 0x14]
00404a87  50                   PUSH EAX
00404a88  56                   PUSH ESI
00404a89  ff7508               PUSH dword ptr [EBP + 0x8]
00404a8c  ff1540604000         CALL dword ptr [0x00406040]
00404a92  eb02                 JMP 0x00404a96
00404a94  33c0                 XOR EAX,EAX
00404a96  8d65cc               LEA ESP,[EBP + -0x34]
00404a99  8b4df0               MOV ECX,dword ptr [EBP + -0x10]
00404a9c  64890d00000000       MOV dword ptr FS:[0x0],ECX
00404aa3  5f                   POP EDI
00404aa4  5e                   POP ESI
00404aa5  5b                   POP EBX
00404aa6  c9                   LEAVE
00404aa7  c3                   RET

; ==== FUNCTION FUN_00404aa8 entry=00404aa8 sig=undefined4 __cdecl FUN_00404aa8(undefined4 param_1)
00404aa8  a1ec804000           MOV EAX,[0x004080ec]
00404aad  85c0                 TEST EAX,EAX
00404aaf  740f                 JZ 0x00404ac0
00404ab1  ff742404             PUSH dword ptr [ESP + 0x4]
00404ab5  ffd0                 CALL EAX
00404ab7  85c0                 TEST EAX,EAX
00404ab9  59                   POP ECX
00404aba  7404                 JZ 0x00404ac0
00404abc  6a01                 PUSH 0x1
00404abe  58                   POP EAX
00404abf  c3                   RET
00404ac0  33c0                 XOR EAX,EAX
00404ac2  c3                   RET
; undefined 13 bytes at 00404ac3

; ==== FUNCTION FUN_00404ad0 entry=00404ad0 sig=undefined4 * __cdecl FUN_00404ad0(undefined4 * param_1, undefined4 * param_2, uint param_3)
00404ad0  55                   PUSH EBP
00404ad1  8bec                 MOV EBP,ESP
00404ad3  57                   PUSH EDI
00404ad4  56                   PUSH ESI
00404ad5  8b750c               MOV ESI,dword ptr [EBP + 0xc]
00404ad8  8b4d10               MOV ECX,dword ptr [EBP + 0x10]
00404adb  8b7d08               MOV EDI,dword ptr [EBP + 0x8]
00404ade  8bc1                 MOV EAX,ECX
00404ae0  8bd1                 MOV EDX,ECX
00404ae2  03c6                 ADD EAX,ESI
00404ae4  3bfe                 CMP EDI,ESI
00404ae6  7608                 JBE 0x00404af0
00404ae8  3bf8                 CMP EDI,EAX
00404aea  0f8278010000         JC 0x00404c68
00404af0  f7c703000000         TEST EDI,0x3
00404af6  7514                 JNZ 0x00404b0c
00404af8  c1e902               SHR ECX,0x2
00404afb  83e203               AND EDX,0x3
00404afe  83f908               CMP ECX,0x8
00404b01  7229                 JC 0x00404b2c
00404b03  f3a5                 MOVSD.REP ES:EDI,ESI
switchD_00404b05::switchD:
00404b05  ff2495184c4000       JMP dword ptr [EDX*0x4 + 0x404c18]
00404b0c  8bc7                 MOV EAX,EDI
00404b0e  ba03000000           MOV EDX,0x3
00404b13  83e904               SUB ECX,0x4
00404b16  720c                 JC 0x00404b24
switchD_00404b24::default:
00404b18  83e003               AND EAX,0x3
00404b1b  03c8                 ADD ECX,EAX
switchD_00404b1d::switchD:
00404b1d  ff2485304b4000       JMP dword ptr [EAX*0x4 + 0x404b30]
switchD_00404b24::switchD:
00404b24  ff248d284c4000       JMP dword ptr [ECX*0x4 + 0x404c28]
; undefined 1 bytes at 00404b2b
switchD_00404b2c::switchD:
00404b2c  ff248dac4b4000       JMP dword ptr [ECX*0x4 + 0x404bac]
; undefined 1 bytes at 00404b33
switchD_00404b1d::switchdataD_00404b34:
00404b34  addr 00404b40
00404b38  addr 00404b6c
00404b3c  addr 00404b90
switchD_00404b1d::caseD_1:
00404b40  23d1                 AND EDX,ECX
00404b42  8a06                 MOV AL,byte ptr [ESI]
00404b44  8807                 MOV byte ptr [EDI],AL
00404b46  8a4601               MOV AL,byte ptr [ESI + 0x1]
00404b49  884701               MOV byte ptr [EDI + 0x1],AL
00404b4c  8a4602               MOV AL,byte ptr [ESI + 0x2]
00404b4f  c1e902               SHR ECX,0x2
00404b52  884702               MOV byte ptr [EDI + 0x2],AL
00404b55  83c603               ADD ESI,0x3
00404b58  83c703               ADD EDI,0x3
00404b5b  83f908               CMP ECX,0x8
00404b5e  72cc                 JC 0x00404b2c
00404b60  f3a5                 MOVSD.REP ES:EDI,ESI
switchD_00404b62::switchD:
00404b62  ff2495184c4000       JMP dword ptr [EDX*0x4 + 0x404c18]

; ==== FUNCTION FUN_00404b69 entry=00404b69 sig=undefined __fastcall FUN_00404b69(uint param_1, uint param_2)
00404b69  8d4900               LEA ECX,[ECX]
switchD_00404b1d::caseD_2:
00404b6c  23d1                 AND EDX,ECX
00404b6e  8a06                 MOV AL,byte ptr [ESI]
00404b70  8807                 MOV byte ptr [EDI],AL
00404b72  8a4601               MOV AL,byte ptr [ESI + 0x1]
00404b75  c1e902               SHR ECX,0x2
00404b78  884701               MOV byte ptr [EDI + 0x1],AL
00404b7b  83c602               ADD ESI,0x2
00404b7e  83c702               ADD EDI,0x2
00404b81  83f908               CMP ECX,0x8
00404b84  72a6                 JC 0x00404b2c
00404b86  f3a5                 MOVSD.REP ES:EDI,ESI
switchD_00404b88::switchD:
00404b88  ff2495184c4000       JMP dword ptr [EDX*0x4 + 0x404c18]
; undefined 1 bytes at 00404b8f

; ==== FUNCTION switchD_00404b1d::caseD_3 entry=00404b90 sig=undefined __fastcall caseD_3(uint param_1, uint param_2)
00404b90  23d1                 AND EDX,ECX
00404b92  8a06                 MOV AL,byte ptr [ESI]
00404b94  8807                 MOV byte ptr [EDI],AL
00404b96  46                   INC ESI
00404b97  c1e902               SHR ECX,0x2
00404b9a  47                   INC EDI
00404b9b  83f908               CMP ECX,0x8
00404b9e  728c                 JC 0x00404b2c
00404ba0  f3a5                 MOVSD.REP ES:EDI,ESI
switchD_00404ba2::switchD:
00404ba2  ff2495184c4000       JMP dword ptr [EDX*0x4 + 0x404c18]

; ==== FUNCTION FUN_00404ba9 entry=00404ba9 sig=undefined __fastcall FUN_00404ba9(char param_1)
00404ba9  8d4900               LEA ECX,[ECX]
switchD_00404b2c::switchdataD_00404bac:
00404bac  addr 00404c0f
00404bb0  addr 00404bfc
00404bb4  addr 00404bf4
00404bb8  addr 00404bec
00404bbc  addr 00404be4
00404bc0  addr 00404bdc
00404bc4  addr 00404bd4
00404bc8  addr 00404bcc
switchD_00404b2c::caseD_7:
00404bcc  8b448ee4             MOV EAX,dword ptr [ESI + ECX*0x4 + -0x1c]
00404bd0  89448fe4             MOV dword ptr [EDI + ECX*0x4 + -0x1c],EAX
switchD_00404b2c::caseD_6:
00404bd4  8b448ee8             MOV EAX,dword ptr [ESI + ECX*0x4 + -0x18]
00404bd8  89448fe8             MOV dword ptr [EDI + ECX*0x4 + -0x18],EAX
switchD_00404b2c::caseD_5:
00404bdc  8b448eec             MOV EAX,dword ptr [ESI + ECX*0x4 + -0x14]
00404be0  89448fec             MOV dword ptr [EDI + ECX*0x4 + -0x14],EAX
switchD_00404b2c::caseD_4:
00404be4  8b448ef0             MOV EAX,dword ptr [ESI + ECX*0x4 + -0x10]
00404be8  89448ff0             MOV dword ptr [EDI + ECX*0x4 + -0x10],EAX
switchD_00404b2c::caseD_3:
00404bec  8b448ef4             MOV EAX,dword ptr [ESI + ECX*0x4 + -0xc]
00404bf0  89448ff4             MOV dword ptr [EDI + ECX*0x4 + -0xc],EAX
switchD_00404b2c::caseD_2:
00404bf4  8b448ef8             MOV EAX,dword ptr [ESI + ECX*0x4 + -0x8]
00404bf8  89448ff8             MOV dword ptr [EDI + ECX*0x4 + -0x8],EAX
switchD_00404b2c::caseD_1:
00404bfc  8b448efc             MOV EAX,dword ptr [ESI + ECX*0x4 + -0x4]
00404c00  89448ffc             MOV dword ptr [EDI + ECX*0x4 + -0x4],EAX
00404c04  8d048d00000000       LEA EAX,[ECX*0x4 + 0x0]
00404c0b  03f0                 ADD ESI,EAX
00404c0d  03f8                 ADD EDI,EAX
switchD_00404b2c::caseD_0:
00404c0f  ff2495184c4000       JMP dword ptr [EDX*0x4 + 0x404c18]

; ==== FUNCTION FUN_00404c16 entry=00404c16 sig=int __fastcall FUN_00404c16(byte param_1, char param_2)
00404c16  8bff                 MOV EDI,EDI
switchD_00404b05::switchdataD_00404c18:
00404c18  addr 00404c28
00404c1c  addr 00404c30
00404c20  addr 00404c3c
00404c24  addr 00404c50

; ==== FUNCTION switchD_00404b05::caseD_0 entry=00404c28 sig=undefined4 __stdcall caseD_0(void)
00404c28  8b4508               MOV EAX,dword ptr [EBP + 0x8]
00404c2b  5e                   POP ESI
00404c2c  5f                   POP EDI
00404c2d  c9                   LEAVE
00404c2e  c3                   RET
; undefined 1 bytes at 00404c2f
switchD_00404b05::caseD_1:
00404c30  8a06                 MOV AL,byte ptr [ESI]
00404c32  8807                 MOV byte ptr [EDI],AL
00404c34  8b4508               MOV EAX,dword ptr [EBP + 0x8]
00404c37  5e                   POP ESI
00404c38  5f                   POP EDI
00404c39  c9                   LEAVE
00404c3a  c3                   RET
; undefined 1 bytes at 00404c3b
switchD_00404b05::caseD_2:
00404c3c  8a06                 MOV AL,byte ptr [ESI]
00404c3e  8807                 MOV byte ptr [EDI],AL
00404c40  8a4601               MOV AL,byte ptr [ESI + 0x1]
00404c43  884701               MOV byte ptr [EDI + 0x1],AL
00404c46  8b4508               MOV EAX,dword ptr [EBP + 0x8]
00404c49  5e                   POP ESI
00404c4a  5f                   POP EDI
00404c4b  c9                   LEAVE
00404c4c  c3                   RET

; ==== FUNCTION FUN_00404c4d entry=00404c4d sig=undefined4 __stdcall FUN_00404c4d(void)
00404c4d  8d4900               LEA ECX,[ECX]
switchD_00404b05::caseD_3:
00404c50  8a06                 MOV AL,byte ptr [ESI]
00404c52  8807                 MOV byte ptr [EDI],AL
00404c54  8a4601               MOV AL,byte ptr [ESI + 0x1]
00404c57  884701               MOV byte ptr [EDI + 0x1],AL
00404c5a  8a4602               MOV AL,byte ptr [ESI + 0x2]
00404c5d  884702               MOV byte ptr [EDI + 0x2],AL
00404c60  8b4508               MOV EAX,dword ptr [EBP + 0x8]
00404c63  5e                   POP ESI
00404c64  5f                   POP EDI
00404c65  c9                   LEAVE
00404c66  c3                   RET
; undefined 1 bytes at 00404c67
00404c68  8d7431fc             LEA ESI,[ECX + ESI*0x1 + -0x4]
00404c6c  8d7c39fc             LEA EDI,[ECX + EDI*0x1 + -0x4]
00404c70  f7c703000000         TEST EDI,0x3
00404c76  7524                 JNZ 0x00404c9c
00404c78  c1e902               SHR ECX,0x2
00404c7b  83e203               AND EDX,0x3
00404c7e  83f908               CMP ECX,0x8
00404c81  720d                 JC 0x00404c90
00404c83  fd                   STD
00404c84  f3a5                 MOVSD.REP ES:EDI,ESI
00404c86  fc                   CLD
switchD_00404c87::switchD:
00404c87  ff2495b04d4000       JMP dword ptr [EDX*0x4 + 0x404db0]

; ==== FUNCTION FUN_00404c8e entry=00404c8e sig=undefined __fastcall FUN_00404c8e(int param_1)
00404c8e  8bff                 MOV EDI,EDI
00404c90  f7d9                 NEG ECX
switchD_00404c92::switchD:
00404c92  ff248d604d4000       JMP dword ptr [ECX*0x4 + 0x404d60]

; ==== FUNCTION FUN_00404c99 entry=00404c99 sig=undefined4 __fastcall FUN_00404c99(int param_1)
00404c99  8d4900               LEA ECX,[ECX]
00404c9c  8bc7                 MOV EAX,EDI
00404c9e  ba03000000           MOV EDX,0x3
00404ca3  83f904               CMP ECX,0x4
00404ca6  720c                 JC 0x00404cb4
switchD_00404cb4::default:
00404ca8  83e003               AND EAX,0x3
00404cab  2bc8                 SUB ECX,EAX
switchD_00404cad::switchD:
00404cad  ff2485b84c4000       JMP dword ptr [EAX*0x4 + 0x404cb8]
switchD_00404cb4::switchD:
00404cb4  ff248db04d4000       JMP dword ptr [ECX*0x4 + 0x404db0]
; undefined 1 bytes at 00404cbb
switchD_00404cad::switchdataD_00404cbc:
00404cbc  addr 00404cc8
00404cc0  addr 00404ce8
00404cc4  addr 00404d10
switchD_00404cad::caseD_1:
00404cc8  8a4603               MOV AL,byte ptr [ESI + 0x3]
00404ccb  23d1                 AND EDX,ECX
00404ccd  884703               MOV byte ptr [EDI + 0x3],AL
00404cd0  4e                   DEC ESI
00404cd1  c1e902               SHR ECX,0x2
00404cd4  4f                   DEC EDI
00404cd5  83f908               CMP ECX,0x8
00404cd8  72b6                 JC 0x00404c90
00404cda  fd                   STD
00404cdb  f3a5                 MOVSD.REP ES:EDI,ESI
00404cdd  fc                   CLD
switchD_00404cde::switchD:
00404cde  ff2495b04d4000       JMP dword ptr [EDX*0x4 + 0x404db0]

; ==== FUNCTION FUN_00404ce5 entry=00404ce5 sig=undefined __fastcall FUN_00404ce5(uint param_1, uint param_2)
00404ce5  8d4900               LEA ECX,[ECX]
switchD_00404cad::caseD_2:
00404ce8  8a4603               MOV AL,byte ptr [ESI + 0x3]
00404ceb  23d1                 AND EDX,ECX
00404ced  884703               MOV byte ptr [EDI + 0x3],AL
00404cf0  8a4602               MOV AL,byte ptr [ESI + 0x2]
00404cf3  c1e902               SHR ECX,0x2
00404cf6  884702               MOV byte ptr [EDI + 0x2],AL
00404cf9  83ee02               SUB ESI,0x2
00404cfc  83ef02               SUB EDI,0x2
00404cff  83f908               CMP ECX,0x8
00404d02  728c                 JC 0x00404c90
00404d04  fd                   STD
00404d05  f3a5                 MOVSD.REP ES:EDI,ESI
00404d07  fc                   CLD
switchD_00404d08::switchD:
00404d08  ff2495b04d4000       JMP dword ptr [EDX*0x4 + 0x404db0]
; undefined 1 bytes at 00404d0f

; ==== FUNCTION switchD_00404cad::caseD_3 entry=00404d10 sig=undefined __fastcall caseD_3(uint param_1, uint param_2)
00404d10  8a4603               MOV AL,byte ptr [ESI + 0x3]
00404d13  23d1                 AND EDX,ECX
00404d15  884703               MOV byte ptr [EDI + 0x3],AL
00404d18  8a4602               MOV AL,byte ptr [ESI + 0x2]
00404d1b  884702               MOV byte ptr [EDI + 0x2],AL
00404d1e  8a4601               MOV AL,byte ptr [ESI + 0x1]
00404d21  c1e902               SHR ECX,0x2
00404d24  884701               MOV byte ptr [EDI + 0x1],AL
00404d27  83ee03               SUB ESI,0x3
00404d2a  83ef03               SUB EDI,0x3
00404d2d  83f908               CMP ECX,0x8
00404d30  0f825affffff         JC 0x00404c90
00404d36  fd                   STD
00404d37  f3a5                 MOVSD.REP ES:EDI,ESI
00404d39  fc                   CLD
switchD_00404d3a::switchD:
00404d3a  ff2495b04d4000       JMP dword ptr [EDX*0x4 + 0x404db0]

; ==== FUNCTION FUN_00404d41 entry=00404d41 sig=undefined __fastcall FUN_00404d41(int param_1, undefined4 param_2)
00404d41  8d4900               LEA ECX,[ECX]
switchD_00404c92::switchdataD_00404d44:
00404d44  addr 00404d64
00404d48  addr 00404d6c
00404d4c  addr 00404d74
00404d50  addr 00404d7c
00404d54  addr 00404d84
00404d58  addr 00404d8c
00404d5c  addr 00404d94
00404d60  addr 00404da7
switchD_00404c92::caseD_7:
00404d64  8b448e1c             MOV EAX,dword ptr [ESI + ECX*0x4 + 0x1c]
00404d68  89448f1c             MOV dword ptr [EDI + ECX*0x4 + 0x1c],EAX
switchD_00404c92::caseD_6:
00404d6c  8b448e18             MOV EAX,dword ptr [ESI + ECX*0x4 + 0x18]
00404d70  89448f18             MOV dword ptr [EDI + ECX*0x4 + 0x18],EAX
switchD_00404c92::caseD_5:
00404d74  8b448e14             MOV EAX,dword ptr [ESI + ECX*0x4 + 0x14]
00404d78  89448f14             MOV dword ptr [EDI + ECX*0x4 + 0x14],EAX
switchD_00404c92::caseD_4:
00404d7c  8b448e10             MOV EAX,dword ptr [ESI + ECX*0x4 + 0x10]
00404d80  89448f10             MOV dword ptr [EDI + ECX*0x4 + 0x10],EAX
switchD_00404c92::caseD_3:
00404d84  8b448e0c             MOV EAX,dword ptr [ESI + ECX*0x4 + 0xc]
00404d88  89448f0c             MOV dword ptr [EDI + ECX*0x4 + 0xc],EAX
switchD_00404c92::caseD_2:
00404d8c  8b448e08             MOV EAX,dword ptr [ESI + ECX*0x4 + 0x8]
00404d90  89448f08             MOV dword ptr [EDI + ECX*0x4 + 0x8],EAX
switchD_00404c92::caseD_1:
00404d94  8b448e04             MOV EAX,dword ptr [ESI + ECX*0x4 + 0x4]
00404d98  89448f04             MOV dword ptr [EDI + ECX*0x4 + 0x4],EAX
00404d9c  8d048d00000000       LEA EAX,[ECX*0x4 + 0x0]
00404da3  03f0                 ADD ESI,EAX
00404da5  03f8                 ADD EDI,EAX
switchD_00404c92::caseD_0:
00404da7  ff2495b04d4000       JMP dword ptr [EDX*0x4 + 0x404db0]

; ==== FUNCTION FUN_00404dae entry=00404dae sig=int __fastcall FUN_00404dae(undefined4 param_1)
00404dae  8bff                 MOV EDI,EDI
switchD_00404c87::switchdataD_00404db0:
00404db0  addr 00404dc0
00404db4  addr 00404dc8
00404db8  addr 00404dd8
00404dbc  addr 00404dec

; ==== FUNCTION switchD_00404c87::caseD_0 entry=00404dc0 sig=undefined4 __stdcall caseD_0(void)
00404dc0  8b4508               MOV EAX,dword ptr [EBP + 0x8]
00404dc3  5e                   POP ESI
00404dc4  5f                   POP EDI
00404dc5  c9                   LEAVE
00404dc6  c3                   RET
; undefined 1 bytes at 00404dc7
switchD_00404c87::caseD_1:
00404dc8  8a4603               MOV AL,byte ptr [ESI + 0x3]
00404dcb  884703               MOV byte ptr [EDI + 0x3],AL
00404dce  8b4508               MOV EAX,dword ptr [EBP + 0x8]
00404dd1  5e                   POP ESI
00404dd2  5f                   POP EDI
00404dd3  c9                   LEAVE
00404dd4  c3                   RET

; ==== FUNCTION FUN_00404dd5 entry=00404dd5 sig=undefined4 __stdcall FUN_00404dd5(void)
00404dd5  8d4900               LEA ECX,[ECX]
switchD_00404c87::caseD_2:
00404dd8  8a4603               MOV AL,byte ptr [ESI + 0x3]
00404ddb  884703               MOV byte ptr [EDI + 0x3],AL
00404dde  8a4602               MOV AL,byte ptr [ESI + 0x2]
00404de1  884702               MOV byte ptr [EDI + 0x2],AL
00404de4  8b4508               MOV EAX,dword ptr [EBP + 0x8]
00404de7  5e                   POP ESI
00404de8  5f                   POP EDI
00404de9  c9                   LEAVE
00404dea  c3                   RET
; undefined 1 bytes at 00404deb
switchD_00404c87::caseD_3:
00404dec  8a4603               MOV AL,byte ptr [ESI + 0x3]
00404def  884703               MOV byte ptr [EDI + 0x3],AL
00404df2  8a4602               MOV AL,byte ptr [ESI + 0x2]
00404df5  884702               MOV byte ptr [EDI + 0x2],AL
00404df8  8a4601               MOV AL,byte ptr [ESI + 0x1]
00404dfb  884701               MOV byte ptr [EDI + 0x1],AL
00404dfe  8b4508               MOV EAX,dword ptr [EBP + 0x8]
00404e01  5e                   POP ESI
00404e02  5f                   POP EDI
00404e03  c9                   LEAVE
00404e04  c3                   RET
; undefined 11 bytes at 00404e05

; ==== FUNCTION _memset entry=00404e10 sig=void * __cdecl _memset(void * _Dst, int _Val, size_t _Size)
00404e10  8b54240c             MOV EDX,dword ptr [ESP + 0xc]
00404e14  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
00404e18  85d2                 TEST EDX,EDX
00404e1a  7447                 JZ 0x00404e63
00404e1c  33c0                 XOR EAX,EAX
00404e1e  8a442408             MOV AL,byte ptr [ESP + 0x8]
00404e22  57                   PUSH EDI
00404e23  8bf9                 MOV EDI,ECX
00404e25  83fa04               CMP EDX,0x4
00404e28  722d                 JC 0x00404e57
00404e2a  f7d9                 NEG ECX
00404e2c  83e103               AND ECX,0x3
00404e2f  7408                 JZ 0x00404e39
00404e31  2bd1                 SUB EDX,ECX
00404e33  8807                 MOV byte ptr [EDI],AL
00404e35  47                   INC EDI
00404e36  49                   DEC ECX
00404e37  75fa                 JNZ 0x00404e33
00404e39  8bc8                 MOV ECX,EAX
00404e3b  c1e008               SHL EAX,0x8
00404e3e  03c1                 ADD EAX,ECX
00404e40  8bc8                 MOV ECX,EAX
00404e42  c1e010               SHL EAX,0x10
00404e45  03c1                 ADD EAX,ECX
00404e47  8bca                 MOV ECX,EDX
00404e49  83e203               AND EDX,0x3
00404e4c  c1e902               SHR ECX,0x2
00404e4f  7406                 JZ 0x00404e57
00404e51  f3ab                 STOSD.REP ES:EDI
00404e53  85d2                 TEST EDX,EDX
00404e55  7406                 JZ 0x00404e5d
00404e57  8807                 MOV byte ptr [EDI],AL
00404e59  47                   INC EDI
00404e5a  4a                   DEC EDX
00404e5b  75fa                 JNZ 0x00404e57
00404e5d  8b442408             MOV EAX,dword ptr [ESP + 0x8]
00404e61  5f                   POP EDI
00404e62  c3                   RET
00404e63  8b442404             MOV EAX,dword ptr [ESP + 0x4]
00404e67  c3                   RET

; ==== FUNCTION FUN_00404e68 entry=00404e68 sig=undefined4 __cdecl FUN_00404e68(FILE * param_1)
00404e68  56                   PUSH ESI
00404e69  8b742408             MOV ESI,dword ptr [ESP + 0x8]
00404e6d  57                   PUSH EDI
00404e6e  83cfff               OR EDI,0xffffffff
00404e71  8b460c               MOV EAX,dword ptr [ESI + 0xc]
00404e74  a840                 TEST AL,0x40
00404e76  7405                 JZ 0x00404e7d
00404e78  83c8ff               OR EAX,0xffffffff
00404e7b  eb3a                 JMP 0x00404eb7
00404e7d  a883                 TEST AL,0x83
00404e7f  7434                 JZ 0x00404eb5
00404e81  56                   PUSH ESI
00404e82  e8aef7ffff           CALL 0x00404635
00404e87  56                   PUSH ESI
00404e88  8bf8                 MOV EDI,EAX
00404e8a  e873010000           CALL 0x00405002
00404e8f  ff7610               PUSH dword ptr [ESI + 0x10]
00404e92  e8b8000000           CALL 0x00404f4f
00404e97  83c40c               ADD ESP,0xc
00404e9a  85c0                 TEST EAX,EAX
00404e9c  7d05                 JGE 0x00404ea3
00404e9e  83cfff               OR EDI,0xffffffff
00404ea1  eb12                 JMP 0x00404eb5
00404ea3  8b461c               MOV EAX,dword ptr [ESI + 0x1c]
00404ea6  85c0                 TEST EAX,EAX
00404ea8  740b                 JZ 0x00404eb5
00404eaa  50                   PUSH EAX
00404eab  e8a7e7ffff           CALL 0x00403657
00404eb0  83661c00             AND dword ptr [ESI + 0x1c],0x0
00404eb4  59                   POP ECX
00404eb5  8bc7                 MOV EAX,EDI
00404eb7  83660c00             AND dword ptr [ESI + 0xc],0x0
00404ebb  5f                   POP EDI
00404ebc  5e                   POP ESI
00404ebd  c3                   RET

; ==== FUNCTION FUN_00404ebe entry=00404ebe sig=undefined4 __cdecl FUN_00404ebe(uint param_1)
00404ebe  8b442404             MOV EAX,dword ptr [ESP + 0x4]
00404ec2  3b0560944000         CMP EAX,dword ptr [0x00409460]
00404ec8  733d                 JNC 0x00404f07
00404eca  8bc8                 MOV ECX,EAX
00404ecc  8bd0                 MOV EDX,EAX
00404ece  c1f905               SAR ECX,0x5
00404ed1  83e21f               AND EDX,0x1f
00404ed4  8b0c8d60934000       MOV ECX,dword ptr [ECX*0x4 + 0x409360]
00404edb  f644d10401           TEST byte ptr [ECX + EDX*0x8 + 0x4],0x1
00404ee0  7425                 JZ 0x00404f07
00404ee2  50                   PUSH EAX
00404ee3  e800f6ffff           CALL 0x004044e8
00404ee8  59                   POP ECX
00404ee9  50                   PUSH EAX
00404eea  ff1530604000         CALL dword ptr [0x00406030]
00404ef0  85c0                 TEST EAX,EAX
00404ef2  7508                 JNZ 0x00404efc
00404ef4  ff15ac604000         CALL dword ptr [0x004060ac]
00404efa  eb02                 JMP 0x00404efe
00404efc  33c0                 XOR EAX,EAX
00404efe  85c0                 TEST EAX,EAX
00404f00  7412                 JZ 0x00404f14
00404f02  a3487f4000           MOV [0x00407f48],EAX
00404f07  c705447f400009000000 MOV dword ptr [0x00407f44],0x9
00404f11  83c8ff               OR EAX,0xffffffff
00404f14  c3                   RET
; undefined 11 bytes at 00404f15

; ==== FUNCTION FUN_00404f20 entry=00404f20 sig=undefined __stdcall FUN_00404f20(void)
00404f20  51                   PUSH ECX
00404f21  3d00100000           CMP EAX,0x1000
00404f26  8d4c2408             LEA ECX,[ESP + 0x8]
00404f2a  7214                 JC 0x00404f40
00404f2c  81e900100000         SUB ECX,0x1000
00404f32  2d00100000           SUB EAX,0x1000
00404f37  8501                 TEST dword ptr [ECX],EAX
00404f39  3d00100000           CMP EAX,0x1000
00404f3e  73ec                 JNC 0x00404f2c
00404f40  2bc8                 SUB ECX,EAX
00404f42  8bc4                 MOV EAX,ESP
00404f44  8501                 TEST dword ptr [ECX],EAX
00404f46  8be1                 MOV ESP,ECX
00404f48  8b08                 MOV ECX,dword ptr [EAX]
00404f4a  8b4004               MOV EAX,dword ptr [EAX + 0x4]
00404f4d  50                   PUSH EAX
00404f4e  c3                   RET

; ==== FUNCTION FUN_00404f4f entry=00404f4f sig=undefined4 __cdecl FUN_00404f4f(uint param_1)
00404f4f  53                   PUSH EBX
00404f50  55                   PUSH EBP
00404f51  56                   PUSH ESI
00404f52  57                   PUSH EDI
00404f53  8b7c2414             MOV EDI,dword ptr [ESP + 0x14]
00404f57  3b3d60944000         CMP EDI,dword ptr [0x00409460]
00404f5d  0f8386000000         JNC 0x00404fe9
00404f63  8bc7                 MOV EAX,EDI
00404f65  8bf7                 MOV ESI,EDI
00404f67  c1f805               SAR EAX,0x5
00404f6a  83e61f               AND ESI,0x1f
00404f6d  8d1c8560934000       LEA EBX,[EAX*0x4 + 0x409360]
00404f74  c1e603               SHL ESI,0x3
00404f77  8b03                 MOV EAX,dword ptr [EBX]
00404f79  f644300401           TEST byte ptr [EAX + ESI*0x1 + 0x4],0x1
00404f7e  7469                 JZ 0x00404fe9
00404f80  57                   PUSH EDI
00404f81  e862f5ffff           CALL 0x004044e8
00404f86  83f8ff               CMP EAX,-0x1
00404f89  59                   POP ECX
00404f8a  743c                 JZ 0x00404fc8
00404f8c  83ff01               CMP EDI,0x1
00404f8f  7405                 JZ 0x00404f96
00404f91  83ff02               CMP EDI,0x2
00404f94  7516                 JNZ 0x00404fac
00404f96  6a02                 PUSH 0x2
00404f98  e84bf5ffff           CALL 0x004044e8
00404f9d  6a01                 PUSH 0x1
00404f9f  8be8                 MOV EBP,EAX
00404fa1  e842f5ffff           CALL 0x004044e8
00404fa6  59                   POP ECX
00404fa7  3bc5                 CMP EAX,EBP
00404fa9  59                   POP ECX
00404faa  741c                 JZ 0x00404fc8
00404fac  57                   PUSH EDI
00404fad  e836f5ffff           CALL 0x004044e8
00404fb2  59                   POP ECX
00404fb3  50                   PUSH EAX
00404fb4  ff152c604000         CALL dword ptr [0x0040602c]
00404fba  85c0                 TEST EAX,EAX
00404fbc  750a                 JNZ 0x00404fc8
00404fbe  ff15ac604000         CALL dword ptr [0x004060ac]
00404fc4  8be8                 MOV EBP,EAX
00404fc6  eb02                 JMP 0x00404fca
00404fc8  33ed                 XOR EBP,EBP
00404fca  57                   PUSH EDI
00404fcb  e89ef4ffff           CALL 0x0040446e
00404fd0  8b03                 MOV EAX,dword ptr [EBX]
00404fd2  59                   POP ECX
00404fd3  8064300400           AND byte ptr [EAX + ESI*0x1 + 0x4],0x0
00404fd8  85ed                 TEST EBP,EBP
00404fda  7409                 JZ 0x00404fe5
00404fdc  55                   PUSH EBP
00404fdd  e825f4ffff           CALL 0x00404407
00404fe2  59                   POP ECX
00404fe3  eb15                 JMP 0x00404ffa
00404fe5  33c0                 XOR EAX,EAX
00404fe7  eb14                 JMP 0x00404ffd
00404fe9  8325487f400000       AND dword ptr [0x00407f48],0x0
00404ff0  c705447f400009000000 MOV dword ptr [0x00407f44],0x9
00404ffa  83c8ff               OR EAX,0xffffffff
00404ffd  5f                   POP EDI
00404ffe  5e                   POP ESI
00404fff  5d                   POP EBP
00405000  5b                   POP EBX
00405001  c3                   RET

; ==== FUNCTION __freebuf entry=00405002 sig=void __cdecl __freebuf(FILE * _File)
00405002  56                   PUSH ESI
00405003  8b742408             MOV ESI,dword ptr [ESP + 0x8]
00405007  8b460c               MOV EAX,dword ptr [ESI + 0xc]
0040500a  a883                 TEST AL,0x83
0040500c  741d                 JZ 0x0040502b
0040500e  a808                 TEST AL,0x8
00405010  7419                 JZ 0x0040502b
00405012  ff7608               PUSH dword ptr [ESI + 0x8]
00405015  e83de6ffff           CALL 0x00403657
0040501a  6681660cf7fb         AND word ptr [ESI + 0xc],0xfbf7
00405020  33c0                 XOR EAX,EAX
00405022  59                   POP ECX
00405023  8906                 MOV dword ptr [ESI],EAX
00405025  894608               MOV dword ptr [ESI + 0x8],EAX
00405028  894604               MOV dword ptr [ESI + 0x4],EAX
0040502b  5e                   POP ESI
0040502c  c3                   RET
; undefined 3 bytes at 0040502d

; ==== FUNCTION KERNEL32.DLL::RtlUnwind entry=00405030 sig=void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
00405030  ff25a4604000         JMP dword ptr [0x004060a4]

; ==== FUNCTION FUN_00405036 entry=00405036 sig=undefined __cdecl FUN_00405036(uint * param_1, size_t param_2)
00405036  ff742408             PUSH dword ptr [ESP + 0x8]
0040503a  ff742408             PUSH dword ptr [ESP + 0x8]
0040503e  6a00                 PUSH 0x0
00405040  e804000000           CALL 0x00405049
00405045  83c40c               ADD ESP,0xc
00405048  c3                   RET

; ==== FUNCTION FUN_00405049 entry=00405049 sig=uint * __cdecl FUN_00405049(uint param_1, uint * param_2, size_t param_3)
00405049  55                   PUSH EBP
0040504a  8bec                 MOV EBP,ESP
0040504c  81ec08010000         SUB ESP,0x108
00405052  53                   PUSH EBX
00405053  8b5d08               MOV EBX,dword ptr [EBP + 0x8]
00405056  85db                 TEST EBX,EBX
00405058  7452                 JZ 0x004050ac
0040505a  53                   PUSH EBX
0040505b  e8ba000000           CALL 0x0040511a
00405060  85c0                 TEST EAX,EAX
00405062  59                   POP ECX
00405063  7519                 JNZ 0x0040507e
00405065  c705487f40000f000000 MOV dword ptr [0x00407f48],0xf
0040506f  c705447f40000d000000 MOV dword ptr [0x00407f44],0xd
00405079  33c0                 XOR EAX,EAX
0040507b  5b                   POP EBX
0040507c  c9                   LEAVE
0040507d  c3                   RET
0040507e  8d45fc               LEA EAX,[EBP + -0x4]
00405081  80650b00             AND byte ptr [EBP + 0xb],0x0
00405085  50                   PUSH EAX
00405086  8d85f8feffff         LEA EAX,[EBP + 0xfffffef8]
0040508c  50                   PUSH EAX
0040508d  8d4508               LEA EAX,[EBP + 0x8]
00405090  80c340               ADD BL,0x40
00405093  6804010000           PUSH 0x104
00405098  50                   PUSH EAX
00405099  885d08               MOV byte ptr [EBP + 0x8],BL
0040509c  c645093a             MOV byte ptr [EBP + 0x9],0x3a
004050a0  c6450a2e             MOV byte ptr [EBP + 0xa],0x2e
004050a4  ff1524604000         CALL dword ptr [0x00406024]
004050aa  eb12                 JMP 0x004050be
004050ac  8d85f8feffff         LEA EAX,[EBP + 0xfffffef8]
004050b2  50                   PUSH EAX
004050b3  6804010000           PUSH 0x104
004050b8  ff1534604000         CALL dword ptr [0x00406034]
004050be  85c0                 TEST EAX,EAX
004050c0  74b7                 JZ 0x00405079
004050c2  40                   INC EAX
004050c3  3d04010000           CMP EAX,0x104
004050c8  77af                 JA 0x00405079
004050ca  8b4d0c               MOV ECX,dword ptr [EBP + 0xc]
004050cd  85c9                 TEST ECX,ECX
004050cf  7521                 JNZ 0x004050f2
004050d1  3b4510               CMP EAX,dword ptr [EBP + 0x10]
004050d4  7f03                 JG 0x004050d9
004050d6  8b4510               MOV EAX,dword ptr [EBP + 0x10]
004050d9  50                   PUSH EAX
004050da  e8a1e6ffff           CALL 0x00403780
004050df  59                   POP ECX
004050e0  8bc8                 MOV ECX,EAX
004050e2  85c9                 TEST ECX,ECX
004050e4  7520                 JNZ 0x00405106
004050e6  c705447f40000c000000 MOV dword ptr [0x00407f44],0xc
004050f0  eb87                 JMP 0x00405079
004050f2  3b4510               CMP EAX,dword ptr [EBP + 0x10]
004050f5  7e0f                 JLE 0x00405106
004050f7  c705447f400022000000 MOV dword ptr [0x00407f44],0x22
00405101  e973ffffff           JMP 0x00405079
00405106  8d85f8feffff         LEA EAX,[EBP + 0xfffffef8]
0040510c  50                   PUSH EAX
0040510d  51                   PUSH ECX
0040510e  e87de5ffff           CALL 0x00403690
00405113  59                   POP ECX
00405114  59                   POP ECX
00405115  e961ffffff           JMP 0x0040507b

; ==== FUNCTION FUN_0040511a entry=0040511a sig=undefined4 __cdecl FUN_0040511a(uint param_1)
0040511a  55                   PUSH EBP
0040511b  8bec                 MOV EBP,ESP
0040511d  8b4508               MOV EAX,dword ptr [EBP + 0x8]
00405120  85c0                 TEST EAX,EAX
00405122  7424                 JZ 0x00405148
00405124  80650b00             AND byte ptr [EBP + 0xb],0x0
00405128  0440                 ADD AL,0x40
0040512a  884508               MOV byte ptr [EBP + 0x8],AL
0040512d  8d4508               LEA EAX,[EBP + 0x8]
00405130  50                   PUSH EAX
00405131  c645093a             MOV byte ptr [EBP + 0x9],0x3a
00405135  c6450a5c             MOV byte ptr [EBP + 0xa],0x5c
00405139  ff1520604000         CALL dword ptr [0x00406020]
0040513f  85c0                 TEST EAX,EAX
00405141  740a                 JZ 0x0040514d
00405143  83f801               CMP EAX,0x1
00405146  7405                 JZ 0x0040514d
00405148  6a01                 PUSH 0x1
0040514a  58                   POP EAX
0040514b  5d                   POP EBP
0040514c  c3                   RET
0040514d  33c0                 XOR EAX,EAX
0040514f  5d                   POP EBP
00405150  c3                   RET

; ==== FUNCTION FUN_00405151 entry=00405151 sig=undefined __cdecl FUN_00405151(int param_1, uint * param_2, undefined4 * param_3)
00405151  6a00                 PUSH 0x0
00405153  ff742410             PUSH dword ptr [ESP + 0x10]
00405157  ff742410             PUSH dword ptr [ESP + 0x10]
0040515b  ff742410             PUSH dword ptr [ESP + 0x10]
0040515f  e804000000           CALL 0x00405168
00405164  83c410               ADD ESP,0x10
00405167  c3                   RET

; ==== FUNCTION FUN_00405168 entry=00405168 sig=char * __cdecl FUN_00405168(int param_1, uint * param_2, undefined4 * param_3, char * param_4)
00405168  55                   PUSH EBP
00405169  8bec                 MOV EBP,ESP
0040516b  51                   PUSH ECX
0040516c  51                   PUSH ECX
0040516d  53                   PUSH EBX
0040516e  8b5d0c               MOV EBX,dword ptr [EBP + 0xc]
00405171  56                   PUSH ESI
00405172  57                   PUSH EDI
00405173  6a5c                 PUSH 0x5c
00405175  53                   PUSH EBX
00405176  8bfb                 MOV EDI,EBX
00405178  e83c020000           CALL 0x004053b9
0040517d  6a2f                 PUSH 0x2f
0040517f  53                   PUSH EBX
00405180  8bf0                 MOV ESI,EAX
00405182  e832020000           CALL 0x004053b9
00405187  83c410               ADD ESP,0x10
0040518a  85c0                 TEST EAX,EAX
0040518c  7545                 JNZ 0x004051d3
0040518e  85f6                 TEST ESI,ESI
00405190  754b                 JNZ 0x004051dd
00405192  6a3a                 PUSH 0x3a
00405194  53                   PUSH EBX
00405195  e8ac010000           CALL 0x00405346
0040519a  8bf0                 MOV ESI,EAX
0040519c  59                   POP ECX
0040519d  85f6                 TEST ESI,ESI
0040519f  59                   POP ECX
004051a0  753b                 JNZ 0x004051dd
004051a2  53                   PUSH EBX
004051a3  e8b8deffff           CALL 0x00403060
004051a8  83c003               ADD EAX,0x3
004051ab  50                   PUSH EAX
004051ac  e8cfe5ffff           CALL 0x00403780
004051b1  8bf8                 MOV EDI,EAX
004051b3  59                   POP ECX
004051b4  85ff                 TEST EDI,EDI
004051b6  59                   POP ECX
004051b7  747d                 JZ 0x00405236
004051b9  6814654000           PUSH 0x406514
004051be  57                   PUSH EDI
004051bf  e8cce4ffff           CALL 0x00403690
004051c4  53                   PUSH EBX
004051c5  57                   PUSH EDI
004051c6  e8d5e4ffff           CALL 0x004036a0
004051cb  83c410               ADD ESP,0x10
004051ce  8d7702               LEA ESI,[EDI + 0x2]
004051d1  eb0a                 JMP 0x004051dd
004051d3  85f6                 TEST ESI,ESI
004051d5  7404                 JZ 0x004051db
004051d7  3bc6                 CMP EAX,ESI
004051d9  7602                 JBE 0x004051dd
004051db  8bf0                 MOV ESI,EAX
004051dd  834df8ff             OR dword ptr [EBP + -0x8],0xffffffff
004051e1  6a2e                 PUSH 0x2e
004051e3  56                   PUSH ESI
004051e4  e8d0010000           CALL 0x004053b9
004051e9  59                   POP ECX
004051ea  85c0                 TEST EAX,EAX
004051ec  59                   POP ECX
004051ed  742d                 JZ 0x0040521c
004051ef  6a00                 PUSH 0x0
004051f1  57                   PUSH EDI
004051f2  e80b010000           CALL 0x00405302
004051f7  59                   POP ECX
004051f8  83f8ff               CMP EAX,-0x1
004051fb  59                   POP ECX
004051fc  0f849c000000         JZ 0x0040529e
00405202  ff7514               PUSH dword ptr [EBP + 0x14]
00405205  ff7510               PUSH dword ptr [EBP + 0x10]
00405208  57                   PUSH EDI
00405209  ff7508               PUSH dword ptr [EBP + 0x8]
0040520c  e8a0000000           CALL 0x004052b1
00405211  83c410               ADD ESP,0x10
00405214  8945f8               MOV dword ptr [EBP + -0x8],EAX
00405217  e982000000           JMP 0x0040529e
0040521c  57                   PUSH EDI
0040521d  e83edeffff           CALL 0x00403060
00405222  83c005               ADD EAX,0x5
00405225  50                   PUSH EAX
00405226  e855e5ffff           CALL 0x00403780
0040522b  8bd8                 MOV EBX,EAX
0040522d  59                   POP ECX
0040522e  85db                 TEST EBX,EBX
00405230  59                   POP ECX
00405231  895dfc               MOV dword ptr [EBP + -0x4],EBX
00405234  7505                 JNZ 0x0040523b
00405236  83c8ff               OR EAX,0xffffffff
00405239  eb71                 JMP 0x004052ac
0040523b  57                   PUSH EDI
0040523c  53                   PUSH EBX
0040523d  e84ee4ffff           CALL 0x00403690
00405242  57                   PUSH EDI
00405243  e818deffff           CALL 0x00403060
00405248  8bf0                 MOV ESI,EAX
0040524a  83c40c               ADD ESP,0xc
0040524d  03f3                 ADD ESI,EBX
0040524f  bb9c7a4000           MOV EBX,0x407a9c
00405254  ff33                 PUSH dword ptr [EBX]
00405256  56                   PUSH ESI
00405257  e834e4ffff           CALL 0x00403690
0040525c  6a00                 PUSH 0x0
0040525e  ff75fc               PUSH dword ptr [EBP + -0x4]
00405261  e89c000000           CALL 0x00405302
00405266  83c410               ADD ESP,0x10
00405269  83f8ff               CMP EAX,-0x1
0040526c  750d                 JNZ 0x0040527b
0040526e  83eb04               SUB EBX,0x4
00405271  81fb907a4000         CMP EBX,0x407a90
00405277  7ddb                 JGE 0x00405254
00405279  eb17                 JMP 0x00405292
0040527b  ff7514               PUSH dword ptr [EBP + 0x14]
0040527e  ff7510               PUSH dword ptr [EBP + 0x10]
00405281  ff75fc               PUSH dword ptr [EBP + -0x4]
00405284  ff7508               PUSH dword ptr [EBP + 0x8]
00405287  e825000000           CALL 0x004052b1
0040528c  83c410               ADD ESP,0x10
0040528f  8945f8               MOV dword ptr [EBP + -0x8],EAX
00405292  ff75fc               PUSH dword ptr [EBP + -0x4]
00405295  e8bde3ffff           CALL 0x00403657
0040529a  8b5d0c               MOV EBX,dword ptr [EBP + 0xc]
0040529d  59                   POP ECX
0040529e  3bfb                 CMP EDI,EBX
004052a0  7407                 JZ 0x004052a9
004052a2  57                   PUSH EDI
004052a3  e8afe3ffff           CALL 0x00403657
004052a8  59                   POP ECX
004052a9  8b45f8               MOV EAX,dword ptr [EBP + -0x8]
004052ac  5f                   POP EDI
004052ad  5e                   POP ESI
004052ae  5b                   POP EBX
004052af  c9                   LEAVE
004052b0  c3                   RET

; ==== FUNCTION FUN_004052b1 entry=004052b1 sig=char * __cdecl FUN_004052b1(int param_1, LPCSTR param_2, undefined4 * param_3, char * param_4)
004052b1  55                   PUSH EBP
004052b2  8bec                 MOV EBP,ESP
004052b4  ff750c               PUSH dword ptr [EBP + 0xc]
004052b7  8d4510               LEA EAX,[EBP + 0x10]
004052ba  50                   PUSH EAX
004052bb  8d4514               LEA EAX,[EBP + 0x14]
004052be  50                   PUSH EAX
004052bf  ff7514               PUSH dword ptr [EBP + 0x14]
004052c2  ff7510               PUSH dword ptr [EBP + 0x10]
004052c5  e82e030000           CALL 0x004055f8
004052ca  83c414               ADD ESP,0x14
004052cd  83f8ff               CMP EAX,-0x1
004052d0  7504                 JNZ 0x004052d6
004052d2  0bc0                 OR EAX,EAX
004052d4  5d                   POP EBP
004052d5  c3                   RET
004052d6  56                   PUSH ESI
004052d7  ff7510               PUSH dword ptr [EBP + 0x10]
004052da  ff7514               PUSH dword ptr [EBP + 0x14]
004052dd  ff750c               PUSH dword ptr [EBP + 0xc]
004052e0  ff7508               PUSH dword ptr [EBP + 0x8]
004052e3  e831010000           CALL 0x00405419
004052e8  ff7514               PUSH dword ptr [EBP + 0x14]
004052eb  8bf0                 MOV ESI,EAX
004052ed  e865e3ffff           CALL 0x00403657
004052f2  ff7510               PUSH dword ptr [EBP + 0x10]
004052f5  e85de3ffff           CALL 0x00403657
004052fa  83c418               ADD ESP,0x18
004052fd  8bc6                 MOV EAX,ESI
004052ff  5e                   POP ESI
00405300  5d                   POP EBP
00405301  c3                   RET

; ==== FUNCTION FUN_00405302 entry=00405302 sig=undefined4 __cdecl FUN_00405302(LPCSTR param_1, byte param_2)
00405302  ff742404             PUSH dword ptr [ESP + 0x4]
00405306  ff1528604000         CALL dword ptr [0x00406028]
0040530c  83f8ff               CMP EAX,-0x1
0040530f  7511                 JNZ 0x00405322
00405311  ff15ac604000         CALL dword ptr [0x004060ac]
00405317  50                   PUSH EAX
00405318  e8eaf0ffff           CALL 0x00404407
0040531d  59                   POP ECX
0040531e  83c8ff               OR EAX,0xffffffff
00405321  c3                   RET
00405322  a801                 TEST AL,0x1
00405324  741d                 JZ 0x00405343
00405326  f644240802           TEST byte ptr [ESP + 0x8],0x2
0040532b  7416                 JZ 0x00405343
0040532d  c705447f40000d000000 MOV dword ptr [0x00407f44],0xd
00405337  c705487f400005000000 MOV dword ptr [0x00407f48],0x5
00405341  ebdb                 JMP 0x0040531e
00405343  33c0                 XOR EAX,EAX
00405345  c3                   RET

; ==== FUNCTION FUN_00405346 entry=00405346 sig=byte * __cdecl FUN_00405346(byte * param_1, uint param_2)
00405346  55                   PUSH EBP
00405347  8bec                 MOV EBP,ESP
00405349  833d1c81400000       CMP dword ptr [0x0040811c],0x0
00405350  750f                 JNZ 0x00405361
00405352  ff750c               PUSH dword ptr [EBP + 0xc]
00405355  ff7508               PUSH dword ptr [EBP + 0x8]
00405358  e8b3040000           CALL 0x00405810
0040535d  59                   POP ECX
0040535e  59                   POP ECX
0040535f  5d                   POP EBP
00405360  c3                   RET
00405361  8b4d08               MOV ECX,dword ptr [EBP + 0x8]
00405364  660fb601             MOVZX AX,byte ptr [ECX]
00405368  6685c0               TEST AX,AX
0040536b  743a                 JZ 0x004053a7
0040536d  0fb6d0               MOVZX EDX,AL
00405370  f6822182400004       TEST byte ptr [EDX + 0x408221],0x4
00405377  741a                 JZ 0x00405393
00405379  8a5101               MOV DL,byte ptr [ECX + 0x1]
0040537c  41                   INC ECX
0040537d  84d2                 TEST DL,DL
0040537f  741d                 JZ 0x0040539e
00405381  0fb7c0               MOVZX EAX,AX
00405384  0fb6d2               MOVZX EDX,DL
00405387  c1e008               SHL EAX,0x8
0040538a  0bc2                 OR EAX,EDX
0040538c  39450c               CMP dword ptr [EBP + 0xc],EAX
0040538f  7411                 JZ 0x004053a2
00405391  eb08                 JMP 0x0040539b
00405393  0fb7d0               MOVZX EDX,AX
00405396  39550c               CMP dword ptr [EBP + 0xc],EDX
00405399  740c                 JZ 0x004053a7
0040539b  41                   INC ECX
0040539c  ebc6                 JMP 0x00405364
0040539e  33c0                 XOR EAX,EAX
004053a0  5d                   POP EBP
004053a1  c3                   RET
004053a2  8d41ff               LEA EAX,[ECX + -0x1]
004053a5  5d                   POP EBP
004053a6  c3                   RET
004053a7  0fb7d0               MOVZX EDX,AX
004053aa  8b450c               MOV EAX,dword ptr [EBP + 0xc]
004053ad  2bc2                 SUB EAX,EDX
004053af  f7d8                 NEG EAX
004053b1  1bc0                 SBB EAX,EAX
004053b3  f7d0                 NOT EAX
004053b5  23c1                 AND EAX,ECX
004053b7  5d                   POP EBP
004053b8  c3                   RET

; ==== FUNCTION FUN_004053b9 entry=004053b9 sig=undefined __cdecl FUN_004053b9(byte * param_1, uint param_2)
004053b9  55                   PUSH EBP
004053ba  8bec                 MOV EBP,ESP
004053bc  33c0                 XOR EAX,EAX
004053be  39051c814000         CMP dword ptr [0x0040811c],EAX
004053c4  750f                 JNZ 0x004053d5
004053c6  ff750c               PUSH dword ptr [EBP + 0xc]
004053c9  ff7508               PUSH dword ptr [EBP + 0x8]
004053cc  e8ff040000           CALL 0x004058d0
004053d1  59                   POP ECX
004053d2  59                   POP ECX
004053d3  5d                   POP EBP
004053d4  c3                   RET
004053d5  8b5508               MOV EDX,dword ptr [EBP + 0x8]
004053d8  53                   PUSH EBX
004053d9  56                   PUSH ESI
004053da  8a1a                 MOV BL,byte ptr [EDX]
004053dc  0fb6cb               MOVZX ECX,BL
004053df  0fb6f1               MOVZX ESI,CL
004053e2  f6862182400004       TEST byte ptr [ESI + 0x408221],0x4
004053e9  741e                 JZ 0x00405409
004053eb  8a5a01               MOV BL,byte ptr [EDX + 0x1]
004053ee  42                   INC EDX
004053ef  84db                 TEST BL,BL
004053f1  7412                 JZ 0x00405405
004053f3  0fb6f3               MOVZX ESI,BL
004053f6  c1e108               SHL ECX,0x8
004053f9  0bce                 OR ECX,ESI
004053fb  394d0c               CMP dword ptr [EBP + 0xc],ECX
004053fe  7510                 JNZ 0x00405410
00405400  8d42ff               LEA EAX,[EDX + -0x1]
00405403  eb0b                 JMP 0x00405410
00405405  85c0                 TEST EAX,EAX
00405407  eb03                 JMP 0x0040540c
00405409  394d0c               CMP dword ptr [EBP + 0xc],ECX
0040540c  7502                 JNZ 0x00405410
0040540e  8bc2                 MOV EAX,EDX
00405410  42                   INC EDX
00405411  84db                 TEST BL,BL
00405413  75c5                 JNZ 0x004053da
00405415  5e                   POP ESI
00405416  5b                   POP EBX
00405417  5d                   POP EBP
00405418  c3                   RET

; ==== FUNCTION FUN_00405419 entry=00405419 sig=char * __cdecl FUN_00405419(int param_1, LPCSTR param_2, char * param_3, LPVOID param_4)
00405419  55                   PUSH EBP
0040541a  8bec                 MOV EBP,ESP
0040541c  83ec60               SUB ESP,0x60
0040541f  8b4508               MOV EAX,dword ptr [EBP + 0x8]
00405422  8065ff00             AND byte ptr [EBP + -0x1],0x0
00405426  53                   PUSH EBX
00405427  56                   PUSH ESI
00405428  57                   PUSH EDI
00405429  33ff                 XOR EDI,EDI
0040542b  3bc7                 CMP EAX,EDI
0040542d  897df8               MOV dword ptr [EBP + -0x8],EDI
00405430  7415                 JZ 0x00405447
00405432  83f801               CMP EAX,0x1
00405435  7410                 JZ 0x00405447
00405437  7e30                 JLE 0x00405469
00405439  83f803               CMP EAX,0x3
0040543c  7e09                 JLE 0x00405447
0040543e  83f804               CMP EAX,0x4
00405441  7526                 JNZ 0x00405469
00405443  c645ff01             MOV byte ptr [EBP + -0x1],0x1
00405447  8b4510               MOV EAX,dword ptr [EBP + 0x10]
0040544a  8945f4               MOV dword ptr [EBP + -0xc],EAX
0040544d  8a08                 MOV CL,byte ptr [EAX]
0040544f  84c9                 TEST CL,CL
00405451  742b                 JZ 0x0040547e
00405453  40                   INC EAX
00405454  803800               CMP byte ptr [EAX],0x0
00405457  75fa                 JNZ 0x00405453
00405459  80780100             CMP byte ptr [EAX + 0x1],0x0
0040545d  8d4801               LEA ECX,[EAX + 0x1]
00405460  74eb                 JZ 0x0040544d
00405462  c60020               MOV byte ptr [EAX],0x20
00405465  8bc1                 MOV EAX,ECX
00405467  ebe4                 JMP 0x0040544d
00405469  c705447f400016000000 MOV dword ptr [0x00407f44],0x16
00405473  893d487f4000         MOV dword ptr [0x00407f48],EDI
00405479  e91c010000           JMP 0x0040559a
0040547e  6a44                 PUSH 0x44
00405480  8d45a0               LEA EAX,[EBP + -0x60]
00405483  5e                   POP ESI
00405484  56                   PUSH ESI
00405485  57                   PUSH EDI
00405486  50                   PUSH EAX
00405487  e884f9ffff           CALL 0x00404e10
0040548c  8975a0               MOV dword ptr [EBP + -0x60],ESI
0040548f  8b3560944000         MOV ESI,dword ptr [0x00409460]
00405495  83c40c               ADD ESP,0xc
00405498  3bf7                 CMP ESI,EDI
0040549a  7421                 JZ 0x004054bd
0040549c  8d46ff               LEA EAX,[ESI + -0x1]
0040549f  8bc8                 MOV ECX,EAX
004054a1  8bd0                 MOV EDX,EAX
004054a3  c1f905               SAR ECX,0x5
004054a6  83e21f               AND EDX,0x1f
004054a9  8b0c8d60934000       MOV ECX,dword ptr [ECX*0x4 + 0x409360]
004054b0  807cd10400           CMP byte ptr [ECX + EDX*0x8 + 0x4],0x0
004054b5  7506                 JNZ 0x004054bd
004054b7  4e                   DEC ESI
004054b8  48                   DEC EAX
004054b9  3bf7                 CMP ESI,EDI
004054bb  75e2                 JNZ 0x0040549f
004054bd  8d44b604             LEA EAX,[ESI + ESI*0x4 + 0x4]
004054c1  6a01                 PUSH 0x1
004054c3  668945d2             MOV word ptr [EBP + -0x2e],AX
004054c7  0fb7c0               MOVZX EAX,AX
004054ca  50                   PUSH EAX
004054cb  e855f0ffff           CALL 0x00404525
004054d0  8945d4               MOV dword ptr [EBP + -0x2c],EAX
004054d3  59                   POP ECX
004054d4  8930                 MOV dword ptr [EAX],ESI
004054d6  8b45d4               MOV EAX,dword ptr [EBP + -0x2c]
004054d9  59                   POP ECX
004054da  33db                 XOR EBX,EBX
004054dc  3bf7                 CMP ESI,EDI
004054de  8d4804               LEA ECX,[EAX + 0x4]
004054e1  8d543004             LEA EDX,[EAX + ESI*0x1 + 0x4]
004054e5  7e37                 JLE 0x0040551e
004054e7  8bc3                 MOV EAX,EBX
004054e9  8bfb                 MOV EDI,EBX
004054eb  c1f805               SAR EAX,0x5
004054ee  83e71f               AND EDI,0x1f
004054f1  8b048560934000       MOV EAX,dword ptr [EAX*0x4 + 0x409360]
004054f8  8d3cf8               LEA EDI,[EAX + EDI*0x8]
004054fb  8a4704               MOV AL,byte ptr [EDI + 0x4]
004054fe  a810                 TEST AL,0x10
00405500  7508                 JNZ 0x0040550a
00405502  8801                 MOV byte ptr [ECX],AL
00405504  8b07                 MOV EAX,dword ptr [EDI]
00405506  8902                 MOV dword ptr [EDX],EAX
00405508  eb06                 JMP 0x00405510
0040550a  802100               AND byte ptr [ECX],0x0
0040550d  830aff               OR dword ptr [EDX],0xffffffff
00405510  43                   INC EBX
00405511  41                   INC ECX
00405512  83c204               ADD EDX,0x4
00405515  3bde                 CMP EBX,ESI
00405517  7cce                 JL 0x004054e7
00405519  8b45d4               MOV EAX,dword ptr [EBP + -0x2c]
0040551c  33ff                 XOR EDI,EDI
0040551e  807dff00             CMP byte ptr [EBP + -0x1],0x0
00405522  742d                 JZ 0x00405551
00405524  8d4804               LEA ECX,[EAX + 0x4]
00405527  33d2                 XOR EDX,EDX
00405529  8d443004             LEA EAX,[EAX + ESI*0x1 + 0x4]
0040552d  83fe03               CMP ESI,0x3
00405530  7d04                 JGE 0x00405536
00405532  8bde                 MOV EBX,ESI
00405534  eb03                 JMP 0x00405539
00405536  6a03                 PUSH 0x3
00405538  5b                   POP EBX
00405539  3bd3                 CMP EDX,EBX
0040553b  7d0d                 JGE 0x0040554a
0040553d  802100               AND byte ptr [ECX],0x0
00405540  8308ff               OR dword ptr [EAX],0xffffffff
00405543  42                   INC EDX
00405544  41                   INC ECX
00405545  83c004               ADD EAX,0x4
00405548  ebe3                 JMP 0x0040552d
0040554a  c745f808000000       MOV dword ptr [EBP + -0x8],0x8
00405551  8d45e4               LEA EAX,[EBP + -0x1c]
00405554  893d447f4000         MOV dword ptr [0x00407f44],EDI
0040555a  50                   PUSH EAX
0040555b  8d45a0               LEA EAX,[EBP + -0x60]
0040555e  50                   PUSH EAX
0040555f  57                   PUSH EDI
00405560  ff7514               PUSH dword ptr [EBP + 0x14]
00405563  893d487f4000         MOV dword ptr [0x00407f48],EDI
00405569  ff75f8               PUSH dword ptr [EBP + -0x8]
0040556c  6a01                 PUSH 0x1
0040556e  57                   PUSH EDI
0040556f  57                   PUSH EDI
00405570  ff75f4               PUSH dword ptr [EBP + -0xc]
00405573  ff750c               PUSH dword ptr [EBP + 0xc]
00405576  ff151c604000         CALL dword ptr [0x0040601c]
0040557c  8bf0                 MOV ESI,EAX
0040557e  ff15ac604000         CALL dword ptr [0x004060ac]
00405584  ff75d4               PUSH dword ptr [EBP + -0x2c]
00405587  8bd8                 MOV EBX,EAX
00405589  e8c9e0ffff           CALL 0x00403657
0040558e  3bf7                 CMP ESI,EDI
00405590  59                   POP ECX
00405591  750c                 JNZ 0x0040559f
00405593  53                   PUSH EBX
00405594  e86eeeffff           CALL 0x00404407
00405599  59                   POP ECX
0040559a  83c8ff               OR EAX,0xffffffff
0040559d  eb54                 JMP 0x004055f3
0040559f  837d0802             CMP dword ptr [EBP + 0x8],0x2
004055a3  7506                 JNZ 0x004055ab
004055a5  57                   PUSH EDI
004055a6  e8c5bfffff           CALL 0x00401570
004055ab  397d08               CMP dword ptr [EBP + 0x8],EDI
004055ae  8b352c604000         MOV ESI,dword ptr [0x0040602c]
004055b4  751f                 JNZ 0x004055d5
004055b6  6aff                 PUSH -0x1
004055b8  ff75e4               PUSH dword ptr [EBP + -0x1c]
004055bb  ff1514604000         CALL dword ptr [0x00406014]
004055c1  8d4510               LEA EAX,[EBP + 0x10]
004055c4  50                   PUSH EAX
004055c5  ff75e4               PUSH dword ptr [EBP + -0x1c]
004055c8  ff1518604000         CALL dword ptr [0x00406018]
004055ce  ff75e4               PUSH dword ptr [EBP + -0x1c]
004055d1  ffd6                 CALL ESI
004055d3  eb16                 JMP 0x004055eb
004055d5  837d0804             CMP dword ptr [EBP + 0x8],0x4
004055d9  750a                 JNZ 0x004055e5
004055db  ff75e4               PUSH dword ptr [EBP + -0x1c]
004055de  ffd6                 CALL ESI
004055e0  897d10               MOV dword ptr [EBP + 0x10],EDI
004055e3  eb06                 JMP 0x004055eb
004055e5  8b45e4               MOV EAX,dword ptr [EBP + -0x1c]
004055e8  894510               MOV dword ptr [EBP + 0x10],EAX
004055eb  ff75e8               PUSH dword ptr [EBP + -0x18]
004055ee  ffd6                 CALL ESI
004055f0  8b4510               MOV EAX,dword ptr [EBP + 0x10]
004055f3  5f                   POP EDI
004055f4  5e                   POP ESI
004055f5  5b                   POP EBX
004055f6  c9                   LEAVE
004055f7  c3                   RET

; ==== FUNCTION FUN_004055f8 entry=004055f8 sig=undefined4 __cdecl FUN_004055f8(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4)
004055f8  55                   PUSH EBP
004055f9  8bec                 MOV EBP,ESP
004055fb  53                   PUSH EBX
004055fc  8b5d08               MOV EBX,dword ptr [EBP + 0x8]
004055ff  56                   PUSH ESI
00405600  57                   PUSH EDI
00405601  6a02                 PUSH 0x2
00405603  5e                   POP ESI
00405604  8bfe                 MOV EDI,ESI
00405606  8b03                 MOV EAX,dword ptr [EBX]
00405608  85c0                 TEST EAX,EAX
0040560a  7410                 JZ 0x0040561c
0040560c  50                   PUSH EAX
0040560d  83c304               ADD EBX,0x4
00405610  e84bdaffff           CALL 0x00403060
00405615  59                   POP ECX
00405616  8d7c0701             LEA EDI,[EDI + EAX*0x1 + 0x1]
0040561a  ebea                 JMP 0x00405606
0040561c  57                   PUSH EDI
0040561d  e85ee1ffff           CALL 0x00403780
00405622  59                   POP ECX
00405623  8b4d10               MOV ECX,dword ptr [EBP + 0x10]
00405626  85c0                 TEST EAX,EAX
00405628  8901                 MOV dword ptr [ECX],EAX
0040562a  750b                 JNZ 0x00405637
0040562c  8b4514               MOV EAX,dword ptr [EBP + 0x14]
0040562f  832000               AND dword ptr [EAX],0x0
00405632  e9e2000000           JMP 0x00405719
00405637  8b7d0c               MOV EDI,dword ptr [EBP + 0xc]
0040563a  85ff                 TEST EDI,EDI
0040563c  7416                 JZ 0x00405654
0040563e  8b07                 MOV EAX,dword ptr [EDI]
00405640  85c0                 TEST EAX,EAX
00405642  7437                 JZ 0x0040567b
00405644  50                   PUSH EAX
00405645  83c704               ADD EDI,0x4
00405648  e813daffff           CALL 0x00403060
0040564d  59                   POP ECX
0040564e  8d740601             LEA ESI,[ESI + EAX*0x1 + 0x1]
00405652  ebea                 JMP 0x0040563e
00405654  8b4514               MOV EAX,dword ptr [EBP + 0x14]
00405657  8b5d14               MOV EBX,dword ptr [EBP + 0x14]
0040565a  8b7d14               MOV EDI,dword ptr [EBP + 0x14]
0040565d  832000               AND dword ptr [EAX],0x0
00405660  8b4510               MOV EAX,dword ptr [EBP + 0x10]
00405663  8b30                 MOV ESI,dword ptr [EAX]
00405665  8b4508               MOV EAX,dword ptr [EBP + 0x8]
00405668  894510               MOV dword ptr [EBP + 0x10],EAX
0040566b  8b00                 MOV EAX,dword ptr [EAX]
0040566d  85c0                 TEST EAX,EAX
0040566f  0f85c0000000         JNZ 0x00405735
00405675  46                   INC ESI
00405676  e9d9000000           JMP 0x00405754
0040567b  a1907f4000           MOV EAX,[0x00407f90]
00405680  85c0                 TEST EAX,EAX
00405682  7512                 JNZ 0x00405696
00405684  e8f5cfffff           CALL 0x0040267e
00405689  85c0                 TEST EAX,EAX
0040568b  a3907f4000           MOV [0x00407f90],EAX
00405690  0f8497000000         JZ 0x0040572d
00405696  33db                 XOR EBX,EBX
00405698  3818                 CMP byte ptr [EAX],BL
0040569a  7423                 JZ 0x004056bf
0040569c  8bf8                 MOV EDI,EAX
0040569e  8a0f                 MOV CL,byte ptr [EDI]
004056a0  80f93d               CMP CL,0x3d
004056a3  741a                 JZ 0x004056bf
004056a5  57                   PUSH EDI
004056a6  e8b5d9ffff           CALL 0x00403060
004056ab  8d5c0301             LEA EBX,[EBX + EAX*0x1 + 0x1]
004056af  a1907f4000           MOV EAX,[0x00407f90]
004056b4  59                   POP ECX
004056b5  8a0c18               MOV CL,byte ptr [EAX + EBX*0x1]
004056b8  8d3c18               LEA EDI,[EAX + EBX*0x1]
004056bb  84c9                 TEST CL,CL
004056bd  75e1                 JNZ 0x004056a0
004056bf  8bfb                 MOV EDI,EBX
004056c1  03c3                 ADD EAX,EBX
004056c3  80383d               CMP byte ptr [EAX],0x3d
004056c6  7529                 JNZ 0x004056f1
004056c8  80780100             CMP byte ptr [EAX + 0x1],0x0
004056cc  7423                 JZ 0x004056f1
004056ce  8078023a             CMP byte ptr [EAX + 0x2],0x3a
004056d2  751d                 JNZ 0x004056f1
004056d4  8078033d             CMP byte ptr [EAX + 0x3],0x3d
004056d8  7517                 JNZ 0x004056f1
004056da  83c004               ADD EAX,0x4
004056dd  50                   PUSH EAX
004056de  e87dd9ffff           CALL 0x00403060
004056e3  8d7c0705             LEA EDI,[EDI + EAX*0x1 + 0x5]
004056e7  a1907f4000           MOV EAX,[0x00407f90]
004056ec  59                   POP ECX
004056ed  03c7                 ADD EAX,EDI
004056ef  ebd2                 JMP 0x004056c3
004056f1  8bc7                 MOV EAX,EDI
004056f3  2bc3                 SUB EAX,EBX
004056f5  03c6                 ADD EAX,ESI
004056f7  50                   PUSH EAX
004056f8  e883e0ffff           CALL 0x00403780
004056fd  59                   POP ECX
004056fe  8b4d14               MOV ECX,dword ptr [EBP + 0x14]
00405701  85c0                 TEST EAX,EAX
00405703  8901                 MOV dword ptr [ECX],EAX
00405705  0f8555ffffff         JNZ 0x00405660
0040570b  8b7510               MOV ESI,dword ptr [EBP + 0x10]
0040570e  ff36                 PUSH dword ptr [ESI]
00405710  e842dfffff           CALL 0x00403657
00405715  832600               AND dword ptr [ESI],0x0
00405718  59                   POP ECX
00405719  c705447f40000c000000 MOV dword ptr [0x00407f44],0xc
00405723  c705487f400008000000 MOV dword ptr [0x00407f48],0x8
0040572d  83c8ff               OR EAX,0xffffffff
00405730  e9c2000000           JMP 0x004057f7
00405735  50                   PUSH EAX
00405736  56                   PUSH ESI
00405737  e854dfffff           CALL 0x00403690
0040573c  8b4508               MOV EAX,dword ptr [EBP + 0x8]
0040573f  8b08                 MOV ECX,dword ptr [EAX]
00405741  83c004               ADD EAX,0x4
00405744  51                   PUSH ECX
00405745  894510               MOV dword ptr [EBP + 0x10],EAX
00405748  e813d9ffff           CALL 0x00403060
0040574d  83c40c               ADD ESP,0xc
00405750  8d740601             LEA ESI,[ESI + EAX*0x1 + 0x1]
00405754  8b4510               MOV EAX,dword ptr [EBP + 0x10]
00405757  8b00                 MOV EAX,dword ptr [EAX]
00405759  85c0                 TEST EAX,EAX
0040575b  7423                 JZ 0x00405780
0040575d  50                   PUSH EAX
0040575e  56                   PUSH ESI
0040575f  e82cdfffff           CALL 0x00403690
00405764  8b4510               MOV EAX,dword ptr [EBP + 0x10]
00405767  83451004             ADD dword ptr [EBP + 0x10],0x4
0040576b  8b00                 MOV EAX,dword ptr [EAX]
0040576d  50                   PUSH EAX
0040576e  e8edd8ffff           CALL 0x00403060
00405773  83c40c               ADD ESP,0xc
00405776  03f0                 ADD ESI,EAX
00405778  c60620               MOV byte ptr [ESI],0x20
0040577b  e9f5feffff           JMP 0x00405675
00405780  8b4514               MOV EAX,dword ptr [EBP + 0x14]
00405783  8066ff00             AND byte ptr [ESI + -0x1],0x0
00405787  802600               AND byte ptr [ESI],0x0
0040578a  837d0c00             CMP dword ptr [EBP + 0xc],0x0
0040578e  8b30                 MOV ESI,dword ptr [EAX]
00405790  743e                 JZ 0x004057d0
00405792  8bc7                 MOV EAX,EDI
00405794  2bc3                 SUB EAX,EBX
00405796  50                   PUSH EAX
00405797  a1907f4000           MOV EAX,[0x00407f90]
0040579c  03c3                 ADD EAX,EBX
0040579e  50                   PUSH EAX
0040579f  56                   PUSH ESI
004057a0  e85be0ffff           CALL 0x00403800
004057a5  2bfb                 SUB EDI,EBX
004057a7  83c40c               ADD ESP,0xc
004057aa  03f7                 ADD ESI,EDI
004057ac  8b7d0c               MOV EDI,dword ptr [EBP + 0xc]
004057af  8b07                 MOV EAX,dword ptr [EDI]
004057b1  85c0                 TEST EAX,EAX
004057b3  741b                 JZ 0x004057d0
004057b5  50                   PUSH EAX
004057b6  56                   PUSH ESI
004057b7  e8d4deffff           CALL 0x00403690
004057bc  8b07                 MOV EAX,dword ptr [EDI]
004057be  83c704               ADD EDI,0x4
004057c1  50                   PUSH EAX
004057c2  e899d8ffff           CALL 0x00403060
004057c7  83c40c               ADD ESP,0xc
004057ca  8d740601             LEA ESI,[ESI + EAX*0x1 + 0x1]
004057ce  ebdf                 JMP 0x004057af
004057d0  85f6                 TEST ESI,ESI
004057d2  740e                 JZ 0x004057e2
004057d4  8b4514               MOV EAX,dword ptr [EBP + 0x14]
004057d7  3b30                 CMP ESI,dword ptr [EAX]
004057d9  7504                 JNZ 0x004057df
004057db  802600               AND byte ptr [ESI],0x0
004057de  46                   INC ESI
004057df  802600               AND byte ptr [ESI],0x0
004057e2  ff35907f4000         PUSH dword ptr [0x00407f90]
004057e8  e86adeffff           CALL 0x00403657
004057ed  8325907f400000       AND dword ptr [0x00407f90],0x0
004057f4  59                   POP ECX
004057f5  33c0                 XOR EAX,EAX
004057f7  5f                   POP EDI
004057f8  5e                   POP ESI
004057f9  5b                   POP EBX
004057fa  5d                   POP EBP
004057fb  c3                   RET
; undefined 4 bytes at 004057fc
00405800  8d42ff               LEA EAX,[EDX + -0x1]
00405803  5b                   POP EBX
00405804  c3                   RET

; ==== FUNCTION FUN_00405805 entry=00405805 sig=uint * __stdcall FUN_00405805(uint * param_1, char param_2)
00405805  8da42400000000       LEA ESP,[ESP]
0040580c  8d642400             LEA ESP,[ESP]

; ==== FUNCTION _strchr entry=00405810 sig=char * __cdecl _strchr(char * _Str, int _Val)
00405810  33c0                 XOR EAX,EAX
00405812  8a442408             MOV AL,byte ptr [ESP + 0x8]
00405816  53                   PUSH EBX
00405817  8bd8                 MOV EBX,EAX
00405819  c1e008               SHL EAX,0x8
0040581c  8b542408             MOV EDX,dword ptr [ESP + 0x8]
00405820  f7c203000000         TEST EDX,0x3
00405826  7413                 JZ 0x0040583b
00405828  8a0a                 MOV CL,byte ptr [EDX]
0040582a  42                   INC EDX
0040582b  38d9                 CMP CL,BL
0040582d  74d1                 JZ 0x00405800
0040582f  84c9                 TEST CL,CL
00405831  7451                 JZ 0x00405884
00405833  f7c203000000         TEST EDX,0x3
00405839  75ed                 JNZ 0x00405828
0040583b  0bd8                 OR EBX,EAX
0040583d  57                   PUSH EDI
0040583e  8bc3                 MOV EAX,EBX
00405840  c1e310               SHL EBX,0x10
00405843  56                   PUSH ESI
00405844  0bd8                 OR EBX,EAX
00405846  8b0a                 MOV ECX,dword ptr [EDX]
00405848  bffffefe7e           MOV EDI,0x7efefeff
0040584d  8bc1                 MOV EAX,ECX
0040584f  8bf7                 MOV ESI,EDI
00405851  33cb                 XOR ECX,EBX
00405853  03f0                 ADD ESI,EAX
00405855  03f9                 ADD EDI,ECX
00405857  83f1ff               XOR ECX,0xffffffff
0040585a  83f0ff               XOR EAX,0xffffffff
0040585d  33cf                 XOR ECX,EDI
0040585f  33c6                 XOR EAX,ESI
00405861  83c204               ADD EDX,0x4
00405864  81e100010181         AND ECX,0x81010100
0040586a  751c                 JNZ 0x00405888
0040586c  2500010181           AND EAX,0x81010100
00405871  74d3                 JZ 0x00405846
00405873  2500010101           AND EAX,0x1010100
00405878  7508                 JNZ 0x00405882
0040587a  81e600000080         AND ESI,0x80000000
00405880  75c4                 JNZ 0x00405846
00405882  5e                   POP ESI
00405883  5f                   POP EDI
00405884  5b                   POP EBX
00405885  33c0                 XOR EAX,EAX
00405887  c3                   RET
00405888  8b42fc               MOV EAX,dword ptr [EDX + -0x4]
0040588b  38d8                 CMP AL,BL
0040588d  7436                 JZ 0x004058c5
0040588f  84c0                 TEST AL,AL
00405891  74ef                 JZ 0x00405882
00405893  38dc                 CMP AH,BL
00405895  7427                 JZ 0x004058be
00405897  84e4                 TEST AH,AH
00405899  74e7                 JZ 0x00405882
0040589b  c1e810               SHR EAX,0x10
0040589e  38d8                 CMP AL,BL
004058a0  7415                 JZ 0x004058b7
004058a2  84c0                 TEST AL,AL
004058a4  74dc                 JZ 0x00405882
004058a6  38dc                 CMP AH,BL
004058a8  7406                 JZ 0x004058b0
004058aa  84e4                 TEST AH,AH
004058ac  74d4                 JZ 0x00405882
004058ae  eb96                 JMP 0x00405846
004058b0  5e                   POP ESI
004058b1  5f                   POP EDI
004058b2  8d42ff               LEA EAX,[EDX + -0x1]
004058b5  5b                   POP EBX
004058b6  c3                   RET
004058b7  8d42fe               LEA EAX,[EDX + -0x2]
004058ba  5e                   POP ESI
004058bb  5f                   POP EDI
004058bc  5b                   POP EBX
004058bd  c3                   RET
004058be  8d42fd               LEA EAX,[EDX + -0x3]
004058c1  5e                   POP ESI
004058c2  5f                   POP EDI
004058c3  5b                   POP EBX
004058c4  c3                   RET
004058c5  8d42fc               LEA EAX,[EDX + -0x4]
004058c8  5e                   POP ESI
004058c9  5f                   POP EDI
004058ca  5b                   POP EBX
004058cb  c3                   RET
; undefined 4 bytes at 004058cc

; ==== FUNCTION _strrchr entry=004058d0 sig=char * __cdecl _strrchr(char * _Str, int _Ch)
004058d0  55                   PUSH EBP
004058d1  8bec                 MOV EBP,ESP
004058d3  57                   PUSH EDI
004058d4  8b7d08               MOV EDI,dword ptr [EBP + 0x8]
004058d7  33c0                 XOR EAX,EAX
004058d9  83c9ff               OR ECX,0xffffffff
004058dc  f2ae                 SCASB.REPNE ES:EDI
004058de  41                   INC ECX
004058df  f7d9                 NEG ECX
004058e1  4f                   DEC EDI
004058e2  8a450c               MOV AL,byte ptr [EBP + 0xc]
004058e5  fd                   STD
004058e6  f2ae                 SCASB.REPNE ES:EDI
004058e8  47                   INC EDI
004058e9  3807                 CMP byte ptr [EDI],AL
004058eb  7404                 JZ 0x004058f1
004058ed  33c0                 XOR EAX,EAX
004058ef  eb02                 JMP 0x004058f3
004058f1  8bc7                 MOV EAX,EDI
004058f3  fc                   CLD
004058f4  5f                   POP EDI
004058f5  c9                   LEAVE
004058f6  c3                   RET
; undefined 1801 bytes at 004058f7
00406000  addr 000067c4
; undefined 4 bytes at 00406004
00406008  addr 000068f0
0040600c  addr 0000691c
00406010  addr 0000692c
00406014  addr 00006b0c
00406018  addr 00006af6
0040601c  addr 00006b22
00406020  addr 00006ad0
00406024  addr 00006abc
00406028  addr 00006ae0
0040602c  addr 00006a96
00406030  addr 00006a82
00406034  addr 00006aa4
00406038  addr 00006a5e
0040603c  addr 00006a4e
00406040  addr 00006a70
00406044  addr 00006a28
00406048  addr 00006a18
0040604c  addr 00006a3e
00406050  addr 000069f6
00406054  addr 000067e0
00406058  addr 000067ee
0040605c  addr 00006802
00406060  addr 00006816
00406064  addr 0000682a
00406068  addr 0000683c
0040606c  addr 0000684e
00406070  addr 0000685c
00406074  addr 00006878
00406078  addr 0000688e
0040607c  addr 000068a8
00406080  addr 000068c2
00406084  addr 000068d8
00406088  addr 00006680
0040608c  addr 0000690a
00406090  addr 00006a08
00406094  addr 0000693a
00406098  addr 00006948
0040609c  addr 00006956
004060a0  addr 00006964
004060a4  addr 00006970
004060a8  addr 0000697c
004060ac  addr 00006988
004060b0  addr 00006998
004060b4  addr 000069aa
004060b8  addr 000069b6
004060bc  addr 000069c0
004060c0  addr 000069cc
004060c4  addr 000069d8
004060c8  addr 000069e8
; undefined 4 bytes at 004060cc
004060d0  addr 000066a6
004060d4  addr 000066b4
004060d8  addr 0000678c
004060dc  addr 000067a6
004060e0  addr 00006798
004060e4  addr 0000675e
004060e8  addr 0000677a
004060ec  addr 0000676e
004060f0  addr 00006730
004060f4  addr 00006750
004060f8  addr 00006744
004060fc  addr 000066fc
00406100  addr 0000671c
00406104  addr 0000670a
00406108  addr 000066c8
0040610c  addr 000066ec
00406110  addr 000066dc
; undefined 108 bytes at 00406114
00406180  undefined2 0028h
00406182  unicode u"null)"
; undefined 2 bytes at 0040618e
00406190  undefined1 28h
00406191  ds "null)"
; undefined 1 bytes at 00406197
00406198  ds "runtime error "
; undefined 4 bytes at 004061a8
004061ac  ds "TLOSS error\r\n"
004061bc  ds "SING error\r\n"
004061cc  ds "DOMAIN error\r\n"
004061dc  ds "R6028\r\n- unable to initialize heap\r\n"
00406204  ds "R6027\r\n- not enough space for lowio initialization\r\n"
0040623c  ds "R6026\r\n- not enough space for stdio initialization\r\n"
00406274  ds "R6025\r\n- pure virtual function call\r\n"
0040629c  ds "R6024\r\n- not enough space for _onexit/atexit table\r\n"
004062d4  ds "R6019\r\n- unable to open console device\r\n"
00406300  ds "R6018\r\n- unexpected heap error\r\n"
00406324  ds "R6017\r\n- unexpected multithread lock error\r\n"
00406354  ds "R6016\r\n- not enough space for thread data\r\n"
00406380  ds "\r\nabnormal program termination\r\n"
004063a4  ds "R6009\r\n- not enough space for environment\r\n"
004063d0  ds "R6008\r\n- not enough space for arguments\r\n"
004063fc  ds "R6002\r\n- floating point not loaded\r\n"
00406424  ds "Microsoft Visual C++ Runtime Library"
; undefined 7 bytes at 00406449
00406450  ds "Runtime Error!\n\nProgram: "
; undefined 6 bytes at 0040646a
00406470  ds "<program name unknown>"
; undefined 1 bytes at 00406487
00406488  ds "GetLastActivePopup"
; undefined 1 bytes at 0040649b
0040649c  ds "GetActiveWindow"
004064ac  ds "MessageBoxA"
004064b8  ds "user32.dll"
; undefined 17 bytes at 004064c3
004064d4  addr 00404820
004064d8  addr 00404824
; undefined 4 bytes at 004064dc
004064e0  addr 004048d4
004064e4  addr 004048d8
; undefined 4 bytes at 004064e8
004064ec  addr 00404a58
004064f0  addr 00404a5c
; undefined 36 bytes at 004064f4
00406518  ddw 6570h
0040651c  ddw 0h
00406520  ddw 0h
00406524  ddw 6698h
00406528  ddw 6008h
0040652c  ddw 6638h
00406530  ddw 0h
00406534  ddw 0h
00406538  ddw 67B8h
0040653c  ddw 60D0h
00406540  ddw 6568h
00406544  ddw 0h
00406548  ddw 0h
0040654c  ddw 67D6h
00406550  ddw 6000h
; undefined 20 bytes at 00406554
00406568  ddw 67C4h
; undefined 4 bytes at 0040656c
00406570  ddw 68F0h
00406574  ddw 691Ch
00406578  ddw 692Ch
0040657c  ddw 6B0Ch
00406580  ddw 6AF6h
00406584  ddw 6B22h
00406588  ddw 6AD0h
0040658c  ddw 6ABCh
00406590  ddw 6AE0h
00406594  ddw 6A96h
00406598  ddw 6A82h
0040659c  ddw 6AA4h
004065a0  ddw 6A5Eh
004065a4  ddw 6A4Eh
004065a8  ddw 6A70h
004065ac  ddw 6A28h
004065b0  ddw 6A18h
004065b4  ddw 6A3Eh
004065b8  ddw 69F6h
004065bc  ddw 67E0h
004065c0  ddw 67EEh
004065c4  ddw 6802h
004065c8  ddw 6816h
004065cc  ddw 682Ah
004065d0  ddw 683Ch
004065d4  ddw 684Eh
004065d8  ddw 685Ch
004065dc  ddw 6878h
004065e0  ddw 688Eh
004065e4  ddw 68A8h
004065e8  ddw 68C2h
004065ec  ddw 68D8h
004065f0  ddw 6680h
004065f4  ddw 690Ah
004065f8  ddw 6A08h
004065fc  ddw 693Ah
00406600  ddw 6948h
00406604  ddw 6956h
00406608  ddw 6964h
0040660c  ddw 6970h
00406610  ddw 697Ch
00406614  ddw 6988h
00406618  ddw 6998h
0040661c  ddw 69AAh
00406620  ddw 69B6h
00406624  ddw 69C0h
00406628  ddw 69CCh
0040662c  ddw 69D8h
00406630  ddw 69E8h
; undefined 4 bytes at 00406634
00406638  ddw 66A6h
0040663c  ddw 66B4h
00406640  ddw 678Ch
00406644  ddw 67A6h
00406648  ddw 6798h
0040664c  ddw 675Eh
00406650  ddw 677Ah
00406654  ddw 676Eh
00406658  ddw 6730h
0040665c  ddw 6750h
00406660  ddw 6744h
00406664  ddw 66FCh
00406668  ddw 671Ch
0040666c  ddw 670Ah
00406670  ddw 66C8h
00406674  ddw 66ECh
00406678  ddw 66DCh
; undefined 4 bytes at 0040667c
00406680  dw 134h
00406682  ds "GetPrivateProfileIntA"
00406698  ds "KERNEL32.dll"
; undefined 1 bytes at 004066a5
004066a6  dw 1BEh
004066a8  ds "MessageBoxA"
004066b4  dw 95h
004066b6  ds "DispatchMessageA"
; undefined 1 bytes at 004066c7
004066c8  dw 282h
004066ca  ds "TranslateMessage"
; undefined 1 bytes at 004066db
004066dc  dw 1DCh
004066de  ds "PeekMessageA"
; undefined 1 bytes at 004066eb
004066ec  dw 214h
004066ee  ds "SendMessageA"
; undefined 1 bytes at 004066fb
004066fc  dw 26Ah
004066fe  ds "ShowWindow"
; undefined 1 bytes at 00406709
0040670a  dw 59h
0040670c  ds "CreateWindowExA"
0040671c  dw 146h
0040671e  ds "GetSystemMetrics"
; undefined 1 bytes at 0040672f
00406730  dw 1F3h
00406732  ds "RegisterClassExA"
; undefined 1 bytes at 00406743
00406744  dw 19Eh
00406746  ds "LoadIconA"
00406750  dw 19Ah
00406752  ds "LoadCursorA"
0040675e  dw 8Eh
00406760  ds "DestroyWindow"
0040676e  dw 226h
00406770  ds "SetCursor"
0040677a  dw 84h
0040677c  ds "DefWindowProcA"
; undefined 1 bytes at 0040678b
0040678c  dw BBh
0040678e  ds "EndPaint"
; undefined 1 bytes at 00406797
00406798  dw Ch
0040679a  ds "BeginPaint"
; undefined 1 bytes at 004067a5
004067a6  dw 1E0h
004067a8  ds "PostQuitMessage"
004067b8  ds "USER32.dll"
; undefined 1 bytes at 004067c3
004067c4  dw 15Fh
004067c6  ds "GetStockObject"
; undefined 1 bytes at 004067d5
004067d6  ds "GDI32.dll"
004067e0  dw 7Dh
004067e2  ds "ExitProcess"
004067ee  dw 29Eh
004067f0  ds "TerminateProcess"
; undefined 1 bytes at 00406801
00406802  dw F7h
00406804  ds "GetCurrentProcess"
00406816  dw 126h
00406818  ds "GetModuleHandleA"
; undefined 1 bytes at 00406829
0040682a  dw 150h
0040682c  ds "GetStartupInfoA"
0040683c  dw CAh
0040683e  ds "GetCommandLineA"
0040684e  dw 174h
00406850  ds "GetVersion"
; undefined 1 bytes at 0040685b
0040685c  dw 2ADh
0040685e  ds "UnhandledExceptionFilter"
; undefined 1 bytes at 00406877
00406878  dw 124h
0040687a  ds "GetModuleFileNameA"
; undefined 1 bytes at 0040688d
0040688e  dw B2h
00406890  ds "FreeEnvironmentStringsA"
004068a8  dw B3h
004068aa  ds "FreeEnvironmentStringsW"
004068c2  dw 2D2h
004068c4  ds "WideCharToMultiByte"
004068d8  dw 106h
004068da  ds "GetEnvironmentStrings"
004068f0  dw 108h
004068f2  ds "GetEnvironmentStringsW"
; undefined 1 bytes at 00406909
0040690a  dw 26Dh
0040690c  ds "SetHandleCount"
; undefined 1 bytes at 0040691b
0040691c  dw 152h
0040691e  ds "GetStdHandle"
; undefined 1 bytes at 0040692b
0040692c  dw 115h
0040692e  ds "GetFileType"
0040693a  dw 19Dh
0040693c  ds "HeapDestroy"
00406948  dw 19Bh
0040694a  ds "HeapCreate"
; undefined 1 bytes at 00406955
00406956  dw 2BFh
00406958  ds "VirtualFree"
00406964  dw 19Fh
00406966  ds "HeapFree"
; undefined 1 bytes at 0040696f
00406970  dw 22Fh
00406972  ds "RtlUnwind"
0040697c  dw 2DFh
0040697e  ds "WriteFile"
00406988  dw 11Ah
0040698a  ds "GetLastError"
; undefined 1 bytes at 00406997
00406998  dw 26Ah
0040699a  ds "SetFilePointer"
; undefined 1 bytes at 004069a9
004069aa  dw BFh
004069ac  ds "GetCPInfo"
004069b6  dw B9h
004069b8  ds "GetACP"
; undefined 1 bytes at 004069bf
004069c0  dw 131h
004069c2  ds "GetOEMCP"
; undefined 1 bytes at 004069cb
004069cc  dw 199h
004069ce  ds "HeapAlloc"
004069d8  dw 2BBh
004069da  ds "VirtualAlloc"
; undefined 1 bytes at 004069e7
004069e8  dw 1A2h
004069ea  ds "HeapReAlloc"
004069f6  dw 13Eh
004069f8  ds "GetProcAddress"
; undefined 1 bytes at 00406a07
00406a08  dw 1C2h
00406a0a  ds "LoadLibraryA"
; undefined 1 bytes at 00406a17
00406a18  dw 27Ch
00406a1a  ds "SetStdHandle"
; undefined 1 bytes at 00406a27
00406a28  dw 1E4h
00406a2a  ds "MultiByteToWideChar"
00406a3e  dw 1BFh
00406a40  ds "LCMapStringA"
; undefined 1 bytes at 00406a4d
00406a4e  dw 1C0h
00406a50  ds "LCMapStringW"
; undefined 1 bytes at 00406a5d
00406a5e  dw 153h
00406a60  ds "GetStringTypeA"
; undefined 1 bytes at 00406a6f
00406a70  dw 156h
00406a72  ds "GetStringTypeW"
; undefined 1 bytes at 00406a81
00406a82  dw AAh
00406a84  ds "FlushFileBuffers"
; undefined 1 bytes at 00406a95
00406a96  dw 1Bh
00406a98  ds "CloseHandle"
00406aa4  dw F5h
00406aa6  ds "GetCurrentDirectoryA"
; undefined 1 bytes at 00406abb
00406abc  dw 116h
00406abe  ds "GetFullPathNameA"
; undefined 1 bytes at 00406acf
00406ad0  dw 104h
00406ad2  ds "GetDriveTypeA"
00406ae0  dw 10Dh
00406ae2  ds "GetFileAttributesA"
; undefined 1 bytes at 00406af5
00406af6  dw 10Bh
00406af8  ds "GetExitCodeProcess"
; undefined 1 bytes at 00406b0b
00406b0c  dw 2CEh
00406b0e  ds "WaitForSingleObject"
00406b22  dw 44h
00406b24  ds "CreateProcessA"
; undefined 1241 bytes at 00406b33
0040700c  addr 00402fa5
00407010  addr 0040363b
; undefined 28 bytes at 00407014
00407030  undefined1 5Ch
00407031  undefined1 00h
; undefined 2 bytes at 00407032
00407034  ds "MOTOR"
; undefined 2 bytes at 0040703a
0040703c  ds "%s (%d) No value specified for menu exit!\nFilename:%s, header:%s, field:%s"
; undefined 1 bytes at 00407087
00407088  ds "C:\\Work\\Motor\\main.cpp"
; undefined 1 bytes at 0040709f
004070a0  ds "General"
004070a8  ds "ExitCode"
; undefined 3 bytes at 004070b1
004070b4  ds "Menu.ini"
; undefined 3 bytes at 004070bd
004070c0  ds "Not enough memory is available to execute new process"
; undefined 2 bytes at 004070f6
004070f8  ds "Specified file is not executable or has invalid executable-file format"
; undefined 1 bytes at 0040713f
00407140  ds "File or path is not found"
; undefined 2 bytes at 0040715a
0040715c  ds "mode argument is invalid"
; undefined 3 bytes at 00407175
00407178  ds "Argument list exceeds 1024 bytes"
; undefined 3 bytes at 00407199
0040719c  ds "/Default"
; undefined 3 bytes at 004071a5
004071a8  ds "spel.dat"
; undefined 3 bytes at 004071b1
004071b4  ds "menu.exe"
; undefined 3 bytes at 004071bd
004071c0  ds "/FirstTime"
; undefined 1 bytes at 004071cb
004071cc  ds "WinMain(): RegisterClass() failed"
; undefined 2 bytes at 004071ee
004071f0  ds "Err! -7 CCWINMAP"
; undefined 15 bytes at 00407201
00407210  addr 00401570
00407214  undefined4 00000002h
00407218  addr 00406190
0040721c  addr 00406180
00407220  undefined4 C0000005h
; undefined 8 bytes at 00407224
0040722c  undefined4 C000001Dh
; undefined 8 bytes at 00407230
00407238  undefined4 C0000096h
; undefined 16 bytes at 0040723c
0040724c  undefined4 00000000h
; undefined 8 bytes at 00407250
00407258  undefined4 00000000h
; undefined 60 bytes at 0040725c
00407298  undefined4 00000003h
0040729c  undefined4 00000007h
004072a0  undefined4 0000000Ah
004072a4  undefined4 0000008Ch
; undefined 4 bytes at 004072a8
004072ac  undefined1 00h
; undefined 11 bytes at 004072ad
004072b8  undefined4 00000000h
004072bc  undefined4 00000000h
004072c0  undefined4 00000000h
; undefined 4 bytes at 004072c4
004072c8  undefined4 00000002h
; undefined 4 bytes at 004072cc
004072d0  undefined4 00000008h
; undefined 4 bytes at 004072d4
004072d8  undefined4 00000009h
004072dc  addr 004063a4
; undefined 120 bytes at 004072e0
00407358  addr 00408340
; undefined 12 bytes at 0040735c
00407368  undefined4 00000000h
; undefined 28 bytes at 0040736c
00407388  undefined4 00000001h
; undefined 596 bytes at 0040738c
004075e0  addr 00404707
004075e4  addr 00404707
004075e8  addr 00404707
004075ec  addr 00404707
004075f0  addr 00404707
004075f4  addr 00404707
004075f8  addr 00407602
004075fc  addr 00407602
; undefined 536 bytes at 00407600
00407818  undefined4 000003A4h
; undefined 44 bytes at 0040781c
00407848  undefined4 000003A8h
0040784c  undefined4 A3DAA3C1h
00407850  undefined4 00000020h
00407854  undefined4 00000000h
00407858  undefined1 00h
00407859  undefined1 00h
0040785a  undefined1 00h
; undefined 5 bytes at 0040785b
00407860  undefined1 00h
00407861  undefined1 00h
00407862  undefined1 00h
00407863  undefined1 00h
; undefined 172 bytes at 00407864
00407910  undefined4 000003F8h
; undefined 4 bytes at 00407914
00407918  undefined4 00000001h
; undefined 4 bytes at 0040791c
00407920  undefined4 00000002h
00407924  undefined4 00000002h
; undefined 344 bytes at 00407928
00407a80  undefined4 00000001h
; undefined 12 bytes at 00407a84
00407a90  addr 0040650c
00407a94  addr 00406504
00407a98  addr 004064fc
00407a9c  addr 004064f4
; undefined 16 bytes at 00407aa0
00407ab0  undefined4 00000000h
; undefined 860 bytes at 00407ab4
00407e10  undefined4 00000000h
00407e14  undefined1 00h
00407e15  undefined1 00h
; undefined 298 bytes at 00407e16
00407f40  undefined1 00h
00407f41  undefined1 00h
; undefined 2 bytes at 00407f42
00407f44  undefined4 00000000h
; undefined 60 bytes at 00407f48
00407f84  undefined1 00h
; undefined 7 bytes at 00407f85
00407f8c  undefined4 00000000h
00407f90  undefined4 00000000h
; undefined 4 bytes at 00407f94
00407f98  undefined4 00000000h
00407f9c  undefined4 00000000h
; undefined 260 bytes at 00407fa0
004080a4  undefined4 00000000h
004080a8  undefined4 00000000h
; undefined 4 bytes at 004080ac
004080b0  undefined4 00000000h
004080b4  undefined4 00000000h
004080b8  undefined4 00000000h
004080bc  undefined4 00000000h
; undefined 8 bytes at 004080c0
004080c8  undefined4 00000000h
; undefined 12 bytes at 004080cc
004080d8  undefined4 00000000h
; undefined 4 bytes at 004080dc
004080e0  undefined4 00000000h
004080e4  undefined4 00000000h
004080e8  undefined4 00000000h
004080ec  undefined4 00000000h
004080f0  undefined4 00000000h
004080f4  undefined4 00000000h
004080f8  undefined4 00000000h
004080fc  undefined4 00000000h
00408100  undefined4 00000000h
00408104  undefined4 00000000h
00408108  undefined4 00000000h
; undefined 4 bytes at 0040810c
00408110  undefined4 00000000h
00408114  undefined4 00000000h
00408118  undefined4 00000000h
0040811c  undefined4 00000000h
00408120  undefined1 00h
00408121  undefined1 00h
; undefined 254 bytes at 00408122
00408220  undefined4 00000000h
00408224  undefined1 00h
; undefined 255 bytes at 00408225
00408324  undefined4 00000000h
00408328  undefined4 00000000h
; undefined 4116 bytes at 0040832c
00409340  undefined4 00000000h
00409344  undefined4 00000000h
; undefined 24 bytes at 00409348
00409360  undefined4 00000000h
00409364  undefined4 00000000h
; undefined 248 bytes at 00409368
00409460  undefined4 00000000h
00409464  undefined4 00000000h
; undefined 4 bytes at 00409468
0040946c  undefined4 00000000h
00409470  undefined4 00000000h
00409474  undefined4 00000000h
00409478  undefined4 00000000h
0040a000  IMAGE_RESOURCE_DIRECTORY 
0040a010  IMAGE_RESOURCE_DIRECTORY_ENTRY 
0040a018  IMAGE_RESOURCE_DIRECTORY_ENTRY 
0040a020  IMAGE_RESOURCE_DIRECTORY 
0040a030  IMAGE_RESOURCE_DIRECTORY_ENTRY 
0040a038  IMAGE_RESOURCE_DIRECTORY 
0040a048  IMAGE_RESOURCE_DIRECTORY_ENTRY 
0040a050  IMAGE_RESOURCE_DIRECTORY 
0040a060  IMAGE_RESOURCE_DIRECTORY_ENTRY 
0040a068  IMAGE_RESOURCE_DIRECTORY 
0040a078  IMAGE_RESOURCE_DIRECTORY_ENTRY 
0040a080  IMAGE_RESOURCE_DATA_ENTRY 
0040a090  IMAGE_RESOURCE_DATA_ENTRY 
Rsrc_Icon_1_413:
0040a0a0  IconRes <Icon-Image>
Rsrc_GroupIcon_65_413:
0040a948  GroupIconRes <GroupIcon-Resource>
; undefined 1700 bytes at 0040a95c
ExceptionList:
ffdff000  void * 00000000
StackBase:
ffdff004  void * 00000000
StackLimit:
ffdff008  void * 00000000
SubSystemTib:
ffdff00c  void * 00000000
FiberData:
ffdff010  void * 00000000
ArbitraryUserPointer:
ffdff014  void * 00000000
Self:
ffdff018  void * ffdff000
EnvironmentPointer:
ffdff01c  void * 00000000
ClientId:
ffdff020  CLIENT_ID 
ActiveRpcHandle:
ffdff028  void * 00000000
ThreadLocalStoragePointer:
ffdff02c  void * 00000000
ProcessEnvironmentBlock:
ffdff030  void * 00000000
LastErrorValue:
ffdff034  ddw 0h
CountOfOwnedCriticalSections:
ffdff038  ddw 0h
CsrClientThread:
ffdff03c  void * 00000000
Win32ThreadInfo:
ffdff040  void * 00000000
User32Reserved:
ffdff044  ddw[26] 
UserReserved:
ffdff0ac  ddw[5] 
WOW32Reserved:
ffdff0c0  void * 00000000
CurrentLocale:
ffdff0c4  ddw 0h
FpSoftwareStatusRegister:
ffdff0c8  ddw 0h
SystemReserved1:
ffdff0cc  void *[54] 
ExceptionCode:
ffdff1a4  ddw 0h
ActivationContextStackPointer:
ffdff1a8  void * 00000000
SpareBytes:
ffdff1ac  uchar[36] ""
TxFsContext:
ffdff1d0  ddw 0h
GdiTebBatch:
ffdff1d4  ddw 0h
; undefined 1244 bytes at ffdff1d8
RealClientId:
ffdff6b4  CLIENT_ID 
GdiCachedProcessHandle:
ffdff6bc  void * 00000000
GdiClientPID:
ffdff6c0  ddw 0h
GdiCLientTID:
ffdff6c4  ddw 0h
GdiThreadLocalInfo:
ffdff6c8  void * 00000000
Win32ClientInfo:
ffdff6cc  void *[62] 
glDispatchTable:
ffdff7c4  void *[233] 
glReserved1:
ffdffb68  void *[29] 
glReserved2:
ffdffbdc  void * 00000000
glSectionInfo:
ffdffbe0  void * 00000000
glSection:
ffdffbe4  void * 00000000
glTable:
ffdffbe8  void * 00000000
glCurrentRC:
ffdffbec  void * 00000000
glContext:
ffdffbf0  void * 00000000
LastStatusValue:
ffdffbf4  ddw 0h
; undefined 8 bytes at ffdffbf8
StaticUnicodeBuffer:
ffdffc00  wchar16[261] u""
; undefined 2 bytes at ffdffe0a
DeallocationStack:
ffdffe0c  void * 00000000
TlsSlots:
ffdffe10  void *[64] 
TlsLinks.Flink:
ffdfff10  void * 00000000
TlsLinks.Blink:
ffdfff14  void * 00000000
Vdm:
ffdfff18  void * 00000000
ReservedForNtRpc:
ffdfff1c  void * 00000000
DbgSsReserved:
ffdfff20  void *[2] 
HardErrorMode:
ffdfff28  ddw 0h
Instrumentation:
ffdfff2c  void *[9] 
ActivityId:
ffdfff50  GUID 00000000-0000-0000-0000-000000000000
SubProcessTag:
ffdfff60  void * 00000000
EtwLocalData:
ffdfff64  void * 00000000
EtwTraceData:
ffdfff68  void * 00000000
WinSockData:
ffdfff6c  void * 00000000
GdiBatchCount:
ffdfff70  ddw 0h
IdealProcessorValue:
ffdfff74  ddw 0h
GuaranteedStackBytes:
ffdfff78  ddw 0h
ReservedForPerf:
ffdfff7c  void * 00000000
ReservedForOle:
ffdfff80  void * 00000000
WaitingOnLoaderLock:
ffdfff84  ddw 0h
SavedPriorityState:
ffdfff88  void * 00000000
SoftPatchPtr1:
ffdfff8c  void * 00000000
ThreadPoolData:
ffdfff90  void * 00000000
TlsExpansionSlots:
ffdfff94  void * 00000000
MuiGeneration:
ffdfff98  ddw 0h
IsImpersonating:
ffdfff9c  ddw 0h
NlsCache:
ffdfffa0  void * 00000000
pShimData:
ffdfffa4  void * 00000000
HeapVirtualAffinity:
ffdfffa8  ddw 0h
CurrentTransactionHandle:
ffdfffac  void * 00000000
ActiveFrame:
ffdfffb0  void * 00000000
FlsData:
ffdfffb4  void * 00000000
PreferredLanguages:
ffdfffb8  void * 00000000
UserPrefLanguages:
ffdfffbc  void * 00000000
MergedPrefLanguages:
ffdfffc0  void * 00000000
MuiImpersonation:
ffdfffc4  ddw 0h
CrossTebFlags:
ffdfffc8  ushort 0h
SameTebFlags:
ffdfffca  ushort 0h
TxnScopeEnterCallback:
ffdfffcc  void * 00000000
TxnScopeExitCallback:
ffdfffd0  void * 00000000
TxnScopeContext:
ffdfffd4  void * 00000000
LockCount:
ffdfffd8  ddw 0h
; undefined 4 bytes at ffdfffdc
ResourceRetValue:
ffdfffe0  void * 00000000
; undefined 28 bytes at ffdfffe4
