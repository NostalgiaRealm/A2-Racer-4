
/* ==== FUN_00456660 @ 00456660 ==== 
 * signature: undefined __register FUN_00456660(int * param_1, byte param_2, undefined4 param_3)
 * body: 00456660-004566c8;004566e0-00456702
 */

void FUN_00456660(int *param_1,byte param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  
  if (((1 < *(int *)(param_1[9] + 4)) || (*(char *)(param_1[9] + 0x41c) != '\0')) ||
     ((param_2 == 0 && (*(char *)(param_1[9] + 0x42c) != '\0')))) {
    puStack_18 = (undefined1 *)0x456699;
    piVar1 = FUN_004550a4((int *)&PTR_TDIBSharedImage_vmt_000_00454a44,'\x01',param_3);
    pcStack_1c = thunk_FUN_00403408;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_00455970(piVar1,param_1[9],
                 CONCAT31((int3)((uint)extraout_ECX >> 8),*(byte *)(param_1[9] + 0x42c) & param_2));
    *in_FS_OFFSET = uStack_20;
    *(undefined1 *)(piVar1 + 0x10b) = 1;
    puStack_18 = (undefined1 *)0x4566f4;
    FUN_00457048((int)param_1,(int)piVar1);
    puStack_18 = (undefined1 *)0x4566fd;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}


