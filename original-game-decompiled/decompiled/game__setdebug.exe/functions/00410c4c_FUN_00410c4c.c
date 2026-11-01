
/* ==== FUN_00410c4c @ 00410c4c ==== 
 * signature: undefined __register FUN_00410c4c(int param_1, int * param_2)
 * body: 00410c4c-00410c9b
 */

void FUN_00410c4c(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_1c;
  code *pcStackY_18;
  
  pcStackY_18 = (code *)0x410c68;
  piVar1 = FUN_0041112c((int *)&PTR_TFiler_vmt_000_0040e234,'\x01',param_1,0x1000);
  pcStackY_18 = thunk_FUN_00403434;
  uStackY_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_1c;
  FUN_00412ea8(piVar1,param_2);
  *in_FS_OFFSET = uStackY_1c;
  pcStackY_18 = (code *)0x410c9b;
  FUN_00402d14(piVar1);
  return;
}


