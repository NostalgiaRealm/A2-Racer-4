
/* ==== TMenuItem.dyn_fffd @ 0043f0e0 ==== 
 * signature: undefined TMenuItem.dyn_fffd(void)
 * body: 0043f0e0-0043f117
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

void TMenuItem_dyn_fffd(int param_1,undefined4 param_2,undefined4 param_3,code *param_4,
                       undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_0043f018(param_1);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      uVar2 = FUN_0043f028(param_1,iVar3);
      (*param_4)(param_5,uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


