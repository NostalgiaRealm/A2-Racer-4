
/* ==== FUN_00504910 @ 00504910 ==== 
 * signature: undefined __thiscall FUN_00504910(void * this, int param_1, int * param_2)
 * body: 00504910-0050496e
 */

void __thiscall FUN_00504910(void *this,int param_1,int *param_2)

{
  int *this_00;
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)(param_1 + 2);
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    this_00 = *(int **)(*(int *)(param_1 + 4) + uVar2 * 4);
    if (param_2 != this_00) {
      FUN_00505cc0(this_00);
      iVar1 = this_00[0x10];
      FUN_00504690(this_00,iVar1);
      if ((*(uint *)(iVar1 + 0x5c) & 0x300) == 0x100) {
        FUN_0053e860(*(void **)((int)this + 0x20),this_00);
      }
    }
  }
  return;
}


