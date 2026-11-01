
/* ==== FUN_00521740 @ 00521740 ==== 
 * signature: undefined __fastcall FUN_00521740(int param_1)
 * body: 00521740-005217eb
 */

void __fastcall FUN_00521740(int param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  int iVar4;
  double local_10;
  
  for (iVar1 = *(int *)(param_1 + 0x30); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    *(undefined4 *)(iVar1 + 0x14) = 0;
  }
  for (iVar1 = *(int *)(param_1 + 0x30); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    if ((*(char *)(iVar1 + 0x19) == '\0') && (*(int *)(iVar1 + 0x14) == 0)) {
      iVar2 = *(int *)(param_1 + 0x30);
      iVar4 = 0;
      local_10 = -9.999999974752427e-07;
      for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
        if ((*(char *)(iVar2 + 0x19) == '\0') &&
           (dVar3 = *(double *)(iVar2 + 0x98) * *(double *)(iVar1 + 0x98) +
                    *(double *)(iVar2 + 0xa0) * *(double *)(iVar1 + 0xa0) +
                    *(double *)(iVar2 + 0xa8) * *(double *)(iVar1 + 0xa8), dVar3 < local_10)) {
          iVar4 = iVar2;
          local_10 = dVar3;
        }
      }
      *(int *)(iVar1 + 0x14) = iVar4;
      *(int *)(iVar4 + 0x14) = iVar1;
    }
  }
  return;
}


