
/* ==== FUN_00553539 @ 00553539 ==== 
 * signature: void * __thiscall FUN_00553539(void * this, uint param_1, uint param_2, undefined2 param_3)
 * body: 00553539-005535cd
 */

void * __thiscall FUN_00553539(void *this,uint param_1,uint param_2,undefined2 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (*(uint *)((int)this + 8) < param_1) {
    FUN_0054b29c();
  }
  if (-*(int *)((int)this + 8) - 1U <= param_2) {
    FUN_0054b1b4();
  }
  if (param_2 != 0) {
    uVar3 = param_2 + *(int *)((int)this + 8);
    uVar1 = FUN_005536ab(this,uVar3,'\0');
    if ((char)uVar1 != '\0') {
      FUN_005535ce((undefined2 *)(*(int *)((int)this + 4) + (param_1 + param_2) * 2),
                   (undefined2 *)(param_1 * 2 + *(int *)((int)this + 4)),
                   *(int *)((int)this + 8) - param_1);
      puVar4 = (undefined4 *)(*(int *)((int)this + 4) + param_1 * 2);
      for (uVar2 = param_2 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = CONCAT22(param_3,param_3);
        puVar4 = puVar4 + 1;
      }
      for (uVar2 = (uint)((param_2 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined2 *)puVar4 = param_3;
        puVar4 = (undefined4 *)((int)puVar4 + 2);
      }
      *(uint *)((int)this + 8) = uVar3;
      *(undefined2 *)(*(int *)((int)this + 4) + uVar3 * 2) = 0;
    }
  }
  return this;
}


