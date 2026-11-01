
/* ==== FUN_004083d0 @ 004083d0 ==== 
 * signature: undefined __cdecl FUN_004083d0(int param_1)
 * body: 004083d0-0040840c
 */

void __cdecl FUN_004083d0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = param_1 * 0x294;
  *(undefined4 *)(&DAT_005cea48 + iVar1) = 0;
  FUN_00407d90(param_1);
  fVar2 = FUN_004a6800(0x7128b0);
  *(float *)(&DAT_005cea00 + iVar1) = (float)(fVar2 + (float10)*(float *)(&DAT_005cea00 + iVar1));
  return;
}


