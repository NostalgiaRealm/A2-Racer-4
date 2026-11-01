
/* ==== FUN_0040ec38 @ 0040ec38 ==== 
 * signature: undefined __register FUN_0040ec38(void)
 * body: 0040ec38-0040ec97
 */

void FUN_0040ec38(void)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  pvVar2 = FUN_00405fa4();
  if (*(int *)((int)pvVar2 + 0xc) == 0) {
    uVar3 = FUN_00402ce4((int *)&PTR_TList_vmt_000_0040d9ac,'\x01',extraout_ECX);
    pvVar2 = FUN_00405fa4();
    *(undefined4 *)((int)pvVar2 + 0xc) = uVar3;
  }
  pvVar2 = FUN_00405fa4();
  iVar1 = *(int *)((int)pvVar2 + 8);
  pvVar2 = FUN_00405fa4();
  FUN_0040eec8(*(int **)((int)pvVar2 + 0xc),iVar1);
  uVar3 = FUN_00402ce4((int *)&PTR_TList_vmt_000_0040d9ac,'\x01',extraout_ECX_00);
  pvVar2 = FUN_00405fa4();
  *(undefined4 *)((int)pvVar2 + 8) = uVar3;
  return;
}


