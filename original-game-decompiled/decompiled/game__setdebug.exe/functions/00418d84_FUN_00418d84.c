
/* ==== FUN_00418d84 @ 00418d84 ==== 
 * signature: undefined __register FUN_00418d84(int * param_1, char param_2)
 * body: 00418d84-00418e60
 */

void FUN_00418d84(int *param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  code *pcVar2;
  undefined **ppuVar3;
  undefined4 uStack_38;
  code *pcStack_34;
  undefined1 *puStack_30;
  undefined4 in_stack_ffffffd4;
  undefined4 in_stack_ffffffd8;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  uVar1 = 0;
  local_8 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  if (param_2 != '\0') {
    puStack_30 = (undefined1 *)0x418d9b;
    param_1 = (int *)FUN_00403014((int)param_1,param_2,0,in_stack_ffffffd4,in_stack_ffffffd8);
    uVar1 = extraout_ECX;
  }
  pcStack_34 = thunk_FUN_00403434;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  FUN_00402ce4(param_1,'\0',uVar1);
  uVar1 = 0;
  ppuVar3 = &PTR_TPersistent_vmt_000_004155e0;
  FUN_00405298((undefined4 *)PTR_PTR_00446c28,(int *)&local_8);
  FUN_00418f04(param_1,&DAT_00418e90,local_8,ppuVar3,uVar1);
  uVar1 = 0;
  ppuVar3 = &PTR_TPersistent_vmt_000_004155e0;
  FUN_00405298((undefined4 *)PTR_PTR_00446acc,(int *)&local_c);
  FUN_00418f04(param_1,&DAT_00418e9c,local_c,ppuVar3,uVar1);
  uVar1 = 0;
  ppuVar3 = &PTR_TPersistent_vmt_000_0041585c;
  FUN_00405298((undefined4 *)PTR_PTR_00446ac8,(int *)&local_10);
  FUN_00418f04(param_1,&DAT_00418ea8,local_10,ppuVar3,uVar1);
  uVar1 = 0;
  pcVar2 = FUN_0041571c;
  FUN_00405298((undefined4 *)PTR_PTR_00446ac4,(int *)&local_14);
  FUN_00418f04(param_1,FUN_00418eb4,local_14,pcVar2,uVar1);
  *in_FS_OFFSET = pcVar2;
  FUN_004039dc((int *)&local_14,4);
  return;
}


