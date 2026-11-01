
/* ==== TPageControl.set_Style @ 00484d78 ==== 
 * signature: undefined TPageControl.set_Style(void)
 * body: 00484d78-00484de1
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TPageControl_set_Style(int param_1,char param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  char extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined1 *puStack_c;
  undefined4 *puStack_8;
  
  puStack_c = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  puStack_10 = &UNK_00484de2;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  if (param_2 != *(char *)(param_1 + 0x20d)) {
    puVar1 = &stack0xfffffffc;
    if ((param_2 != '\0') && (puVar1 = &stack0xfffffffc, *(char *)(param_1 + 0x20e) != '\0')) {
      FUN_00405808((undefined4 *)PTR_PTR_004ab828,(int *)&puStack_8);
      piVar2 = FUN_0040b5d8((int *)&DAT_0040ea0c,'\x01',puStack_8);
      param_1 = FUN_004036f4(piVar2);
      param_2 = extraout_DL;
      puVar1 = puStack_c;
    }
    puStack_c = puVar1;
    *(char *)(param_1 + 0x20d) = param_2;
    FUN_00431e04(param_1);
  }
  *in_FS_OFFSET = uStack_14;
  puStack_c = &UNK_00484de9;
  puStack_10 = (undefined *)0x484de1;
  FUN_00403c5c((int *)&puStack_8);
  return;
}


