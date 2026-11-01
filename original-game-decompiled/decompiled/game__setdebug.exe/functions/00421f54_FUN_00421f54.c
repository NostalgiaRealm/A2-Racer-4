
/* ==== FUN_00421f54 @ 00421f54 ==== 
 * signature: undefined FUN_00421f54(void)
 * body: 00421f54-0042201a;0042203a-00422040
 */

void FUN_00421f54(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined *puStack_20;
  undefined1 *puStack_1c;
  tagPOINT tStack_c;
  
  puStack_1c = &stack0xfffffffc;
  puStack_20 = &DAT_0042201b;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar1 = *param_2;
  if (iVar1 < 0x216) {
    if (iVar1 == 0x215) {
      puStack_1c = &stack0xfffffffc;
      FUN_00422fac('\0');
    }
    else if (iVar1 == 0x200) {
      puStack_1c = &stack0xfffffffc;
      FUN_004069d4(param_2[2],&tStack_c.x);
      ClientToScreen(DAT_00447758,&tStack_c);
      FUN_00422930(&tStack_c);
    }
    else if ((iVar1 == 0x202) || (iVar1 == 0x205)) {
      puStack_1c = &stack0xfffffffc;
      FUN_00422fac('\x01');
    }
  }
  else if (iVar1 == 0xbd00) {
    if (param_2[1] == 0x11) {
      FUN_00422930((POINT *)(DAT_00447750 + 0xc));
    }
    else if (param_2[1] == 0x1b) {
      param_2[3] = 1;
      puStack_1c = &stack0xfffffffc;
      FUN_00422fac('\0');
    }
  }
  else if ((iVar1 == 0xbd01) && (param_2[1] == 0x11)) {
    puStack_1c = &stack0xfffffffc;
    FUN_00422930((POINT *)(DAT_00447750 + 0xc));
  }
  *in_FS_OFFSET = uStack_24;
  return;
}


