
/* ==== FUN_004256c0 @ 004256c0 ==== 
 * signature: undefined4 __fastcall FUN_004256c0(int * param_1)
 * body: 004256c0-00425725;00425729-0042572c
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00425726-00425728
 */

undefined4 __fastcall FUN_004256c0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1[0x386] == -1) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d____Car_object_index_is_not_00595ca0);
  }
  iVar2 = 0;
  if (0 < param_1[1]) {
    piVar1 = param_1 + 0xe;
    do {
      if ((piVar1[-0xb] == *param_1) && (0 < *piVar1)) {
        *(undefined4 *)(piVar1[-10] * 0xf0 + 0x5c + DAT_00715e50) = 1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x12;
    } while (iVar2 < param_1[1]);
    return 1;
  }
  return CONCAT31((int3)((uint)param_1[1] >> 8),1);
}


