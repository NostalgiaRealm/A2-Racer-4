
/* ==== xvga_rc_filelength @ 10001032 ==== 
 * signature: undefined4 __cdecl xvga_rc_filelength(int param_1)
 * body: 10001032-10001036
 * thunk to: xvga_rc_filelength_impl
 */

undefined4 __cdecl xvga_rc_filelength(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_44 [16];
  
                    /* 0x1032  6  xvga_rc_filelength */
  puVar2 = auStack_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return *(undefined4 *)(DAT_10031400 + 0x18 + param_1 * 0x1c);
}


