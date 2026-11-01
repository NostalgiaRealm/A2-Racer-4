
/* ==== FUN_0047e2b0 @ 0047e2b0 ==== 
 * signature: undefined __fastcall FUN_0047e2b0(undefined4 * param_1)
 * body: 0047e2b0-0047e33b
 */

void __fastcall FUN_0047e2b0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  LPVOID pvVar3;
  
  *param_1 = &PTR_FUN_00576bc8;
  iVar2 = param_1[0x28];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_0054b339((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  pvVar3 = (LPVOID)param_1[0x22];
  param_1[0x21] = &PTR_FUN_00576bb8;
  if (pvVar3 != (LPVOID)0x0) {
    FUN_0054b339(*(LPVOID *)((int)pvVar3 + 4));
    *(undefined4 *)((int)pvVar3 + 4) = 0;
    *(undefined4 *)((int)pvVar3 + 8) = 0;
    *(undefined4 *)((int)pvVar3 + 0xc) = 0;
    FUN_0054b339(pvVar3);
  }
  param_1[0x22] = 0;
  FUN_0047bf40(param_1);
  return;
}


