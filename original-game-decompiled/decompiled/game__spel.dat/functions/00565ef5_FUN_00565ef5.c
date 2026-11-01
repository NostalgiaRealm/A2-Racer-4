
/* ==== FUN_00565ef5 @ 00565ef5 ==== 
 * signature: uint __cdecl FUN_00565ef5(LPCSTR param_1, uint param_2, uint param_3, uint param_4)
 * body: 00565ef5-005661ad
 */

uint __cdecl FUN_00565ef5(LPCSTR param_1,uint param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  HANDLE hFile;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  _SECURITY_ATTRIBUTES local_20;
  DWORD local_14;
  DWORD local_10;
  DWORD local_c;
  byte local_5;
  
  bVar7 = (param_2 & 0x80) == 0;
  local_20.nLength = 0xc;
  local_20.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar7) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  local_20.bInheritHandle = (BOOL)bVar7;
  if (((param_2 & 0x8000) == 0) && (((param_2 & 0x4000) != 0 || (DAT_0074e040 != 0x8000)))) {
    local_5 = local_5 | 0x80;
  }
  uVar2 = param_2 & 3;
  if (uVar2 == 0) {
    local_10 = 0x80000000;
  }
  else if (uVar2 == 1) {
    local_10 = 0x40000000;
  }
  else {
    if (uVar2 != 2) {
      DAT_0074dc60 = 0x16;
      DAT_0074dc64 = 0;
      return 0xffffffff;
    }
    local_10 = 0xc0000000;
  }
  if (param_3 == 0x10) {
    local_14 = 0;
  }
  else if (param_3 == 0x20) {
    local_14 = 1;
  }
  else if (param_3 == 0x30) {
    local_14 = 2;
  }
  else {
    if (param_3 != 0x40) {
      DAT_0074dc60 = 0x16;
      DAT_0074dc64 = 0;
      return 0xffffffff;
    }
    local_14 = 3;
  }
  uVar2 = param_2 & 0x700;
  if (uVar2 < 0x401) {
    if ((uVar2 == 0x400) || (uVar2 == 0)) {
      local_c = 3;
    }
    else if (uVar2 == 0x100) {
      local_c = 4;
    }
    else {
      if (uVar2 == 0x200) goto LAB_00566013;
      if (uVar2 != 0x300) {
        DAT_0074dc60 = 0x16;
        DAT_0074dc64 = 0;
        return 0xffffffff;
      }
      local_c = 2;
    }
  }
  else {
    if (uVar2 != 0x500) {
      if (uVar2 == 0x600) {
LAB_00566013:
        local_c = 5;
        goto LAB_00566023;
      }
      if (uVar2 != 0x700) {
        DAT_0074dc60 = 0x16;
        DAT_0074dc64 = 0;
        return 0xffffffff;
      }
    }
    local_c = 1;
  }
LAB_00566023:
  uVar2 = 0x80;
  if (((param_2 & 0x100) != 0) && ((~DAT_0074dc68 & param_4 & 0x80) == 0)) {
    uVar2 = 1;
  }
  if ((param_2 & 0x40) != 0) {
    uVar2 = uVar2 | 0x4000000;
    local_10 = CONCAT13(local_10._3_1_,0x10000);
  }
  if ((param_2 & 0x1000) != 0) {
    uVar2 = uVar2 | 0x100;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      uVar2 = uVar2 | 0x10000000;
    }
  }
  else {
    uVar2 = uVar2 | 0x8000000;
  }
  uVar3 = FUN_0055a0f7();
  if (uVar3 == 0xffffffff) {
    DAT_0074dc64 = 0;
    DAT_0074dc60 = 0x18;
  }
  else {
    hFile = CreateFileA(param_1,local_10,local_14,&local_20,local_c,uVar2,(HANDLE)0x0);
    if (hFile != (HANDLE)0xffffffff) {
      DVar4 = GetFileType(hFile);
      if (DVar4 != 0) {
        if (DVar4 == 2) {
          local_5 = local_5 | 0x40;
        }
        else if (DVar4 == 3) {
          local_5 = local_5 | 8;
        }
        FUN_0055a18c(uVar3,hFile);
        iVar6 = (uVar3 & 0x1f) * 8;
        param_1._3_1_ = local_5 & 0x48;
        *(byte *)((&DAT_007500a0)[(int)uVar3 >> 5] + 4 + iVar6) = local_5 | 1;
        if ((((local_5 & 0x48) == 0) && ((local_5 & 0x80) != 0)) && ((param_2 & 2) != 0)) {
          local_14 = FUN_00562b76(uVar3,-1,2);
          if (local_14 == 0xffffffff) {
            if (DAT_0074dc64 != 0x83) {
LAB_00566184:
              FUN_0055ef30(uVar3);
              return 0xffffffff;
            }
          }
          else {
            param_3 = param_3 & 0xffffff;
            iVar5 = FUN_0055fc3a(uVar3,(char *)((int)&param_3 + 3),(char *)0x1);
            if ((((iVar5 == 0) && (param_3._3_1_ == '\x1a')) &&
                (iVar5 = FUN_00568263(uVar3,local_14), iVar5 == -1)) ||
               (DVar4 = FUN_00562b76(uVar3,0,0), DVar4 == 0xffffffff)) goto LAB_00566184;
          }
        }
        if (param_1._3_1_ != 0) {
          return uVar3;
        }
        if ((param_2 & 8) != 0) {
          pbVar1 = (byte *)((&DAT_007500a0)[(int)uVar3 >> 5] + 4 + iVar6);
          *pbVar1 = *pbVar1 | 0x20;
          return uVar3;
        }
        return uVar3;
      }
      CloseHandle(hFile);
    }
    DVar4 = GetLastError();
    FUN_00560c26(DVar4);
  }
  return 0xffffffff;
}


