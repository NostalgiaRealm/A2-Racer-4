
/* ==== FUN_0048b0c8 @ 0048b0c8 ==== 
 * signature: undefined __register FUN_0048b0c8(int * param_1, undefined * param_2)
 * body: 0048b0c8-0048b16b
 */

void FUN_0048b0c8(int *param_1,undefined *param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_38;
  code *pcStackY_34;
  int iVar3;
  undefined4 uStack_24;
  code *pcStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x48b0dc;
  FUN_00404090((int)param_2);
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  if (param_1 == (int *)0x0) {
    puStack_1c = &stack0xfffffffc;
    FUN_00403c40(" Self = nil: SaveToFile");
  }
  iVar3 = 0;
  uVar1 = FUN_0045f46c();
  FUN_0045fa3c(uVar1,0x48b1f4,0,iVar3);
  pcStackY_34 = (code *)0x48b13b;
  piVar2 = FUN_004128ac((int *)&PTR_THandleStream_vmt_000_0045e160,'\x01',param_2,0xffff);
  pcStackY_34 = thunk_FUN_004036bc;
  uStackY_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_38;
  (**(code **)(*param_1 + 0x10))(param_1,piVar2);
  *in_FS_OFFSET = uStackY_38;
  pcStackY_34 = (code *)0x48b16b;
  FUN_00402f9c(piVar2);
  return;
}


