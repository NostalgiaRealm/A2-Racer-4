
/* ==== FUN_0041f5e0 @ 0041f5e0 ==== 
 * signature: undefined __cdecl FUN_0041f5e0(int param_1)
 * body: 0041f5e0-0041f9e8
 */

void __cdecl FUN_0041f5e0(int param_1)

{
  int iVar1;
  int *this;
  float fVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  float10 fVar7;
  
  iVar3 = *(int *)(&DAT_005ceabc + param_1 * 0x294);
  iVar1 = param_1 * 0x294;
  this = &DAT_005ce9e8 + param_1 * 0xa5;
  puVar4 = FUN_0040ebe0();
  if (iVar3 < 0) {
LAB_0041f621:
    iVar5 = 0;
  }
  else {
    iVar5 = (*(code *)**(undefined4 **)(puVar4 + 0x24))();
    if (iVar5 <= iVar3) goto LAB_0041f621;
    iVar5 = 1;
  }
  FUN_004a6980(iVar5,(byte *)s__s__d____Invalid_object_index____0058fd14);
  iVar3 = *(int *)(*(int *)(puVar4 + 0x28) + 4) + iVar3 * 0x54;
  if ((&DAT_005ce9f8)[iVar1] != '\0') {
    (&DAT_005ce9f8)[iVar1] = 0;
    *(int *)(&DAT_005cebf0 + iVar1) = *(int *)(&DAT_005cebf0 + iVar1) + 1;
    *(undefined4 *)(&DAT_005cea58 + iVar1) = 0;
    *(undefined4 *)(&DAT_005cec38 + iVar1) = 0;
    (&DAT_005cec60)[iVar1] = 0;
    FUN_00558625();
    *(undefined4 *)(&DAT_005cebf0 + iVar1) = 1;
    *(undefined4 *)(&DAT_005cec3c + iVar1) = 0xf;
    *(undefined4 *)(&DAT_005cec28 + iVar1) = 0;
    *(undefined4 *)(&DAT_005cead4 + iVar1) = 0;
    *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
    *(undefined4 *)(&DAT_005cead0 + iVar1) = 0;
  }
  iVar5 = FUN_00421710(param_1);
  if (iVar5 != 0) {
    FUN_0040e5a0(*this,*(undefined4 **)(*this * 0xf0 + 0x34 + DAT_00715e50),'\0');
    FUN_0040d470(this,0x1d);
  }
  iVar5 = *(int *)(&DAT_005cec3c + iVar1);
  if (iVar5 == 0xf) {
    *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
    fVar2 = *(float *)(iVar3 + 0x34);
    fVar7 = FUN_004a6800(0x7128b0);
    *(float *)(&DAT_005cead4 + iVar1) = (float)(fVar7 * (float10)(fVar2 * 700.0 + 100.0));
    if ((*(float *)(&DAT_005cec28 + iVar1) <= 0.0) ||
       ((1.0 <= *(float *)(&DAT_005cec38 + iVar1) &&
        (*(float *)(*this * 0xf0 + 0xc4 + DAT_00715e50) < 1.0)))) {
      uVar6 = FUN_00558625();
      *(float *)(&DAT_005cec64 + iVar1) = (float)((int)uVar6 % 0x15 + -10) * 0.01;
      uVar6 = FUN_00558625();
      *(undefined4 *)(&DAT_005cec38 + iVar1) = 0;
      *(undefined4 *)(&DAT_005cec3c + iVar1) = 0x11;
      *(undefined4 *)(&DAT_005cec40 + iVar1) = 0x10;
      *(float *)(&DAT_005cec28 + iVar1) = (float)((int)uVar6 % 3 + 3);
    }
  }
  else {
    if (iVar5 != 0x10) {
      if (iVar5 == 0x11) {
        if (*(float *)(*this * 0xf0 + 0xc4 + DAT_00715e50) <= 0.0) {
          *(undefined4 *)(&DAT_005cead4 + iVar1) = 0x42c80000;
          *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
        }
        else {
          *(undefined4 *)(&DAT_005cead4 + iVar1) = 0;
          *(undefined4 *)(&DAT_005cead8 + iVar1) = 0x42c80000;
        }
        if (ABS(*(float *)(*this * 0xf0 + 0xc4 + DAT_00715e50)) < 2.0) {
          *(undefined4 *)(&DAT_005cead4 + iVar1) = 0;
          *(undefined4 *)(&DAT_005cead8 + iVar1) = 0;
          iVar3 = *(int *)(&DAT_005cebf0 + iVar1);
          *(int *)(&DAT_005cebf0 + iVar1) = iVar3 + -1;
          if (iVar3 + -1 < 0) {
            (&DAT_005cec60)[iVar1] = 1;
          }
          else {
            *(undefined4 *)(&DAT_005cec3c + iVar1) = *(undefined4 *)(&DAT_005cec40 + iVar1);
          }
        }
      }
      goto LAB_0041f9aa;
    }
    *(undefined4 *)(&DAT_005cead4 + iVar1) = 0;
    fVar2 = *(float *)(iVar3 + 0x34);
    fVar7 = FUN_004a6800(0x7128b0);
    *(float *)(&DAT_005cead8 + iVar1) = (float)(fVar7 * (float10)(fVar2 * 700.0 + 100.0));
    if ((*(float *)(&DAT_005cec28 + iVar1) <= 0.0) ||
       ((1.0 <= *(float *)(&DAT_005cec38 + iVar1) &&
        (-1.0 < *(float *)(*this * 0xf0 + 0xc4 + DAT_00715e50))))) {
      uVar6 = FUN_00558625();
      *(float *)(&DAT_005cec64 + iVar1) = (float)((int)uVar6 % 0x15 + -10) * 0.01;
      uVar6 = FUN_00558625();
      *(undefined4 *)(&DAT_005cec38 + iVar1) = 0;
      *(undefined4 *)(&DAT_005cec3c + iVar1) = 0x11;
      *(undefined4 *)(&DAT_005cec40 + iVar1) = 0xf;
      *(float *)(&DAT_005cec28 + iVar1) = (float)((int)uVar6 % 3 + 3);
    }
  }
  fVar7 = FUN_004a6800(0x7128b0);
  *(float *)(&DAT_005cec38 + iVar1) = (float)(fVar7 + (float10)*(float *)(&DAT_005cec38 + iVar1));
LAB_0041f9aa:
  fVar7 = FUN_004a6800(0x7128b0);
  *(float *)(&DAT_005cea58 + iVar1) = (float)(fVar7 + (float10)*(float *)(&DAT_005cea58 + iVar1));
  fVar7 = FUN_004a6800(0x7128b0);
  *(float *)(&DAT_005cead0 + iVar1) =
       (float)(fVar7 * (float10)*(float *)(&DAT_005cec64 + iVar1) * (float10)100.0);
  FUN_0041eeb0(param_1);
  return;
}


