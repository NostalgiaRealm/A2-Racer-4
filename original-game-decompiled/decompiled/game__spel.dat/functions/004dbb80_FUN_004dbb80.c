
/* ==== FUN_004dbb80 @ 004dbb80 ==== 
 * signature: undefined __thiscall FUN_004dbb80(void * this, uint param_1)
 * body: 004dbb80-004dbc1a
 */

void __thiscall FUN_004dbb80(void *this,uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (*(int *)((int)this + 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)((int)this + 0xc) - *(int *)((int)this + 4) >> 2;
  }
  if (uVar3 < param_1) {
    uVar3 = param_1;
    if ((int)param_1 < 0) {
      uVar3 = 0;
    }
    puVar4 = operator_new(uVar3 << 2);
    puVar1 = *(undefined4 **)((int)this + 8);
    puVar6 = puVar4;
    for (puVar5 = *(undefined4 **)((int)this + 4); puVar5 != puVar1; puVar5 = puVar5 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar5;
      }
      puVar6 = puVar6 + 1;
    }
    FUN_0054b339(*(LPVOID *)((int)this + 4));
    *(undefined4 **)((int)this + 0xc) = puVar4 + param_1;
    iVar2 = *(int *)((int)this + 4);
    if (iVar2 == 0) {
      *(undefined4 **)((int)this + 4) = puVar4;
      *(undefined4 **)((int)this + 8) = puVar4;
      return;
    }
    *(undefined4 **)((int)this + 4) = puVar4;
    *(undefined4 **)((int)this + 8) = puVar4 + (*(int *)((int)this + 8) - iVar2 >> 2);
  }
  return;
}


