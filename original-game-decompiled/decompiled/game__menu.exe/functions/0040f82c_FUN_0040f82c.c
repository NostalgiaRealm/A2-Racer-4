
/* ==== FUN_0040f82c @ 0040f82c ==== 
 * signature: undefined __register FUN_0040f82c(undefined4 param_1)
 * body: 0040f82c-0040f88b
 */

void FUN_0040f82c(undefined4 param_1)

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
  pcStack_1c = thunk_FUN_004036bc;
  pcStack_20 = (code *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_20;
  local_8 = 0xb;
  puVar3 = &local_c;
  uVar2 = 0;
  local_c = param_1;
  FUN_00405808((undefined4 *)PTR_PTR_004ab98c,(int *)&local_10);
  uVar1 = FUN_0040b614((int)&DAT_0040e78c,'\x01',local_10,uVar2,puVar3);
  FUN_004036f4(uVar1);
  *in_FS_OFFSET = uVar2;
  pcStack_20 = FUN_0040f893;
  FUN_00403c5c((int *)&local_10);
  return;
}


