
/* ==== FUN_0055349f @ 0055349f ==== 
 * signature: void * __thiscall FUN_0055349f(void * this, undefined2 * param_1, uint param_2)
 * body: 0055349f-005534e0
 */

void * __thiscall FUN_0055349f(void *this,undefined2 *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  uint uVar3;
  
  uVar1 = FUN_005536ab(this,param_2,'\x01');
  if ((char)uVar1 != '\0') {
    puVar2 = *(undefined2 **)((int)this + 4);
    for (uVar3 = param_2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = *param_1;
      puVar2 = puVar2 + 1;
      param_1 = param_1 + 1;
    }
    *(uint *)((int)this + 8) = param_2;
    *(undefined2 *)(*(int *)((int)this + 4) + param_2 * 2) = 0;
  }
  return this;
}


