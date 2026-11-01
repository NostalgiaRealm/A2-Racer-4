
/* ==== FUN_0043ebf0 @ 0043ebf0 ==== 
 * signature: undefined4 __register FUN_0043ebf0(int param_1)
 * body: 0043ebf0-0043ec1d
 */

undefined4 FUN_0043ebf0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 0x58); (iVar1 != 0 && (*(int *)(iVar1 + 0x70) == 0));
      iVar1 = *(int *)(iVar1 + 0x58)) {
  }
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_0043f588(param_1);
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(iVar1 + 0x3c);
    }
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x70);
  }
  return uVar2;
}


