
/* ==== FUN_00408120 @ 00408120 ==== 
 * signature: undefined __cdecl FUN_00408120(int param_1)
 * body: 00408120-004081de
 */

void __cdecl FUN_00408120(int param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar5;
  float10 fVar6;
  
  iVar5 = param_1 * 0x294;
  iVar4 = *(int *)((&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0 + 0x34 + DAT_00715e50);
  iVar1 = *(int *)(*(int *)(&DAT_005cea34 + iVar5) * 0xf0 + 0x34 + DAT_00715e50);
  iVar3 = FUN_00407d20(iVar4,iVar1);
  if (iVar3 < 1) {
    *(undefined4 *)(&DAT_005cea48 + iVar5) = 0;
    FUN_00407ed0(param_1);
    return;
  }
  iVar4 = FUN_00407d20(iVar4,iVar1);
  if (1 < iVar4) {
    bVar2 = FUN_004235f0(param_1);
    *(uint *)(&DAT_005cea48 + iVar5) = CONCAT31(extraout_var,bVar2);
    FUN_00408030(param_1);
    return;
  }
  bVar2 = FUN_004235f0(param_1);
  *(uint *)(&DAT_005cea48 + iVar5) = CONCAT31(extraout_var_00,bVar2);
  FUN_00407d90(param_1);
  fVar6 = FUN_004a6800(0x7128b0);
  *(float *)(&DAT_005cea00 + iVar5) = (float)(fVar6 + (float10)*(float *)(&DAT_005cea00 + iVar5));
  return;
}


