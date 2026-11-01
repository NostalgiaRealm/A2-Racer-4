
/* ==== FUN_0040572c @ 0040572c ==== 
 * signature: undefined __register FUN_0040572c(undefined4 param_1, undefined4 param_2, undefined1 * param_3)
 * body: 0040572c-00405766;00405771-00405785
 */

void FUN_0040572c(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  undefined1 *puStack_1c;
  
  for (puVar1 = DAT_004aa020; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    pcStack_20 = thunk_FUN_00403408;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    (*(code *)puVar1[1])(param_1,param_2,param_3);
    *in_FS_OFFSET = uStack_24;
    param_2 = uStack_24;
    param_3 = puStack_1c;
  }
  return;
}


