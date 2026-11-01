
/* ==== FUN_004635a0 @ 004635a0 ==== 
 * signature: undefined4 __cdecl FUN_004635a0(undefined4 * param_1)
 * body: 004635a0-0046360e
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_004635a0(undefined4 *param_1)

{
  uint uVar1;
  DWORD DVar2;
  
  if (DAT_00709b08 == 0) {
    DVar2 = GetTickCount();
    if (999 < DVar2 - _DAT_00709b00) {
      DAT_00709b08 = 1;
    }
  }
  else if (DAT_00709b08 == 1) {
    uVar1 = FUN_00463370((int)param_1);
    if ((char)uVar1 != '\0') {
      DAT_00709b08 = 2;
      return 0;
    }
  }
  else if (DAT_00709b08 == 2) {
    uVar1 = FUN_004633f0(0.1);
    if ((char)uVar1 != '\0') {
      *param_1 = 0;
      return 1;
    }
  }
  return 0;
}


