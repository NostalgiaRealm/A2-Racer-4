
/* ==== FUN_0040e250 @ 0040e250 ==== 
 * signature: undefined __cdecl FUN_0040e250(int param_1)
 * body: 0040e250-0040e283;0040e287-0040e2e5
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0040e284-0040e286
 */

void __cdecl FUN_0040e250(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 * 0xf0;
  iVar1 = *(int *)(iVar2 + 0x50 + DAT_00715e50);
  if ((iVar1 != 1) && (iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_004c4150((byte *)s__s__d___obj_side__d_____d_is_ill_00591fd8);
  }
  *(undefined4 *)(iVar2 + 0x60 + DAT_00715e50) = 1;
  iVar1 = FUN_0040dad0(param_1);
  if ((iVar1 != -1) && (iVar1 < DAT_005d2ab0)) {
    iVar2 = FUN_00407d20(*(int *)(iVar2 + 0x34 + DAT_00715e50),
                         *(int *)(DAT_006fba58 * 0xf0 + 0x34 + DAT_00715e50));
    (&DAT_005cea38)[iVar1 * 0xa5] = iVar2;
  }
  return;
}


