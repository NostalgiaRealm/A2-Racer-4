
/* ==== TMenuItem.set_Default @ 0043f138 ==== 
 * signature: undefined TMenuItem.set_Default(void)
 * body: 0043f138-0043f193
 * note: Name source: Delphi RTTI property accessor
 */

/* Name source: Delphi RTTI property accessor */

void TMenuItem_set_Default(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != *(char *)((int)param_1 + 0x2e)) {
    if ((param_2 != '\0') && (param_1[0x16] != 0)) {
      iVar1 = FUN_0043f018(param_1[0x16]);
      if (-1 < iVar1 + -1) {
        iVar3 = 0;
        do {
          iVar2 = FUN_0043f028(param_1[0x16],iVar3);
          if (*(char *)(iVar2 + 0x2e) != '\0') {
            iVar2 = FUN_0043f028(param_1[0x16],iVar3);
            *(undefined1 *)(iVar2 + 0x2e) = 0;
          }
          iVar3 = iVar3 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
    *(char *)((int)param_1 + 0x2e) = param_2;
    (**(code **)(*param_1 + 0x38))(param_1,1);
  }
  return;
}


