
/* ==== FUN_00408b50 @ 00408b50 ==== 
 * signature: undefined __cdecl FUN_00408b50(int param_1)
 * body: 00408b50-00408ca8
 */

void __cdecl FUN_00408b50(int param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined3 extraout_var;
  int iVar4;
  int iVar5;
  float10 fVar6;
  longlong lVar7;
  
  iVar5 = param_1 * 0x294;
  iVar4 = *(int *)(&DAT_005cea34 + iVar5);
  iVar1 = (&DAT_005ce9e8)[param_1 * 0xa5];
  iVar3 = FUN_00407d20(*(int *)(iVar1 * 0xf0 + 0x34 + DAT_00715e50),
                       *(int *)(iVar4 * 0xf0 + 0x34 + DAT_00715e50));
  if (ABS((double)iVar3) < 2.0) {
    iVar4 = DAT_0073b0d0 + *(int *)(iVar4 * 0xf0 + 0x24 + DAT_00715e50) * 0xa9;
    lVar7 = FUN_00403ea0(iVar1,*(float *)(iVar4 + 0x50),*(undefined4 *)(iVar4 + 0x54),
                         *(float *)(iVar4 + 0x58));
    iVar4 = (int)lVar7;
    if (((0x300 < iVar4) && (iVar4 < 0x500)) || ((0xb00 < iVar4 && (iVar4 < 0xd00)))) {
      FUN_00407d90(param_1);
      bVar2 = FUN_004235f0(param_1);
      iVar4 = CONCAT31(extraout_var,bVar2);
      *(int *)(&DAT_005cea48 + iVar5) = iVar4;
      if (iVar4 == 1) {
        *(undefined4 *)(&DAT_005cea48 + iVar5) = 2;
      }
      else if (iVar4 == 2) {
        *(undefined4 *)(&DAT_005cea48 + iVar5) = 1;
      }
      fVar6 = FUN_004a6800(0x7128b0);
      *(float *)(&DAT_005cea00 + iVar5) =
           (float)(fVar6 + (float10)*(float *)(&DAT_005cea00 + iVar5));
      fVar6 = FUN_004a6800(0x7128b0);
      *(float *)(&DAT_005cea50 + iVar5) =
           (float)(fVar6 + (float10)*(float *)(&DAT_005cea50 + iVar5));
      return;
    }
  }
  *(undefined4 *)(&DAT_005cea48 + iVar5) = 0;
  if (0 < iVar3) {
    FUN_00408030(param_1);
    *(undefined4 *)(&DAT_005cea50 + iVar5) = 0;
    return;
  }
  FUN_00407ed0(param_1);
  *(undefined4 *)(&DAT_005cea50 + iVar5) = 0;
  return;
}


