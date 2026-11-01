
/* ==== TMenuItem.dyn_fff3 @ 00434e3c ==== 
 * signature: undefined TMenuItem.dyn_fff3(void)
 * body: 00434e3c-00434e4f
 * note: Name source: Delphi dynamic method table
 */

/* Name source: Delphi dynamic method table */

int TMenuItem_dyn_fff3(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 100) != 0)) {
    return *(int *)(iVar1 + 100);
  }
  return iVar1;
}


