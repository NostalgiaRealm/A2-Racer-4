
/* ==== FUN_00490a8c @ 00490a8c ==== 
 * signature: undefined __register FUN_00490a8c(void)
 * body: 00490a8c-00490b3e
 */

void FUN_00490a8c(void)

{
  uint uVar1;
  int iVar2;
  int extraout_EDX;
  short sVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  int local_8;
  
  pcStack_14 = (code *)&stack0xfffffffc;
  local_8 = 0;
  piVar5 = (int *)(in_stack_00000004 + -0x408);
  pcStack_18 = thunk_FUN_004036bc;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00408d0c((char *)(in_stack_00000004 + -0x401),&local_8);
  FUN_00403cf4(piVar5,local_8);
  uVar4 = 1;
  do {
    iVar2 = *piVar5;
    uVar1 = uVar4 - 1;
    if (*(uint *)(iVar2 + -4) <= uVar1) {
      uVar1 = thunk_FUN_00402808(uVar1);
      iVar2 = extraout_EDX;
    }
    sVar3 = (short)uVar4;
    if (*(char *)(iVar2 + -1 + uVar1 + 1) == '%') {
      FUN_00404124(piVar5,uVar4,2);
    }
    else {
      uVar4 = (uint)(ushort)(sVar3 + 1);
      if (sVar3 == -1) {
        thunk_FUN_00402808(uVar1 + 1);
      }
    }
    iVar2 = FUN_00403edc(*piVar5);
  } while ((int)uVar4 < iVar2);
  RegCloseKey(*(HKEY *)(in_stack_00000004 + -0x40c));
  FUN_00403cb0(*(int **)(in_stack_00000004 + -0x410),(undefined4 *)*piVar5);
  *in_FS_OFFSET = uStack_1c;
  pcStack_14 = FUN_00490b46;
  pcStack_18 = (code *)0x490b3e;
  FUN_00403c5c(&local_8);
  return;
}


