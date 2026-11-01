
/* ==== FUN_00483d90 @ 00483d90 ==== 
 * signature: void * __thiscall FUN_00483d90(void * this, int param_1, uint param_2, uint param_3)
 * body: 00483d90-00483e6e
 */

void * __thiscall FUN_00483d90(void *this,int param_1,uint param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (*(uint *)(param_1 + 8) < param_2) {
    FUN_0054b29c();
  }
  uVar2 = *(int *)(param_1 + 8) - param_2;
  if (uVar2 < param_3) {
    param_3 = uVar2;
  }
  if (-*(int *)((int)this + 8) - 1U <= param_3) {
    FUN_0054b1b4();
  }
  if (param_3 == 0) {
    return this;
  }
  uVar2 = *(int *)((int)this + 8) + param_3;
  if (0xfffffffd < uVar2) {
    FUN_0054b1b4();
  }
  puVar3 = *(undefined1 **)((int)this + 4);
  if (((puVar3 == (undefined1 *)0x0) || (cVar1 = puVar3[-1], cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar2 == 0) {
      if (puVar3 == (undefined1 *)0x0) {
        return this;
      }
      *(undefined4 *)((int)this + 8) = 0;
      *puVar3 = 0;
      return this;
    }
    if (uVar2 <= *(uint *)((int)this + 0xc)) goto LAB_00483e31;
  }
  else if (uVar2 == 0) {
    puVar3[-1] = cVar1 + -1;
    FUN_004028f0(this,'\0');
    return this;
  }
  FUN_00402b20(uVar2);
LAB_00483e31:
  puVar3 = *(undefined1 **)(param_1 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0057629c;
  }
  puVar5 = (undefined4 *)(puVar3 + param_2);
  puVar6 = (undefined4 *)(*(int *)((int)this + 8) + *(int *)((int)this + 4));
  for (uVar4 = param_3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = param_3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  *(uint *)((int)this + 8) = uVar2;
  *(undefined1 *)(*(int *)((int)this + 4) + uVar2) = 0;
  return this;
}


