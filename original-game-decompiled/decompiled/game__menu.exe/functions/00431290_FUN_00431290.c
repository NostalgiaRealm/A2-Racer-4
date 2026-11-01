
/* ==== FUN_00431290 @ 00431290 ==== 
 * signature: undefined __register FUN_00431290(int * param_1, undefined4 param_2)
 * body: 00431290-00431316;0043131e-00431322
 */

void FUN_00431290(int *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  code *pcStack_24;
  undefined1 *puStack_20;
  undefined1 local_18 [16];
  int *local_8;
  
  puStack_20 = (undefined1 *)0x4312a4;
  local_8 = param_1;
  bVar1 = FUN_00434cdc((int)param_1);
  if ((bVar1) && ((*(byte *)(local_8 + 8) & 8) == 0)) {
    if ((short)local_8[0x48] == 0) {
      puStack_20 = (undefined1 *)0x4312d0;
      FUN_00431324((int)local_8);
      pcStack_24 = thunk_FUN_004036bc;
      uStack_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_28;
      puStack_20 = &stack0xfffffffc;
      (**(code **)(*local_8 + 0x40))(local_8,local_18);
      (**(code **)(*local_8 + 0x88))(local_8,param_2,local_18);
      *in_FS_OFFSET = uStack_28;
      puStack_20 = (undefined1 *)0x43131e;
      *(ushort *)(local_8 + 0x11) = *(ushort *)(local_8 + 0x11) & 0xffef;
      pcStack_24 = (code *)0x431316;
      FUN_0043132c((int)local_8);
      return;
    }
    *(ushort *)(local_8 + 0x11) = *(ushort *)(local_8 + 0x11) | 0x10;
  }
  return;
}


