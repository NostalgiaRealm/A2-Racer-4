
/* ==== FUN_004272f0 @ 004272f0 ==== 
 * signature: undefined __register FUN_004272f0(int * param_1, undefined4 param_2)
 * body: 004272f0-00427376;0042737e-00427382
 */

void FUN_004272f0(int *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  code *pcStack_24;
  undefined1 *puStack_20;
  undefined1 local_18 [16];
  int *local_8;
  
  puStack_20 = (undefined1 *)0x427304;
  local_8 = param_1;
  bVar1 = FUN_0042abb0((int)param_1);
  if ((bVar1) && ((*(byte *)(local_8 + 8) & 8) == 0)) {
    if ((short)local_8[0x48] == 0) {
      puStack_20 = (undefined1 *)0x427330;
      FUN_00427384((int)local_8);
      pcStack_24 = thunk_FUN_00403434;
      uStack_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_28;
      puStack_20 = &stack0xfffffffc;
      (**(code **)(*local_8 + 0x40))(local_8,local_18);
      (**(code **)(*local_8 + 0x88))(local_8,param_2,local_18);
      *in_FS_OFFSET = uStack_28;
      puStack_20 = (undefined1 *)0x42737e;
      *(ushort *)(local_8 + 0x11) = *(ushort *)(local_8 + 0x11) & 0xffef;
      pcStack_24 = (code *)0x427376;
      FUN_0042738c((int)local_8);
      return;
    }
    *(ushort *)(local_8 + 0x11) = *(ushort *)(local_8 + 0x11) | 0x10;
  }
  return;
}


