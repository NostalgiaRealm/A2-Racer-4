
/* ==== FUN_0042be94 @ 0042be94 ==== 
 * signature: undefined FUN_0042be94(void)
 * body: 0042be94-0042bf5a;0042bf7a-0042bf80
 */

void FUN_0042be94(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined *puStack_20;
  undefined1 *puStack_1c;
  tagPOINT tStack_c;
  
  puStack_1c = &stack0xfffffffc;
  puStack_20 = &DAT_0042bf5b;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar1 = *param_2;
  if (iVar1 < 0x216) {
    if (iVar1 == 0x215) {
      puStack_1c = &stack0xfffffffc;
      FUN_0042ceec('\0');
    }
    else if (iVar1 == 0x200) {
      puStack_1c = &stack0xfffffffc;
      FUN_004070e8(param_2[2],&tStack_c.x);
      ClientToScreen(DAT_004ac768,&tStack_c);
      FUN_0042c870(&tStack_c);
    }
    else if ((iVar1 == 0x202) || (iVar1 == 0x205)) {
      puStack_1c = &stack0xfffffffc;
      FUN_0042ceec('\x01');
    }
  }
  else if (iVar1 == 0xbd00) {
    if (param_2[1] == 0x11) {
      FUN_0042c870((POINT *)(DAT_004ac760 + 0xc));
    }
    else if (param_2[1] == 0x1b) {
      param_2[3] = 1;
      puStack_1c = &stack0xfffffffc;
      FUN_0042ceec('\0');
    }
  }
  else if ((iVar1 == 0xbd01) && (param_2[1] == 0x11)) {
    puStack_1c = &stack0xfffffffc;
    FUN_0042c870((POINT *)(DAT_004ac760 + 0xc));
  }
  *in_FS_OFFSET = uStack_24;
  return;
}


