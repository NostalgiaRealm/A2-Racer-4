
/* ==== FUN_00436b90 @ 00436b90 ==== 
 * signature: undefined __cdecl FUN_00436b90(int param_1)
 * body: 00436b90-00436dbd
 */

void __cdecl FUN_00436b90(int param_1)

{
  uint uVar1;
  int iVar2;
  void *this;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar1 = FUN_00558625();
  uVar1 = uVar1 & 0x800003ff;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffc00) + 1;
  }
  uVar8 = 0;
  uVar9 = 0;
  uVar4 = 0;
  uVar10 = 0;
  uVar5 = 0xc04ccccd;
  uVar6 = 0x41700000;
  uVar7 = 0xc0333333;
  iVar2 = FUN_004b75a0(&DAT_00712130,s_COPLIGHTS_005995b8);
  FUN_004aa390(param_1,iVar2,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  if (DAT_006fb940 != 0) {
    this = (void *)(param_1 * 0xf0 + DAT_00715e50);
    iVar2 = FUN_004a8600(this,*(int *)((int)this + 0xac) + -1);
    *(undefined4 *)(DAT_0073b0d0 + iVar2 * 0xa9 + 0xa5) = 2;
  }
  iVar3 = param_1 * 0xf0;
  iVar2 = FUN_004a8600((void *)(iVar3 + DAT_00715e50),*(int *)(iVar3 + 0xac + DAT_00715e50) + -1);
  *(float *)(DAT_0073b0d0 + iVar2 * 0xa9 + 0x78) = (float)(int)(DAT_005b23b4 / 2 + uVar1 + 0x400);
  uVar8 = 0;
  uVar9 = 0;
  uVar4 = 1;
  uVar10 = 0;
  uVar5 = 0x404ccccd;
  uVar6 = 0x41700000;
  uVar7 = 0xc0333333;
  iVar2 = FUN_004b75a0(&DAT_00712130,s_COPLIGHTS_005995c4);
  FUN_004aa390(param_1,iVar2,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
  if (DAT_006fb940 != 0) {
    iVar2 = FUN_004a8600((void *)(DAT_00715e50 + iVar3),*(int *)(DAT_00715e50 + iVar3 + 0xac) + -1);
    *(undefined4 *)(DAT_0073b0d0 + iVar2 * 0xa9 + 0xa5) = 2;
  }
  iVar2 = FUN_004a8600((void *)(iVar3 + DAT_00715e50),*(int *)(iVar3 + 0xac + DAT_00715e50) + -1);
  *(float *)(DAT_0073b0d0 + iVar2 * 0xa9 + 0x78) = (float)(int)(uVar1 + 0x400);
  return;
}


