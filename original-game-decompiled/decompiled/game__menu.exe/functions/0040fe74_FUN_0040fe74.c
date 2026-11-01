
/* ==== FUN_0040fe74 @ 0040fe74 ==== 
 * signature: undefined __register FUN_0040fe74(void)
 * body: 0040fe74-0040fed3
 */

void FUN_0040fe74(void)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  pvVar2 = FUN_0040655c();
  if (*(int *)((int)pvVar2 + 0xc) == 0) {
    uVar3 = FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',extraout_ECX);
    pvVar2 = FUN_0040655c();
    *(undefined4 *)((int)pvVar2 + 0xc) = uVar3;
  }
  pvVar2 = FUN_0040655c();
  iVar1 = *(int *)((int)pvVar2 + 8);
  pvVar2 = FUN_0040655c();
  FUN_00410104(*(int **)((int)pvVar2 + 0xc),iVar1);
  uVar3 = FUN_00402f6c((int *)&PTR_TList_vmt_000_0040ea6c,'\x01',extraout_ECX_00);
  pvVar2 = FUN_0040655c();
  *(undefined4 *)((int)pvVar2 + 8) = uVar3;
  return;
}


