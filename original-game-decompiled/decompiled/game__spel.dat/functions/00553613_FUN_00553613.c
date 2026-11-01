
/* ==== FUN_00553613 @ 00553613 ==== 
 * signature: void * __thiscall FUN_00553613(void * this, uint param_1, uint param_2)
 * body: 00553613-0055367e
 */

void * __thiscall FUN_00553613(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (*(uint *)((int)this + 8) < param_1) {
    FUN_0054b29c();
  }
  FUN_005539ee(this);
  uVar1 = *(int *)((int)this + 8) - param_1;
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  if (param_2 != 0) {
    FUN_005535ce((undefined2 *)(*(int *)((int)this + 4) + param_1 * 2),
                 (undefined2 *)(*(int *)((int)this + 4) + (param_1 + param_2) * 2),uVar1 - param_2);
    uVar1 = *(int *)((int)this + 8) - param_2;
    uVar2 = FUN_005536ab(this,uVar1,'\0');
    if ((char)uVar2 != '\0') {
      *(uint *)((int)this + 8) = uVar1;
      *(undefined2 *)(*(int *)((int)this + 4) + uVar1 * 2) = 0;
    }
  }
  return this;
}


