
/* ==== FUN_100108a0 @ 100108a0 ==== 
 * signature: undefined4 __stdcall FUN_100108a0(void)
 * body: 100108a0-10010c3f
 */

undefined4 FUN_100108a0(void)

{
  int iVar1;
  BOOL BVar2;
  undefined4 uVar3;
  undefined2 *local_34;
  LPCSTR local_30;
  LPCWSTR local_2c;
  LPCWSTR local_28;
  uint local_24;
  undefined2 *local_20;
  BYTE *local_1c;
  _cpinfo local_18;
  
  local_30 = (LPCSTR)0x0;
  local_2c = (LPCWSTR)0x0;
  if (DAT_1003163c == 0) {
    PTR_DAT_10030008 = &DAT_10030012;
    PTR_DAT_1003000c = &DAT_10030012;
    FUN_100041a0(DAT_10031678,2);
    FUN_100041a0(DAT_1003167c,2);
    DAT_10031678 = (void *)0x0;
    DAT_1003167c = (void *)0x0;
    uVar3 = 0;
  }
  else {
    if ((DAT_1003164c != 0) ||
       (iVar1 = FUN_10012fb0(0,(uint)DAT_1003168c,0x1004,(int *)&DAT_1003164c), iVar1 == 0)) {
      local_34 = (undefined2 *)FUN_10003710((void *)0x202,2,0x1002d0a0,0x5c);
      local_20 = (undefined2 *)FUN_10003710((void *)0x202,2,0x1002d0a0,0x5e);
      local_30 = (LPCSTR)FUN_10003710((void *)0x101,2,0x1002d0a0,0x60);
      local_2c = (LPCWSTR)FUN_10003710((void *)0x202,2,0x1002d0a0,0x62);
      if ((local_34 != (undefined2 *)0x0) &&
         (((local_20 != (undefined2 *)0x0 && (local_30 != (LPCSTR)0x0)) &&
          (local_2c != (LPCWSTR)0x0)))) {
        local_1c = (BYTE *)local_30;
        for (local_24 = 0; (int)local_24 < 0x100; local_24 = local_24 + 1) {
          *local_1c = (CHAR)local_24;
          local_1c = local_1c + 1;
        }
        BVar2 = GetCPInfo(DAT_1003164c,&local_18);
        if ((BVar2 != 0) && (local_18.MaxCharSize < 3)) {
          DAT_10030214 = local_18.MaxCharSize & 0xffff;
          if (1 < DAT_10030214) {
            for (local_1c = local_18.LeadByte; (*local_1c != 0 && (local_1c[1] != 0));
                local_1c = local_1c + 2) {
              for (local_24 = (uint)*local_1c; (int)local_24 <= (int)(uint)local_1c[1];
                  local_24 = local_24 + 1) {
                local_30[local_24] = '\0';
              }
            }
          }
          BVar2 = FUN_1000e0e0(1,local_30,0x100,local_34 + 1,0,0,0);
          if (BVar2 != 0) {
            *local_34 = 0;
            local_28 = local_2c;
            for (local_24 = 0; (int)local_24 < 0x100; local_24 = local_24 + 1) {
              *local_28 = (WCHAR)local_24;
              local_28 = local_28 + 1;
            }
            BVar2 = FUN_10013250(1,local_2c,0x100,local_20 + 1,0,0);
            if (BVar2 != 0) {
              *local_20 = 0;
              if (1 < (int)DAT_10030214) {
                for (local_1c = local_18.LeadByte; (*local_1c != 0 && (local_1c[1] != 0));
                    local_1c = local_1c + 2) {
                  for (local_24 = (uint)*local_1c; (int)local_24 <= (int)(uint)local_1c[1];
                      local_24 = local_24 + 1) {
                    local_34[local_24 + 1] = 0x8000;
                  }
                }
              }
              PTR_DAT_10030008 = (undefined *)(local_34 + 1);
              PTR_DAT_1003000c = (undefined *)(local_20 + 1);
              if (DAT_10031678 != (void *)0x0) {
                FUN_100041a0(DAT_10031678,2);
              }
              DAT_10031678 = local_34;
              if (DAT_1003167c != (void *)0x0) {
                FUN_100041a0(DAT_1003167c,2);
              }
              DAT_1003167c = local_20;
              FUN_100041a0(local_30,2);
              FUN_100041a0(local_2c,2);
              return 0;
            }
          }
        }
      }
    }
    FUN_100041a0(local_34,2);
    FUN_100041a0(local_20,2);
    FUN_100041a0(local_30,2);
    FUN_100041a0(local_2c,2);
    uVar3 = 1;
  }
  return uVar3;
}


