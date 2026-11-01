
/* ==== TMenu.dyn_fff0 @ 00435f54 ==== 
 * signature: undefined TMenu.dyn_fff0(void)
 * body: 00435f54-00435ff5;00435ffd-0043600e
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
  puStack_20 = (undefined *)0x435f70;
  GetKeyState(0x10);
  puStack_20 = (undefined *)0x435f82;
  GetKeyState(0x11);
  iStack_8 = FUN_00435cac(param_1);
  if (iStack_8 == 0) {
    return 0;
  }
  FUN_0041d3f0(DAT_004477b8,&iStack_8);
  puStack_20 = &UNK_00435ff6;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_00435e00(&iStack_8,0,extraout_ECX,(int)&stack0xfffffffc);
  *in_FS_OFFSET = uStack_24;
  puStack_20 = (undefined *)0x435ff5;
  uVar1 = FUN_0041d3e8(DAT_004477b8,uStack_24,puVar2);
  return uVar1;
}


