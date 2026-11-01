
/* ==== FUN_00500760 @ 00500760 ==== 
 * signature: undefined4 __thiscall FUN_00500760(void * this, int param_1)
 * body: 00500760-00500817
 */

undefined4 __thiscall FUN_00500760(void *this,int param_1)

{
  void *this_00;
  double dVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  
  dVar1 = *(double *)(param_1 + 0x120);
  bVar3 = 3;
  iVar4 = *(ushort *)((int)this + 0xe) - 1;
  if (-1 < iVar4) {
    do {
      this_00 = *(void **)(*(int *)((int)this + 0x10) + iVar4 * 4);
      uVar2 = FUN_004f4f30(this_00,dVar1);
      uVar2 = (*(uint *)((int)this_00 + 0x5c) ^ uVar2) & 0xff ^ *(uint *)((int)this_00 + 0x5c);
      *(uint *)((int)this_00 + 0x5c) = uVar2;
      bVar3 = bVar3 & (byte)uVar2;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    if (bVar3 != 3) {
      return 0;
    }
  }
  uVar2 = (uint)*(ushort *)((int)this + 0xe);
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    FUN_004f6a90(*(void **)(*(int *)((int)this + 0x10) + uVar2 * 4));
  }
  FUN_005005c0(*(void **)(param_1 + 8),this);
  *(uint *)this = CONCAT31((int3)((uint)*(undefined4 *)this >> 8),8);
  FUN_00500560(*(void **)(param_1 + 8),this);
  return 1;
}


