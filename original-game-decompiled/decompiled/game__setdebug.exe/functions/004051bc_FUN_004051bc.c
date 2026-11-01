
/* ==== FUN_004051bc @ 004051bc ==== 
 * signature: undefined __register FUN_004051bc(undefined4 param_1, undefined4 param_2, undefined1 * param_3)
 * body: 004051bc-004051f6;00405201-00405215
 */

void FUN_004051bc(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  undefined1 *puStack_1c;
  
  for (puVar1 = DAT_00446018; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    pcStack_20 = thunk_FUN_00403180;
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


