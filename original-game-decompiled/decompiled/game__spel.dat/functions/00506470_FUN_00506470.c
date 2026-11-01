
/* ==== FUN_00506470 @ 00506470 ==== 
 * signature: void * __cdecl FUN_00506470(int param_1)
 * body: 00506470-005064b7
 */

void * __cdecl FUN_00506470(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  void *this;
  
  iVar1 = *(int *)(param_1 + 0x44);
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x28) + 0x28);
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return (void *)0x0;
    }
    this = (void *)((int)*(short *)(puVar2 + 3) + (int)puVar2);
    if (((*(int *)(*(short *)(puVar2 + 3) + 0x10 + (int)puVar2) == iVar1) ||
        (*(int *)((int)this + 0x24) == iVar1)) && (iVar3 = FUN_0053fce0(this,param_1), iVar3 != 0))
    break;
    puVar2 = (undefined4 *)*puVar2;
  }
  return this;
}


