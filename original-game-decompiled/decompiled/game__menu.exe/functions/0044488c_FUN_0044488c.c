
/* ==== FUN_0044488c @ 0044488c ==== 
 * signature: undefined __register FUN_0044488c(int * param_1)
 * body: 0044488c-004448fc
 */

void FUN_0044488c(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffd4;
  code *pcStack_24;
  code *pcStack_20;
  undefined1 *puStack_1c;
  byte *local_10;
  int local_c;
  undefined1 local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_10 = (byte *)0x0;
  pcStack_20 = thunk_FUN_004036bc;
  pcStack_24 = (code *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_24;
  piVar1 = FUN_00444864(param_1);
  if (piVar1 == (int *)0x0) {
    local_c = param_1[2];
    local_8 = 0xb;
    piVar1 = &local_c;
    in_stack_ffffffd4 = 0;
    FUN_00405808((undefined4 *)PTR_PTR_004ab8f0,(int *)&local_10);
    uVar2 = FUN_0040b614((int)&DAT_0040ea0c,'\x01',local_10,in_stack_ffffffd4,piVar1);
    FUN_004036f4(uVar2);
  }
  *in_FS_OFFSET = in_stack_ffffffd4;
  pcStack_24 = FUN_00444904;
  FUN_00403c5c((int *)&local_10);
  return;
}


