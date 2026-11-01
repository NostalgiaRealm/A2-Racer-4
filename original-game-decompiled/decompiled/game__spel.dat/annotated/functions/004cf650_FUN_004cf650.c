
/* ==== FUN_004cf650 @ 004cf650 ==== 
 * signature: undefined __fastcall FUN_004cf650(undefined4 * param_1)
 * body: 004cf650-004cf6a9
 */

void __fastcall FUN_004cf650(undefined4 *param_1)

{
  char cVar1;
  LPVOID pvVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_00576a88;
  if ((param_1[2] == 3) && (pvVar2 = (LPVOID)param_1[4], pvVar2 != (LPVOID)0x0)) {
    iVar3 = *(int *)((int)pvVar2 + 4);
    if (iVar3 != 0) {
      cVar1 = *(char *)(iVar3 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_0054b339((char *)(iVar3 + -1));
      }
      else {
        *(char *)(iVar3 + -1) = cVar1 + -1;
      }
    }
    *(undefined4 *)((int)pvVar2 + 4) = 0;
    *(undefined4 *)((int)pvVar2 + 8) = 0;
    *(undefined4 *)((int)pvVar2 + 0xc) = 0;
    FUN_0054b339(pvVar2);
  }
  return;
}


