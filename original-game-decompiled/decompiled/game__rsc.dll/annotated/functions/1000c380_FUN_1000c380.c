
/* ==== FUN_1000c380 @ 1000c380 ==== 
 * signature: undefined4 __cdecl FUN_1000c380(UINT param_1)
 * body: 1000c380-1000c6c3
 */

undefined4 __cdecl FUN_1000c380(UINT param_1)

{
  UINT CodePage;
  undefined4 uVar1;
  BOOL BVar2;
  BYTE *local_2c;
  uint local_28;
  _cpinfo local_24;
  uint local_10;
  byte *local_c;
  uint local_8;
  
  FUN_100073f0(0x19);
  CodePage = getSystemCP(param_1);
  if (CodePage == DAT_100317c8) {
    FUN_10007490(0x19);
    uVar1 = 0;
  }
  else if (CodePage == 0) {
    setSBCS();
    FUN_1000c830();
    FUN_10007490(0x19);
    uVar1 = 0;
  }
  else {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      if (*(UINT *)(&DAT_100302b0 + local_8 * 0x30) == CodePage) {
        for (local_28 = 0; local_28 < 0x101; local_28 = local_28 + 1) {
          (&DAT_10031960)[local_28] = 0;
        }
        for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
          for (local_c = &DAT_100302c0 + local_10 * 8 + local_8 * 0x30;
              (*local_c != 0 && (local_c[1] != 0)); local_c = local_c + 2) {
            for (local_28 = (uint)*local_c; local_28 <= local_c[1]; local_28 = local_28 + 1) {
              (&DAT_10031961)[local_28] = (&DAT_10031961)[local_28] | (&DAT_100302a8)[local_10];
            }
          }
        }
        DAT_1003184c = 1;
        DAT_100317c8 = CodePage;
        DAT_10031a64 = FUN_1000c730(CodePage);
        for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
          *(undefined2 *)(&DAT_10031840 + local_10 * 2) =
               *(undefined2 *)(&DAT_100302b4 + local_10 * 2 + local_8 * 0x30);
        }
        FUN_1000c830();
        FUN_10007490(0x19);
        return 0;
      }
    }
    BVar2 = GetCPInfo(CodePage,&local_24);
    if (BVar2 == 1) {
      for (local_28 = 0; local_28 < 0x101; local_28 = local_28 + 1) {
        (&DAT_10031960)[local_28] = 0;
      }
      DAT_10031a64 = 0;
      if (local_24.MaxCharSize < 2) {
        DAT_1003184c = 0;
        DAT_100317c8 = CodePage;
      }
      else {
        DAT_100317c8 = CodePage;
        for (local_2c = local_24.LeadByte; (*local_2c != 0 && (local_2c[1] != 0));
            local_2c = local_2c + 2) {
          for (local_28 = (uint)*local_2c; local_28 <= local_2c[1]; local_28 = local_28 + 1) {
            (&DAT_10031961)[local_28] = (&DAT_10031961)[local_28] | 4;
          }
        }
        for (local_28 = 1; local_28 < 0xff; local_28 = local_28 + 1) {
          (&DAT_10031961)[local_28] = (&DAT_10031961)[local_28] | 8;
        }
        DAT_10031a64 = FUN_1000c730(DAT_100317c8);
        DAT_1003184c = 1;
      }
      for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
        *(undefined2 *)(&DAT_10031840 + local_10 * 2) = 0;
      }
      FUN_1000c830();
      FUN_10007490(0x19);
      uVar1 = 0;
    }
    else if (DAT_10031628 == 0) {
      FUN_10007490(0x19);
      uVar1 = 0xffffffff;
    }
    else {
      setSBCS();
      FUN_1000c830();
      FUN_10007490(0x19);
      uVar1 = 0;
    }
  }
  return uVar1;
}


