
/* ==== FUN_0045fed8 @ 0045fed8 ==== 
 * signature: undefined FUN_0045fed8(void)
 * body: 0045fed8-0045ff3a
 */

void FUN_0045fed8(uint param_1)

{
  undefined1 *extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined1 *puStack_14;
  undefined4 *puStack_c;
  int iStack_8;
  
  puStack_14 = &stack0xfffffffc;
  iStack_8 = 0;
  puStack_c = (undefined4 *)0x0;
  puStack_18 = &UNK_0045ff3b;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00409850();
  FUN_0040a47c((int *)&puStack_c,extraout_EDX,extraout_ECX);
  FUN_00403f28(&iStack_8,(undefined4 *)"Current date/time : ",puStack_c);
  FUN_0045f668(param_1,0x4d,iStack_8);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &UNK_0045ff42;
  puStack_18 = (undefined *)0x45ff3a;
  FUN_00403c80((int *)&puStack_c,2);
  return;
}


