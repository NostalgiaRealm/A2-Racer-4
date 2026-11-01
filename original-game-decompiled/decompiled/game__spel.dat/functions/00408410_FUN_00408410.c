
/* ==== FUN_00408410 @ 00408410 ==== 
 * signature: undefined __cdecl FUN_00408410(int param_1)
 * body: 00408410-00408515
 */

void __cdecl FUN_00408410(int param_1)

{
  byte bVar1;
  undefined3 extraout_var;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  longlong lVar7;
  
  iVar4 = param_1 * 0x294;
  iVar2 = (&DAT_005ce9e8)[param_1 * 0xa5] * 0xf0;
  iVar5 = *(int *)(&DAT_005cea34 + iVar4) * 0xf0;
  if (*(int *)(iVar2 + 0x34 + DAT_00715e50) == *(int *)(iVar5 + 0x34 + DAT_00715e50)) {
    iVar3 = DAT_0073b0d0 + *(int *)(iVar5 + 0x24 + DAT_00715e50) * 0xa9;
    lVar7 = FUN_00403ea0((&DAT_005ce9e8)[param_1 * 0xa5],*(float *)(iVar3 + 0x50),
                         *(undefined4 *)(iVar3 + 0x54),*(float *)(iVar3 + 0x58));
    iVar3 = (int)lVar7;
    if (((0x200 < iVar3) && (iVar3 < 0x600)) || ((0xa00 < iVar3 && (iVar3 < 0xe00)))) {
      bVar1 = FUN_004235f0(param_1);
      *(uint *)(&DAT_005cea48 + iVar4) = CONCAT31(extraout_var,bVar1);
      FUN_00407d90(param_1);
      fVar6 = FUN_004a6800(0x7128b0);
      *(float *)(&DAT_005cea00 + iVar4) =
           (float)(fVar6 + (float10)*(float *)(&DAT_005cea00 + iVar4));
      return;
    }
  }
  iVar2 = *(int *)(iVar2 + 0x34 + DAT_00715e50);
  iVar5 = *(int *)(iVar5 + 0x34 + DAT_00715e50);
  *(undefined4 *)(&DAT_005cea48 + iVar4) = 0;
  if (iVar5 <= iVar2) {
    FUN_00408030(param_1);
    return;
  }
  FUN_00407ed0(param_1);
  return;
}


