
/* ==== FUN_0041afac @ 0041afac ==== 
 * signature: undefined __register FUN_0041afac(int * param_1, undefined * param_2, undefined4 * param_3, undefined4 param_4, undefined4 param_5)
 * body: 0041afac-0041b02e
 */

void FUN_0041afac(int *param_1,undefined *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  code *pcStack_24;
  code *pcStack_20;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined *local_8;
  
  pcStack_20 = (code *)&stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  pcStack_24 = thunk_FUN_004036bc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_c = param_3;
  local_8 = param_2;
  puVar1 = FUN_0040487c(0x10,"\x0e\vTFileFormat\x10");
  FUN_00408330(local_8,(int *)&local_10);
  FUN_00403cb0(puVar1 + 1,local_10);
  *puVar1 = param_4;
  FUN_00403cb0(puVar1 + 2,local_c);
  puVar1[3] = param_5;
  FUN_00410104(param_1,(int)puVar1);
  *in_FS_OFFSET = uStack_28;
  pcStack_20 = FUN_0041b036;
  pcStack_24 = (code *)0x41b02e;
  FUN_00403c5c((int *)&local_10);
  return;
}


