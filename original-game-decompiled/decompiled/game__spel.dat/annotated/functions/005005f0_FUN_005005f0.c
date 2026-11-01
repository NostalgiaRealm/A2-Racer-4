
/* ==== FUN_005005f0 @ 005005f0 ==== 
 * signature: undefined __thiscall FUN_005005f0(void * this, int param_1)
 * body: 005005f0-00500646
 */

void __thiscall FUN_005005f0(void *this,int param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  
  do {
    uVar3 = (uint)*(ushort *)((int)this + 0xe);
    do {
      uVar3 = uVar3 - 1;
      if ((int)uVar3 < 0) {
        if (*(char *)this == '\b') {
          FUN_005005c0(*(void **)(param_1 + 8),this);
          *(uint *)this = CONCAT31((int3)((uint)*(undefined4 *)this >> 8),1);
          FUN_00500560(*(void **)(param_1 + 8),this);
        }
        return;
      }
      pbVar1 = *(byte **)(*(int *)((int)this + 0x10) + uVar3 * 4);
    } while ((*(int *)(pbVar1 + 0x5c) * 0x1000000 < 0x8000000) ||
            (iVar2 = FUN_004f6950(pbVar1), iVar2 != 1));
  } while( true );
}


