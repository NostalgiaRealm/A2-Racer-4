
/* ==== TOleControl.dyn_b00e @ 00470e98 ==== 
 * signature: undefined TOleControl.dyn_b00e(void)
 * body: 00470e98-00470f6f;00470f77-00470f8c
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TOleControl_dyn_b00e(int *param_1)

{
  bool bVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined *puStack_20;
  undefined1 *puStack_1c;
  _union_2683 _Stack_18;
  int *piStack_8;
  
  puStack_1c = &stack0xfffffffc;
  _Stack_18._12_4_ = 0;
  _Stack_18._8_4_ = 0;
  _Stack_18.decVal.Hi32 = 0;
  _Stack_18._0_4_ = 0;
  puStack_20 = &UNK_00470f8d;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_28 = (undefined1 *)0x470ebb;
  piStack_8 = param_1;
  TWinControl_dyn_b00e(param_1);
  if (((*(byte *)(piStack_8[0x7c] + 0x2c) & 6) != 0) && (*(char *)((int)piStack_8 + 0x232) == '\0'))
  {
    puStack_28 = (undefined1 *)0x470ee6;
    bVar1 = FUN_00434cdc((int)piStack_8);
    if (bVar1) {
      *(undefined1 *)((int)piStack_8 + 0x232) = 1;
      puStack_2c = &UNK_00470f70;
      uStack_30 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_30;
      puStack_28 = &stack0xfffffffc;
      if ((*(byte *)(piStack_8[0x7c] + 0x2c) & 2) != 0) {
        puStack_28 = &stack0xfffffffc;
        FUN_00470464(piStack_8,0xfffffdff,*(undefined4 *)(piStack_8[0x16] + 0x18));
      }
      if ((*(byte *)(piStack_8[0x7c] + 0x2c) & 4) != 0) {
        FUN_0046ef70(piStack_8[0x16],(VARIANTARG *)&_Stack_18.n2);
        FUN_0047089c(piStack_8,0xfffffe00,&_Stack_18);
      }
      *in_FS_OFFSET = uStack_30;
      *(undefined1 *)((int)piStack_8 + 0x232) = 0;
      return;
    }
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &UNK_00470f94;
  puStack_20 = (undefined *)0x470f8c;
  FUN_00405038((VARIANTARG *)&_Stack_18.n2);
  return;
}


