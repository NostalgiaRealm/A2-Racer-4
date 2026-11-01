
/* ==== FUN_00512000 @ 00512000 ==== 
 * signature: undefined4 * __thiscall FUN_00512000(void * this, int * param_1)
 * body: 00512000-005120d7
 */

undefined4 * __thiscall FUN_00512000(void *this,int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_10 [4];
  
  FUN_00511fe0(local_10);
  if (param_1 == (int *)0x0) {
    param_1 = local_10;
  }
  *(int **)((int)this + 0x74) = param_1;
  if (*(short *)((int)this + 0x22) == 0) {
    return (undefined4 *)0x0;
  }
  FUN_005122a0((int)this);
  FUN_005125c0(this);
  if ((*param_1 != 0) && (1 < *(ushort *)((int)this + 0x22))) {
    FUN_00512130((int)this);
  }
  FUN_00513150(this);
  FUN_00513700(this);
  FUN_00513660(this);
  FUN_00512200((int)this);
  puVar1 = *(undefined4 **)this;
  if (((1 < *(int *)((int)this + 4)) && (*(int *)(*(int *)((int)this + 0x74) + 8) == 0)) &&
     (*(int *)(*(int *)((int)this + 0x74) + 0xc) == 1)) {
    puVar1 = (undefined4 *)FUN_004f5ad0((int)puVar1[7] >> 8,0x10);
    uVar2 = (int)(*(undefined4 **)this)[7] >> 8;
    puVar4 = *(undefined4 **)this;
    puVar5 = puVar1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    FUN_004f5b00(*(int *)this);
  }
  *(undefined4 *)this = 0;
  return puVar1;
}


