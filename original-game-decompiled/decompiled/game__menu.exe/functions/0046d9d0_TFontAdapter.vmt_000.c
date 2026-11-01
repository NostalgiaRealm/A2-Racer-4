
/* ==== TFontAdapter.vmt_000 @ 0046d9d0 ==== 
 * signature: undefined TFontAdapter.vmt_000(void)
 * body: 0046d9d0-0046db20;0046db28-0046db4d
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TFontAdapter_vmt_000(int param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined *puStack_20;
  undefined1 *puStack_1c;
  int iStack_18;
  LPCSTR pCStack_14;
  OLECHAR aOStack_10 [2];
  int *piStack_c;
  int iStack_8;
  
  puStack_1c = &stack0xfffffffc;
  puStack_28 = &stack0xfffffffc;
  piStack_c = (int *)0x0;
  aOStack_10[0] = L'\0';
  aOStack_10[1] = L'\0';
  pCStack_14 = (LPCSTR)0x0;
  iStack_18 = 0;
  puStack_20 = &UNK_0046db4e;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iStack_8 = param_1;
  if ((*(char *)(param_1 + 0x18) == '\0') && (*(int *)(param_1 + 0xc) != 0)) {
    *(undefined1 *)(param_1 + 0x18) = 1;
    puStack_2c = &UNK_0046db21;
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    FUN_00405894((int *)&piStack_c,*(undefined4 **)(param_1 + 0xc));
    TFont_get_Name(*(undefined4 *)(iStack_8 + 0x1c),&pCStack_14);
    FUN_004043f8(aOStack_10,pCStack_14);
    (**(code **)(*piStack_c + 0x10))();
    iStack_18 = TFont_get_Size(*(int *)(iStack_8 + 0x1c));
    (**(code **)(*piStack_c + 0x18))();
    TFont_get_Style(*(int *)(iStack_8 + 0x1c));
    (**(code **)(*piStack_c + 0x20))();
    TFont_get_Style(*(int *)(iStack_8 + 0x1c));
    (**(code **)(*piStack_c + 0x28))();
    TFont_get_Style(*(int *)(iStack_8 + 0x1c));
    (**(code **)(*piStack_c + 0x30))();
    TFont_get_Style(*(int *)(iStack_8 + 0x1c));
    (**(code **)(*piStack_c + 0x38))();
    TFont_get_Charset(*(undefined4 *)(iStack_8 + 0x1c));
    piVar1 = piStack_c;
    (**(code **)(*piStack_c + 0x48))();
    *in_FS_OFFSET = piVar1;
    *(undefined1 *)(iStack_8 + 0x18) = 0;
    return;
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &UNK_0046db55;
  puStack_20 = (undefined *)0x46db3d;
  FUN_00403c5c((int *)&pCStack_14);
  puStack_20 = (undefined *)0x46db45;
  FUN_004042b4((undefined4 *)aOStack_10);
  puStack_20 = (undefined *)0x46db4d;
  FUN_00405860((int *)&piStack_c);
  return;
}


