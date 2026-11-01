
/* ==== FUN_00555589 @ 00555589 ==== 
 * signature: undefined4 * __stdcall FUN_00555589(void)
 * body: 00555589-005556b4
 */

undefined4 * FUN_00555589(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *this;
  int unaff_EBP;
  uint uVar5;
  byte *pbVar6;
  float10 fVar7;
  
  FUN_0055b39c();
  FUN_00555f6d();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar3 = FUN_0054e9af((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
  puVar1 = *(uint **)(unaff_EBP + 0x24);
  if ((char)uVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    *(undefined1 *)(unaff_EBP + -0x2c) = *(undefined1 *)(unaff_EBP + 0x27);
    FUN_004028f0((void *)(unaff_EBP + -0x2c),'\0');
    *(undefined1 *)(unaff_EBP + -4) = 1;
    this = extraout_ECX;
    if (*(uint *)(unaff_EBP + -0x20) < *(uint *)(unaff_EBP + -0x14)) {
      FUN_00402a00((void *)(unaff_EBP + -0x2c),*(uint *)(unaff_EBP + -0x14),'\0');
      this = extraout_ECX_00;
    }
    uVar5 = 0;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      do {
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          puVar4 = &DAT_0057629c;
        }
        else {
          FUN_00471de0((void *)(unaff_EBP + -0x1c));
          puVar4 = (undefined1 *)(*(int *)(unaff_EBP + -0x18) + uVar5);
        }
        *(undefined1 *)(unaff_EBP + 0x20) = *puVar4;
        FUN_0047eab0((void *)(unaff_EBP + -0x2c),1,(char)*(undefined4 *)(unaff_EBP + 0x20));
        uVar5 = uVar5 + 1;
        this = extraout_ECX_01;
      } while (uVar5 < *(uint *)(unaff_EBP + -0x14));
    }
    pbVar6 = *(byte **)(unaff_EBP + -0x28);
    if (pbVar6 == (byte *)0x0) {
      pbVar6 = &DAT_0057629c;
    }
    DAT_0074dc60 = 0;
    fVar7 = (float10)FUN_00557ce9(this,pbVar6,(int *)(unaff_EBP + 0x1c),0);
    if ((*(byte **)(unaff_EBP + 0x1c) == pbVar6) || (DAT_0074dc60 != 0)) {
      **(uint **)(unaff_EBP + 0x24) = **(uint **)(unaff_EBP + 0x24) | 2;
    }
    else {
      **(double **)(unaff_EBP + 0x28) = (double)fVar7;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_004028f0((void *)(unaff_EBP + -0x2c),'\x01');
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_004028f0((void *)(unaff_EBP + -0x1c),'\x01');
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


