
/* ==== FUN_0043dba0 @ 0043dba0 ==== 
 * signature: undefined __stdcall FUN_0043dba0(void)
 * body: 0043dba0-0043dc8d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043dba0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  DAT_006c4130 = 0xbfc00000;
  _DAT_006c4140 = 0x323232;
  _DAT_006c4160 = 0x323232;
  _DAT_006c4180 = 0x323232;
  _DAT_006c41a0 = 0x323232;
  DAT_006c4134 = 0xbfc00000;
  _DAT_006c4154 = 0x3fc00000;
  _DAT_006c4174 = 0x3fc00000;
  _DAT_006c4150 = 0xbfc00000;
  DAT_006c4110 = 0;
  _DAT_006c4170 = 0x3fc00000;
  _DAT_006c4190 = 0x3fc00000;
  DAT_006c4114 = 0;
  _DAT_006c4118 = 0;
  DAT_006c4120 = 0x80aaaaaa;
  _DAT_006c4124 = 0;
  _DAT_006c4138 = 0;
  _DAT_006c4144 = 0;
  _DAT_006c4158 = 0;
  _DAT_006c4164 = 0;
  _DAT_006c4178 = 0;
  _DAT_006c4184 = 0;
  _DAT_006c4194 = 0xbfc00000;
  _DAT_006c4198 = 0;
  _DAT_006c41a4 = 0;
  puVar2 = &DAT_006c4130;
  puVar3 = &DAT_006c41b0;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


