
/* ==== FUN_0049f010 @ 0049f010 ==== 
 * signature: undefined FUN_0049f010(void)
 * body: 0049f010-0049f0ba
 */

void FUN_0049f010(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,(undefined4 *)"Process1stPosition",0);
  iVar3 = FUN_0049ed44();
  if (*(int *)(iVar3 + 0xc) ==
      *(int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xc0) + 0x10) + 0xc)) {
    FUN_0049ed44();
    FUN_0048dd00();
  }
  *(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) = *(byte *)(*(int *)PTR_DAT_004ab694 + 0xd0) | 8;
  iVar3 = FUN_0049ed44();
  piVar1 = (int *)(*(int *)(*(int *)(*(int *)PTR_DAT_004ab694 + 0xcc) + 0x2c) + 8);
  uVar2 = *(int *)(iVar3 + 8) + *piVar1;
  if (SCARRY4(*(int *)(iVar3 + 8),*piVar1)) {
    uVar2 = thunk_FUN_00402808(uVar2);
  }
  uVar4 = FUN_0049ed44();
  FUN_0048dca4(uVar4,uVar2);
  uVar2 = FUN_0045f46c();
  FUN_0045fe88(uVar2,0x49f0e8);
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  return;
}


