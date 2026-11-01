
/* ==== FUN_0049eef0 @ 0049eef0 ==== 
 * signature: undefined FUN_0049eef0(void)
 * body: 0049eef0-0049efa4
 */

void FUN_0049eef0(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_004ab694;
  uVar2 = FUN_0045f46c();
  FUN_0045fb90(uVar2,(undefined4 *)"CheckChaseQualify",0);
  *(byte *)(*(int *)puVar1 + 0xd0) = *(byte *)(*(int *)puVar1 + 0xd0) | 2;
  uVar2 = FUN_0045f46c();
  FUN_0045fe88(uVar2,0x49efd4);
  FUN_0048d458(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10));
  FUN_0048dd00();
  iVar3 = FUN_00462abc(*(int *)(*(int *)(*(int *)puVar1 + 0xcc) + 0x3c));
  uVar2 = iVar3 - 1;
  if (SBORROW4(iVar3,1)) {
    uVar2 = thunk_FUN_00402808(uVar2);
  }
  if (uVar2 == *(uint *)(*(int *)(*(int *)(*(int *)puVar1 + 0xc0) + 0x10) + 0xc)) {
    *(byte *)(*(int *)puVar1 + 0xd0) = *(byte *)(*(int *)puVar1 + 0xd0) | 4;
    uVar2 = FUN_0045f46c();
    FUN_0045fe88(uVar2,0x49eff8);
  }
  uVar2 = FUN_0045f46c();
  FUN_0045fc70(uVar2);
  return;
}


