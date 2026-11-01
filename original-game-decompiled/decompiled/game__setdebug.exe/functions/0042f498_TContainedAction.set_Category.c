
/* ==== TContainedAction.set_Category @ 0042f498 ==== 
 * signature: undefined TContainedAction.set_Category(void)
 * body: 0042f498-0042f4c2
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TContainedAction_set_Category(int param_1,uint *param_2)

{
  undefined1 in_ZF;
  
  FUN_00403d48(param_2,*(uint **)(param_1 + 0x48));
  if (!(bool)in_ZF) {
    FUN_00403a0c((int *)(param_1 + 0x48),param_2);
    if (*(int **)(param_1 + 0x4c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x4c) + 0x30))();
    }
  }
  return;
}


