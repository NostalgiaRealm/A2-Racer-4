
/* ==== FUN_00425bb0 @ 00425bb0 ==== 
 * signature: undefined __fastcall FUN_00425bb0(int * param_1)
 * body: 00425bb0-00425bda
 */

void __fastcall FUN_00425bb0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = param_1[1];
  bVar1 = true;
  if (0 < iVar3) {
    piVar2 = param_1 + 0x11;
    do {
      if (piVar2[-0xe] == *param_1) {
        if ((bVar1) && (*piVar2 == 2)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
      }
      piVar2 = piVar2 + 0x12;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}


