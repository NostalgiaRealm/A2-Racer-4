
/* ==== TControlScrollBar.set_Size @ 004451b8 ==== 
 * signature: undefined TControlScrollBar.set_Size(void)
 * body: 004451b8-004451f9
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TControlScrollBar_set_Size(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != *(int *)(param_1 + 0x30)) {
    iVar1 = param_2;
    if (param_2 == 0) {
      iVar1 = (**(code **)PTR_DAT_004ab760)();
    }
    *(int *)(param_1 + 0x30) = iVar1;
    *(undefined1 *)(param_1 + 0x44) = 1;
    FUN_00445748(*(int *)(param_1 + 4));
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
  }
  return;
}


