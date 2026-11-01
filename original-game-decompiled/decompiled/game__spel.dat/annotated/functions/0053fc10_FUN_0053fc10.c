
/* ==== FUN_0053fc10 @ 0053fc10 ==== 
 * signature: bool __thiscall FUN_0053fc10(void * this, int param_1)
 * body: 0053fc10-0053fcc7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall FUN_0053fc10(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  iVar2 = (int)(short)((ushort)*(byte *)((int)this + 0xe) << 8) >> 8;
  if (iVar2 == *(short *)(param_1 + 0x1a)) {
    switch(iVar2) {
    case 0:
      puVar4 = (uint *)((uint)*(uint **)(param_1 + 0x14) & 0xfffffff0);
      puVar3 = (uint *)((uint)*(uint **)((int)this + 0x10) & 0xfffffff0);
      if (puVar3 + ((*puVar3 & 0xfff) + 1) * -4 == puVar4 + ((*puVar4 & 0xfff) + 1) * -4) {
        return (bool)('\x01' - (((**(uint **)((int)this + 0x10) ^ **(uint **)(param_1 + 0x14)) &
                                0xffff) != 0));
      }
      break;
    case 1:
      piVar1 = *(int **)((int)this + 0x10);
      if (piVar1 == *(int **)(param_1 + 0x14)) {
        return true;
      }
      if (piVar1 + ((*piVar1 << 1) >> 0x11) == *(int **)(param_1 + 0x14)) {
        return true;
      }
      break;
    case 2:
      return (bool)('\x01' - (((*(uint *)(param_1 + 0x14) ^ *(uint *)((int)this + 0x10)) &
                              0xfffffff0) != 0));
    case 3:
      return true;
    default:
      _DAT_00000000 = 0;
    }
  }
  return false;
}


