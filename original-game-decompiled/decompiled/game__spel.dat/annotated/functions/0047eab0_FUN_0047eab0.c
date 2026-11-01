
/* ==== FUN_0047eab0 @ 0047eab0 ==== 
 * signature: void * __thiscall FUN_0047eab0(void * this, uint param_1, undefined1 param_2)
 * body: 0047eab0-0047eb74
 */

void * __thiscall FUN_0047eab0(void *this,uint param_1,undefined1 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if (-*(int *)((int)this + 8) - 1U <= param_1) {
    FUN_0054b1b4();
  }
  if (param_1 == 0) {
    return this;
  }
  uVar4 = param_1 + *(int *)((int)this + 8);
  if (0xfffffffd < uVar4) {
    FUN_0054b1b4();
  }
  iVar2 = *(int *)((int)this + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar4 == 0) {
      if (iVar2 == 0) {
        return this;
      }
      FUN_004029e0(this,0);
      return this;
    }
    if (uVar4 <= *(uint *)((int)this + 0xc)) goto LAB_0047eb39;
  }
  else if (uVar4 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
    return this;
  }
  FUN_00402b20(uVar4);
LAB_0047eb39:
  puVar5 = (undefined4 *)(*(int *)((int)this + 4) + *(int *)((int)this + 8));
  for (uVar3 = param_1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
    puVar5 = puVar5 + 1;
  }
  for (uVar3 = param_1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar5 = param_2;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  *(uint *)((int)this + 8) = uVar4;
  *(undefined1 *)(*(int *)((int)this + 4) + uVar4) = 0;
  return this;
}


