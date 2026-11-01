
/* ==== FUN_0055099c @ 0055099c ==== 
 * signature: undefined4 * __stdcall FUN_0055099c(void)
 * body: 0055099c-00550ace
 */

undefined4 * FUN_0055099c(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  int iVar5;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *this;
  int unaff_EBP;
  uint uVar6;
  byte *pbVar7;
  float10 fVar8;
  
  FUN_0055b39c();
  FUN_005521c2();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar3 = FUN_00554775((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 0x14));
  puVar1 = *(uint **)(unaff_EBP + 0x24);
  if ((char)uVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    *(undefined1 *)(unaff_EBP + -0x2c) = *(undefined1 *)(unaff_EBP + 0x23);
    FUN_004028f0((void *)(unaff_EBP + -0x2c),'\0');
    *(undefined1 *)(unaff_EBP + -4) = 1;
    this = extraout_ECX;
    if (*(uint *)(unaff_EBP + -0x20) < *(uint *)(unaff_EBP + -0x14)) {
      FUN_00402a00((void *)(unaff_EBP + -0x2c),*(uint *)(unaff_EBP + -0x14),'\0');
      this = extraout_ECX_00;
    }
    uVar6 = 0;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      do {
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          puVar4 = &DAT_00579320;
        }
        else {
          FUN_0055367f((void *)(unaff_EBP + -0x1c));
          puVar4 = (undefined2 *)(*(int *)(unaff_EBP + -0x18) + uVar6 * 2);
        }
        iVar5 = FUN_0054eb1f(CONCAT22((short)((uint)puVar4 >> 0x10),*puVar4));
        *(char *)(unaff_EBP + 0x20) = (char)iVar5;
        FUN_0047eab0((void *)(unaff_EBP + -0x2c),1,(char)*(undefined4 *)(unaff_EBP + 0x20));
        uVar6 = uVar6 + 1;
        this = extraout_ECX_01;
      } while (uVar6 < *(uint *)(unaff_EBP + -0x14));
    }
    pbVar7 = *(byte **)(unaff_EBP + -0x28);
    if (pbVar7 == (byte *)0x0) {
      pbVar7 = &DAT_0057629c;
    }
    DAT_0074dc60 = 0;
    fVar8 = (float10)FUN_00557ce9(this,pbVar7,(int *)(unaff_EBP + 0x1c),0);
    if ((*(byte **)(unaff_EBP + 0x1c) == pbVar7) || (DAT_0074dc60 != 0)) {
      *puVar1 = *puVar1 | 2;
    }
    else {
      **(double **)(unaff_EBP + 0x28) = (double)fVar8;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_004028f0((void *)(unaff_EBP + -0x2c),'\x01');
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_00553734((void *)(unaff_EBP + -0x1c),'\x01');
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


