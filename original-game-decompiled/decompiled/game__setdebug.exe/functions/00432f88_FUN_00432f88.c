
/* ==== FUN_00432f88 @ 00432f88 ==== 
 * signature: undefined __register FUN_00432f88(int param_1, int param_2, byte param_3)
 * body: 00432f88-00432fe7
 */

void FUN_00432f88(int param_1,int param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00434938(param_1);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      if (iVar3 < param_2) {
        iVar2 = FUN_00434948(param_1,iVar3);
        if (param_3 < *(byte *)(iVar2 + 0x33)) {
          FUN_00432180((undefined4 *)PTR_PTR_00446ae0);
        }
      }
      else {
        iVar2 = FUN_00434948(param_1,iVar3);
        if (*(byte *)(iVar2 + 0x33) < param_3) {
          iVar2 = FUN_00434948(param_1,iVar3);
          *(byte *)(iVar2 + 0x33) = param_3;
        }
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


