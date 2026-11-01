
/* ==== FUN_0044b368 @ 0044b368 ==== 
 * signature: undefined __register FUN_0044b368(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 0044b368-0044b4ce;0044b4d6-0044b512
 */

void FUN_0044b368(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  byte *lpSubKey;
  LSTATUS LVar4;
  undefined4 *in_FS_OFFSET;
  DWORD ulOptions;
  REGSAM samDesired;
  HKEY *phkResult;
  undefined4 uStack_274;
  code *pcStack_270;
  code *pcStack_26c;
  int local_264;
  HKL local_260;
  undefined1 local_25c;
  byte local_258 [64];
  BYTE local_218 [256];
  HKL local_118 [64];
  HKL *local_18;
  int local_14;
  HKEY local_10;
  DWORD local_c;
  int local_8;
  
  pcStack_26c = (code *)&stack0xfffffffc;
  local_264 = 0;
  pcStack_270 = thunk_FUN_004036bc;
  uStack_274 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_274;
  local_8 = param_1;
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar2 = FUN_00402f6c((int *)&PTR_TPersistent_vmt_000_0040eee8,'\x01',param_3);
    *(undefined4 *)(local_8 + 0x28) = uVar2;
    FUN_00403c5c((int *)(local_8 + 0x2c));
    iVar3 = GetKeyboardLayoutList(0x40,local_118);
    if (-1 < iVar3 + -1) {
      local_18 = local_118;
      local_14 = iVar3;
      do {
        uVar2 = FUN_00438fac();
        if ((char)uVar2 != '\0') {
          phkResult = &local_10;
          samDesired = 0x20019;
          ulOptions = 0;
          local_260 = *local_18;
          local_25c = 0;
          lpSubKey = FUN_004091ec(local_258,
                                  (byte *)
                                  "System\\CurrentControlSet\\Control\\Keyboard Layouts\\%.8x",
                                  &local_260,0);
          LVar4 = RegOpenKeyExA((HKEY)0x80000002,(LPCSTR)lpSubKey,ulOptions,samDesired,phkResult);
          if (LVar4 == 0) {
            uVar2 = *in_FS_OFFSET;
            *in_FS_OFFSET = &stack0xfffffd80;
            local_c = 0x100;
            LVar4 = RegQueryValueExA(local_10,"layout text",(LPDWORD)0x0,(LPDWORD)0x0,local_218,
                                     &local_c);
            if (LVar4 == 0) {
              FUN_00403e8c(&local_264,(char *)local_218,0x100);
              (**(code **)(**(int **)(local_8 + 0x28) + 0x38))
                        (*(int **)(local_8 + 0x28),local_264,*local_18);
              if (*local_18 == *(HKL *)(local_8 + 0x30)) {
                FUN_00403e8c((int *)(local_8 + 0x2c),(char *)local_218,0x100);
              }
            }
            *in_FS_OFFSET = uVar2;
            RegCloseKey(local_10);
            return;
          }
        }
        local_18 = local_18 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
    piVar1 = *(int **)(local_8 + 0x28);
    *(undefined1 *)((int)piVar1 + 0x19) = 0;
    FUN_004125dc(piVar1,'\x01');
  }
  *in_FS_OFFSET = uStack_274;
  pcStack_26c = FUN_0044b51a;
  pcStack_270 = (code *)0x44b512;
  FUN_00403c5c(&local_264);
  return;
}


