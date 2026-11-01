
/* ==== FUN_0055388a @ 0055388a ==== 
 * signature: void * __thiscall FUN_0055388a(void * this, int param_1, uint param_2, uint param_3)
 * body: 0055388a-0055391b
 */

void * __thiscall FUN_0055388a(void *this,int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  if (*(uint *)(param_1 + 8) < param_2) {
    FUN_0054b29c();
  }
  uVar1 = *(int *)(param_1 + 8) - param_2;
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  if (-*(int *)((int)this + 8) - 1U <= param_3) {
    FUN_0054b1b4();
  }
  if (param_3 != 0) {
    uVar1 = *(int *)((int)this + 8) + param_3;
    uVar2 = FUN_005536ab(this,uVar1,'\0');
    if ((char)uVar2 != '\0') {
      puVar3 = &DAT_00579320;
      if (*(undefined2 **)(param_1 + 4) != (undefined2 *)0x0) {
        puVar3 = *(undefined2 **)(param_1 + 4);
      }
      puVar3 = puVar3 + param_2;
      puVar4 = (undefined2 *)(*(int *)((int)this + 4) + *(int *)((int)this + 8) * 2);
      do {
        *puVar4 = *puVar3;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      *(uint *)((int)this + 8) = uVar1;
      *(undefined2 *)(*(int *)((int)this + 4) + uVar1 * 2) = 0;
    }
  }
  return this;
}


