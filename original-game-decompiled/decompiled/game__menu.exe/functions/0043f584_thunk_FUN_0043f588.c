
/* ==== thunk_FUN_0043f588 @ 0043f584 ==== 
 * signature: undefined4 __register thunk_FUN_0043f588(int param_1)
 * body: 0043f584-0043f585
 * thunk to: FUN_0043f588
 */

undefined4 thunk_FUN_0043f588(int param_1)

{
  int iVar1;
  
  do {
    iVar1 = param_1;
    param_1 = *(int *)(iVar1 + 0x58);
  } while (param_1 != 0);
  return *(undefined4 *)(iVar1 + 100);
}


