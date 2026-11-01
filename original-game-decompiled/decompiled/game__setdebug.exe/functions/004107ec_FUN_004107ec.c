
/* ==== FUN_004107ec @ 004107ec ==== 
 * signature: undefined __register FUN_004107ec(int * param_1)
 * body: 004107ec-0041081e
 */

void FUN_004107ec(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[5];
  if (iVar1 < 0x41) {
    if (iVar1 < 9) {
      iVar2 = 4;
    }
    else {
      iVar2 = 0x10;
    }
  }
  else {
    iVar2 = iVar1;
    if (iVar1 < 0) {
      iVar2 = iVar1 + 3;
    }
    iVar2 = iVar2 >> 2;
  }
  (**(code **)(*param_1 + 0x28))(param_1,iVar2 + iVar1);
  return;
}


