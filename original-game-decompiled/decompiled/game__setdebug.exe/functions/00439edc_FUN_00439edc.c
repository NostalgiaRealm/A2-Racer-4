
/* ==== FUN_00439edc @ 00439edc ==== 
 * signature: undefined __register FUN_00439edc(int * param_1)
 * body: 00439edc-00439f4c
 */

void FUN_00439edc(int *param_1)

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
  pcStack_20 = thunk_FUN_00403434;
  pcStack_24 = (code *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_24;
  piVar1 = FUN_00439eb4(param_1);
  if (piVar1 == (int *)0x0) {
    local_c = param_1[2];
    local_8 = 0xb;
    piVar1 = &local_c;
    in_stack_ffffffd4 = 0;
    FUN_00405298((undefined4 *)PTR_PTR_00446ca8,(int *)&local_10);
    uVar2 = FUN_0040a974((int)&DAT_0040d94c,'\x01',local_10,in_stack_ffffffd4,piVar1);
    FUN_0040346c(uVar2);
  }
  *in_FS_OFFSET = in_stack_ffffffd4;
  pcStack_24 = FUN_00439f54;
  FUN_004039b8((int *)&local_10);
  return;
}


