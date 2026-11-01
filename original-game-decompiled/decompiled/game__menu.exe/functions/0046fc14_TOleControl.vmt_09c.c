
/* ==== TOleControl.vmt_09c @ 0046fc14 ==== 
 * signature: undefined TOleControl.vmt_09c(void)
 * body: 0046fc14-0046fc5e
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TOleControl_vmt_09c(int param_1)

{
  if ((*(byte *)(param_1 + 0x225) & 4) == 0) {
    SetWindowLongA(*(HWND *)(param_1 + 0x14c),-4,*(LONG *)(param_1 + 0x13c));
    if (*(int *)(param_1 + 0x200) != 0) {
      (**(code **)(**(int **)(param_1 + 0x200) + 0x18))();
    }
    *(undefined4 *)(param_1 + 0x14c) = 0;
    return;
  }
  TWinControl_vmt_09c(param_1);
  return;
}


