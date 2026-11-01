
/* ==== TMenu.dyn_fff0 @ 00440634 ==== 
 * signature: undefined TMenu.dyn_fff0(void)
 * body: 00440634-004406d5;004406dd-004406ee
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

undefined4 TMenu_dyn_fff0(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined *puStack_20;
  undefined1 *puVar2;
  int iStack_8;
  
  puVar2 = &stack0xfffffffc;
  puStack_20 = (undefined *)0x440650;
  GetKeyState(0x10);
  puStack_20 = (undefined *)0x440662;
  GetKeyState(0x11);
  iStack_8 = FUN_0044038c(param_1);
  if (iStack_8 == 0) {
    return 0;
  }
  FUN_0042014c(DAT_004ac7c8,&iStack_8);
  puStack_20 = &UNK_004406d6;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_004404e0(&iStack_8,0,extraout_ECX,(int)&stack0xfffffffc);
  *in_FS_OFFSET = uStack_24;
  puStack_20 = (undefined *)0x4406d5;
  uVar1 = FUN_00420144(DAT_004ac7c8,uStack_24,puVar2);
  return uVar1;
}


