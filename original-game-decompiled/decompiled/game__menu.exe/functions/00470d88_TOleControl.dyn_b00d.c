
/* ==== TOleControl.dyn_b00d @ 00470d88 ==== 
 * signature: undefined TOleControl.dyn_b00d(void)
 * body: 00470d88-00470e00;00470e08-00470e0a
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TOleControl_dyn_b00d(int *param_1)

{
  bool bVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  code *pcStack_10;
  undefined1 *puStack_c;
  int *piStack_8;
  
  puStack_c = (undefined1 *)0x470d97;
  piStack_8 = param_1;
  TWinControl_dyn_b00d(param_1);
  if (((*(byte *)(piStack_8[0x7c] + 0x2c) & 1) != 0) && (*(char *)((int)piStack_8 + 0x231) == '\0'))
  {
    puStack_c = (undefined1 *)0x470dba;
    bVar1 = FUN_00434cdc((int)piStack_8);
    if (bVar1) {
      *(undefined1 *)((int)piStack_8 + 0x231) = 1;
      pcStack_10 = thunk_FUN_004036bc;
      uStack_14 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_14;
      puStack_c = &stack0xfffffffc;
      FUN_00470444(piStack_8,0xfffffe0b,piStack_8[0x18]);
      *in_FS_OFFSET = uStack_14;
      *(undefined1 *)((int)piStack_8 + 0x231) = 0;
      return;
    }
  }
  return;
}


