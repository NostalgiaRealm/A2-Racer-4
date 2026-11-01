
/* ==== FUN_0040c0a0 @ 0040c0a0 ==== 
 * signature: undefined __fastcall FUN_0040c0a0(exception * param_1)
 * body: 0040c0a0-0040c0e4
 */

void __fastcall FUN_0040c0a0(exception *param_1)

{
  char cVar1;
  int iVar2;
  
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


