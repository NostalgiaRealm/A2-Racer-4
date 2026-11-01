
/* ==== FUN_005534e1 @ 005534e1 ==== 
 * signature: void * __thiscall FUN_005534e1(void * this, uint param_1, undefined2 param_2)
 * body: 005534e1-00553538
 */

void * __thiscall FUN_005534e1(void *this,uint param_1,undefined2 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (param_1 == 0xffffffff) {
    FUN_0054b1b4();
  }
  uVar1 = FUN_005536ab(this,param_1,'\x01');
  if ((char)uVar1 != '\0') {
    if (param_1 != 0) {
      puVar3 = *(undefined4 **)((int)this + 4);
      for (uVar2 = param_1 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = CONCAT22(param_2,param_2);
        puVar3 = puVar3 + 1;
      }
      for (uVar2 = (uint)((param_1 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined2 *)puVar3 = param_2;
        puVar3 = (undefined4 *)((int)puVar3 + 2);
      }
    }
    *(uint *)((int)this + 8) = param_1;
    *(undefined2 *)(*(int *)((int)this + 4) + param_1 * 2) = 0;
  }
  return this;
}


