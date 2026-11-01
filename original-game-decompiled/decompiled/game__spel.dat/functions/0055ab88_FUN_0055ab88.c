
/* ==== FUN_0055ab88 @ 0055ab88 ==== 
 * signature: int * __cdecl FUN_0055ab88(int param_1, int param_2)
 * body: 0055ab88-0055ac04
 */

int * __cdecl FUN_0055ab88(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint *_Size;
  uint *puVar3;
  
  _Size = (uint *)(param_1 * param_2);
  puVar3 = _Size;
  if (_Size < (uint *)0xffffffe1) {
    if (_Size == (uint *)0x0) {
      puVar3 = (uint *)0x1;
    }
    puVar3 = (uint *)((int)puVar3 + 0xfU & 0xfffffff0);
  }
  do {
    if (puVar3 < (uint *)0xffffffe1) {
      if ((_Size < DAT_005c8bd4 || (int)_Size - (int)DAT_005c8bd4 == 0) &&
         (piVar1 = FUN_005623b0(_Size), piVar1 != (int *)0x0)) {
        _memset(piVar1,0,(size_t)_Size);
        return piVar1;
      }
      piVar1 = HeapAlloc(DAT_0075008c,8,(SIZE_T)puVar3);
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
    }
    if (DAT_0074de78 == 0) {
      return (int *)0x0;
    }
    iVar2 = FUN_00562b5b(puVar3);
  } while (iVar2 != 0);
  return (int *)0x0;
}


