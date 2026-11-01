
/* ==== FUN_005533c1 @ 005533c1 ==== 
 * signature: void * __thiscall FUN_005533c1(void * this, void * param_1, uint param_2, uint param_3)
 * body: 005533c1-0055349e
 */

void * __thiscall FUN_005533c1(void *this,void *param_1,uint param_2,uint param_3)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(uint *)((int)param_1 + 8) < param_2) {
    FUN_0054b29c();
  }
  uVar5 = *(uint *)((int)param_1 + 8) - param_2;
  if (param_3 < uVar5) {
    uVar5 = param_3;
  }
  if (this == param_1) {
    FUN_00553613(this,uVar5 + param_2,0xffffffff);
    FUN_00553613(this,0,param_2);
  }
  else {
    if ((uVar5 != 0) && (uVar5 == *(uint *)((int)param_1 + 8))) {
      puVar1 = *(undefined2 **)((int)param_1 + 4);
      if (puVar1 == (undefined2 *)0x0) {
        puVar1 = &DAT_00579320;
      }
      if (*(byte *)((int)puVar1 + -1) < 0xfe) {
        FUN_00553734(this,'\x01');
        puVar1 = *(undefined2 **)((int)param_1 + 4);
        if (puVar1 == (undefined2 *)0x0) {
          puVar1 = &DAT_00579320;
        }
        *(undefined2 **)((int)this + 4) = puVar1;
        *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)param_1 + 8);
        *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)param_1 + 0xc);
        *(char *)((int)puVar1 + -1) = *(char *)((int)puVar1 + -1) + '\x01';
        return this;
      }
    }
    uVar2 = FUN_005536ab(this,uVar5,'\x01');
    if ((char)uVar2 != '\0') {
      puVar1 = &DAT_00579320;
      if (*(undefined2 **)((int)param_1 + 4) != (undefined2 *)0x0) {
        puVar1 = *(undefined2 **)((int)param_1 + 4);
      }
      puVar1 = puVar1 + param_2;
      puVar3 = *(undefined2 **)((int)this + 4);
      for (uVar4 = uVar5; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar3 = *puVar1;
        puVar3 = puVar3 + 1;
        puVar1 = puVar1 + 1;
      }
      *(uint *)((int)this + 8) = uVar5;
      *(undefined2 *)(*(int *)((int)this + 4) + uVar5 * 2) = 0;
    }
  }
  return this;
}


