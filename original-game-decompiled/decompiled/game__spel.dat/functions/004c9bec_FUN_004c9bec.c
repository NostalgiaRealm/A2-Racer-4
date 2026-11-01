
/* ==== FUN_004c9bec @ 004c9bec ==== 
 * signature: bool __stdcall FUN_004c9bec(void)
 * body: 004c9bec-004c9c22
 */

bool FUN_004c9bec(void)

{
  int iVar1;
  int unaff_EBX;
  char *pcStack00000004;
  undefined4 *puStack00000010;
  undefined4 uStack00000020;
  undefined4 uStack00000024;
  undefined4 in_stack_000000ac;
  undefined4 in_stack_000000b0;
  int *in_stack_00000120;
  
  puStack00000010 = &stack0x000000ac;
  iVar1 = (**(code **)(*in_stack_00000120 + 0x58))();
  if (iVar1 != unaff_EBX) {
    pcStack00000004 = (char *)0x4c9c0e;
    pcStack00000004 = FUN_004c4400(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____DDError__blt_surf_2_sur_005b59e8);
  }
  uStack00000020 = in_stack_000000b0;
  uStack00000024 = in_stack_000000ac;
  pcStack00000004 = (char *)0x1000000;
  iVar1 = (**(code **)(*in_stack_00000120 + 0x14))();
  return (bool)('\x01' - (iVar1 != 0));
}


