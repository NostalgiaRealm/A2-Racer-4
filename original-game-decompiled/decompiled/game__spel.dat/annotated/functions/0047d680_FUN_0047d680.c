
/* ==== FUN_0047d680 @ 0047d680 ==== 
 * signature: undefined __fastcall FUN_0047d680(undefined4 * param_1)
 * body: 0047d680-0047d6c3
 */

void __fastcall FUN_0047d680(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_00576a98;
  iVar2 = param_1[0xe];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return;
}


