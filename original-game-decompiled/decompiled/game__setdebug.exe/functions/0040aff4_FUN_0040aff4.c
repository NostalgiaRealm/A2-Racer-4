
/* ==== FUN_0040aff4 @ 0040aff4 ==== 
 * signature: undefined __register FUN_0040aff4(void)
 * body: 0040aff4-0040b0b4
 */

void FUN_0040aff4(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  code *pcStack_14;
  code *pcStack_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
  pcStack_10 = (code *)&stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  pcStack_14 = thunk_FUN_00403434;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00405298((undefined4 *)PTR_PTR_00446b04,(int *)&local_8);
  DAT_004475f8 = FUN_0040a938((int *)&DAT_00406fe8,'\x01',local_8);
  FUN_00405298((undefined4 *)PTR_PTR_00446c58,(int *)&local_c);
  DAT_004475fc = FUN_0040a938((int *)&DAT_00407470,'\x01',local_c);
  *(code **)PTR_DAT_00446a8c = FUN_0040ab70;
  *(code **)PTR_DAT_00446b74 = FUN_0040afe4;
  *(undefined **)PTR_DAT_00446af4 = &DAT_00406ed0;
  *(code **)PTR_DAT_00446b58 = FUN_0040ad38;
  *(code **)PTR_DAT_00446b7c = FUN_0040af18;
  *(code **)PTR_DAT_00446c78 = FUN_0040ac70;
  *(code **)PTR_DAT_00446a7c = FUN_0040ac8c;
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_0040b0bc;
  pcStack_14 = (code *)0x40b0b4;
  FUN_004039dc((int *)&local_c,2);
  return;
}


