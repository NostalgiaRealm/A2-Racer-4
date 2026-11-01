
/* ==== FUN_004745c0 @ 004745c0 ==== 
 * signature: undefined __cdecl FUN_004745c0(undefined4 * param_1, void * param_2)
 * body: 004745c0-00474615;00474619-0047462d
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00474616-00474618
 */

void __cdecl FUN_004745c0(undefined4 *param_1,void *param_2)

{
  void *pvVar1;
  undefined4 local_18 [6];
  
  pvVar1 = FUN_00479a80(param_2,local_18,0);
  DAT_0059becc = *(int *)((int)pvVar1 + 0x10);
  FUN_004cf650(local_18);
  if ((-1 < DAT_0059becc) && (DAT_0059becc < DAT_006fd148)) {
    *param_1 = &PTR_FUN_00576a88;
    param_1[2] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s___d__Illegal_text_index_found_005a8e04);
}


