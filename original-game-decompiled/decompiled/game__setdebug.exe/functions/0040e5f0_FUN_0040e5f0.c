
/* ==== FUN_0040e5f0 @ 0040e5f0 ==== 
 * signature: undefined __register FUN_0040e5f0(undefined4 param_1)
 * body: 0040e5f0-0040e64f
 */

void FUN_0040e5f0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 *puVar3;
  code *pcStack_20;
  code *pcStack_1c;
  undefined1 *puStack_18;
  byte *local_10;
  undefined4 local_c;
  undefined1 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_10 = (byte *)0x0;
  pcStack_1c = thunk_FUN_00403434;
  pcStack_20 = (code *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_20;
  local_8 = 0xb;
  puVar3 = &local_c;
  uVar2 = 0;
  local_c = param_1;
  FUN_00405298((undefined4 *)PTR_PTR_00446d24,(int *)&local_10);
  uVar1 = FUN_0040a974((int)&DAT_0040d6cc,'\x01',local_10,uVar2,puVar3);
  FUN_0040346c(uVar1);
  *in_FS_OFFSET = uVar2;
  pcStack_20 = FUN_0040e657;
  FUN_004039b8((int *)&local_10);
  return;
}


