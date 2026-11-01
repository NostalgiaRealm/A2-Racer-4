
/* ==== thunk_FUN_004728d0 @ 0044c8b0 ==== 
 * signature: undefined __fastcall thunk_FUN_004728d0(undefined4 * param_1)
 * body: 0044c8b0-0044c8b4
 * thunk to: FUN_004728d0
 */

void __fastcall thunk_FUN_004728d0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_00576a1c;
  iVar2 = param_1[2];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}


