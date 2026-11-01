
/* ==== TComponent.SafeCallException @ 00415ce8 ==== 
 * signature: undefined TComponent.SafeCallException(void)
 * body: 00415ce8-00415cff
 * note: Name source: Delphi VMT standard slot
 */

/* Name source: Delphi VMT standard slot */

void TComponent_SafeCallException(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x1c))();
    return;
  }
  TObject_SafeCallException();
  return;
}


