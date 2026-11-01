
/* ==== xvga_rc_filepos @ 10001019 ==== 
 * signature: undefined4 __cdecl xvga_rc_filepos(int param_1)
 * body: 10001019-1000101d
 * thunk to: FUN_10001c90
 */

undefined4 __cdecl xvga_rc_filepos(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_44 [16];
  
                    /* 0x1019  8  xvga_rc_filepos */
  puVar2 = auStack_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return *(undefined4 *)(DAT_10031400 + 0x14 + param_1 * 0x1c);
}


