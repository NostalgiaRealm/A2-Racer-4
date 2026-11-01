
/* ==== FUN_004264b0 @ 004264b0 ==== 
 * signature: undefined4 * __fastcall FUN_004264b0(undefined4 * param_1)
 * body: 004264b0-00426521
 */

undefined4 * __fastcall FUN_004264b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  DWORD DVar2;
  int iVar3;
  
  iVar3 = 0xfa;
  puVar1 = param_1 + 4;
  do {
    FUN_00425200(puVar1);
    puVar1 = puVar1 + 5;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1 = param_1 + 0x4e6;
  iVar3 = 0xfa;
  do {
    FUN_00425380(puVar1);
    puVar1 = puVar1 + 0x38a;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1 = param_1 + 0x379ab;
  *param_1 = 0;
  param_1[1] = 0;
  iVar3 = 0xfa;
  do {
    puVar1[-1] = 0;
    *(undefined1 *)puVar1 = 0;
    puVar1[1] = 1;
    puVar1[2] = 0;
    puVar1 = puVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  DVar2 = GetTickCount();
  FUN_0055861b(DVar2);
  return param_1;
}


