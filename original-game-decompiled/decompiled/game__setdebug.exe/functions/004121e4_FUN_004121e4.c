
/* ==== FUN_004121e4 @ 004121e4 ==== 
 * signature: undefined __register FUN_004121e4(int * param_1, int * param_2, uint param_3)
 * body: 004121e4-0041223e;00412246-00412253
 */

void FUN_004121e4(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  undefined1 *puStack_10;
  
  if (param_1[0xc] == 0) {
    puStack_10 = (undefined1 *)0x412203;
    iVar1 = FUN_00402ce4((int *)&PTR_TList_vmt_000_0040d9ac,'\x01',param_3);
    param_1[0xc] = iVar1;
    pcStack_14 = thunk_FUN_00403434;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    FUN_00412254(param_1,param_2,extraout_ECX);
    FUN_004119b8(param_1);
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x412250;
    pcStack_14 = (code *)0x41223e;
    FUN_00411afc((int)param_1);
    return;
  }
  puStack_10 = (undefined1 *)0x412250;
  FUN_00412254(param_1,param_2,param_3);
  return;
}


