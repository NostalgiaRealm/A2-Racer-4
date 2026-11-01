
/* ==== FUN_00408370 @ 00408370 ==== 
 * signature: undefined __cdecl FUN_00408370(int param_1)
 * body: 00408370-004083ca
 */

void __cdecl FUN_00408370(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = param_1 * 0x294;
  *(undefined4 *)(&DAT_005cea48 + iVar2) = 0;
  FUN_00407d90(param_1);
  fVar3 = FUN_004a6800(0x7128b0);
  iVar1 = DAT_006fba58;
  *(float *)(&DAT_005cea00 + iVar2) = (float)(fVar3 + (float10)*(float *)(&DAT_005cea00 + iVar2));
  if (*(int *)(&DAT_005cea34 + iVar2) == iVar1) {
    FUN_0041be70(&DAT_005d3118,5,iVar1,-1);
  }
  return;
}


