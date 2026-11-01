
/* ==== FUN_0040bcdc @ 0040bcdc ==== 
 * signature: undefined __register FUN_0040bcdc(void)
 * body: 0040bcdc-0040bd9c
 */

void FUN_0040bcdc(void)

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
  pcStack_14 = thunk_FUN_004036bc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00405808((undefined4 *)PTR_PTR_004ab6dc,(int *)&local_8);
  DAT_004ac600 = FUN_0040b5d8((int *)&DAT_0040773c,'\x01',local_8);
  FUN_00405808((undefined4 *)PTR_PTR_004ab874,(int *)&local_c);
  DAT_004ac604 = FUN_0040b5d8((int *)&DAT_00407bc4,'\x01',local_c);
  *(code **)PTR_DAT_004ab620 = FUN_0040b858;
  *(code **)PTR_DAT_004ab75c = FUN_0040bccc;
  *(undefined **)PTR_DAT_004ab6b8 = &DAT_00407624;
  *(code **)PTR_DAT_004ab738 = FUN_0040ba20;
  *(code **)PTR_DAT_004ab764 = FUN_0040bc00;
  *(code **)PTR_DAT_004ab8a4 = FUN_0040b958;
  *(code **)PTR_DAT_004ab608 = FUN_0040b974;
  *in_FS_OFFSET = uStack_18;
  pcStack_10 = FUN_0040bda4;
  pcStack_14 = (code *)0x40bd9c;
  FUN_00403c80((int *)&local_c,2);
  return;
}


