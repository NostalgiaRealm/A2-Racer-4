
/* ==== FUN_004ce640 @ 004ce640 ==== 
 * signature: undefined __cdecl FUN_004ce640(LONG * param_1, LONG * param_2, int * param_3)
 * body: 004ce640-004ce65f;004ce663-004ce6c8
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 004ce660-004ce662
 */

void __cdecl FUN_004ce640(LONG *param_1,LONG *param_2,int *param_3)

{
  int iVar1;
  tagPOINT local_8;
  
  if (DAT_0074b2f4 == 0) {
                    /* WARNING: Subroutine does not return */
    Fatal((byte *)s__s__d_____get_mouse_pos__Mouse_i_005b6b80);
  }
  GetCursorPos(&local_8);
  ScreenToClient(DAT_007408a4,&local_8);
  *param_1 = local_8.x;
  *param_2 = local_8.y;
  *param_3 = 0;
  iVar1 = FUN_004c5e40(1);
  if (iVar1 != 0) {
    *param_3 = 1;
  }
  iVar1 = FUN_004c5e40(2);
  if (iVar1 != 0) {
    *param_3 = *param_3 + 2;
  }
  return;
}


