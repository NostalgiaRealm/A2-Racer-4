
/* ==== xvga_rc_num_files @ 10001041 ==== 
 * signature: undefined4 __stdcall xvga_rc_num_files(void)
 * body: 10001041-10001045
 * thunk to: FUN_10001c00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 xvga_rc_num_files(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_44 [16];
  
                    /* 0x1041  9  xvga_rc_num_files */
  puVar2 = auStack_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return _DAT_100313fc;
}


