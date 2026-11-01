
/* ==== FUN_004925f0 @ 004925f0 ==== 
 * signature: undefined __fastcall FUN_004925f0(undefined4 * param_1)
 * body: 004925f0-00492633
 */

void __fastcall FUN_004925f0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_00576ff4;
  iVar2 = param_1[3];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


