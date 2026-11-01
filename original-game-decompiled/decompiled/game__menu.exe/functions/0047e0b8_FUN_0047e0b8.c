
/* ==== FUN_0047e0b8 @ 0047e0b8 ==== 
 * signature: undefined FUN_0047e0b8(void)
 * body: 0047e0b8-0047e16c
 */

void FUN_0047e0b8(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined *puStack_30;
  undefined1 *puStack_2c;
  int *piStack_24;
  OLECHAR aOStack_20 [2];
  int *piStack_1c;
  _union_2683 _Stack_18;
  int iStack_8;
  
  puStack_2c = &stack0xfffffffc;
  iStack_8 = 0;
  _Stack_18._12_4_ = 0;
  _Stack_18._8_4_ = 0;
  _Stack_18.decVal.Hi32 = 0;
  _Stack_18._0_4_ = 0;
  piStack_1c = (int *)0x0;
  aOStack_20[0] = L'\0';
  aOStack_20[1] = L'\0';
  piStack_24 = (int *)0x0;
  puStack_30 = &UNK_0047e16d;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  FUN_00405860(&iStack_8);
  FUN_00404ea4((VARIANTARG *)&_Stack_18.n2,0);
  FUN_00405860((int *)&piStack_1c);
  FUN_004043f8(aOStack_20,*(LPCSTR *)(param_1 + 0xc));
  FUN_00472904(*(int *)(param_1 + 4),(int *)&piStack_24);
  iVar2 = (**(code **)(*piStack_24 + 0x1c))();
  FUN_0040595c(iVar2);
  piVar1 = piStack_1c;
  iVar2 = (**(code **)(*piStack_1c + 0x84))();
  FUN_0040595c(iVar2);
  *in_FS_OFFSET = piVar1;
  FUN_00405860((int *)&piStack_24);
  FUN_004042b4((undefined4 *)aOStack_20);
  FUN_00405860((int *)&piStack_1c);
  FUN_00405038((VARIANTARG *)&_Stack_18.n2);
  FUN_00405860(&iStack_8);
  return;
}


