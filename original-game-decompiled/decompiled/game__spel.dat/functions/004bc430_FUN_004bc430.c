
/* ==== FUN_004bc430 @ 004bc430 ==== 
 * signature: bool __cdecl FUN_004bc430(uint param_1)
 * body: 004bc430-004bc45d
 */

bool __cdecl FUN_004bc430(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = 1;
  iVar2 = 0;
  while (((param_1 & uVar1) == 0 || (iVar3 = iVar3 + 1, iVar3 < 2))) {
    uVar1 = uVar1 << 1;
    iVar2 = iVar2 + 1;
    if (0x1f < iVar2) {
      return iVar3 == 1;
    }
  }
  return false;
}


