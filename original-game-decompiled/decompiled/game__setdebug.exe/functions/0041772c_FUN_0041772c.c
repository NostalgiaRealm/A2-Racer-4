
/* ==== FUN_0041772c @ 0041772c ==== 
 * signature: undefined __register FUN_0041772c(void)
 * body: 0041772c-00417775
 */

void FUN_0041772c(void)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  code *pcStack_10;
  code *pcStack_c;
  undefined4 *local_8;
  
  pcStack_c = (code *)&stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  pcStack_10 = thunk_FUN_00403434;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  FUN_00405298((undefined4 *)PTR_PTR_00446ac0,(int *)&local_8);
  piVar1 = FUN_0040a938((int *)&DAT_0040d8f0,'\x01',local_8);
  FUN_0040346c(piVar1);
  *in_FS_OFFSET = uStack_14;
  pcStack_c = FUN_0041777d;
  pcStack_10 = (code *)0x417775;
  FUN_004039b8((int *)&local_8);
  return;
}


