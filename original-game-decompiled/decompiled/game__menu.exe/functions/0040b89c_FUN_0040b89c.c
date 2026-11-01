
/* ==== FUN_0040b89c @ 0040b89c ==== 
 * signature: undefined __register FUN_0040b89c(int param_1, undefined4 param_2, undefined4 param_3)
 * body: 0040b89c-0040b937
 */

void FUN_0040b89c(int param_1,undefined4 param_2,undefined4 param_3)

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
  pcStack_38 = thunk_FUN_004036bc;
  pcStack_3c = (code *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_3c;
  if (param_1 == 0) {
    FUN_00405808((undefined4 *)PTR_PTR_004ab8ec,&local_8);
  }
  else {
    puStack_34 = &stack0xfffffffc;
    FUN_00403cf4(&local_8,param_1);
  }
  local_20 = local_8;
  local_1c = 0xb;
  local_14 = 0xb;
  local_c = 0;
  piVar2 = &local_20;
  uVar1 = 2;
  local_18 = param_2;
  local_10 = param_3;
  FUN_00405808((undefined4 *)PTR_PTR_004ab964,(int *)&local_24);
  FUN_0040b614((int)&DAT_00407ea0,'\x01',local_24,uVar1,piVar2);
  *in_FS_OFFSET = uVar1;
  pcStack_3c = FUN_0040b93f;
  FUN_00403c5c((int *)&local_24);
  FUN_00403c5c(&local_8);
  return;
}


