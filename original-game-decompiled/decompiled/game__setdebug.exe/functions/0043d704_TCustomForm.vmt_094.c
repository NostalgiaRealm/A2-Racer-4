
/* ==== TCustomForm.vmt_094 @ 0043d704 ==== 
 * signature: undefined TCustomForm.vmt_094(void)
 * body: 0043d704-0043d7f5
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TCustomForm_vmt_094(int param_1,undefined4 *param_2)

{
  int *piVar1;
  LRESULT LVar2;
  undefined4 *extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  code *pcStack_38;
  code *pcStack_34;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  pcStack_34 = (code *)&stack0xfffffffc;
  puStack_2c = (undefined4 *)0x0;
  pcStack_38 = thunk_FUN_00403434;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  if ((*(char *)(param_1 + 0x217) == '\x01') && ((*(byte *)(param_1 + 0x20) & 0x10) == 0)) {
    if ((*(int *)(DAT_004477c4 + 0x38) == 0) ||
       (pcStack_34 = (code *)&stack0xfffffffc, *(int *)(*(int *)(DAT_004477c4 + 0x38) + 0x23c) == 0)
       ) {
      pcStack_34 = (code *)&stack0xfffffffc;
      FUN_00405298((undefined4 *)PTR_PTR_00446cfc,(int *)&puStack_2c);
      piVar1 = FUN_0040a938((int *)&DAT_0040d94c,'\x01',puStack_2c);
      FUN_0040346c(piVar1);
      param_2 = extraout_EDX;
    }
    puStack_28 = param_2 + 0x13;
    uStack_24 = *param_2;
    uStack_20 = DAT_004474d4;
    uStack_1c = param_2[3];
    uStack_18 = param_2[4];
    uStack_14 = param_2[5];
    uStack_10 = param_2[6];
    uStack_c = param_2[1];
    uStack_8 = param_2[8];
    LVar2 = SendMessageA(*(HWND *)(*(int *)(DAT_004477c4 + 0x38) + 0x23c),0x220,0,
                         (LPARAM)&puStack_28);
    *(LRESULT *)(param_1 + 0x14c) = LVar2;
    *(byte *)(param_1 + 0x2cc) = *(byte *)(param_1 + 0x2cc) | 0x10;
  }
  else {
    TWinControl_vmt_094(param_1,param_2);
    *(byte *)(param_1 + 0x2cc) = *(byte *)(param_1 + 0x2cc) & 0xef;
  }
  *in_FS_OFFSET = uStack_3c;
  pcStack_34 = FUN_0043d7fd;
  pcStack_38 = (code *)0x43d7f5;
  FUN_004039b8((int *)&puStack_2c);
  return;
}


