
/* ==== FUN_00553039 @ 00553039 ==== 
 * signature: void * __thiscall FUN_00553039(void * this, uint param_1, undefined2 param_2)
 * body: 00553039-005530a1
 */

void * __thiscall FUN_00553039(void *this,uint param_1,undefined2 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (-*(int *)((int)this + 8) - 1U <= param_1) {
    FUN_0054b1b4();
  }
  if (param_1 != 0) {
    uVar3 = param_1 + *(int *)((int)this + 8);
    uVar1 = FUN_005536ab(this,uVar3,'\0');
    if ((char)uVar1 != '\0') {
      puVar4 = (undefined4 *)(*(int *)((int)this + 4) + *(int *)((int)this + 8) * 2);
      for (uVar2 = param_1 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = CONCAT22(param_2,param_2);
        puVar4 = puVar4 + 1;
      }
      for (uVar2 = (uint)((param_1 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined2 *)puVar4 = param_2;
        puVar4 = (undefined4 *)((int)puVar4 + 2);
      }
      *(uint *)((int)this + 8) = uVar3;
      *(undefined2 *)(*(int *)((int)this + 4) + uVar3 * 2) = 0;
    }
  }
  return this;
}


