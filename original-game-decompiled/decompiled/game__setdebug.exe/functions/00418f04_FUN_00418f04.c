
/* ==== FUN_00418f04 @ 00418f04 ==== 
 * signature: undefined __register FUN_00418f04(int * param_1, undefined * param_2, undefined4 * param_3, undefined4 param_4, undefined4 param_5)
 * body: 00418f04-00418f86
 */

void FUN_00418f04(int *param_1,undefined *param_2,undefined4 *param_3,undefined4 param_4,
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
  pcStack_24 = thunk_FUN_00403434;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_c = param_3;
  local_8 = param_2;
  puVar1 = FUN_00404564(0x10,"\x0e\vTFileFormat\x10");
  FUN_00407af4(local_8,(int *)&local_10);
  FUN_00403a0c(puVar1 + 1,local_10);
  *puVar1 = param_4;
  FUN_00403a0c(puVar1 + 2,local_c);
  puVar1[3] = param_5;
  FUN_0040eec8(param_1,(int)puVar1);
  *in_FS_OFFSET = uStack_28;
  pcStack_20 = FUN_00418f8e;
  pcStack_24 = (code *)0x418f86;
  FUN_004039b8((int *)&local_10);
  return;
}


