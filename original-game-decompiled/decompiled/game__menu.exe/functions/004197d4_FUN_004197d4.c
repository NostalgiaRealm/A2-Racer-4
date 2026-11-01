
/* ==== FUN_004197d4 @ 004197d4 ==== 
 * signature: undefined __register FUN_004197d4(void)
 * body: 004197d4-0041981d
 */

void FUN_004197d4(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  code *pcStack_10;
  code *pcStack_c;
  undefined4 *local_8;
  
  pcStack_c = (code *)&stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  pcStack_10 = thunk_FUN_004036bc;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  FUN_00405808((undefined4 *)PTR_PTR_004ab670,(int *)&local_8);
  piVar1 = FUN_0040b5d8((int *)&DAT_0040e9b0,'\x01',local_8);
  FUN_004036f4(piVar1);
  *in_FS_OFFSET = uStack_14;
  pcStack_c = FUN_00419825;
  pcStack_10 = (code *)0x41981d;
  FUN_00403c5c((int *)&local_8);
  return;
}


