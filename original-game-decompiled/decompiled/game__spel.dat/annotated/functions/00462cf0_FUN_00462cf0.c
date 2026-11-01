
/* ==== FUN_00462cf0 @ 00462cf0 ==== 
 * signature: undefined4 __stdcall FUN_00462cf0(void)
 * body: 00462cf0-00462d78;00462d7c-00462dde;00462de2-00462e32;00462e36-00462e63;00462e67-00462ea1;00462ea5-00462ebd
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00462d79-00462d7b 00462ddf-00462de1 00462e33-00462e35 00462e64-00462e66 00462ea2-00462ea4
 */

undefined4 FUN_00462cf0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_stack_0003e844;
  
  FUN_00559400();
  iVar2 = *(int *)(DAT_0073b210 + DAT_005b1ba8 * 4);
  *(undefined4 *)(iVar2 + 0x60) = 0;
  uVar1 = *DAT_0073b1b0;
  *(undefined4 *)(iVar2 + 0x58) = 1;
  *(undefined4 *)(iVar2 + 0x48) = uVar1;
  if (*(int *)(iVar2 + 0x5c) == 1) {
    *(undefined4 *)(iVar2 + 0x58) = 0;
    (**(code **)(**(int **)(iVar2 + 0x54) + 0xc))(*(int **)(iVar2 + 0x54),iVar2);
  }
  if (DAT_0073b4ec != 0) {
    DAT_0073b4ec = 0;
    iVar2 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,1,*DAT_0073b1b0);
    if (iVar2 != 0) {
      FUN_004bb290(iVar2);
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d_____TEXTURE__error_setting_0059be94);
    }
  }
  if (in_stack_0003e844 == 0) {
    return 0;
  }
  puVar4 = (undefined4 *)(in_stack_0003e844 + 0xd4);
  puVar5 = (undefined4 *)register0x00000010;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = (undefined4 *)register0x00000010;
  puVar5 = &DAT_0073b474;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar2 = (**(code **)(*DAT_0073b4b4 + 0x68))(DAT_0073b4b4,1,&DAT_0073b474);
  if (iVar2 != 0) {
    FUN_004bb290(iVar2);
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d_____FOG__error_setting_tra_005912e0);
  }
  iVar2 = FUN_00462bb0(in_stack_0003e844,(undefined4 *)&stack0x00000034,8000);
  if (DAT_0073b4fd != 0) {
    DAT_0073b4fd = 0;
    iVar3 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,7,0);
    if (iVar3 != 0) {
      FUN_004bb290(iVar3);
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d_____ZBUFFER__error_setting_0059c150);
    }
  }
  iVar2 = (**(code **)(*DAT_0073b4b4 + 0x74))(DAT_0073b4b4,2,2,&stack0x00000034,iVar2,1);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__DramPrimitive_error_005a6108);
  }
  if (DAT_0073b4fd != 1) {
    DAT_0073b4fd = 1;
    iVar2 = (**(code **)(*DAT_0073b4b4 + 0x5c))(DAT_0073b4b4,7,1);
    if (iVar2 != 0) {
      FUN_004bb290(iVar2);
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s__d_____ZBUFFER__error_setting_0059c150);
    }
  }
  return 1;
}


