
/* ==== TPageControl.set_TabPosition @ 00484eb8 ==== 
 * signature: undefined TPageControl.set_TabPosition(void)
 * body: 00484eb8-00484f42
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TPageControl_set_TabPosition(int param_1,char param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  char extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined1 *puStack_10;
  undefined4 *puStack_8;
  
  puStack_10 = &stack0xfffffffc;
  puStack_8 = (undefined4 *)0x0;
  puStack_14 = &UNK_00484f43;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  if (param_2 != *(char *)(param_1 + 0x20e)) {
    puVar1 = &stack0xfffffffc;
    if ((param_2 != '\0') && (puVar1 = &stack0xfffffffc, *(char *)(param_1 + 0x20d) != '\0')) {
      FUN_00405808((undefined4 *)PTR_PTR_004ab64c,(int *)&puStack_8);
      piVar2 = FUN_0040b5d8((int *)&DAT_0040ea0c,'\x01',puStack_8);
      FUN_004036f4(piVar2);
      param_2 = extraout_DL;
      puVar1 = puStack_10;
    }
    puStack_10 = puVar1;
    *(char *)(param_1 + 0x20e) = param_2;
    if ((*(char *)(param_1 + 0x200) == '\0') && ((param_2 == '\x02' || (param_2 == '\x03')))) {
      FUN_00484c78(param_1,'\x01');
    }
    FUN_00431e04(param_1);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &UNK_00484f4a;
  puStack_14 = (undefined *)0x484f42;
  FUN_00403c5c((int *)&puStack_8);
  return;
}


