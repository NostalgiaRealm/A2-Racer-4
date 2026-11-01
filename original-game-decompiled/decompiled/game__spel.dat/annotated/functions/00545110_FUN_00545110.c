
/* ==== FUN_00545110 @ 00545110 ==== 
 * signature: undefined __thiscall FUN_00545110(void * this, int param_1)
 * body: 00545110-00545275
 */

void __thiscall FUN_00545110(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  *(int *)((int)this + 0x54) = param_1;
  *(uint *)((int)this + 0x58) = param_1 + 1U & 0xfffffffe;
  *(int *)((int)this + 0x5c) = param_1;
  *(int *)((int)this + 0xac) = param_1;
  iVar4 = 0;
  if (0 < *(int *)((int)this + 0x50)) {
    do {
      iVar5 = *(int *)((int)this + 0x3c);
      iVar4 = iVar4 + 1;
      *(undefined4 *)(iVar5 + -8 + iVar4 * 8) = 0;
      *(undefined4 *)(iVar5 + -4 + iVar4 * 8) = 0;
    } while (iVar4 < *(int *)((int)this + 0x50));
  }
  iVar4 = FUN_00544f50((int)this);
  if (iVar4 == 1) {
    *(undefined4 *)((int)this + 0x78) = 0;
    while( true ) {
      FUN_00546510((int)this + 0x80);
      iVar4 = 0;
      if (0 < *(int *)((int)this + 0x54)) {
        do {
          iVar1 = *(int *)((int)this + 0x9c);
          iVar2 = *(int *)((int)this + 0x3c);
          iVar3 = *(int *)(*(int *)((int)this + 0x44) + iVar4 * 4);
          iVar5 = iVar4 * 8;
          iVar4 = iVar4 + 1;
          *(undefined4 *)(iVar2 + iVar3 * 8) = *(undefined4 *)(iVar1 + iVar5);
          *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = *(undefined4 *)(iVar1 + -4 + iVar4 * 8);
        } while (iVar4 < *(int *)((int)this + 0x54));
      }
      FUN_00545050((int)this);
      iVar4 = *(int *)((int)this + 0x54);
      do {
        iVar4 = iVar4 + -1;
        if (iVar4 < 0) {
          return;
        }
        iVar5 = *(int *)(*(int *)((int)this + 0x44) + iVar4 * 4);
      } while (0.0 <= *(double *)(*(int *)((int)this + 0x2c) + iVar5 * 8));
      iVar1 = *(int *)((int)this + 0x2c);
      *(undefined4 *)(iVar1 + iVar5 * 8) = 0;
      *(undefined4 *)(iVar1 + 4 + iVar5 * 8) = 0;
      iVar1 = *(int *)((int)this + 0x3c);
      *(undefined4 *)(iVar1 + iVar5 * 8) = 0;
      *(undefined4 *)(iVar1 + 4 + iVar5 * 8) = 0;
      iVar5 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar5;
      *(int *)((int)this + 0x5c) = *(int *)((int)this + 0x5c) + -1;
      FUN_00544c90(this,iVar5,iVar4);
      FUN_005445f0(this,iVar4);
      if (0 < *(int *)((int)this + 0x78)) break;
      iVar4 = 0;
      if (0 < *(int *)((int)this + 0x54)) {
        do {
          iVar5 = *(int *)((int)this + 0x98);
          iVar1 = *(int *)(*(int *)((int)this + 0x44) + iVar4 * 4);
          iVar2 = *(int *)((int)this + 0x24);
          iVar4 = iVar4 + 1;
          *(undefined4 *)(iVar5 + -8 + iVar4 * 8) = *(undefined4 *)(iVar2 + iVar1 * 8);
          *(undefined4 *)(iVar5 + -4 + iVar4 * 8) = *(undefined4 *)(iVar2 + 4 + iVar1 * 8);
        } while (iVar4 < *(int *)((int)this + 0x54));
      }
    }
    iVar4 = 0;
    if (0 < *(int *)((int)this + 0x4c)) {
      do {
        puVar6 = (undefined4 *)(iVar4 * 8 + *(int *)((int)this + 0x34));
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6 = (undefined4 *)(iVar4 * 8 + *(int *)((int)this + 0x2c));
        iVar4 = iVar4 + 1;
        *puVar6 = 0;
        puVar6[1] = 0;
      } while (iVar4 < *(int *)((int)this + 0x4c));
    }
  }
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  return;
}


