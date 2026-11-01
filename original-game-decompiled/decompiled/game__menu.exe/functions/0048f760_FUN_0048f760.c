
/* ==== FUN_0048f760 @ 0048f760 ==== 
 * signature: int __register FUN_0048f760(int param_1)
 * body: 0048f760-0048f7cd
 */

int FUN_0048f760(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  local_8 = 0;
  if (DAT_004ad490 != (undefined4 *)0x0) {
    iVar2 = DAT_004ad490[2];
    if (SBORROW4(iVar2,1)) {
      thunk_FUN_00402808((uint)DAT_004ad490);
    }
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      do {
        iVar1 = FUN_004102b0(DAT_004ad490,iVar3);
        if (param_1 == *(int *)(iVar1 + 4)) {
          local_8 = *(int *)(iVar1 + 8);
          break;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  if (local_8 == 0) {
    local_8 = (**(code **)(param_1 + 0x2c))(param_1,1,*(undefined4 *)PTR_DAT_004ab8ac);
  }
  return local_8;
}


