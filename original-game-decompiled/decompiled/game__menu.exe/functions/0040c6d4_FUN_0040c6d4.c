
/* ==== FUN_0040c6d4 @ 0040c6d4 ==== 
 * signature: undefined __register FUN_0040c6d4(void)
 * body: 0040c6d4-0040c75d
 */

void FUN_0040c6d4(void)

{
  DWORD DVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffd0;
  code *pcStack_28;
  code *pcStack_24;
  undefined1 *puStack_20;
  int local_18;
  DWORD local_14;
  undefined1 local_10;
  int local_c;
  undefined1 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_18 = 0;
  pcStack_24 = thunk_FUN_004036bc;
  pcStack_28 = (code *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_28;
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    piVar2 = FUN_0040b694((int *)&DAT_00407fb8,'\x01',(undefined4 *)PTR_PTR_004ab72c);
  }
  else {
    local_10 = 0;
    local_14 = DVar1;
    FUN_0040adec(DVar1,&local_18);
    local_c = local_18;
    local_8 = 0xb;
    in_stack_ffffffd0 = 1;
    piVar2 = (int *)FUN_0040b6d0((int)&DAT_00407fb8,'\x01',(undefined4 *)PTR_PTR_004ab648,1,
                                 &local_14);
  }
  piVar2[3] = DVar1;
  FUN_004036f4(piVar2);
  *in_FS_OFFSET = in_stack_ffffffd0;
  pcStack_28 = FUN_0040c765;
  FUN_00403c5c(&local_18);
  return;
}


