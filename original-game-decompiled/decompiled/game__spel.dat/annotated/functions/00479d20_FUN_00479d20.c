
/* ==== FUN_00479d20 @ 00479d20 ==== 
 * signature: undefined __fastcall FUN_00479d20(exception * param_1)
 * body: 00479d20-00479d6a
 */

void __fastcall FUN_00479d20(exception *param_1)

{
  char cVar1;
  int iVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_00578e74;
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  exception::~exception(param_1);
  return;
}


