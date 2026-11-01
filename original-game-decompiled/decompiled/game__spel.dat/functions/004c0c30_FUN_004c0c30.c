
/* ==== FUN_004c0c30 @ 004c0c30 ==== 
 * signature: int __stdcall FUN_004c0c30(void)
 * body: 004c0c30-004c0c5f;004c0c63-004c0cc5;004c0cc9-004c0ceb;004c0cef-004c0d0d;004c0d11-004c0d29
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004c0c60-004c0c62 004c0cc6-004c0cc8 004c0cec-004c0cee 004c0d0e-004c0d10
 */

int FUN_004c0c30(void)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_0056f79b;
  local_c = ExceptionList;
  if (DAT_0073b788 == 0) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____viewport_array_not_init_005b2b88);
  }
  ExceptionList = &local_c;
  iVar1 = FUN_004c0b80();
  puVar2 = operator_new(0x40);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_004c0e10(puVar2);
  }
  local_4 = 0xffffffff;
  if (DAT_0073b784[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d____T_ARRAY__get_data__s__d_005b0f3c);
  }
  if ((-1 < iVar1) && (iVar1 < DAT_0073b784[1])) {
    if (*(char *)(DAT_0073b784[4] + iVar1) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_004c4150((byte *)s__s__d____array_element_not_regis_005b0f98);
    }
    *(undefined4 **)(*DAT_0073b784 + iVar1 * 4) = puVar2;
    ExceptionList = local_c;
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004c4150((byte *)s__s__d____out_of_boundaries__s__d_005b0fc8);
}


