
/* ==== FUN_00454170 @ 00454170 ==== 
 * signature: undefined __cdecl FUN_00454170(int param_1, int param_2)
 * body: 00454170-004541b8
 */

void __cdecl FUN_00454170(int param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_004c3fa0((byte *)s_Adding_object__d_with_type_play_s_005a3460);
  if (param_2 != -1) {
    uVar1 = FUN_0049ecf0(&DAT_006fbb5c,param_2);
    *(undefined4 *)(param_1 * 0xf0 + 0x30 + DAT_00715e50) = uVar1;
    *(undefined4 *)(param_1 * 0xf0 + 0x68 + DAT_00715e50) = 1;
  }
  return;
}


