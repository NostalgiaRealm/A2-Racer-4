
/* ==== FUN_0043d668 @ 0043d668 ==== 
 * signature: undefined __register FUN_0043d668(int param_1, int param_2, byte param_3)
 * body: 0043d668-0043d6c7
 */

void FUN_0043d668(int param_1,int param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0043f018(param_1);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      if (iVar3 < param_2) {
        iVar2 = FUN_0043f028(param_1,iVar3);
        if (param_3 < *(byte *)(iVar2 + 0x33)) {
          FUN_0043c860((undefined4 *)PTR_PTR_004ab6a0);
        }
      }
      else {
        iVar2 = FUN_0043f028(param_1,iVar3);
        if (*(byte *)(iVar2 + 0x33) < param_3) {
          iVar2 = FUN_0043f028(param_1,iVar3);
          *(byte *)(iVar2 + 0x33) = param_3;
        }
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


