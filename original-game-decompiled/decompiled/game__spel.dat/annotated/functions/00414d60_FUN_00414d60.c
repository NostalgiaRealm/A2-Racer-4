
/* ==== FUN_00414d60 @ 00414d60 ==== 
 * signature: undefined __cdecl FUN_00414d60(int param_1)
 * body: 00414d60-00414eb5
 */

void __cdecl FUN_00414d60(int param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  float10 fVar7;
  float local_8;
  
  iVar5 = param_1 * 0x38;
  iVar4 = (&DAT_005d1ba8)[param_1 * 0xe];
  if ((&DAT_005d1bc0)[param_1 * 0xe] == 0) {
    iVar3 = FUN_004641a0(0);
    fVar2 = *(float *)(&DAT_00709f34 + iVar3 * 0x340);
    iVar3 = FUN_004641a0((&DAT_005d1bc0)[param_1 * 0xe]);
    FUN_004031f0(iVar4,fVar2,local_8,*(float *)(&DAT_00709f3c + iVar3 * 0x340));
  }
  iVar3 = *(int *)(&DAT_005d1bbc + iVar5);
  bVar6 = false;
  if (iVar3 == 0) {
    if (DAT_005a3ab4 == 0) {
      iVar3 = FUN_00448470(1);
      if (2000 < iVar3) {
        *(undefined4 *)(&DAT_005d1bbc + iVar5) = 1;
      }
    }
    iVar3 = *(int *)(&DAT_005d1bbc + iVar5);
    bVar6 = iVar3 == 0;
  }
  if (!bVar6 && -1 < iVar3) {
    FUN_00414640(param_1);
    pfVar1 = (float *)(iVar4 * 0xf0 + 0xc4 + DAT_00715e50);
    if (*(float *)(iVar4 * 0xf0 + 0xc4 + DAT_00715e50) < DAT_005d1b3c) {
      fVar7 = FUN_004a6800(0x7128b0);
      *pfVar1 = (float)(fVar7 * (float10)5.0 + (float10)*pfVar1);
      return;
    }
    *pfVar1 = DAT_005d1b3c;
    return;
  }
  iVar4 = iVar4 * 0xf0;
  *(undefined4 *)(iVar4 + 0xc4 + DAT_00715e50) = 0;
  *(undefined4 *)(iVar4 + 0xbc + DAT_00715e50) = 0;
  *(undefined4 *)(iVar4 + 0xcc + DAT_00715e50) = 0;
  return;
}


