
/* ==== FUN_0045fd50 @ 0045fd50 ==== 
 * signature: undefined __fastcall FUN_0045fd50(int param_1)
 * body: 0045fd50-0045fe1c;0045fe20-0045fe7f;0045fe83-0045fea1;0045ff04-0045ff16
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0045fe1d-0045fe1f 0045fe80-0045fe82
 */

void __fastcall FUN_0045fd50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_5c [17];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  pcStack_c = FUN_0056aa93;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff98;
  local_18 = param_1;
  local_8 = 0;
  ExceptionList = &local_10;
  if (DAT_006fb8d0 != 0) {
    iVar3 = *(int *)(param_1 + 0x9c);
    iVar1 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
    ExceptionList = &local_10;
    *(int *)(iVar1 + 0x60) = iVar3;
    uVar2 = *(undefined4 *)(DAT_0073b1b0 + iVar3 * 0x48);
    *(undefined4 *)(iVar1 + 0x58) = 1;
    *(undefined4 *)(iVar1 + 0x48) = uVar2;
    if (*(int *)(iVar1 + 0x5c) == 1) {
      *(undefined4 *)(iVar1 + 0x58) = 0;
      (**(code **)(**(int **)(iVar1 + 0x54) + 0xc))(*(int **)(iVar1 + 0x54),iVar1);
    }
    iVar3 = *(int *)(param_1 + 0x9c);
    if ((DAT_0073b4ec != iVar3) &&
       (DAT_0073b4ec = iVar3,
       iVar3 = (**(code **)(*DAT_0073b4b4 + 0x5c))
                         (DAT_0073b4b4,1,*(undefined4 *)(DAT_0073b1b0 + iVar3 * 0x48)), iVar3 != 0))
    {
      FUN_004bb290(iVar3);
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d_____TEXTURE__error_setting_0059be94);
    }
  }
  piVar4 = *(int **)(param_1 + 0xac);
  while( true ) {
    if (piVar4 == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    puVar5 = (undefined4 *)(param_1 + 0x10);
    puVar6 = local_5c;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar5 = local_5c;
    puVar6 = &DAT_0073b474;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar3 = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
    if (iVar3 != 0) break;
    FUN_00460060(piVar4);
    iVar3 = FUN_0045e0d0((int)piVar4);
    piVar4 = (int *)0x0;
    param_1 = local_18;
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_0045e0d0(iVar3);
      param_1 = local_18;
    }
  }
  FUN_004bb290(iVar3);
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
}


