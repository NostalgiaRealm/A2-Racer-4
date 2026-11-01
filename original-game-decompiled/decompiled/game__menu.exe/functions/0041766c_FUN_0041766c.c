
/* ==== FUN_0041766c @ 0041766c ==== 
 * signature: undefined __register FUN_0041766c(int param_1, byte * param_2)
 * body: 0041766c-0041773f
 */

void FUN_0041766c(int param_1,byte *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  undefined4 *local_c;
  
  pcStack_18 = (code *)0x417687;
  uVar1 = FUN_004175e0(param_2,(uint)*(ushort *)(param_1 + 0x20));
  pcStack_18 = (code *)0x417691;
  FUN_00417654(param_1);
  pcStack_1c = thunk_FUN_004036bc;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  pcStack_18 = (code *)&stack0xfffffffc;
  for (local_c = *(undefined4 **)(param_1 + 4); local_c != (undefined4 *)0x0;
      local_c = (undefined4 *)*local_c) {
    if ((short)uVar1 == *(short *)(local_c + 3)) {
      uVar2 = FUN_00408298(local_c + 4,(int *)param_2,(uint)*(ushort *)(param_1 + 0x20));
      if ((char)uVar2 != '\0') break;
    }
  }
  if (local_c == (undefined4 *)0x0) {
    local_c = (undefined4 *)FUN_0040277c(*(ushort *)(param_1 + 0x20) + 0x10);
    *local_c = *(undefined4 *)(param_1 + 4);
    local_c[1] = 0;
    local_c[2] = *(undefined4 *)param_2;
    *(short *)(local_c + 3) = (short)uVar1;
    FUN_004028d8((undefined4 *)param_2,local_c + 4,(uint)*(ushort *)(param_1 + 0x20));
    *(undefined4 **)(param_1 + 4) = local_c;
  }
  local_c[1] = local_c[1] + 1;
  *in_FS_OFFSET = uStack_20;
  pcStack_18 = FUN_00417747;
  pcStack_1c = (code *)0x41773f;
  FUN_00417660(param_1);
  return;
}


