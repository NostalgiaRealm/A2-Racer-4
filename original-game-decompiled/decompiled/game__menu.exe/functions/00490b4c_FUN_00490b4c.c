
/* ==== FUN_00490b4c @ 00490b4c ==== 
 * signature: undefined __register FUN_00490b4c(int * param_1)
 * body: 00490b4c-00490ddc
 */

void FUN_00490b4c(int *param_1)

{
  uint uVar1;
  LPCSTR pCVar2;
  LSTATUS LVar3;
  byte bVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  DWORD DVar6;
  REGSAM RVar7;
  HKEY *ppHVar8;
  undefined4 uStack_440;
  code *pcStack_43c;
  code *pcStack_438;
  int local_430;
  int local_42c;
  undefined *local_428;
  int local_424;
  DWORD local_420;
  DWORD local_41c;
  HKEY local_418;
  int *local_414;
  HKEY local_410;
  int local_40c;
  BYTE local_405 [1025];
  
  pcStack_438 = (code *)&stack0xfffffffc;
  local_430 = 0;
  local_42c = 0;
  local_428 = (undefined *)0x0;
  local_424 = 0;
  local_40c = 0;
  pcStack_43c = thunk_FUN_004036bc;
  uStack_440 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_440;
  bVar4 = 0;
  local_414 = param_1;
  do {
    ppHVar8 = &local_418;
    RVar7 = 0xf003f;
    DVar6 = 0;
    uVar1 = (uint)bVar4;
    if (3 < uVar1) {
      uVar1 = thunk_FUN_00402808(uVar1);
    }
    pCVar2 = FUN_004040a0((&PTR_DAT_004ab548)[uVar1]);
    uVar1 = RegOpenKeyExA((HKEY)0x80000000,pCVar2,DVar6,RVar7,ppHVar8);
    if (uVar1 == 0) {
      LVar3 = RegQueryValueExA(local_418,(LPCSTR)0x0,(LPDWORD)0x0,&local_41c,(LPBYTE)0x0,&local_420)
      ;
      if (LVar3 == 0) {
        RegQueryValueExA(local_418,(LPCSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,local_405,&local_420);
        FUN_00403e8c(&local_424,(char *)local_405,0x401);
        if (local_424 != 0) {
          ppHVar8 = &local_410;
          RVar7 = 0xf003f;
          DVar6 = 0;
          FUN_00403e8c((int *)&local_428,(char *)local_405,0x401);
          FUN_00403ee4((int *)&local_428,(undefined4 *)"\\shell\\open\\command");
          pCVar2 = FUN_004040a0(local_428);
          LVar3 = RegOpenKeyExA((HKEY)0x80000000,pCVar2,DVar6,RVar7,ppHVar8);
          if (LVar3 == 0) {
            LVar3 = RegQueryValueExA(local_410,(LPCSTR)0x0,(LPDWORD)0x0,&local_41c,(LPBYTE)0x0,
                                     &local_420);
            if (LVar3 == 0) {
              RegQueryValueExA(local_410,(LPCSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,local_405,&local_420)
              ;
              FUN_00403e8c(&local_42c,(char *)local_405,0x401);
              if (local_42c != 0) {
                FUN_00490a8c();
                goto LAB_00490db4;
              }
            }
            RegCloseKey(local_410);
          }
        }
        LVar3 = RegOpenKeyExA(local_418,"shell\\open\\command",0,0xf003f,&local_410);
        if (LVar3 == 0) {
          LVar3 = RegQueryValueExA(local_410,(LPCSTR)0x0,(LPDWORD)0x0,&local_41c,(LPBYTE)0x0,
                                   &local_420);
          if (LVar3 == 0) {
            RegQueryValueExA(local_410,(LPCSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,local_405,&local_420);
            FUN_00403e8c(&local_430,(char *)local_405,0x401);
            if (local_430 != 0) {
              FUN_00490a8c();
              goto LAB_00490db4;
            }
          }
        }
      }
      uVar1 = RegCloseKey(local_418);
    }
    bVar5 = bVar4 == 0xff;
    bVar4 = bVar4 + 1;
    if (bVar5) {
      thunk_FUN_00402808(uVar1);
    }
  } while (bVar4 != 4);
  FUN_00403c5c(local_414);
LAB_00490db4:
  *in_FS_OFFSET = uStack_440;
  pcStack_438 = FUN_00490de4;
  pcStack_43c = (code *)0x490dd1;
  FUN_00403c80(&local_430,4);
  pcStack_43c = (code *)0x490ddc;
  FUN_00403c5c(&local_40c);
  return;
}


