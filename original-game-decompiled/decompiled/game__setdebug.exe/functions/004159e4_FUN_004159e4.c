
/* ==== FUN_004159e4 @ 004159e4 ==== 
 * signature: undefined __register FUN_004159e4(int param_1, byte * param_2)
 * body: 004159e4-00415ab7
 */

void FUN_004159e4(int param_1,byte *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  undefined4 *local_c;
  
  pcStack_18 = (code *)0x4159ff;
  uVar1 = FUN_00415958(param_2,(uint)*(ushort *)(param_1 + 0x20));
  pcStack_18 = (code *)0x415a09;
  FUN_004159cc(param_1);
  pcStack_1c = thunk_FUN_00403434;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  pcStack_18 = (code *)&stack0xfffffffc;
  for (local_c = *(undefined4 **)(param_1 + 4); local_c != (undefined4 *)0x0;
      local_c = (undefined4 *)*local_c) {
    if ((short)uVar1 == *(short *)(local_c + 3)) {
      uVar2 = FUN_00407a5c(local_c + 4,(int *)param_2,(uint)*(ushort *)(param_1 + 0x20));
      if ((char)uVar2 != '\0') break;
    }
  }
  if (local_c == (undefined4 *)0x0) {
    local_c = (undefined4 *)FUN_004026b8(*(ushort *)(param_1 + 0x20) + 0x10);
    *local_c = *(undefined4 *)(param_1 + 4);
    local_c[1] = 0;
    local_c[2] = *(undefined4 *)param_2;
    *(short *)(local_c + 3) = (short)uVar1;
    FUN_004027d0((undefined4 *)param_2,local_c + 4,(uint)*(ushort *)(param_1 + 0x20));
    *(undefined4 **)(param_1 + 4) = local_c;
  }
  local_c[1] = local_c[1] + 1;
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_00415abf;
  pcStack_1c = (code *)0x415ab7;
  FUN_004159d8(param_1);
  return;
}


