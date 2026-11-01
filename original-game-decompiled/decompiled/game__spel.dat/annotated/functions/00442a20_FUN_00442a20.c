
/* ==== FUN_00442a20 @ 00442a20 ==== 
 * signature: undefined __fastcall FUN_00442a20(int param_1)
 * body: 00442a20-00442a20
 */

void __fastcall FUN_00442a20(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (DAT_006fb8d0 == 0) {
    iVar3 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
    *(undefined4 *)(iVar3 + 0x60) = 0;
    *(undefined4 *)(iVar3 + 0x48) = *DAT_0073b1b0;
    *(undefined4 *)(iVar3 + 0x58) = 1;
    if (*(int *)(iVar3 + 0x5c) == 1) {
      *(undefined4 *)(iVar3 + 0x58) = 0;
      (**(code **)(**(int **)(iVar3 + 0x54) + 0xc))(*(int **)(iVar3 + 0x54),iVar3);
    }
    if (DAT_0073b4ec == 0) goto LAB_00442b35;
    DAT_0073b4ec = 0;
    iVar3 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,1,*DAT_0073b1b0);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x88);
    iVar1 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
    *(int *)(iVar1 + 0x60) = iVar3;
    uVar2 = DAT_0073b1b0[iVar3 * 0x12];
    *(undefined4 *)(iVar1 + 0x58) = 1;
    *(undefined4 *)(iVar1 + 0x48) = uVar2;
    if (*(int *)(iVar1 + 0x5c) == 1) {
      *(undefined4 *)(iVar1 + 0x58) = 0;
      (**(code **)(**(int **)(iVar1 + 0x54) + 0xc))(*(int **)(iVar1 + 0x54),iVar1);
    }
    iVar3 = *(int *)(param_1 + 0x88);
    if (DAT_0073b4ec == iVar3) goto LAB_00442b35;
    DAT_0073b4ec = iVar3;
    iVar3 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,1,DAT_0073b1b0[iVar3 * 0x12]);
  }
  if (iVar3 != 0) {
    FUN_004bb290(iVar3);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d_____TEXTURE__error_setting_0059be94);
  }
LAB_00442b35:
  if ((DAT_006fb8d0 != 0) && (DAT_006fb940 != 0)) {
    (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,0x1b,0);
  }
  iVar3 = (**(code **)(*DAT_0073b4b4 + 0x74))(DAT_0073b4b4,6,3,param_1,4,1);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d__DramPrimitive_error_0059d358);
  }
  return;
}


