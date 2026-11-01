
/* ==== FUN_00462bb0 @ 00462bb0 ==== 
 * signature: int __cdecl FUN_00462bb0(int param_1, undefined4 * param_2, int param_3)
 * body: 00462bb0-00462bcf;00462bd3-00462bfe;00462c02-00462c73;00462c77-00462ce2
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 00462bd0-00462bd2 00462bff-00462c01 00462c74-00462c76
 */

int __cdecl FUN_00462bb0(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s___d__No_emitter__005a6018);
  }
  iVar2 = *(int *)(param_1 + 0x78);
  if (iVar2 == 0) {
    return 0;
  }
  while( true ) {
    if (param_3 <= iVar1) {
                    /* WARNING: Subroutine does not return */
      Fatal((byte *)s__s___d__Incorrect_index_current_v_005a6050);
    }
    *param_2 = *(undefined4 *)(iVar2 + 8);
    param_2[1] = *(undefined4 *)(iVar2 + 0xc);
    param_2[2] = *(undefined4 *)(iVar2 + 0x10);
    lVar3 = __ftol();
    lVar4 = __ftol();
    lVar5 = __ftol();
    param_2[4] = ((int)lVar3 << 8 | (uint)lVar4) << 8 | (uint)lVar5;
    param_2[5] = 0;
    if (param_3 <= iVar1 + 1) break;
    param_2[8] = *(undefined4 *)(iVar2 + 0x14);
    param_2[9] = *(undefined4 *)(iVar2 + 0x18);
    param_2[10] = *(undefined4 *)(iVar2 + 0x1c);
    lVar3 = __ftol();
    lVar4 = __ftol();
    lVar5 = __ftol();
    iVar1 = iVar1 + 2;
    param_2[0xc] = ((int)lVar3 << 8 | (uint)lVar4) << 8 | (uint)lVar5;
    param_2[0xd] = 0;
    iVar2 = *(int *)(iVar2 + 4);
    param_2 = param_2 + 0x10;
    if (iVar2 == 0) {
      return iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  Fatal((byte *)s__s___d__Incorrect_index_current_v_005a60ac);
}


