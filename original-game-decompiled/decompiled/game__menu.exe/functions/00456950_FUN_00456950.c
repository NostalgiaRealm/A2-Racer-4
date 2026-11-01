
/* ==== FUN_00456950 @ 00456950 ==== 
 * signature: undefined __register FUN_00456950(int * param_1, int param_2)
 * body: 00456950-004569e1
 */

void FUN_00456950(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffd4;
  int *piVar2;
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
  FUN_00456660(param_1,1,0);
  if ((param_2 < 0) || (param_1[0x10] <= param_2)) {
    local_8 = 0;
    piVar2 = &local_c;
    in_stack_ffffffd4 = 0;
    local_c = param_2;
    FUN_00405808((undefined4 *)PTR_PTR_004ab92c,(int *)&local_10);
    uVar1 = FUN_0040b614((int)&DAT_004166f4,'\x01',local_10,in_stack_ffffffd4,piVar2);
    FUN_004036f4(uVar1);
  }
  if (*(char *)(param_1[9] + 0x42c) == '\0') {
    GdiFlush();
  }
  *in_FS_OFFSET = in_stack_ffffffd4;
  pcStack_24 = FUN_004569e9;
  FUN_00403c5c((int *)&local_10);
  return;
}


