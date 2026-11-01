
/* ==== FUN_0044ca80 @ 0044ca80 ==== 
 * signature: undefined __stdcall FUN_0044ca80(void)
 * body: 0044ca80-0044cb2d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044ca80(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_c [3];
  
  local_c[0] = 0;
  local_c[1] = 3;
  local_c[2] = 0xb;
  iVar1 = FUN_004ce0d0(4);
  FUN_004ce030(4,0);
  piVar2 = local_c;
  iVar3 = 3;
  do {
    FUN_00448330(*piVar2);
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_0042e440();
  if (DAT_006fb8d8 == 1) {
    FUN_0044c990();
  }
  else if (DAT_006fb8d8 == 2) {
    FUN_0044c9f0();
  }
  _DAT_0071277c = 1;
  piVar2 = local_c;
  iVar3 = 3;
  do {
    FUN_004483a0(*piVar2);
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_0042e4a0();
  FUN_004ce030(4,iVar1);
  FUN_004a6840((int *)&DAT_007128b0);
  return;
}


