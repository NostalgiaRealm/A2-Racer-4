
/* ==== FUN_004f0bc0 @ 004f0bc0 ==== 
 * signature: undefined __fastcall FUN_004f0bc0(undefined4 * param_1)
 * body: 004f0bc0-004f0c59
 */

void __fastcall FUN_004f0bc0(undefined4 *param_1)

{
  char cVar1;
  LPVOID pvVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = &PTR_FUN_00578280;
  iVar4 = param_1[0x25];
  if (iVar4 != 0) {
    cVar1 = *(char *)(iVar4 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar4 + -1));
    }
    else {
      *(char *)(iVar4 + -1) = cVar1 + -1;
    }
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  pvVar2 = (LPVOID)param_1[2];
  param_1[1] = &PTR_FUN_00578298;
  if (pvVar2 == (LPVOID)0x0) {
    param_1[2] = 0;
    return;
  }
  iVar3 = *(int *)((int)pvVar2 + 8);
  for (iVar4 = *(int *)((int)pvVar2 + 4); iVar4 != iVar3; iVar4 = iVar4 + 0x28) {
    FUN_004900b0(iVar4);
  }
  FUN_0054b339(*(LPVOID *)((int)pvVar2 + 4));
  *(undefined4 *)((int)pvVar2 + 4) = 0;
  *(undefined4 *)((int)pvVar2 + 8) = 0;
  *(undefined4 *)((int)pvVar2 + 0xc) = 0;
  FUN_0054b339(pvVar2);
  param_1[2] = 0;
  return;
}


