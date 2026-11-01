
/* ==== FUN_00556f2d @ 00556f2d ==== 
 * signature: void * __thiscall FUN_00556f2d(void * this, uint param_1, uint param_2, char param_3)
 * body: 00556f2d-00556fab
 */

void * __thiscall FUN_00556f2d(void *this,uint param_1,uint param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (*(uint *)((int)this + 8) < param_1) {
    FUN_0054b29c();
  }
  if (-*(int *)((int)this + 8) - 1U <= param_2) {
    FUN_0054b1b4();
  }
  if (param_2 != 0) {
    uVar3 = param_2 + *(int *)((int)this + 8);
    uVar1 = FUN_00402a00(this,uVar3,'\0');
    if ((char)uVar1 != '\0') {
      puVar2 = (undefined4 *)(*(int *)((int)this + 4) + param_1);
      FUN_005580e0((undefined4 *)((int)puVar2 + param_2),puVar2,*(int *)((int)this + 8) - param_1);
      _memset((void *)(*(int *)((int)this + 4) + param_1),(int)param_3,param_2);
      *(uint *)((int)this + 8) = uVar3;
      *(undefined1 *)(*(int *)((int)this + 4) + uVar3) = 0;
    }
  }
  return this;
}


