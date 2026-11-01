
/* ==== TOleControl.dyn_b00c @ 00470e0c ==== 
 * signature: undefined __register TOleControl.dyn_b00c(int * param_1)
 * body: 00470e0c-00470e8a;00470e92-00470e94
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TOleControl_dyn_b00c(int *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  code *pcStack_10;
  undefined1 *puStack_c;
  int *local_8;
  
  puStack_c = (undefined1 *)0x470e1b;
  local_8 = param_1;
  TWinControl_dyn_b00c(param_1);
  if (((*(byte *)(local_8[0x7c] + 0x2c) & 8) != 0) && (*(char *)((int)local_8 + 0x233) == '\0')) {
    puStack_c = (undefined1 *)0x470e3e;
    bVar1 = FUN_00434cdc((int)local_8);
    if (bVar1) {
      *(undefined1 *)((int)local_8 + 0x233) = 1;
      pcStack_10 = thunk_FUN_004036bc;
      uStack_14 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_14;
      puStack_c = &stack0xfffffffc;
      cVar2 = (**(code **)(*local_8 + 0x4c))();
      TAgent_set_Connected(local_8,0xfffffdfe,-(ushort)(cVar2 != '\0'));
      *in_FS_OFFSET = uStack_14;
      *(undefined1 *)((int)local_8 + 0x233) = 0;
      return;
    }
  }
  return;
}


