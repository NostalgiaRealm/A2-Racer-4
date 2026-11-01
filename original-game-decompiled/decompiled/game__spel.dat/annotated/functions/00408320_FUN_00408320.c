
/* ==== FUN_00408320 @ 00408320 ==== 
 * signature: undefined __cdecl FUN_00408320(int param_1)
 * body: 00408320-00408360
 */

void __cdecl FUN_00408320(int param_1)

{
  byte bVar1;
  undefined3 extraout_var;
  int iVar2;
  float10 fVar3;
  
  iVar2 = param_1 * 0x294;
  bVar1 = FUN_004235f0(param_1);
  *(uint *)(&DAT_005cea48 + iVar2) = CONCAT31(extraout_var,bVar1);
  FUN_00407d90(param_1);
  fVar3 = FUN_004a6800(0x7128b0);
  *(float *)(&DAT_005cea00 + iVar2) = (float)(fVar3 + (float10)*(float *)(&DAT_005cea00 + iVar2));
  return;
}


