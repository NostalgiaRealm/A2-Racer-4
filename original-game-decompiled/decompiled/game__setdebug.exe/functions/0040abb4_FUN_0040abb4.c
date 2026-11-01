
/* ==== FUN_0040abb4 @ 0040abb4 ==== 
 * signature: undefined __register FUN_0040abb4(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 0040abb4-0040ac4f
 */

void FUN_0040abb4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  int *piVar2;
  code *pcStack_3c;
  code *pcStack_38;
  undefined1 *puStack_34;
  byte *local_24;
  int local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined1 local_c;
  int local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_24 = (byte *)0x0;
  local_8 = 0;
  pcStack_38 = thunk_FUN_00403434;
  pcStack_3c = (code *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_3c;
  if (param_1 == 0) {
    FUN_00405298((undefined4 *)PTR_PTR_00446ca4,&local_8);
  }
  else {
    puStack_34 = &stack0xfffffffc;
    FUN_00403a50(&local_8,param_1);
  }
  local_20 = local_8;
  local_1c = 0xb;
  local_14 = 0xb;
  local_c = 0;
  piVar2 = &local_20;
  uVar1 = 2;
  local_18 = param_2;
  local_10 = param_3;
  FUN_00405298((undefined4 *)PTR_PTR_00446d00,(int *)&local_24);
  FUN_0040a974((int)&DAT_0040774c,'\x01',local_24,uVar1,piVar2);
  *in_FS_OFFSET = uVar1;
  pcStack_3c = FUN_0040ac57;
  FUN_004039b8((int *)&local_24);
  FUN_004039b8(&local_8);
  return;
}


